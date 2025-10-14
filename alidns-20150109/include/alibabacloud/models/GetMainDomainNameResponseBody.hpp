// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMAINDOMAINNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMAINDOMAINNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class GetMainDomainNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMainDomainNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLevel, domainLevel_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RR, RR_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMainDomainNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLevel, domainLevel_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RR, RR_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMainDomainNameResponseBody() = default ;
    GetMainDomainNameResponseBody(const GetMainDomainNameResponseBody &) = default ;
    GetMainDomainNameResponseBody(GetMainDomainNameResponseBody &&) = default ;
    GetMainDomainNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMainDomainNameResponseBody() = default ;
    GetMainDomainNameResponseBody& operator=(const GetMainDomainNameResponseBody &) = default ;
    GetMainDomainNameResponseBody& operator=(GetMainDomainNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainLevel_ == nullptr
        && return this->domainName_ == nullptr && return this->RR_ == nullptr && return this->requestId_ == nullptr; };
    // domainLevel Field Functions 
    bool hasDomainLevel() const { return this->domainLevel_ != nullptr;};
    void deleteDomainLevel() { this->domainLevel_ = nullptr;};
    inline int64_t domainLevel() const { DARABONBA_PTR_GET_DEFAULT(domainLevel_, 0L) };
    inline GetMainDomainNameResponseBody& setDomainLevel(int64_t domainLevel) { DARABONBA_PTR_SET_VALUE(domainLevel_, domainLevel) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline GetMainDomainNameResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // RR Field Functions 
    bool hasRR() const { return this->RR_ != nullptr;};
    void deleteRR() { this->RR_ = nullptr;};
    inline string RR() const { DARABONBA_PTR_GET_DEFAULT(RR_, "") };
    inline GetMainDomainNameResponseBody& setRR(string RR) { DARABONBA_PTR_SET_VALUE(RR_, RR) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMainDomainNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The level of the entered domain name.
    std::shared_ptr<int64_t> domainLevel_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The hostname.
    std::shared_ptr<string> RR_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
