// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBEEBOTINTENTLGFRESPONSEBODYLGFS_HPP_
#define ALIBABACLOUD_MODELS_LISTBEEBOTINTENTLGFRESPONSEBODYLGFS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListBeebotIntentLgfResponseBodyLgfs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBeebotIntentLgfResponseBodyLgfs& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      DARABONBA_PTR_TO_JSON(LgfId, lgfId_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(RuleText, ruleText_);
    };
    friend void from_json(const Darabonba::Json& j, ListBeebotIntentLgfResponseBodyLgfs& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      DARABONBA_PTR_FROM_JSON(LgfId, lgfId_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(RuleText, ruleText_);
    };
    ListBeebotIntentLgfResponseBodyLgfs() = default ;
    ListBeebotIntentLgfResponseBodyLgfs(const ListBeebotIntentLgfResponseBodyLgfs &) = default ;
    ListBeebotIntentLgfResponseBodyLgfs(ListBeebotIntentLgfResponseBodyLgfs &&) = default ;
    ListBeebotIntentLgfResponseBodyLgfs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBeebotIntentLgfResponseBodyLgfs() = default ;
    ListBeebotIntentLgfResponseBodyLgfs& operator=(const ListBeebotIntentLgfResponseBodyLgfs &) = default ;
    ListBeebotIntentLgfResponseBodyLgfs& operator=(ListBeebotIntentLgfResponseBodyLgfs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->intentId_ == nullptr && return this->lgfId_ == nullptr && return this->modifyTime_ == nullptr && return this->ruleText_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListBeebotIntentLgfResponseBodyLgfs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline int64_t intentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
    inline ListBeebotIntentLgfResponseBodyLgfs& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // lgfId Field Functions 
    bool hasLgfId() const { return this->lgfId_ != nullptr;};
    void deleteLgfId() { this->lgfId_ = nullptr;};
    inline int64_t lgfId() const { DARABONBA_PTR_GET_DEFAULT(lgfId_, 0L) };
    inline ListBeebotIntentLgfResponseBodyLgfs& setLgfId(int64_t lgfId) { DARABONBA_PTR_SET_VALUE(lgfId_, lgfId) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListBeebotIntentLgfResponseBodyLgfs& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // ruleText Field Functions 
    bool hasRuleText() const { return this->ruleText_ != nullptr;};
    void deleteRuleText() { this->ruleText_ = nullptr;};
    inline string ruleText() const { DARABONBA_PTR_GET_DEFAULT(ruleText_, "") };
    inline ListBeebotIntentLgfResponseBodyLgfs& setRuleText(string ruleText) { DARABONBA_PTR_SET_VALUE(ruleText_, ruleText) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> intentId_ = nullptr;
    std::shared_ptr<int64_t> lgfId_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<string> ruleText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
