// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATAMASKINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATAMASKINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class DeleteDataMaskingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataMaskingRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(SubRuleList, subRuleList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataMaskingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(SubRuleList, subRuleList_);
    };
    DeleteDataMaskingRuleRequest() = default ;
    DeleteDataMaskingRuleRequest(const DeleteDataMaskingRuleRequest &) = default ;
    DeleteDataMaskingRuleRequest(DeleteDataMaskingRuleRequest &&) = default ;
    DeleteDataMaskingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataMaskingRuleRequest() = default ;
    DeleteDataMaskingRuleRequest& operator=(const DeleteDataMaskingRuleRequest &) = default ;
    DeleteDataMaskingRuleRequest& operator=(DeleteDataMaskingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubRuleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubRuleList& obj) { 
        DARABONBA_PTR_TO_JSON(Columns, columns_);
        DARABONBA_PTR_TO_JSON(DbName, dbName_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
      };
      friend void from_json(const Darabonba::Json& j, SubRuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(Columns, columns_);
        DARABONBA_PTR_FROM_JSON(DbName, dbName_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      };
      SubRuleList() = default ;
      SubRuleList(const SubRuleList &) = default ;
      SubRuleList(SubRuleList &&) = default ;
      SubRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubRuleList() = default ;
      SubRuleList& operator=(const SubRuleList &) = default ;
      SubRuleList& operator=(SubRuleList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->columns_ == nullptr
        && this->dbName_ == nullptr && this->tableName_ == nullptr; };
      // columns Field Functions 
      bool hasColumns() const { return this->columns_ != nullptr;};
      void deleteColumns() { this->columns_ = nullptr;};
      inline string getColumns() const { DARABONBA_PTR_GET_DEFAULT(columns_, "") };
      inline SubRuleList& setColumns(string columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };


      // dbName Field Functions 
      bool hasDbName() const { return this->dbName_ != nullptr;};
      void deleteDbName() { this->dbName_ = nullptr;};
      inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
      inline SubRuleList& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline SubRuleList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    protected:
      shared_ptr<string> columns_ {};
      shared_ptr<string> dbName_ {};
      shared_ptr<string> tableName_ {};
    };

    virtual bool empty() const override { return this->engineType_ == nullptr
        && this->instanceId_ == nullptr && this->lang_ == nullptr && this->productCode_ == nullptr && this->productId_ == nullptr && this->subRuleList_ == nullptr; };
    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline DeleteDataMaskingRuleRequest& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteDataMaskingRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteDataMaskingRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DeleteDataMaskingRuleRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline DeleteDataMaskingRuleRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // subRuleList Field Functions 
    bool hasSubRuleList() const { return this->subRuleList_ != nullptr;};
    void deleteSubRuleList() { this->subRuleList_ = nullptr;};
    inline const vector<DeleteDataMaskingRuleRequest::SubRuleList> & getSubRuleList() const { DARABONBA_PTR_GET_CONST(subRuleList_, vector<DeleteDataMaskingRuleRequest::SubRuleList>) };
    inline vector<DeleteDataMaskingRuleRequest::SubRuleList> getSubRuleList() { DARABONBA_PTR_GET(subRuleList_, vector<DeleteDataMaskingRuleRequest::SubRuleList>) };
    inline DeleteDataMaskingRuleRequest& setSubRuleList(const vector<DeleteDataMaskingRuleRequest::SubRuleList> & subRuleList) { DARABONBA_PTR_SET_VALUE(subRuleList_, subRuleList) };
    inline DeleteDataMaskingRuleRequest& setSubRuleList(vector<DeleteDataMaskingRuleRequest::SubRuleList> && subRuleList) { DARABONBA_PTR_SET_RVALUE(subRuleList_, subRuleList) };


  protected:
    shared_ptr<string> engineType_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> productCode_ {};
    shared_ptr<int64_t> productId_ {};
    shared_ptr<vector<DeleteDataMaskingRuleRequest::SubRuleList>> subRuleList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
