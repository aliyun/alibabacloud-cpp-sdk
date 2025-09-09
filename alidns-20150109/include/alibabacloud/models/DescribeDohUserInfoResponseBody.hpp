// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOHUSERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOHUSERINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDohUserInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDohUserInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainCount, domainCount_);
      DARABONBA_PTR_TO_JSON(PdnsId, pdnsId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubDomainCount, subDomainCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDohUserInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainCount, domainCount_);
      DARABONBA_PTR_FROM_JSON(PdnsId, pdnsId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubDomainCount, subDomainCount_);
    };
    DescribeDohUserInfoResponseBody() = default ;
    DescribeDohUserInfoResponseBody(const DescribeDohUserInfoResponseBody &) = default ;
    DescribeDohUserInfoResponseBody(DescribeDohUserInfoResponseBody &&) = default ;
    DescribeDohUserInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDohUserInfoResponseBody() = default ;
    DescribeDohUserInfoResponseBody& operator=(const DescribeDohUserInfoResponseBody &) = default ;
    DescribeDohUserInfoResponseBody& operator=(DescribeDohUserInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainCount_ != nullptr
        && this->pdnsId_ != nullptr && this->requestId_ != nullptr && this->subDomainCount_ != nullptr; };
    // domainCount Field Functions 
    bool hasDomainCount() const { return this->domainCount_ != nullptr;};
    void deleteDomainCount() { this->domainCount_ = nullptr;};
    inline int32_t domainCount() const { DARABONBA_PTR_GET_DEFAULT(domainCount_, 0) };
    inline DescribeDohUserInfoResponseBody& setDomainCount(int32_t domainCount) { DARABONBA_PTR_SET_VALUE(domainCount_, domainCount) };


    // pdnsId Field Functions 
    bool hasPdnsId() const { return this->pdnsId_ != nullptr;};
    void deletePdnsId() { this->pdnsId_ = nullptr;};
    inline int64_t pdnsId() const { DARABONBA_PTR_GET_DEFAULT(pdnsId_, 0L) };
    inline DescribeDohUserInfoResponseBody& setPdnsId(int64_t pdnsId) { DARABONBA_PTR_SET_VALUE(pdnsId_, pdnsId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDohUserInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subDomainCount Field Functions 
    bool hasSubDomainCount() const { return this->subDomainCount_ != nullptr;};
    void deleteSubDomainCount() { this->subDomainCount_ = nullptr;};
    inline int32_t subDomainCount() const { DARABONBA_PTR_GET_DEFAULT(subDomainCount_, 0) };
    inline DescribeDohUserInfoResponseBody& setSubDomainCount(int32_t subDomainCount) { DARABONBA_PTR_SET_VALUE(subDomainCount_, subDomainCount) };


  protected:
    // The number of accessed domains.
    std::shared_ptr<int32_t> domainCount_ = nullptr;
    // The ID of the Alibaba Cloud public DNS user.
    std::shared_ptr<int64_t> pdnsId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of accessed subdomains.
    std::shared_ptr<int32_t> subDomainCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
