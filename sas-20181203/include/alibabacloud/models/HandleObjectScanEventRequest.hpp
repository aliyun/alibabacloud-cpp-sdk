// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HANDLEOBJECTSCANEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HANDLEOBJECTSCANEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class HandleObjectScanEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HandleObjectScanEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchType, batchType_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventIdList, eventIdList_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RuleConditionList, ruleConditionList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, HandleObjectScanEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchType, batchType_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventIdList, eventIdList_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RuleConditionList, ruleConditionList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    HandleObjectScanEventRequest() = default ;
    HandleObjectScanEventRequest(const HandleObjectScanEventRequest &) = default ;
    HandleObjectScanEventRequest(HandleObjectScanEventRequest &&) = default ;
    HandleObjectScanEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HandleObjectScanEventRequest() = default ;
    HandleObjectScanEventRequest& operator=(const HandleObjectScanEventRequest &) = default ;
    HandleObjectScanEventRequest& operator=(HandleObjectScanEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleConditionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleConditionList& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Operate, operate_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, RuleConditionList& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Operate, operate_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      RuleConditionList() = default ;
      RuleConditionList(const RuleConditionList &) = default ;
      RuleConditionList(RuleConditionList &&) = default ;
      RuleConditionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleConditionList() = default ;
      RuleConditionList& operator=(const RuleConditionList &) = default ;
      RuleConditionList& operator=(RuleConditionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->operate_ == nullptr && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline RuleConditionList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // operate Field Functions 
      bool hasOperate() const { return this->operate_ != nullptr;};
      void deleteOperate() { this->operate_ = nullptr;};
      inline string getOperate() const { DARABONBA_PTR_GET_DEFAULT(operate_, "") };
      inline RuleConditionList& setOperate(string operate) { DARABONBA_PTR_SET_VALUE(operate_, operate) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline RuleConditionList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> operate_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->batchType_ == nullptr
        && this->eventId_ == nullptr && this->eventIdList_ == nullptr && this->lang_ == nullptr && this->remark_ == nullptr && this->ruleConditionList_ == nullptr
        && this->status_ == nullptr; };
    // batchType Field Functions 
    bool hasBatchType() const { return this->batchType_ != nullptr;};
    void deleteBatchType() { this->batchType_ = nullptr;};
    inline string getBatchType() const { DARABONBA_PTR_GET_DEFAULT(batchType_, "") };
    inline HandleObjectScanEventRequest& setBatchType(string batchType) { DARABONBA_PTR_SET_VALUE(batchType_, batchType) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline HandleObjectScanEventRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventIdList Field Functions 
    bool hasEventIdList() const { return this->eventIdList_ != nullptr;};
    void deleteEventIdList() { this->eventIdList_ = nullptr;};
    inline const vector<int64_t> & getEventIdList() const { DARABONBA_PTR_GET_CONST(eventIdList_, vector<int64_t>) };
    inline vector<int64_t> getEventIdList() { DARABONBA_PTR_GET(eventIdList_, vector<int64_t>) };
    inline HandleObjectScanEventRequest& setEventIdList(const vector<int64_t> & eventIdList) { DARABONBA_PTR_SET_VALUE(eventIdList_, eventIdList) };
    inline HandleObjectScanEventRequest& setEventIdList(vector<int64_t> && eventIdList) { DARABONBA_PTR_SET_RVALUE(eventIdList_, eventIdList) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline HandleObjectScanEventRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline HandleObjectScanEventRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // ruleConditionList Field Functions 
    bool hasRuleConditionList() const { return this->ruleConditionList_ != nullptr;};
    void deleteRuleConditionList() { this->ruleConditionList_ = nullptr;};
    inline const vector<HandleObjectScanEventRequest::RuleConditionList> & getRuleConditionList() const { DARABONBA_PTR_GET_CONST(ruleConditionList_, vector<HandleObjectScanEventRequest::RuleConditionList>) };
    inline vector<HandleObjectScanEventRequest::RuleConditionList> getRuleConditionList() { DARABONBA_PTR_GET(ruleConditionList_, vector<HandleObjectScanEventRequest::RuleConditionList>) };
    inline HandleObjectScanEventRequest& setRuleConditionList(const vector<HandleObjectScanEventRequest::RuleConditionList> & ruleConditionList) { DARABONBA_PTR_SET_VALUE(ruleConditionList_, ruleConditionList) };
    inline HandleObjectScanEventRequest& setRuleConditionList(vector<HandleObjectScanEventRequest::RuleConditionList> && ruleConditionList) { DARABONBA_PTR_SET_RVALUE(ruleConditionList_, ruleConditionList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline HandleObjectScanEventRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> batchType_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<vector<int64_t>> eventIdList_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> remark_ {};
    shared_ptr<vector<HandleObjectScanEventRequest::RuleConditionList>> ruleConditionList_ {};
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
