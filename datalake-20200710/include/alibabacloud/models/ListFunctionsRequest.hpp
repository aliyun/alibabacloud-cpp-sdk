// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNCTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNCTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class ListFunctionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunctionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(FunctionNamePattern, functionNamePattern_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListFunctionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(FunctionNamePattern, functionNamePattern_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListFunctionsRequest() = default ;
    ListFunctionsRequest(const ListFunctionsRequest &) = default ;
    ListFunctionsRequest(ListFunctionsRequest &&) = default ;
    ListFunctionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunctionsRequest() = default ;
    ListFunctionsRequest& operator=(const ListFunctionsRequest &) = default ;
    ListFunctionsRequest& operator=(ListFunctionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->databaseName_ == nullptr && return this->functionNamePattern_ == nullptr && return this->nextPageToken_ == nullptr && return this->pageSize_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline ListFunctionsRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline ListFunctionsRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // functionNamePattern Field Functions 
    bool hasFunctionNamePattern() const { return this->functionNamePattern_ != nullptr;};
    void deleteFunctionNamePattern() { this->functionNamePattern_ = nullptr;};
    inline string functionNamePattern() const { DARABONBA_PTR_GET_DEFAULT(functionNamePattern_, "") };
    inline ListFunctionsRequest& setFunctionNamePattern(string functionNamePattern) { DARABONBA_PTR_SET_VALUE(functionNamePattern_, functionNamePattern) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListFunctionsRequest& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListFunctionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the data directory.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The name of a database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The regular match expression for the user-defined function name.
    std::shared_ptr<string> functionNamePattern_ = nullptr;
    // The page turning token, which is used to obtain the next page of data. If not provided in the response result, a string ("") or empty string (") is empty string.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The number of entries per page. Maximum value: 1000.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
