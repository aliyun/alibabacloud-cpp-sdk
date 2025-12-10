// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class ListDatabasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(NamePattern, namePattern_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(NamePattern, namePattern_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListDatabasesRequest() = default ;
    ListDatabasesRequest(const ListDatabasesRequest &) = default ;
    ListDatabasesRequest(ListDatabasesRequest &&) = default ;
    ListDatabasesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabasesRequest() = default ;
    ListDatabasesRequest& operator=(const ListDatabasesRequest &) = default ;
    ListDatabasesRequest& operator=(ListDatabasesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->namePattern_ == nullptr && return this->nextPageToken_ == nullptr && return this->pageSize_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline ListDatabasesRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // namePattern Field Functions 
    bool hasNamePattern() const { return this->namePattern_ != nullptr;};
    void deleteNamePattern() { this->namePattern_ = nullptr;};
    inline string namePattern() const { DARABONBA_PTR_GET_DEFAULT(namePattern_, "") };
    inline ListDatabasesRequest& setNamePattern(string namePattern) { DARABONBA_PTR_SET_VALUE(namePattern_, namePattern) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListDatabasesRequest& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDatabasesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The namespace of the database category. By default, the Uid of the primary account is entered.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The regular expression used to match the database name. If all matches are specified, this parameter is specified. \\*
    std::shared_ptr<string> namePattern_ = nullptr;
    // The paging token, which is returned by the result. For example, you can specify "" for the first page.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
