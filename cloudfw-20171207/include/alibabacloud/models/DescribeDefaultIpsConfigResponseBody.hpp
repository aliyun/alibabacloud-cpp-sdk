// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFAULTIPSCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFAULTIPSCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeDefaultIPSConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefaultIPSConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BasicRules, basicRules_);
      DARABONBA_PTR_TO_JSON(CtiRules, ctiRules_);
      DARABONBA_PTR_TO_JSON(MaxSdl, maxSdl_);
      DARABONBA_PTR_TO_JSON(PatchRules, patchRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleClass, ruleClass_);
      DARABONBA_PTR_TO_JSON(RunMode, runMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefaultIPSConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BasicRules, basicRules_);
      DARABONBA_PTR_FROM_JSON(CtiRules, ctiRules_);
      DARABONBA_PTR_FROM_JSON(MaxSdl, maxSdl_);
      DARABONBA_PTR_FROM_JSON(PatchRules, patchRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleClass, ruleClass_);
      DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
    };
    DescribeDefaultIPSConfigResponseBody() = default ;
    DescribeDefaultIPSConfigResponseBody(const DescribeDefaultIPSConfigResponseBody &) = default ;
    DescribeDefaultIPSConfigResponseBody(DescribeDefaultIPSConfigResponseBody &&) = default ;
    DescribeDefaultIPSConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefaultIPSConfigResponseBody() = default ;
    DescribeDefaultIPSConfigResponseBody& operator=(const DescribeDefaultIPSConfigResponseBody &) = default ;
    DescribeDefaultIPSConfigResponseBody& operator=(DescribeDefaultIPSConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->basicRules_ == nullptr
        && this->ctiRules_ == nullptr && this->maxSdl_ == nullptr && this->patchRules_ == nullptr && this->requestId_ == nullptr && this->ruleClass_ == nullptr
        && this->runMode_ == nullptr; };
    // basicRules Field Functions 
    bool hasBasicRules() const { return this->basicRules_ != nullptr;};
    void deleteBasicRules() { this->basicRules_ = nullptr;};
    inline int32_t getBasicRules() const { DARABONBA_PTR_GET_DEFAULT(basicRules_, 0) };
    inline DescribeDefaultIPSConfigResponseBody& setBasicRules(int32_t basicRules) { DARABONBA_PTR_SET_VALUE(basicRules_, basicRules) };


    // ctiRules Field Functions 
    bool hasCtiRules() const { return this->ctiRules_ != nullptr;};
    void deleteCtiRules() { this->ctiRules_ = nullptr;};
    inline int32_t getCtiRules() const { DARABONBA_PTR_GET_DEFAULT(ctiRules_, 0) };
    inline DescribeDefaultIPSConfigResponseBody& setCtiRules(int32_t ctiRules) { DARABONBA_PTR_SET_VALUE(ctiRules_, ctiRules) };


    // maxSdl Field Functions 
    bool hasMaxSdl() const { return this->maxSdl_ != nullptr;};
    void deleteMaxSdl() { this->maxSdl_ = nullptr;};
    inline int64_t getMaxSdl() const { DARABONBA_PTR_GET_DEFAULT(maxSdl_, 0L) };
    inline DescribeDefaultIPSConfigResponseBody& setMaxSdl(int64_t maxSdl) { DARABONBA_PTR_SET_VALUE(maxSdl_, maxSdl) };


    // patchRules Field Functions 
    bool hasPatchRules() const { return this->patchRules_ != nullptr;};
    void deletePatchRules() { this->patchRules_ = nullptr;};
    inline int32_t getPatchRules() const { DARABONBA_PTR_GET_DEFAULT(patchRules_, 0) };
    inline DescribeDefaultIPSConfigResponseBody& setPatchRules(int32_t patchRules) { DARABONBA_PTR_SET_VALUE(patchRules_, patchRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefaultIPSConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleClass Field Functions 
    bool hasRuleClass() const { return this->ruleClass_ != nullptr;};
    void deleteRuleClass() { this->ruleClass_ = nullptr;};
    inline int32_t getRuleClass() const { DARABONBA_PTR_GET_DEFAULT(ruleClass_, 0) };
    inline DescribeDefaultIPSConfigResponseBody& setRuleClass(int32_t ruleClass) { DARABONBA_PTR_SET_VALUE(ruleClass_, ruleClass) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline int32_t getRunMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, 0) };
    inline DescribeDefaultIPSConfigResponseBody& setRunMode(int32_t runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


  protected:
    // Indicates whether basic protection is enabled. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    shared_ptr<int32_t> basicRules_ {};
    // Indicates whether threat intelligence is enabled. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    shared_ptr<int32_t> ctiRules_ {};
    // The maximum amount of traffic that can be processed by the sensitive data leak detection feature each day.
    shared_ptr<int64_t> maxSdl_ {};
    // Indicates whether virtual patching is enabled. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    shared_ptr<int32_t> patchRules_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The level of the rule group for the IPS. Valid values:
    // 
    // *   **1**: loose
    // *   **2**: medium
    // *   **3**: strict
    shared_ptr<int32_t> ruleClass_ {};
    // The mode of the IPS. Valid values:
    // 
    // *   **1**: block mode
    // *   **0**: monitor mode
    shared_ptr<int32_t> runMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
