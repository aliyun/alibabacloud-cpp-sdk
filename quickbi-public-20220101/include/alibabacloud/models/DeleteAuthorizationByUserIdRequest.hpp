// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAUTHORIZATIONBYUSERIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAUTHORIZATIONBYUSERIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class DeleteAuthorizationByUserIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAuthorizationByUserIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(QbiUserId, qbiUserId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAuthorizationByUserIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(QbiUserId, qbiUserId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    DeleteAuthorizationByUserIdRequest() = default ;
    DeleteAuthorizationByUserIdRequest(const DeleteAuthorizationByUserIdRequest &) = default ;
    DeleteAuthorizationByUserIdRequest(DeleteAuthorizationByUserIdRequest &&) = default ;
    DeleteAuthorizationByUserIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAuthorizationByUserIdRequest() = default ;
    DeleteAuthorizationByUserIdRequest& operator=(const DeleteAuthorizationByUserIdRequest &) = default ;
    DeleteAuthorizationByUserIdRequest& operator=(DeleteAuthorizationByUserIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->qbiUserId_ == nullptr
        && this->resourceId_ == nullptr && this->resourceType_ == nullptr; };
    // qbiUserId Field Functions 
    bool hasQbiUserId() const { return this->qbiUserId_ != nullptr;};
    void deleteQbiUserId() { this->qbiUserId_ = nullptr;};
    inline string getQbiUserId() const { DARABONBA_PTR_GET_DEFAULT(qbiUserId_, "") };
    inline DeleteAuthorizationByUserIdRequest& setQbiUserId(string qbiUserId) { DARABONBA_PTR_SET_VALUE(qbiUserId_, qbiUserId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DeleteAuthorizationByUserIdRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DeleteAuthorizationByUserIdRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The Quick BI user ID.
    // 
    // This parameter is required.
    shared_ptr<string> qbiUserId_ {};
    // The resource ID.
    // 
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    // The type of the resource. Valid values:
    // 
    // - dashboard: dashboard
    // - report: workbook
    // - dashboardOfflineQuery: self-service data retrieval
    // - cube: dataset
    // - datasource: data source
    // - screen: data dashboard
    // - ANALYSIS: ad hoc analysis
    // - dataForm: data entry form
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
