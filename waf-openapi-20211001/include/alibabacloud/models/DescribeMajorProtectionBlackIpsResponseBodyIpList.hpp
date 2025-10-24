// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMAJORPROTECTIONBLACKIPSRESPONSEBODYIPLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMAJORPROTECTIONBLACKIPSRESPONSEBODYIPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeMajorProtectionBlackIpsResponseBodyIpList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMajorProtectionBlackIpsResponseBodyIpList& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMajorProtectionBlackIpsResponseBodyIpList& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DescribeMajorProtectionBlackIpsResponseBodyIpList() = default ;
    DescribeMajorProtectionBlackIpsResponseBodyIpList(const DescribeMajorProtectionBlackIpsResponseBodyIpList &) = default ;
    DescribeMajorProtectionBlackIpsResponseBodyIpList(DescribeMajorProtectionBlackIpsResponseBodyIpList &&) = default ;
    DescribeMajorProtectionBlackIpsResponseBodyIpList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMajorProtectionBlackIpsResponseBodyIpList() = default ;
    DescribeMajorProtectionBlackIpsResponseBodyIpList& operator=(const DescribeMajorProtectionBlackIpsResponseBodyIpList &) = default ;
    DescribeMajorProtectionBlackIpsResponseBodyIpList& operator=(DescribeMajorProtectionBlackIpsResponseBodyIpList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->expiredTime_ == nullptr && return this->gmtModified_ == nullptr && return this->ip_ == nullptr && return this->ruleId_ == nullptr && return this->templateId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeMajorProtectionBlackIpsResponseBodyIpList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline int64_t expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, 0L) };
    inline DescribeMajorProtectionBlackIpsResponseBodyIpList& setExpiredTime(int64_t expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeMajorProtectionBlackIpsResponseBodyIpList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeMajorProtectionBlackIpsResponseBodyIpList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribeMajorProtectionBlackIpsResponseBodyIpList& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DescribeMajorProtectionBlackIpsResponseBodyIpList& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The description of the IP address in the blacklist.
    std::shared_ptr<string> description_ = nullptr;
    // The time after which the IP address blacklist becomes invalid. Unit: seconds.
    // 
    // >  If the value of this parameter is **0**, the blacklist is permanently valid.
    std::shared_ptr<int64_t> expiredTime_ = nullptr;
    // The most recent time when the IP address blacklist was modified.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The IP address in the IP address blacklist.
    std::shared_ptr<string> ip_ = nullptr;
    // The ID of the IP address blacklist rule for major event protection.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The ID of the rule template for major event protection.
    std::shared_ptr<int64_t> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
