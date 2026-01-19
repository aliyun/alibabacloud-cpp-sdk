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
        && this->regId_ == nullptr && this->requestTime_ == nullptr && this->ruleId_ == nullptr && this->ruleSnapshotId_ == nullptr && this->sRequestId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeRuleHitRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeRuleHitRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // requestTime Field Functions 
    bool hasRequestTime() const { return this->requestTime_ != nullptr;};
    void deleteRequestTime() { this->requestTime_ = nullptr;};
    inline int64_t getRequestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, 0L) };
    inline DescribeRuleHitRequest& setRequestTime(int64_t requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeRuleHitRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleSnapshotId Field Functions 
    bool hasRuleSnapshotId() const { return this->ruleSnapshotId_ != nullptr;};
    void deleteRuleSnapshotId() { this->ruleSnapshotId_ = nullptr;};
    inline string getRuleSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(ruleSnapshotId_, "") };
    inline DescribeRuleHitRequest& setRuleSnapshotId(string ruleSnapshotId) { DARABONBA_PTR_SET_VALUE(ruleSnapshotId_, ruleSnapshotId) };


    // sRequestId Field Functions 
    bool hasSRequestId() const { return this->sRequestId_ != nullptr;};
    void deleteSRequestId() { this->sRequestId_ = nullptr;};
    inline string getSRequestId() const { DARABONBA_PTR_GET_DEFAULT(sRequestId_, "") };
    inline DescribeRuleHitRequest& setSRequestId(string sRequestId) { DARABONBA_PTR_SET_VALUE(sRequestId_, sRequestId) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Execution time
    shared_ptr<int64_t> requestTime_ {};
    // Rule ID
    shared_ptr<string> ruleId_ {};
    // Snapshot ID.
    shared_ptr<string> ruleSnapshotId_ {};
    // Request ID.
    shared_ptr<string> sRequestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
