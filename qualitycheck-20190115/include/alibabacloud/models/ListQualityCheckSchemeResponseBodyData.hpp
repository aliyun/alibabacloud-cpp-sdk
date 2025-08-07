// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUALITYCHECKSCHEMERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTQUALITYCHECKSCHEMERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListQualityCheckSchemeResponseBodyDataRuleList.hpp>
#include <alibabacloud/models/ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListQualityCheckSchemeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQualityCheckSchemeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
      DARABONBA_PTR_TO_JSON(SchemeCheckTypeList, schemeCheckTypeList_);
      DARABONBA_PTR_TO_JSON(SchemeId, schemeId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateUserName, updateUserName_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListQualityCheckSchemeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
      DARABONBA_PTR_FROM_JSON(SchemeCheckTypeList, schemeCheckTypeList_);
      DARABONBA_PTR_FROM_JSON(SchemeId, schemeId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateUserName, updateUserName_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListQualityCheckSchemeResponseBodyData() = default ;
    ListQualityCheckSchemeResponseBodyData(const ListQualityCheckSchemeResponseBodyData &) = default ;
    ListQualityCheckSchemeResponseBodyData(ListQualityCheckSchemeResponseBodyData &&) = default ;
    ListQualityCheckSchemeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQualityCheckSchemeResponseBodyData() = default ;
    ListQualityCheckSchemeResponseBodyData& operator=(const ListQualityCheckSchemeResponseBodyData &) = default ;
    ListQualityCheckSchemeResponseBodyData& operator=(ListQualityCheckSchemeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->createUserName_ != nullptr && this->dataType_ != nullptr && this->description_ != nullptr && this->name_ != nullptr && this->ruleList_ != nullptr
        && this->schemeCheckTypeList_ != nullptr && this->schemeId_ != nullptr && this->status_ != nullptr && this->templateType_ != nullptr && this->type_ != nullptr
        && this->updateTime_ != nullptr && this->updateUserName_ != nullptr && this->version_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListQualityCheckSchemeResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string createUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline ListQualityCheckSchemeResponseBodyData& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline int32_t dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, 0) };
    inline ListQualityCheckSchemeResponseBodyData& setDataType(int32_t dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListQualityCheckSchemeResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListQualityCheckSchemeResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<Models::ListQualityCheckSchemeResponseBodyDataRuleList> & ruleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<Models::ListQualityCheckSchemeResponseBodyDataRuleList>) };
    inline vector<Models::ListQualityCheckSchemeResponseBodyDataRuleList> ruleList() { DARABONBA_PTR_GET(ruleList_, vector<Models::ListQualityCheckSchemeResponseBodyDataRuleList>) };
    inline ListQualityCheckSchemeResponseBodyData& setRuleList(const vector<Models::ListQualityCheckSchemeResponseBodyDataRuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline ListQualityCheckSchemeResponseBodyData& setRuleList(vector<Models::ListQualityCheckSchemeResponseBodyDataRuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


    // schemeCheckTypeList Field Functions 
    bool hasSchemeCheckTypeList() const { return this->schemeCheckTypeList_ != nullptr;};
    void deleteSchemeCheckTypeList() { this->schemeCheckTypeList_ = nullptr;};
    inline const vector<Models::ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList> & schemeCheckTypeList() const { DARABONBA_PTR_GET_CONST(schemeCheckTypeList_, vector<Models::ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList>) };
    inline vector<Models::ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList> schemeCheckTypeList() { DARABONBA_PTR_GET(schemeCheckTypeList_, vector<Models::ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList>) };
    inline ListQualityCheckSchemeResponseBodyData& setSchemeCheckTypeList(const vector<Models::ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList> & schemeCheckTypeList) { DARABONBA_PTR_SET_VALUE(schemeCheckTypeList_, schemeCheckTypeList) };
    inline ListQualityCheckSchemeResponseBodyData& setSchemeCheckTypeList(vector<Models::ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList> && schemeCheckTypeList) { DARABONBA_PTR_SET_RVALUE(schemeCheckTypeList_, schemeCheckTypeList) };


    // schemeId Field Functions 
    bool hasSchemeId() const { return this->schemeId_ != nullptr;};
    void deleteSchemeId() { this->schemeId_ = nullptr;};
    inline int64_t schemeId() const { DARABONBA_PTR_GET_DEFAULT(schemeId_, 0L) };
    inline ListQualityCheckSchemeResponseBodyData& setSchemeId(int64_t schemeId) { DARABONBA_PTR_SET_VALUE(schemeId_, schemeId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListQualityCheckSchemeResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline int32_t templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0) };
    inline ListQualityCheckSchemeResponseBodyData& setTemplateType(int32_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ListQualityCheckSchemeResponseBodyData& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListQualityCheckSchemeResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateUserName Field Functions 
    bool hasUpdateUserName() const { return this->updateUserName_ != nullptr;};
    void deleteUpdateUserName() { this->updateUserName_ = nullptr;};
    inline string updateUserName() const { DARABONBA_PTR_GET_DEFAULT(updateUserName_, "") };
    inline ListQualityCheckSchemeResponseBodyData& setUpdateUserName(string updateUserName) { DARABONBA_PTR_SET_VALUE(updateUserName_, updateUserName) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline ListQualityCheckSchemeResponseBodyData& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> createUserName_ = nullptr;
    std::shared_ptr<int32_t> dataType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::ListQualityCheckSchemeResponseBodyDataRuleList>> ruleList_ = nullptr;
    std::shared_ptr<vector<Models::ListQualityCheckSchemeResponseBodyDataSchemeCheckTypeList>> schemeCheckTypeList_ = nullptr;
    std::shared_ptr<int64_t> schemeId_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int32_t> templateType_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> updateUserName_ = nullptr;
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
