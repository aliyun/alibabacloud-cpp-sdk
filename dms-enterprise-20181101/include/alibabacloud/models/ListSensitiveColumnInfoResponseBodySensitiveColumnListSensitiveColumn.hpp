// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENSITIVECOLUMNINFORESPONSEBODYSENSITIVECOLUMNLISTSENSITIVECOLUMN_HPP_
#define ALIBABACLOUD_MODELS_LISTSENSITIVECOLUMNINFORESPONSEBODYSENSITIVECOLUMNLISTSENSITIVECOLUMN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnDefaultDesensitizationRule.hpp>
#include <alibabacloud/models/ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(DefaultDesensitizationRule, defaultDesensitizationRule_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsPlain, isPlain_);
      DARABONBA_PTR_TO_JSON(SampleData, sampleData_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
      DARABONBA_PTR_TO_JSON(SemiDesensitizationRuleList, semiDesensitizationRuleList_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(UserSensitivityLevel, userSensitivityLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(DefaultDesensitizationRule, defaultDesensitizationRule_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsPlain, isPlain_);
      DARABONBA_PTR_FROM_JSON(SampleData, sampleData_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
      DARABONBA_PTR_FROM_JSON(SemiDesensitizationRuleList, semiDesensitizationRuleList_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(UserSensitivityLevel, userSensitivityLevel_);
    };
    ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn() = default ;
    ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn(const ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn &) = default ;
    ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn(ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn &&) = default ;
    ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn() = default ;
    ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn& operator=(const ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn &) = default ;
    ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn& operator=(ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryName_ != nullptr
        && this->columnName_ != nullptr && this->defaultDesensitizationRule_ != nullptr && this->instanceId_ != nullptr && this->isPlain_ != nullptr && this->sampleData_ != nullptr
        && this->schemaName_ != nullptr && this->securityLevel_ != nullptr && this->semiDesensitizationRuleList_ != nullptr && this->tableName_ != nullptr && this->userSensitivityLevel_ != nullptr; };
    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // defaultDesensitizationRule Field Functions 
    bool hasDefaultDesensitizationRule() const { return this->defaultDesensitizationRule_ != nullptr;};
    void deleteDefaultDesensitizationRule() { this->defaultDesensitizationRule_ = nullptr;};
    inline const Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnDefaultDesensitizationRule & defaultDesensitizationRule() const { DARABONBA_PTR_GET_CONST(defaultDesensitizationRule_, Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnDefaultDesensitizationRule) };
    inline Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnDefaultDesensitizationRule defaultDesensitizationRule() { DARABONBA_PTR_GET(defaultDesensitizationRule_, Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnDefaultDesensitizationRule) };
    inline ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn& setDefaultDesensitizationRule(const Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnDefaultDesensitizationRule & defaultDesensitizationRule) { DARABONBA_PTR_SET_VALUE(defaultDesensitizationRule_, defaultDesensitizationRule) };
    inline ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn& setDefaultDesensitizationRule(Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnDefaultDesensitizationRule && defaultDesensitizationRule) { DARABONBA_PTR_SET_RVALUE(defaultDesensitizationRule_, defaultDesensitizationRule) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int32_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0) };
    inline ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn& setInstanceId(int32_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isPlain Field Functions 
    bool hasIsPlain() const { return this->isPlain_ != nullptr;};
    void deleteIsPlain() { this->isPlain_ = nullptr;};
    inline bool isPlain() const { DARABONBA_PTR_GET_DEFAULT(isPlain_, false) };
    inline ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn& setIsPlain(bool isPlain) { DARABONBA_PTR_SET_VALUE(isPlain_, isPlain) };


    // sampleData Field Functions 
    bool hasSampleData() const { return this->sampleData_ != nullptr;};
    void deleteSampleData() { this->sampleData_ = nullptr;};
    inline string sampleData() const { DARABONBA_PTR_GET_DEFAULT(sampleData_, "") };
    inline ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn& setSampleData(string sampleData) { DARABONBA_PTR_SET_VALUE(sampleData_, sampleData) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline string securityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, "") };
    inline ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn& setSecurityLevel(string securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


    // semiDesensitizationRuleList Field Functions 
    bool hasSemiDesensitizationRuleList() const { return this->semiDesensitizationRuleList_ != nullptr;};
    void deleteSemiDesensitizationRuleList() { this->semiDesensitizationRuleList_ = nullptr;};
    inline const Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList & semiDesensitizationRuleList() const { DARABONBA_PTR_GET_CONST(semiDesensitizationRuleList_, Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList) };
    inline Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList semiDesensitizationRuleList() { DARABONBA_PTR_GET(semiDesensitizationRuleList_, Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList) };
    inline ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn& setSemiDesensitizationRuleList(const Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList & semiDesensitizationRuleList) { DARABONBA_PTR_SET_VALUE(semiDesensitizationRuleList_, semiDesensitizationRuleList) };
    inline ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn& setSemiDesensitizationRuleList(Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList && semiDesensitizationRuleList) { DARABONBA_PTR_SET_RVALUE(semiDesensitizationRuleList_, semiDesensitizationRuleList) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // userSensitivityLevel Field Functions 
    bool hasUserSensitivityLevel() const { return this->userSensitivityLevel_ != nullptr;};
    void deleteUserSensitivityLevel() { this->userSensitivityLevel_ = nullptr;};
    inline string userSensitivityLevel() const { DARABONBA_PTR_GET_DEFAULT(userSensitivityLevel_, "") };
    inline ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn& setUserSensitivityLevel(string userSensitivityLevel) { DARABONBA_PTR_SET_VALUE(userSensitivityLevel_, userSensitivityLevel) };


  protected:
    std::shared_ptr<string> categoryName_ = nullptr;
    std::shared_ptr<string> columnName_ = nullptr;
    std::shared_ptr<Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnDefaultDesensitizationRule> defaultDesensitizationRule_ = nullptr;
    std::shared_ptr<int32_t> instanceId_ = nullptr;
    std::shared_ptr<bool> isPlain_ = nullptr;
    std::shared_ptr<string> sampleData_ = nullptr;
    std::shared_ptr<string> schemaName_ = nullptr;
    std::shared_ptr<string> securityLevel_ = nullptr;
    std::shared_ptr<Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList> semiDesensitizationRuleList_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> userSensitivityLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
