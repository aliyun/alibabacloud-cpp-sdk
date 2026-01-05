// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMAJORPROTECTIONBLACKIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMAJORPROTECTIONBLACKIPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeMajorProtectionBlackIpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMajorProtectionBlackIpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IpList, ipList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMajorProtectionBlackIpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IpList, ipList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeMajorProtectionBlackIpsResponseBody() = default ;
    DescribeMajorProtectionBlackIpsResponseBody(const DescribeMajorProtectionBlackIpsResponseBody &) = default ;
    DescribeMajorProtectionBlackIpsResponseBody(DescribeMajorProtectionBlackIpsResponseBody &&) = default ;
    DescribeMajorProtectionBlackIpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMajorProtectionBlackIpsResponseBody() = default ;
    DescribeMajorProtectionBlackIpsResponseBody& operator=(const DescribeMajorProtectionBlackIpsResponseBody &) = default ;
    DescribeMajorProtectionBlackIpsResponseBody& operator=(DescribeMajorProtectionBlackIpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpList& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, IpList& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      IpList() = default ;
      IpList(const IpList &) = default ;
      IpList(IpList &&) = default ;
      IpList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpList() = default ;
      IpList& operator=(const IpList &) = default ;
      IpList& operator=(IpList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->expiredTime_ == nullptr && this->gmtModified_ == nullptr && this->ip_ == nullptr && this->ruleId_ == nullptr && this->templateId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline IpList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline int64_t getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, 0L) };
      inline IpList& setExpiredTime(int64_t expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline IpList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline IpList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline IpList& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline IpList& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      // The description of the IP address in the blacklist.
      shared_ptr<string> description_ {};
      // The time after which the IP address blacklist becomes invalid. Unit: seconds.
      // 
      // >  If the value of this parameter is **0**, the blacklist is permanently valid.
      shared_ptr<int64_t> expiredTime_ {};
      // The most recent time when the IP address blacklist was modified.
      shared_ptr<int64_t> gmtModified_ {};
      // The IP address in the IP address blacklist.
      shared_ptr<string> ip_ {};
      // The ID of the IP address blacklist rule for major event protection.
      shared_ptr<int64_t> ruleId_ {};
      // The ID of the rule template for major event protection.
      shared_ptr<int64_t> templateId_ {};
    };

    virtual bool empty() const override { return this->ipList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline const vector<DescribeMajorProtectionBlackIpsResponseBody::IpList> & getIpList() const { DARABONBA_PTR_GET_CONST(ipList_, vector<DescribeMajorProtectionBlackIpsResponseBody::IpList>) };
    inline vector<DescribeMajorProtectionBlackIpsResponseBody::IpList> getIpList() { DARABONBA_PTR_GET(ipList_, vector<DescribeMajorProtectionBlackIpsResponseBody::IpList>) };
    inline DescribeMajorProtectionBlackIpsResponseBody& setIpList(const vector<DescribeMajorProtectionBlackIpsResponseBody::IpList> & ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };
    inline DescribeMajorProtectionBlackIpsResponseBody& setIpList(vector<DescribeMajorProtectionBlackIpsResponseBody::IpList> && ipList) { DARABONBA_PTR_SET_RVALUE(ipList_, ipList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMajorProtectionBlackIpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeMajorProtectionBlackIpsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array of IP addresses in the IP address blacklist.
    shared_ptr<vector<DescribeMajorProtectionBlackIpsResponseBody::IpList>> ipList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of IP addresses in the blacklist.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
