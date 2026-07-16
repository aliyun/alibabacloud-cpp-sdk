// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMAINDOMAINNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMAINDOMAINNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetMainDomainNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMainDomainNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLevel, domainLevel_);
      DARABONBA_PTR_TO_JSON(MainDomainName, mainDomainName_);
      DARABONBA_PTR_TO_JSON(RR, RR_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMainDomainNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLevel, domainLevel_);
      DARABONBA_PTR_FROM_JSON(MainDomainName, mainDomainName_);
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
        && this->mainDomainName_ == nullptr && this->RR_ == nullptr && this->requestId_ == nullptr; };
    // domainLevel Field Functions 
    bool hasDomainLevel() const { return this->domainLevel_ != nullptr;};
    void deleteDomainLevel() { this->domainLevel_ = nullptr;};
    inline int32_t getDomainLevel() const { DARABONBA_PTR_GET_DEFAULT(domainLevel_, 0) };
    inline GetMainDomainNameResponseBody& setDomainLevel(int32_t domainLevel) { DARABONBA_PTR_SET_VALUE(domainLevel_, domainLevel) };


    // mainDomainName Field Functions 
    bool hasMainDomainName() const { return this->mainDomainName_ != nullptr;};
    void deleteMainDomainName() { this->mainDomainName_ = nullptr;};
    inline string getMainDomainName() const { DARABONBA_PTR_GET_DEFAULT(mainDomainName_, "") };
    inline GetMainDomainNameResponseBody& setMainDomainName(string mainDomainName) { DARABONBA_PTR_SET_VALUE(mainDomainName_, mainDomainName) };


    // RR Field Functions 
    bool hasRR() const { return this->RR_ != nullptr;};
    void deleteRR() { this->RR_ = nullptr;};
    inline string getRR() const { DARABONBA_PTR_GET_DEFAULT(RR_, "") };
    inline GetMainDomainNameResponseBody& setRR(string RR) { DARABONBA_PTR_SET_VALUE(RR_, RR) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMainDomainNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The level of the domain name.
    shared_ptr<int32_t> domainLevel_ {};
    // The root domain name.
    shared_ptr<string> mainDomainName_ {};
    // The host record.
    shared_ptr<string> RR_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
