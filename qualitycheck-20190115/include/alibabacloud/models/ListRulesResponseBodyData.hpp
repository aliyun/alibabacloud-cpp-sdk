// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessCategoryNameList, businessCategoryNameList_);
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
    };
    friend void from_json(const Darabonba::Json& j, ListRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessCategoryNameList, businessCategoryNameList_);
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
    };
    ListRulesResponseBodyData() = default ;
    ListRulesResponseBodyData(const ListRulesResponseBodyData &) = default ;
    ListRulesResponseBodyData(ListRulesResponseBodyData &&) = default ;
    ListRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRulesResponseBodyData() = default ;
    ListRulesResponseBodyData& operator=(const ListRulesResponseBodyData &) = default ;
    ListRulesResponseBodyData& operator=(ListRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessCategoryNameList_ != nullptr
        && this->comments_ != nullptr && this->createTime_ != nullptr && this->name_ != nullptr && this->rid_ != nullptr && this->ruleType_ != nullptr
        && this->type_ != nullptr && this->typeName_ != nullptr; };
    // businessCategoryNameList Field Functions 
    bool hasBusinessCategoryNameList() const { return this->businessCategoryNameList_ != nullptr;};
    void deleteBusinessCategoryNameList() { this->businessCategoryNameList_ = nullptr;};
    inline const vector<string> & businessCategoryNameList() const { DARABONBA_PTR_GET_CONST(businessCategoryNameList_, vector<string>) };
    inline vector<string> businessCategoryNameList() { DARABONBA_PTR_GET(businessCategoryNameList_, vector<string>) };
    inline ListRulesResponseBodyData& setBusinessCategoryNameList(const vector<string> & businessCategoryNameList) { DARABONBA_PTR_SET_VALUE(businessCategoryNameList_, businessCategoryNameList) };
    inline ListRulesResponseBodyData& setBusinessCategoryNameList(vector<string> && businessCategoryNameList) { DARABONBA_PTR_SET_RVALUE(businessCategoryNameList_, businessCategoryNameList) };


    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string comments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline ListRulesResponseBodyData& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListRulesResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListRulesResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline int64_t rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
    inline ListRulesResponseBodyData& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline ListRulesResponseBodyData& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ListRulesResponseBodyData& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string _typeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline ListRulesResponseBodyData& setTypeName(string _typeName) { DARABONBA_PTR_SET_VALUE(typeName_, _typeName) };


  protected:
    std::shared_ptr<vector<string>> businessCategoryNameList_ = nullptr;
    std::shared_ptr<string> comments_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> rid_ = nullptr;
    std::shared_ptr<int32_t> ruleType_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> typeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
