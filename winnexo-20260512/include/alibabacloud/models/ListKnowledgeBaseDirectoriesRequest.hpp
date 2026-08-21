// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASEDIRECTORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASEDIRECTORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListKnowledgeBaseDirectoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKnowledgeBaseDirectoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(sortField, sortField_);
      DARABONBA_PTR_TO_JSON(sortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListKnowledgeBaseDirectoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(sortField, sortField_);
      DARABONBA_PTR_FROM_JSON(sortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListKnowledgeBaseDirectoriesRequest() = default ;
    ListKnowledgeBaseDirectoriesRequest(const ListKnowledgeBaseDirectoriesRequest &) = default ;
    ListKnowledgeBaseDirectoriesRequest(ListKnowledgeBaseDirectoriesRequest &&) = default ;
    ListKnowledgeBaseDirectoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKnowledgeBaseDirectoriesRequest() = default ;
    ListKnowledgeBaseDirectoriesRequest& operator=(const ListKnowledgeBaseDirectoriesRequest &) = default ;
    ListKnowledgeBaseDirectoriesRequest& operator=(ListKnowledgeBaseDirectoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->sortField_ == nullptr && this->sortOrder_ == nullptr && this->tenantId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline ListKnowledgeBaseDirectoriesRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // sortField Field Functions 
    bool hasSortField() const { return this->sortField_ != nullptr;};
    void deleteSortField() { this->sortField_ = nullptr;};
    inline string getSortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
    inline ListKnowledgeBaseDirectoriesRequest& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListKnowledgeBaseDirectoriesRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListKnowledgeBaseDirectoriesRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The directory ID.
    shared_ptr<string> directoryId_ {};
    // The field by which the results are sorted. Valid values:
    // 
    // - event_time: event creation time
    // - event_execute_start_time: event execution time
    // - event_execute_finish_time: event completion time
    shared_ptr<string> sortField_ {};
    // The sort order. This parameter takes effect only when sortBy is specified. Valid values: ASC, DESC (case-insensitive).
    shared_ptr<string> sortOrder_ {};
    // The tenant ID. This is a common parameter. You can pass it explicitly by using --tenant-id in winnexo-cli.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
