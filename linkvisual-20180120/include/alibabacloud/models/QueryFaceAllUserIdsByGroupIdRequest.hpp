// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFACEALLUSERIDSBYGROUPIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYFACEALLUSERIDSBYGROUPIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryFaceAllUserIdsByGroupIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFaceAllUserIdsByGroupIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFaceAllUserIdsByGroupIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    QueryFaceAllUserIdsByGroupIdRequest() = default ;
    QueryFaceAllUserIdsByGroupIdRequest(const QueryFaceAllUserIdsByGroupIdRequest &) = default ;
    QueryFaceAllUserIdsByGroupIdRequest(QueryFaceAllUserIdsByGroupIdRequest &&) = default ;
    QueryFaceAllUserIdsByGroupIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFaceAllUserIdsByGroupIdRequest() = default ;
    QueryFaceAllUserIdsByGroupIdRequest& operator=(const QueryFaceAllUserIdsByGroupIdRequest &) = default ;
    QueryFaceAllUserIdsByGroupIdRequest& operator=(QueryFaceAllUserIdsByGroupIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isolationId_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->userGroupId_ == nullptr; };
    // isolationId Field Functions 
    bool hasIsolationId() const { return this->isolationId_ != nullptr;};
    void deleteIsolationId() { this->isolationId_ = nullptr;};
    inline string getIsolationId() const { DARABONBA_PTR_GET_DEFAULT(isolationId_, "") };
    inline QueryFaceAllUserIdsByGroupIdRequest& setIsolationId(string isolationId) { DARABONBA_PTR_SET_VALUE(isolationId_, isolationId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline QueryFaceAllUserIdsByGroupIdRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryFaceAllUserIdsByGroupIdRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline QueryFaceAllUserIdsByGroupIdRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The isolation ID.
    // 
    // This parameter is required.
    shared_ptr<string> isolationId_ {};
    // The page number.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNo_ {};
    // The page size.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The user group ID.
    // 
    // This parameter is required.
    shared_ptr<string> userGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
