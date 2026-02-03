// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASEDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASEDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListDatabaseDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabaseDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(databaseNamePattern, databaseNamePattern_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(pageToken, pageToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabaseDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(databaseNamePattern, databaseNamePattern_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(pageToken, pageToken_);
    };
    ListDatabaseDetailsRequest() = default ;
    ListDatabaseDetailsRequest(const ListDatabaseDetailsRequest &) = default ;
    ListDatabaseDetailsRequest(ListDatabaseDetailsRequest &&) = default ;
    ListDatabaseDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabaseDetailsRequest() = default ;
    ListDatabaseDetailsRequest& operator=(const ListDatabaseDetailsRequest &) = default ;
    ListDatabaseDetailsRequest& operator=(ListDatabaseDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseNamePattern_ == nullptr
        && this->maxResults_ == nullptr && this->pageToken_ == nullptr; };
    // databaseNamePattern Field Functions 
    bool hasDatabaseNamePattern() const { return this->databaseNamePattern_ != nullptr;};
    void deleteDatabaseNamePattern() { this->databaseNamePattern_ = nullptr;};
    inline string getDatabaseNamePattern() const { DARABONBA_PTR_GET_DEFAULT(databaseNamePattern_, "") };
    inline ListDatabaseDetailsRequest& setDatabaseNamePattern(string databaseNamePattern) { DARABONBA_PTR_SET_VALUE(databaseNamePattern_, databaseNamePattern) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDatabaseDetailsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // pageToken Field Functions 
    bool hasPageToken() const { return this->pageToken_ != nullptr;};
    void deletePageToken() { this->pageToken_ = nullptr;};
    inline string getPageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, "") };
    inline ListDatabaseDetailsRequest& setPageToken(string pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


  protected:
    shared_ptr<string> databaseNamePattern_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> pageToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
