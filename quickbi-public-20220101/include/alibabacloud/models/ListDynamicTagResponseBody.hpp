// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDYNAMICTAGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDYNAMICTAGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListDynamicTagResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDynamicTagResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDynamicTagResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDynamicTagResponseBody() = default ;
    ListDynamicTagResponseBody(const ListDynamicTagResponseBody &) = default ;
    ListDynamicTagResponseBody(ListDynamicTagResponseBody &&) = default ;
    ListDynamicTagResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDynamicTagResponseBody() = default ;
    ListDynamicTagResponseBody& operator=(const ListDynamicTagResponseBody &) = default ;
    ListDynamicTagResponseBody& operator=(ListDynamicTagResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
        DARABONBA_PTR_TO_JSON(ConfigId, configId_);
        DARABONBA_PTR_TO_JSON(ConfigName, configName_);
        DARABONBA_PTR_TO_JSON(DsId, dsId_);
        DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
        DARABONBA_PTR_TO_JSON(RelatedAttribute, relatedAttribute_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
        DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
        DARABONBA_PTR_FROM_JSON(ConfigName, configName_);
        DARABONBA_PTR_FROM_JSON(DsId, dsId_);
        DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
        DARABONBA_PTR_FROM_JSON(RelatedAttribute, relatedAttribute_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->columnName_ == nullptr
        && this->configId_ == nullptr && this->configName_ == nullptr && this->dsId_ == nullptr && this->organizationId_ == nullptr && this->relatedAttribute_ == nullptr
        && this->tableName_ == nullptr; };
      // columnName Field Functions 
      bool hasColumnName() const { return this->columnName_ != nullptr;};
      void deleteColumnName() { this->columnName_ = nullptr;};
      inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
      inline Result& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


      // configId Field Functions 
      bool hasConfigId() const { return this->configId_ != nullptr;};
      void deleteConfigId() { this->configId_ = nullptr;};
      inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
      inline Result& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


      // configName Field Functions 
      bool hasConfigName() const { return this->configName_ != nullptr;};
      void deleteConfigName() { this->configName_ = nullptr;};
      inline string getConfigName() const { DARABONBA_PTR_GET_DEFAULT(configName_, "") };
      inline Result& setConfigName(string configName) { DARABONBA_PTR_SET_VALUE(configName_, configName) };


      // dsId Field Functions 
      bool hasDsId() const { return this->dsId_ != nullptr;};
      void deleteDsId() { this->dsId_ = nullptr;};
      inline string getDsId() const { DARABONBA_PTR_GET_DEFAULT(dsId_, "") };
      inline Result& setDsId(string dsId) { DARABONBA_PTR_SET_VALUE(dsId_, dsId) };


      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline Result& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


      // relatedAttribute Field Functions 
      bool hasRelatedAttribute() const { return this->relatedAttribute_ != nullptr;};
      void deleteRelatedAttribute() { this->relatedAttribute_ = nullptr;};
      inline int32_t getRelatedAttribute() const { DARABONBA_PTR_GET_DEFAULT(relatedAttribute_, 0) };
      inline Result& setRelatedAttribute(int32_t relatedAttribute) { DARABONBA_PTR_SET_VALUE(relatedAttribute_, relatedAttribute) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Result& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    protected:
      shared_ptr<string> columnName_ {};
      shared_ptr<string> configId_ {};
      shared_ptr<string> configName_ {};
      shared_ptr<string> dsId_ {};
      shared_ptr<string> organizationId_ {};
      shared_ptr<int32_t> relatedAttribute_ {};
      shared_ptr<string> tableName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDynamicTagResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListDynamicTagResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListDynamicTagResponseBody::Result>) };
    inline vector<ListDynamicTagResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListDynamicTagResponseBody::Result>) };
    inline ListDynamicTagResponseBody& setResult(const vector<ListDynamicTagResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListDynamicTagResponseBody& setResult(vector<ListDynamicTagResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDynamicTagResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListDynamicTagResponseBody::Result>> result_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
