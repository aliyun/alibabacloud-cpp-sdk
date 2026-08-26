// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTONEMETASQLTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTONEMETASQLTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListOneMetaSqlTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOneMetaSqlTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_TO_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_TO_JSON(EnableVectorSearch, enableVectorSearch_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, ListOneMetaSqlTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_FROM_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_FROM_JSON(EnableVectorSearch, enableVectorSearch_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    ListOneMetaSqlTemplatesRequest() = default ;
    ListOneMetaSqlTemplatesRequest(const ListOneMetaSqlTemplatesRequest &) = default ;
    ListOneMetaSqlTemplatesRequest(ListOneMetaSqlTemplatesRequest &&) = default ;
    ListOneMetaSqlTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOneMetaSqlTemplatesRequest() = default ;
    ListOneMetaSqlTemplatesRequest& operator=(const ListOneMetaSqlTemplatesRequest &) = default ;
    ListOneMetaSqlTemplatesRequest& operator=(ListOneMetaSqlTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogUuid_ == nullptr
        && this->databaseUuid_ == nullptr && this->enableVectorSearch_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->query_ == nullptr
        && this->tag_ == nullptr && this->uuids_ == nullptr; };
    // catalogUuid Field Functions 
    bool hasCatalogUuid() const { return this->catalogUuid_ != nullptr;};
    void deleteCatalogUuid() { this->catalogUuid_ = nullptr;};
    inline string getCatalogUuid() const { DARABONBA_PTR_GET_DEFAULT(catalogUuid_, "") };
    inline ListOneMetaSqlTemplatesRequest& setCatalogUuid(string catalogUuid) { DARABONBA_PTR_SET_VALUE(catalogUuid_, catalogUuid) };


    // databaseUuid Field Functions 
    bool hasDatabaseUuid() const { return this->databaseUuid_ != nullptr;};
    void deleteDatabaseUuid() { this->databaseUuid_ = nullptr;};
    inline string getDatabaseUuid() const { DARABONBA_PTR_GET_DEFAULT(databaseUuid_, "") };
    inline ListOneMetaSqlTemplatesRequest& setDatabaseUuid(string databaseUuid) { DARABONBA_PTR_SET_VALUE(databaseUuid_, databaseUuid) };


    // enableVectorSearch Field Functions 
    bool hasEnableVectorSearch() const { return this->enableVectorSearch_ != nullptr;};
    void deleteEnableVectorSearch() { this->enableVectorSearch_ = nullptr;};
    inline bool getEnableVectorSearch() const { DARABONBA_PTR_GET_DEFAULT(enableVectorSearch_, false) };
    inline ListOneMetaSqlTemplatesRequest& setEnableVectorSearch(bool enableVectorSearch) { DARABONBA_PTR_SET_VALUE(enableVectorSearch_, enableVectorSearch) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListOneMetaSqlTemplatesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOneMetaSqlTemplatesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListOneMetaSqlTemplatesRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListOneMetaSqlTemplatesRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline ListOneMetaSqlTemplatesRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The UUID of the associated catalog.
    shared_ptr<string> catalogUuid_ {};
    // The UUID of the associated database.
    shared_ptr<string> databaseUuid_ {};
    // Specifies whether to use semantic search.
    shared_ptr<bool> enableVectorSearch_ {};
    // The maximum number of entries to return in this response.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next query.
    shared_ptr<string> nextToken_ {};
    // The search keyword.
    // 
    // This parameter is required.
    shared_ptr<string> query_ {};
    // The SQL template tag.
    shared_ptr<string> tag_ {};
    // The UUIDs of knowledge instances. Separate multiple UUIDs with commas (,).
    shared_ptr<string> uuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
