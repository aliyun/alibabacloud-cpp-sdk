// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYCHECKSCHEMERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYCHECKSCHEMERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/Qualitycheck20190115.hpp>
#include <alibabacloud/models/GetQualityCheckSchemeResponseBodyDataSchemeCheckTypeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetQualityCheckSchemeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityCheckSchemeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InitScore, initScore_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
      DARABONBA_PTR_TO_JSON(SchemeCheckTypeList, schemeCheckTypeList_);
      DARABONBA_PTR_TO_JSON(SchemeId, schemeId_);
      DARABONBA_PTR_TO_JSON(SchemeTemplateId, schemeTemplateId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateUserName, updateUserName_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityCheckSchemeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InitScore, initScore_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
      DARABONBA_PTR_FROM_JSON(SchemeCheckTypeList, schemeCheckTypeList_);
      DARABONBA_PTR_FROM_JSON(SchemeId, schemeId_);
      DARABONBA_PTR_FROM_JSON(SchemeTemplateId, schemeTemplateId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateUserName, updateUserName_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetQualityCheckSchemeResponseBodyData() = default ;
    GetQualityCheckSchemeResponseBodyData(const GetQualityCheckSchemeResponseBodyData &) = default ;
    GetQualityCheckSchemeResponseBodyData(GetQualityCheckSchemeResponseBodyData &&) = default ;
    GetQualityCheckSchemeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityCheckSchemeResponseBodyData() = default ;
    GetQualityCheckSchemeResponseBodyData& operator=(const GetQualityCheckSchemeResponseBodyData &) = default ;
    GetQualityCheckSchemeResponseBodyData& operator=(GetQualityCheckSchemeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->createUserName_ != nullptr && this->dataType_ != nullptr && this->description_ != nullptr && this->initScore_ != nullptr && this->name_ != nullptr
        && this->ruleIds_ != nullptr && this->ruleList_ != nullptr && this->schemeCheckTypeList_ != nullptr && this->schemeId_ != nullptr && this->schemeTemplateId_ != nullptr
        && this->status_ != nullptr && this->templateType_ != nullptr && this->type_ != nullptr && this->updateTime_ != nullptr && this->updateUserName_ != nullptr
        && this->version_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetQualityCheckSchemeResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string createUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline GetQualityCheckSchemeResponseBodyData& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline int32_t dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, 0) };
    inline GetQualityCheckSchemeResponseBodyData& setDataType(int32_t dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetQualityCheckSchemeResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // initScore Field Functions 
    bool hasInitScore() const { return this->initScore_ != nullptr;};
    void deleteInitScore() { this->initScore_ = nullptr;};
    inline string initScore() const { DARABONBA_PTR_GET_DEFAULT(initScore_, "") };
    inline GetQualityCheckSchemeResponseBodyData& setInitScore(string initScore) { DARABONBA_PTR_SET_VALUE(initScore_, initScore) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetQualityCheckSchemeResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline const vector<string> & ruleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, vector<string>) };
    inline vector<string> ruleIds() { DARABONBA_PTR_GET(ruleIds_, vector<string>) };
    inline GetQualityCheckSchemeResponseBodyData& setRuleIds(const vector<string> & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
    inline GetQualityCheckSchemeResponseBodyData& setRuleIds(vector<string> && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<Models::RulesInfo> & ruleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<Models::RulesInfo>) };
    inline vector<Models::RulesInfo> ruleList() { DARABONBA_PTR_GET(ruleList_, vector<Models::RulesInfo>) };
    inline GetQualityCheckSchemeResponseBodyData& setRuleList(const vector<Models::RulesInfo> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline GetQualityCheckSchemeResponseBodyData& setRuleList(vector<Models::RulesInfo> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


    // schemeCheckTypeList Field Functions 
    bool hasSchemeCheckTypeList() const { return this->schemeCheckTypeList_ != nullptr;};
    void deleteSchemeCheckTypeList() { this->schemeCheckTypeList_ = nullptr;};
    inline const vector<Models::GetQualityCheckSchemeResponseBodyDataSchemeCheckTypeList> & schemeCheckTypeList() const { DARABONBA_PTR_GET_CONST(schemeCheckTypeList_, vector<Models::GetQualityCheckSchemeResponseBodyDataSchemeCheckTypeList>) };
    inline vector<Models::GetQualityCheckSchemeResponseBodyDataSchemeCheckTypeList> schemeCheckTypeList() { DARABONBA_PTR_GET(schemeCheckTypeList_, vector<Models::GetQualityCheckSchemeResponseBodyDataSchemeCheckTypeList>) };
    inline GetQualityCheckSchemeResponseBodyData& setSchemeCheckTypeList(const vector<Models::GetQualityCheckSchemeResponseBodyDataSchemeCheckTypeList> & schemeCheckTypeList) { DARABONBA_PTR_SET_VALUE(schemeCheckTypeList_, schemeCheckTypeList) };
    inline GetQualityCheckSchemeResponseBodyData& setSchemeCheckTypeList(vector<Models::GetQualityCheckSchemeResponseBodyDataSchemeCheckTypeList> && schemeCheckTypeList) { DARABONBA_PTR_SET_RVALUE(schemeCheckTypeList_, schemeCheckTypeList) };


    // schemeId Field Functions 
    bool hasSchemeId() const { return this->schemeId_ != nullptr;};
    void deleteSchemeId() { this->schemeId_ = nullptr;};
    inline int64_t schemeId() const { DARABONBA_PTR_GET_DEFAULT(schemeId_, 0L) };
    inline GetQualityCheckSchemeResponseBodyData& setSchemeId(int64_t schemeId) { DARABONBA_PTR_SET_VALUE(schemeId_, schemeId) };


    // schemeTemplateId Field Functions 
    bool hasSchemeTemplateId() const { return this->schemeTemplateId_ != nullptr;};
    void deleteSchemeTemplateId() { this->schemeTemplateId_ = nullptr;};
    inline int64_t schemeTemplateId() const { DARABONBA_PTR_GET_DEFAULT(schemeTemplateId_, 0L) };
    inline GetQualityCheckSchemeResponseBodyData& setSchemeTemplateId(int64_t schemeTemplateId) { DARABONBA_PTR_SET_VALUE(schemeTemplateId_, schemeTemplateId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetQualityCheckSchemeResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline int32_t templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0) };
    inline GetQualityCheckSchemeResponseBodyData& setTemplateType(int32_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline GetQualityCheckSchemeResponseBodyData& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetQualityCheckSchemeResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateUserName Field Functions 
    bool hasUpdateUserName() const { return this->updateUserName_ != nullptr;};
    void deleteUpdateUserName() { this->updateUserName_ = nullptr;};
    inline string updateUserName() const { DARABONBA_PTR_GET_DEFAULT(updateUserName_, "") };
    inline GetQualityCheckSchemeResponseBodyData& setUpdateUserName(string updateUserName) { DARABONBA_PTR_SET_VALUE(updateUserName_, updateUserName) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline GetQualityCheckSchemeResponseBodyData& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> createUserName_ = nullptr;
    std::shared_ptr<int32_t> dataType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> initScore_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<string>> ruleIds_ = nullptr;
    std::shared_ptr<vector<Models::RulesInfo>> ruleList_ = nullptr;
    std::shared_ptr<vector<Models::GetQualityCheckSchemeResponseBodyDataSchemeCheckTypeList>> schemeCheckTypeList_ = nullptr;
    std::shared_ptr<int64_t> schemeId_ = nullptr;
    std::shared_ptr<int64_t> schemeTemplateId_ = nullptr;
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
