// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFACEUSERGROUPANDDEVICEGROUPRELATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYFACEUSERGROUPANDDEVICEGROUPRELATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryFaceUserGroupAndDeviceGroupRelationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFaceUserGroupAndDeviceGroupRelationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ControlId, controlId_);
      DARABONBA_PTR_TO_JSON(IsolationId, isolationId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFaceUserGroupAndDeviceGroupRelationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlId, controlId_);
      DARABONBA_PTR_FROM_JSON(IsolationId, isolationId_);
    };
    QueryFaceUserGroupAndDeviceGroupRelationRequest() = default ;
    QueryFaceUserGroupAndDeviceGroupRelationRequest(const QueryFaceUserGroupAndDeviceGroupRelationRequest &) = default ;
    QueryFaceUserGroupAndDeviceGroupRelationRequest(QueryFaceUserGroupAndDeviceGroupRelationRequest &&) = default ;
    QueryFaceUserGroupAndDeviceGroupRelationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFaceUserGroupAndDeviceGroupRelationRequest() = default ;
    QueryFaceUserGroupAndDeviceGroupRelationRequest& operator=(const QueryFaceUserGroupAndDeviceGroupRelationRequest &) = default ;
    QueryFaceUserGroupAndDeviceGroupRelationRequest& operator=(QueryFaceUserGroupAndDeviceGroupRelationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->controlId_ == nullptr
        && this->isolationId_ == nullptr; };
    // controlId Field Functions 
    bool hasControlId() const { return this->controlId_ != nullptr;};
    void deleteControlId() { this->controlId_ = nullptr;};
    inline string getControlId() const { DARABONBA_PTR_GET_DEFAULT(controlId_, "") };
    inline QueryFaceUserGroupAndDeviceGroupRelationRequest& setControlId(string controlId) { DARABONBA_PTR_SET_VALUE(controlId_, controlId) };


    // isolationId Field Functions 
    bool hasIsolationId() const { return this->isolationId_ != nullptr;};
    void deleteIsolationId() { this->isolationId_ = nullptr;};
    inline string getIsolationId() const { DARABONBA_PTR_GET_DEFAULT(isolationId_, "") };
    inline QueryFaceUserGroupAndDeviceGroupRelationRequest& setIsolationId(string isolationId) { DARABONBA_PTR_SET_VALUE(isolationId_, isolationId) };


  protected:
    // The control ID for the face synchronization relationship between user groups and device groups.
    // 
    // This parameter is required.
    shared_ptr<string> controlId_ {};
    // The isolation ID.
    // 
    // This parameter is required.
    shared_ptr<string> isolationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
