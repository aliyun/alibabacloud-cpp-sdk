// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEHITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEHITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRuleHitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleHitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(requestTime, requestTime_);
      DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
      DARABONBA_PTR_TO_JSON(ruleSnapshotId, ruleSnapshotId_);
      DARABONBA_PTR_TO_JSON(sRequestId, sRequestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleHitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(requestTime, requestTime_);
      DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(ruleSnapshotId, ruleSnapshotId_);
      DARABONBA_PTR_FROM_JSON(sRequestId, sRequestId_);
    };
    DescribeRuleHitRequest() = default ;
    DescribeRuleHitRequest(const DescribeRuleHitRequest &) = default ;
    DescribeRuleHitRequest(DescribeRuleHitRequest &&) = default ;
    DescribeRuleHitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleHitRequest() = default ;
    DescribeRuleHitRequest& operator=(const DescribeRuleHitRequest &) = default ;
    DescribeRuleHitRequest& operator=(DescribeRuleHitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->regId_ == nullptr && return this->requestTime_ == nullptr && return this->ruleId_ == nullptr && return this->ruleSnapshotId_ == nullptr && return this->sRequestId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeRuleHitRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeRuleHitRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // requestTime Field Functions 
    bool hasRequestTime() const { return this->requestTime_ != nullptr;};
    void deleteRequestTime() { this->requestTime_ = nullptr;};
    inline int64_t requestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, 0L) };
    inline DescribeRuleHitRequest& setRequestTime(int64_t requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeRuleHitRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleSnapshotId Field Functions 
    bool hasRuleSnapshotId() const { return this->ruleSnapshotId_ != nullptr;};
    void deleteRuleSnapshotId() { this->ruleSnapshotId_ = nullptr;};
    inline string ruleSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(ruleSnapshotId_, "") };
    inline DescribeRuleHitRequest& setRuleSnapshotId(string ruleSnapshotId) { DARABONBA_PTR_SET_VALUE(ruleSnapshotId_, ruleSnapshotId) };


    // sRequestId Field Functions 
    bool hasSRequestId() const { return this->sRequestId_ != nullptr;};
    void deleteSRequestId() { this->sRequestId_ = nullptr;};
    inline string sRequestId() const { DARABONBA_PTR_GET_DEFAULT(sRequestId_, "") };
    inline DescribeRuleHitRequest& setSRequestId(string sRequestId) { DARABONBA_PTR_SET_VALUE(sRequestId_, sRequestId) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Execution time
    std::shared_ptr<int64_t> requestTime_ = nullptr;
    // Rule ID
    std::shared_ptr<string> ruleId_ = nullptr;
    // Snapshot ID.
    std::shared_ptr<string> ruleSnapshotId_ = nullptr;
    // Request ID.
    std::shared_ptr<string> sRequestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
