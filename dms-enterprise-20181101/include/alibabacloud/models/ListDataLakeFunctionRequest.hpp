// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATALAKEFUNCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATALAKEFUNCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDataLakeFunctionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataLakeFunctionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(DataRegion, dataRegion_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(FunctionNamePattern, functionNamePattern_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataLakeFunctionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(DataRegion, dataRegion_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(FunctionNamePattern, functionNamePattern_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListDataLakeFunctionRequest() = default ;
    ListDataLakeFunctionRequest(const ListDataLakeFunctionRequest &) = default ;
    ListDataLakeFunctionRequest(ListDataLakeFunctionRequest &&) = default ;
    ListDataLakeFunctionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataLakeFunctionRequest() = default ;
    ListDataLakeFunctionRequest& operator=(const ListDataLakeFunctionRequest &) = default ;
    ListDataLakeFunctionRequest& operator=(ListDataLakeFunctionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->catalogName_ != nullptr
        && this->dataRegion_ != nullptr && this->dbName_ != nullptr && this->functionNamePattern_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr
        && this->tid_ != nullptr && this->workspaceId_ != nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string catalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline ListDataLakeFunctionRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // dataRegion Field Functions 
    bool hasDataRegion() const { return this->dataRegion_ != nullptr;};
    void deleteDataRegion() { this->dataRegion_ = nullptr;};
    inline string dataRegion() const { DARABONBA_PTR_GET_DEFAULT(dataRegion_, "") };
    inline ListDataLakeFunctionRequest& setDataRegion(string dataRegion) { DARABONBA_PTR_SET_VALUE(dataRegion_, dataRegion) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ListDataLakeFunctionRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // functionNamePattern Field Functions 
    bool hasFunctionNamePattern() const { return this->functionNamePattern_ != nullptr;};
    void deleteFunctionNamePattern() { this->functionNamePattern_ = nullptr;};
    inline string functionNamePattern() const { DARABONBA_PTR_GET_DEFAULT(functionNamePattern_, "") };
    inline ListDataLakeFunctionRequest& setFunctionNamePattern(string functionNamePattern) { DARABONBA_PTR_SET_VALUE(functionNamePattern_, functionNamePattern) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDataLakeFunctionRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDataLakeFunctionRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListDataLakeFunctionRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline ListDataLakeFunctionRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> catalogName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dataRegion_ = nullptr;
    std::shared_ptr<string> dbName_ = nullptr;
    std::shared_ptr<string> functionNamePattern_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
    std::shared_ptr<int64_t> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
