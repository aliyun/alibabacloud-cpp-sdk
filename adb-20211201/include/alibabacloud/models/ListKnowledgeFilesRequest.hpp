// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKNOWLEDGEFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKNOWLEDGEFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListKnowledgeFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKnowledgeFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FileIds, fileIds_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, ListKnowledgeFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FileIds, fileIds_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    ListKnowledgeFilesRequest() = default ;
    ListKnowledgeFilesRequest(const ListKnowledgeFilesRequest &) = default ;
    ListKnowledgeFilesRequest(ListKnowledgeFilesRequest &&) = default ;
    ListKnowledgeFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKnowledgeFilesRequest() = default ;
    ListKnowledgeFilesRequest& operator=(const ListKnowledgeFilesRequest &) = default ;
    ListKnowledgeFilesRequest& operator=(ListKnowledgeFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->fileIds_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr && this->user_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ListKnowledgeFilesRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // fileIds Field Functions 
    bool hasFileIds() const { return this->fileIds_ != nullptr;};
    void deleteFileIds() { this->fileIds_ = nullptr;};
    inline string getFileIds() const { DARABONBA_PTR_GET_DEFAULT(fileIds_, "") };
    inline ListKnowledgeFilesRequest& setFileIds(string fileIds) { DARABONBA_PTR_SET_VALUE(fileIds_, fileIds) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline string getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, "") };
    inline ListKnowledgeFilesRequest& setPage(string page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListKnowledgeFilesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListKnowledgeFilesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline ListKnowledgeFilesRequest& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The ID of the AnalyticDB for MySQL instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The JSON string of the file ID array. A maximum of 200 positive integers are supported.
    shared_ptr<string> fileIds_ {};
    // The page number, starting from 1. If this parameter is not specified, Ray uses a default value of 1.
    shared_ptr<string> page_ {};
    // The number of entries per page. Valid values: 1 to 100. If this parameter is not specified, Ray uses a default value of 20.
    shared_ptr<string> pageSize_ {};
    // The processing status. Valid values:
    // 
    // - PENDING
    // - PROCESSING
    // - COMPLETED
    // - FAILED
    // - DUPLICATED
    // - SKIPPED
    shared_ptr<string> status_ {};
    // The stable ID of the authorized user. If this parameter is not specified, all files in the knowledge base can be queried.
    shared_ptr<string> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
