// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OutPutDomains, outPutDomains_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OutPutDomains, outPutDomains_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDcdnWafDomainResponseBody() = default ;
    DescribeDcdnWafDomainResponseBody(const DescribeDcdnWafDomainResponseBody &) = default ;
    DescribeDcdnWafDomainResponseBody(DescribeDcdnWafDomainResponseBody &&) = default ;
    DescribeDcdnWafDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafDomainResponseBody() = default ;
    DescribeDcdnWafDomainResponseBody& operator=(const DescribeDcdnWafDomainResponseBody &) = default ;
    DescribeDcdnWafDomainResponseBody& operator=(DescribeDcdnWafDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OutPutDomains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OutPutDomains& obj) { 
        DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
        DARABONBA_PTR_TO_JSON(CcStatus, ccStatus_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(WafStatus, wafStatus_);
      };
      friend void from_json(const Darabonba::Json& j, OutPutDomains& obj) { 
        DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
        DARABONBA_PTR_FROM_JSON(CcStatus, ccStatus_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(WafStatus, wafStatus_);
      };
      OutPutDomains() = default ;
      OutPutDomains(const OutPutDomains &) = default ;
      OutPutDomains(OutPutDomains &&) = default ;
      OutPutDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OutPutDomains() = default ;
      OutPutDomains& operator=(const OutPutDomains &) = default ;
      OutPutDomains& operator=(OutPutDomains &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aclStatus_ == nullptr
        && this->ccStatus_ == nullptr && this->domain_ == nullptr && this->status_ == nullptr && this->wafStatus_ == nullptr; };
      // aclStatus Field Functions 
      bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
      void deleteAclStatus() { this->aclStatus_ = nullptr;};
      inline int32_t getAclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, 0) };
      inline OutPutDomains& setAclStatus(int32_t aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


      // ccStatus Field Functions 
      bool hasCcStatus() const { return this->ccStatus_ != nullptr;};
      void deleteCcStatus() { this->ccStatus_ = nullptr;};
      inline int32_t getCcStatus() const { DARABONBA_PTR_GET_DEFAULT(ccStatus_, 0) };
      inline OutPutDomains& setCcStatus(int32_t ccStatus) { DARABONBA_PTR_SET_VALUE(ccStatus_, ccStatus) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline OutPutDomains& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline OutPutDomains& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // wafStatus Field Functions 
      bool hasWafStatus() const { return this->wafStatus_ != nullptr;};
      void deleteWafStatus() { this->wafStatus_ = nullptr;};
      inline int32_t getWafStatus() const { DARABONBA_PTR_GET_DEFAULT(wafStatus_, 0) };
      inline OutPutDomains& setWafStatus(int32_t wafStatus) { DARABONBA_PTR_SET_VALUE(wafStatus_, wafStatus) };


    protected:
      // The status of the ACL. Valid values:
      // 
      // *   0: disabled
      // *   1: enabled
      shared_ptr<int32_t> aclStatus_ {};
      // The status of protection against HTTP flood attacks. Valid values:
      // 
      // *   0: disabled
      // *   1: enabled
      shared_ptr<int32_t> ccStatus_ {};
      // The domain name that has WAF enabled.
      shared_ptr<string> domain_ {};
      // The status of the domain name. Valid values:
      // 
      // *   1: The domain name is added to WAF, or the domain name is valid.
      // *   10: The domain name is being added to WAF.
      // *   11: The domain name failed to be added to WAF.
      shared_ptr<int32_t> status_ {};
      // The status of WAF. Valid values:
      // 
      // *   0: disabled
      // *   1: enabled
      shared_ptr<int32_t> wafStatus_ {};
    };

    virtual bool empty() const override { return this->outPutDomains_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // outPutDomains Field Functions 
    bool hasOutPutDomains() const { return this->outPutDomains_ != nullptr;};
    void deleteOutPutDomains() { this->outPutDomains_ = nullptr;};
    inline const vector<DescribeDcdnWafDomainResponseBody::OutPutDomains> & getOutPutDomains() const { DARABONBA_PTR_GET_CONST(outPutDomains_, vector<DescribeDcdnWafDomainResponseBody::OutPutDomains>) };
    inline vector<DescribeDcdnWafDomainResponseBody::OutPutDomains> getOutPutDomains() { DARABONBA_PTR_GET(outPutDomains_, vector<DescribeDcdnWafDomainResponseBody::OutPutDomains>) };
    inline DescribeDcdnWafDomainResponseBody& setOutPutDomains(const vector<DescribeDcdnWafDomainResponseBody::OutPutDomains> & outPutDomains) { DARABONBA_PTR_SET_VALUE(outPutDomains_, outPutDomains) };
    inline DescribeDcdnWafDomainResponseBody& setOutPutDomains(vector<DescribeDcdnWafDomainResponseBody::OutPutDomains> && outPutDomains) { DARABONBA_PTR_SET_RVALUE(outPutDomains_, outPutDomains) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnWafDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDcdnWafDomainResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The accelerated domain name.
    shared_ptr<vector<DescribeDcdnWafDomainResponseBody::OutPutDomains>> outPutDomains_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of accelerated domain names returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
