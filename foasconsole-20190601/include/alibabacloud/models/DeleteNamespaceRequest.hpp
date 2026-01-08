// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENAMESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENAMESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class DeleteNamespaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNamespaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteNamespaceRequest, deleteNamespaceRequest_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNamespaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteNamespaceRequest, deleteNamespaceRequest_);
    };
    DeleteNamespaceRequest() = default ;
    DeleteNamespaceRequest(const DeleteNamespaceRequest &) = default ;
    DeleteNamespaceRequest(DeleteNamespaceRequest &&) = default ;
    DeleteNamespaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNamespaceRequest() = default ;
    DeleteNamespaceRequest& operator=(const DeleteNamespaceRequest &) = default ;
    DeleteNamespaceRequest& operator=(DeleteNamespaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteNamespaceRequestItem : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteNamespaceRequestItem& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(Region, region_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteNamespaceRequestItem& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
      };
      DeleteNamespaceRequestItem() = default ;
      DeleteNamespaceRequestItem(const DeleteNamespaceRequestItem &) = default ;
      DeleteNamespaceRequestItem(DeleteNamespaceRequestItem &&) = default ;
      DeleteNamespaceRequestItem(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteNamespaceRequestItem() = default ;
      DeleteNamespaceRequestItem& operator=(const DeleteNamespaceRequestItem &) = default ;
      DeleteNamespaceRequestItem& operator=(DeleteNamespaceRequestItem &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->namespace_ == nullptr && this->region_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline DeleteNamespaceRequestItem& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline DeleteNamespaceRequestItem& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline DeleteNamespaceRequestItem& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    protected:
      // This parameter is required.
      shared_ptr<string> instanceId_ {};
      // This parameter is required.
      shared_ptr<string> namespace_ {};
      // This parameter is required.
      shared_ptr<string> region_ {};
    };

    virtual bool empty() const override { return this->deleteNamespaceRequest_ == nullptr; };
    // deleteNamespaceRequest Field Functions 
    bool hasDeleteNamespaceRequest() const { return this->deleteNamespaceRequest_ != nullptr;};
    void deleteDeleteNamespaceRequest() { this->deleteNamespaceRequest_ = nullptr;};
    inline const DeleteNamespaceRequest::DeleteNamespaceRequestItem & getDeleteNamespaceRequest() const { DARABONBA_PTR_GET_CONST(deleteNamespaceRequest_, DeleteNamespaceRequest::DeleteNamespaceRequestItem) };
    inline DeleteNamespaceRequest::DeleteNamespaceRequestItem getDeleteNamespaceRequest() { DARABONBA_PTR_GET(deleteNamespaceRequest_, DeleteNamespaceRequest::DeleteNamespaceRequestItem) };
    inline DeleteNamespaceRequest& setDeleteNamespaceRequest(const DeleteNamespaceRequest::DeleteNamespaceRequestItem & deleteNamespaceRequest) { DARABONBA_PTR_SET_VALUE(deleteNamespaceRequest_, deleteNamespaceRequest) };
    inline DeleteNamespaceRequest& setDeleteNamespaceRequest(DeleteNamespaceRequest::DeleteNamespaceRequestItem && deleteNamespaceRequest) { DARABONBA_PTR_SET_RVALUE(deleteNamespaceRequest_, deleteNamespaceRequest) };


  protected:
    // This parameter is required.
    shared_ptr<DeleteNamespaceRequest::DeleteNamespaceRequestItem> deleteNamespaceRequest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
