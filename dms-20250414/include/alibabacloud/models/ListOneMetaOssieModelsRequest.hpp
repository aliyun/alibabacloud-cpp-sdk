// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTONEMETAOSSIEMODELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTONEMETAOSSIEMODELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListOneMetaOssieModelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOneMetaOssieModelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_TO_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_TO_JSON(EnableVectorSearch, enableVectorSearch_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListOneMetaOssieModelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_FROM_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_FROM_JSON(EnableVectorSearch, enableVectorSearch_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListOneMetaOssieModelsRequest() = default ;
    ListOneMetaOssieModelsRequest(const ListOneMetaOssieModelsRequest &) = default ;
    ListOneMetaOssieModelsRequest(ListOneMetaOssieModelsRequest &&) = default ;
    ListOneMetaOssieModelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOneMetaOssieModelsRequest() = default ;
    ListOneMetaOssieModelsRequest& operator=(const ListOneMetaOssieModelsRequest &) = default ;
    ListOneMetaOssieModelsRequest& operator=(ListOneMetaOssieModelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogUuid_ == nullptr
        && this->databaseUuid_ == nullptr && this->enableVectorSearch_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->query_ == nullptr
        && this->tag_ == nullptr; };
    // catalogUuid Field Functions 
    bool hasCatalogUuid() const { return this->catalogUuid_ != nullptr;};
    void deleteCatalogUuid() { this->catalogUuid_ = nullptr;};
    inline string getCatalogUuid() const { DARABONBA_PTR_GET_DEFAULT(catalogUuid_, "") };
    inline ListOneMetaOssieModelsRequest& setCatalogUuid(string catalogUuid) { DARABONBA_PTR_SET_VALUE(catalogUuid_, catalogUuid) };


    // databaseUuid Field Functions 
    bool hasDatabaseUuid() const { return this->databaseUuid_ != nullptr;};
    void deleteDatabaseUuid() { this->databaseUuid_ = nullptr;};
    inline string getDatabaseUuid() const { DARABONBA_PTR_GET_DEFAULT(databaseUuid_, "") };
    inline ListOneMetaOssieModelsRequest& setDatabaseUuid(string databaseUuid) { DARABONBA_PTR_SET_VALUE(databaseUuid_, databaseUuid) };


    // enableVectorSearch Field Functions 
    bool hasEnableVectorSearch() const { return this->enableVectorSearch_ != nullptr;};
    void deleteEnableVectorSearch() { this->enableVectorSearch_ = nullptr;};
    inline bool getEnableVectorSearch() const { DARABONBA_PTR_GET_DEFAULT(enableVectorSearch_, false) };
    inline ListOneMetaOssieModelsRequest& setEnableVectorSearch(bool enableVectorSearch) { DARABONBA_PTR_SET_VALUE(enableVectorSearch_, enableVectorSearch) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListOneMetaOssieModelsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOneMetaOssieModelsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListOneMetaOssieModelsRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListOneMetaOssieModelsRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    shared_ptr<string> catalogUuid_ {};
    shared_ptr<string> databaseUuid_ {};
    shared_ptr<bool> enableVectorSearch_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // This parameter is required.
    shared_ptr<string> query_ {};
    shared_ptr<string> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
