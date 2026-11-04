// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFACEALLUSERGROUPANDDEVICEGROUPRELATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYFACEALLUSERGROUPANDDEVICEGROUPRELATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryFaceAllUserGroupAndDeviceGroupRelationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFaceAllUserGroupAndDeviceGroupRelationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFaceAllUserGroupAndDeviceGroupRelationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    QueryFaceAllUserGroupAndDeviceGroupRelationRequest() = default ;
    QueryFaceAllUserGroupAndDeviceGroupRelationRequest(const QueryFaceAllUserGroupAndDeviceGroupRelationRequest &) = default ;
    QueryFaceAllUserGroupAndDeviceGroupRelationRequest(QueryFaceAllUserGroupAndDeviceGroupRelationRequest &&) = default ;
    QueryFaceAllUserGroupAndDeviceGroupRelationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFaceAllUserGroupAndDeviceGroupRelationRequest() = default ;
    QueryFaceAllUserGroupAndDeviceGroupRelationRequest& operator=(const QueryFaceAllUserGroupAndDeviceGroupRelationRequest &) = default ;
    QueryFaceAllUserGroupAndDeviceGroupRelationRequest& operator=(QueryFaceAllUserGroupAndDeviceGroupRelationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isolationId_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr; };
    // isolationId Field Functions 
    bool hasIsolationId() const { return this->isolationId_ != nullptr;};
    void deleteIsolationId() { this->isolationId_ = nullptr;};
    inline string getIsolationId() const { DARABONBA_PTR_GET_DEFAULT(isolationId_, "") };
    inline QueryFaceAllUserGroupAndDeviceGroupRelationRequest& setIsolationId(string isolationId) { DARABONBA_PTR_SET_VALUE(isolationId_, isolationId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline QueryFaceAllUserGroupAndDeviceGroupRelationRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryFaceAllUserGroupAndDeviceGroupRelationRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
