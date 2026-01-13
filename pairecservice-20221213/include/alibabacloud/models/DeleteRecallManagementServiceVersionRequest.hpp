// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERECALLMANAGEMENTSERVICEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERECALLMANAGEMENTSERVICEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class DeleteRecallManagementServiceVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRecallManagementServiceVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRecallManagementServiceVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DeleteRecallManagementServiceVersionRequest() = default ;
    DeleteRecallManagementServiceVersionRequest(const DeleteRecallManagementServiceVersionRequest &) = default ;
    DeleteRecallManagementServiceVersionRequest(DeleteRecallManagementServiceVersionRequest &&) = default ;
    DeleteRecallManagementServiceVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRecallManagementServiceVersionRequest() = default ;
    DeleteRecallManagementServiceVersionRequest& operator=(const DeleteRecallManagementServiceVersionRequest &) = default ;
    DeleteRecallManagementServiceVersionRequest& operator=(DeleteRecallManagementServiceVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteRecallManagementServiceVersionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
