// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListPermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(database, database_);
      DARABONBA_PTR_TO_JSON(function, function_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(pageToken, pageToken_);
      DARABONBA_PTR_TO_JSON(principal, principal_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(table, table_);
      DARABONBA_PTR_TO_JSON(view, view_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(database, database_);
      DARABONBA_PTR_FROM_JSON(function, function_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(pageToken, pageToken_);
      DARABONBA_PTR_FROM_JSON(principal, principal_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(table, table_);
      DARABONBA_PTR_FROM_JSON(view, view_);
    };
    ListPermissionsRequest() = default ;
    ListPermissionsRequest(const ListPermissionsRequest &) = default ;
    ListPermissionsRequest(ListPermissionsRequest &&) = default ;
    ListPermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPermissionsRequest() = default ;
    ListPermissionsRequest& operator=(const ListPermissionsRequest &) = default ;
    ListPermissionsRequest& operator=(ListPermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->database_ == nullptr
        && this->function_ == nullptr && this->maxResults_ == nullptr && this->pageToken_ == nullptr && this->principal_ == nullptr && this->resourceType_ == nullptr
        && this->table_ == nullptr && this->view_ == nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline ListPermissionsRequest& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline string getFunction() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
    inline ListPermissionsRequest& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPermissionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // pageToken Field Functions 
    bool hasPageToken() const { return this->pageToken_ != nullptr;};
    void deletePageToken() { this->pageToken_ = nullptr;};
    inline string getPageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, "") };
    inline ListPermissionsRequest& setPageToken(string pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


    // principal Field Functions 
    bool hasPrincipal() const { return this->principal_ != nullptr;};
    void deletePrincipal() { this->principal_ = nullptr;};
    inline string getPrincipal() const { DARABONBA_PTR_GET_DEFAULT(principal_, "") };
    inline ListPermissionsRequest& setPrincipal(string principal) { DARABONBA_PTR_SET_VALUE(principal_, principal) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListPermissionsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline ListPermissionsRequest& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


    // view Field Functions 
    bool hasView() const { return this->view_ != nullptr;};
    void deleteView() { this->view_ = nullptr;};
    inline string getView() const { DARABONBA_PTR_GET_DEFAULT(view_, "") };
    inline ListPermissionsRequest& setView(string view) { DARABONBA_PTR_SET_VALUE(view_, view) };


  protected:
    shared_ptr<string> database_ {};
    shared_ptr<string> function_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> pageToken_ {};
    shared_ptr<string> principal_ {};
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    shared_ptr<string> table_ {};
    shared_ptr<string> view_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
