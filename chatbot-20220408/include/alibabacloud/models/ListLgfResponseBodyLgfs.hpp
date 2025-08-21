// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLGFRESPONSEBODYLGFS_HPP_
#define ALIBABACLOUD_MODELS_LISTLGFRESPONSEBODYLGFS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListLgfResponseBodyLgfs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLgfResponseBodyLgfs& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      DARABONBA_PTR_TO_JSON(LgfId, lgfId_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(RuleText, ruleText_);
    };
    friend void from_json(const Darabonba::Json& j, ListLgfResponseBodyLgfs& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      DARABONBA_PTR_FROM_JSON(LgfId, lgfId_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(RuleText, ruleText_);
    };
    ListLgfResponseBodyLgfs() = default ;
    ListLgfResponseBodyLgfs(const ListLgfResponseBodyLgfs &) = default ;
    ListLgfResponseBodyLgfs(ListLgfResponseBodyLgfs &&) = default ;
    ListLgfResponseBodyLgfs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLgfResponseBodyLgfs() = default ;
    ListLgfResponseBodyLgfs& operator=(const ListLgfResponseBodyLgfs &) = default ;
    ListLgfResponseBodyLgfs& operator=(ListLgfResponseBodyLgfs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->intentId_ != nullptr && this->lgfId_ != nullptr && this->modifyTime_ != nullptr && this->ruleText_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListLgfResponseBodyLgfs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline int64_t intentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
    inline ListLgfResponseBodyLgfs& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // lgfId Field Functions 
    bool hasLgfId() const { return this->lgfId_ != nullptr;};
    void deleteLgfId() { this->lgfId_ = nullptr;};
    inline int64_t lgfId() const { DARABONBA_PTR_GET_DEFAULT(lgfId_, 0L) };
    inline ListLgfResponseBodyLgfs& setLgfId(int64_t lgfId) { DARABONBA_PTR_SET_VALUE(lgfId_, lgfId) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListLgfResponseBodyLgfs& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // ruleText Field Functions 
    bool hasRuleText() const { return this->ruleText_ != nullptr;};
    void deleteRuleText() { this->ruleText_ = nullptr;};
    inline string ruleText() const { DARABONBA_PTR_GET_DEFAULT(ruleText_, "") };
    inline ListLgfResponseBodyLgfs& setRuleText(string ruleText) { DARABONBA_PTR_SET_VALUE(ruleText_, ruleText) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> intentId_ = nullptr;
    // LGF ID
    std::shared_ptr<int64_t> lgfId_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<string> ruleText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
