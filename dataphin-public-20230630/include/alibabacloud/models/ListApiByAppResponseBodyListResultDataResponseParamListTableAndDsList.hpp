// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIBYAPPRESPONSEBODYLISTRESULTDATARESPONSEPARAMLISTTABLEANDDSLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIBYAPPRESPONSEBODYLISTRESULTDATARESPONSEPARAMLISTTABLEANDDSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListApiByAppResponseBodyListResultDataResponseParamListTableAndDsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiByAppResponseBodyListResultDataResponseParamListTableAndDsList& obj) { 
      DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_TO_JSON(DatasourceType, datasourceType_);
      DARABONBA_PTR_TO_JSON(DatasourceUrl, datasourceUrl_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiByAppResponseBodyListResultDataResponseParamListTableAndDsList& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_FROM_JSON(DatasourceType, datasourceType_);
      DARABONBA_PTR_FROM_JSON(DatasourceUrl, datasourceUrl_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    ListApiByAppResponseBodyListResultDataResponseParamListTableAndDsList() = default ;
    ListApiByAppResponseBodyListResultDataResponseParamListTableAndDsList(const ListApiByAppResponseBodyListResultDataResponseParamListTableAndDsList &) = default ;
    ListApiByAppResponseBodyListResultDataResponseParamListTableAndDsList(ListApiByAppResponseBodyListResultDataResponseParamListTableAndDsList &&) = default ;
    ListApiByAppResponseBodyListResultDataResponseParamListTableAndDsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiByAppResponseBodyListResultDataResponseParamListTableAndDsList() = default ;
    ListApiByAppResponseBodyListResultDataResponseParamListTableAndDsList& operator=(const ListApiByAppResponseBodyListResultDataResponseParamListTableAndDsList &) = default ;
    ListApiByAppResponseBodyListResultDataResponseParamListTableAndDsList& operator=(ListApiByAppResponseBodyListResultDataResponseParamListTableAndDsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasourceId_ != nullptr
        && this->datasourceName_ != nullptr && this->datasourceType_ != nullptr && this->datasourceUrl_ != nullptr && this->tableName_ != nullptr; };
    // datasourceId Field Functions 
    bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
    void deleteDatasourceId() { this->datasourceId_ = nullptr;};
    inline string datasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, "") };
    inline ListApiByAppResponseBodyListResultDataResponseParamListTableAndDsList& setDatasourceId(string datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


    // datasourceName Field Functions 
    bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
    void deleteDatasourceName() { this->datasourceName_ = nullptr;};
    inline string datasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
    inline ListApiByAppResponseBodyListResultDataResponseParamListTableAndDsList& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


    // datasourceType Field Functions 
    bool hasDatasourceType() const { return this->datasourceType_ != nullptr;};
    void deleteDatasourceType() { this->datasourceType_ = nullptr;};
    inline int64_t datasourceType() const { DARABONBA_PTR_GET_DEFAULT(datasourceType_, 0L) };
    inline ListApiByAppResponseBodyListResultDataResponseParamListTableAndDsList& setDatasourceType(int64_t datasourceType) { DARABONBA_PTR_SET_VALUE(datasourceType_, datasourceType) };


    // datasourceUrl Field Functions 
    bool hasDatasourceUrl() const { return this->datasourceUrl_ != nullptr;};
    void deleteDatasourceUrl() { this->datasourceUrl_ = nullptr;};
    inline string datasourceUrl() const { DARABONBA_PTR_GET_DEFAULT(datasourceUrl_, "") };
    inline ListApiByAppResponseBodyListResultDataResponseParamListTableAndDsList& setDatasourceUrl(string datasourceUrl) { DARABONBA_PTR_SET_VALUE(datasourceUrl_, datasourceUrl) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListApiByAppResponseBodyListResultDataResponseParamListTableAndDsList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    std::shared_ptr<string> datasourceId_ = nullptr;
    std::shared_ptr<string> datasourceName_ = nullptr;
    std::shared_ptr<int64_t> datasourceType_ = nullptr;
    std::shared_ptr<string> datasourceUrl_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
