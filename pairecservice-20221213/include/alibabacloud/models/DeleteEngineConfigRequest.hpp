// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEENGINECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEENGINECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class DeleteEngineConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEngineConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteAll, deleteAll_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEngineConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteAll, deleteAll_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DeleteEngineConfigRequest() = default ;
    DeleteEngineConfigRequest(const DeleteEngineConfigRequest &) = default ;
    DeleteEngineConfigRequest(DeleteEngineConfigRequest &&) = default ;
    DeleteEngineConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEngineConfigRequest() = default ;
    DeleteEngineConfigRequest& operator=(const DeleteEngineConfigRequest &) = default ;
    DeleteEngineConfigRequest& operator=(DeleteEngineConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteAll_ == nullptr
        && this->instanceId_ == nullptr; };
    // deleteAll Field Functions 
    bool hasDeleteAll() const { return this->deleteAll_ != nullptr;};
    void deleteDeleteAll() { this->deleteAll_ = nullptr;};
    inline bool getDeleteAll() const { DARABONBA_PTR_GET_DEFAULT(deleteAll_, false) };
    inline DeleteEngineConfigRequest& setDeleteAll(bool deleteAll) { DARABONBA_PTR_SET_VALUE(deleteAll_, deleteAll) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteEngineConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // Specifies whether to delete all engine configurations with the same name.
    shared_ptr<bool> deleteAll_ {};
    // The instance ID. For information about how to obtain the instance ID, see [ListInstances](https://help.aliyun.com/document_detail/2411819.html).
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
