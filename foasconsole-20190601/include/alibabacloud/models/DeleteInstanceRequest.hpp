// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class DeleteInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteInstanceRequest, deleteInstanceRequest_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteInstanceRequest, deleteInstanceRequest_);
    };
    DeleteInstanceRequest() = default ;
    DeleteInstanceRequest(const DeleteInstanceRequest &) = default ;
    DeleteInstanceRequest(DeleteInstanceRequest &&) = default ;
    DeleteInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInstanceRequest() = default ;
    DeleteInstanceRequest& operator=(const DeleteInstanceRequest &) = default ;
    DeleteInstanceRequest& operator=(DeleteInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteInstanceRequestItem : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteInstanceRequestItem& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Region, region_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteInstanceRequestItem& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
      };
      DeleteInstanceRequestItem() = default ;
      DeleteInstanceRequestItem(const DeleteInstanceRequestItem &) = default ;
      DeleteInstanceRequestItem(DeleteInstanceRequestItem &&) = default ;
      DeleteInstanceRequestItem(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteInstanceRequestItem() = default ;
      DeleteInstanceRequestItem& operator=(const DeleteInstanceRequestItem &) = default ;
      DeleteInstanceRequestItem& operator=(DeleteInstanceRequestItem &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->region_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline DeleteInstanceRequestItem& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline DeleteInstanceRequestItem& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    protected:
      // This parameter is required.
      shared_ptr<string> instanceId_ {};
      // This parameter is required.
      shared_ptr<string> region_ {};
    };

    virtual bool empty() const override { return this->deleteInstanceRequest_ == nullptr; };
    // deleteInstanceRequest Field Functions 
    bool hasDeleteInstanceRequest() const { return this->deleteInstanceRequest_ != nullptr;};
    void deleteDeleteInstanceRequest() { this->deleteInstanceRequest_ = nullptr;};
    inline const DeleteInstanceRequest::DeleteInstanceRequestItem & getDeleteInstanceRequest() const { DARABONBA_PTR_GET_CONST(deleteInstanceRequest_, DeleteInstanceRequest::DeleteInstanceRequestItem) };
    inline DeleteInstanceRequest::DeleteInstanceRequestItem getDeleteInstanceRequest() { DARABONBA_PTR_GET(deleteInstanceRequest_, DeleteInstanceRequest::DeleteInstanceRequestItem) };
    inline DeleteInstanceRequest& setDeleteInstanceRequest(const DeleteInstanceRequest::DeleteInstanceRequestItem & deleteInstanceRequest) { DARABONBA_PTR_SET_VALUE(deleteInstanceRequest_, deleteInstanceRequest) };
    inline DeleteInstanceRequest& setDeleteInstanceRequest(DeleteInstanceRequest::DeleteInstanceRequestItem && deleteInstanceRequest) { DARABONBA_PTR_SET_RVALUE(deleteInstanceRequest_, deleteInstanceRequest) };


  protected:
    // This parameter is required.
    shared_ptr<DeleteInstanceRequest::DeleteInstanceRequestItem> deleteInstanceRequest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
