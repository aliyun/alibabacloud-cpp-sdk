// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERSFORDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERSFORDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListAuthorizedUsersForDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedUsersForDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedUsersForDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListAuthorizedUsersForDatabaseRequest() = default ;
    ListAuthorizedUsersForDatabaseRequest(const ListAuthorizedUsersForDatabaseRequest &) = default ;
    ListAuthorizedUsersForDatabaseRequest(ListAuthorizedUsersForDatabaseRequest &&) = default ;
    ListAuthorizedUsersForDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedUsersForDatabaseRequest() = default ;
    ListAuthorizedUsersForDatabaseRequest& operator=(const ListAuthorizedUsersForDatabaseRequest &) = default ;
    ListAuthorizedUsersForDatabaseRequest& operator=(ListAuthorizedUsersForDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbId_ != nullptr
        && this->logic_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->searchKey_ != nullptr && this->tid_ != nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline string dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
    inline ListAuthorizedUsersForDatabaseRequest& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline ListAuthorizedUsersForDatabaseRequest& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListAuthorizedUsersForDatabaseRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListAuthorizedUsersForDatabaseRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string searchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline ListAuthorizedUsersForDatabaseRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListAuthorizedUsersForDatabaseRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dbId_ = nullptr;
    std::shared_ptr<bool> logic_ = nullptr;
    std::shared_ptr<string> pageNumber_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<string> searchKey_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
