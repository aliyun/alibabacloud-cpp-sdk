// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DeleteInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
    };
    DeleteInstancesRequest() = default ;
    DeleteInstancesRequest(const DeleteInstancesRequest &) = default ;
    DeleteInstancesRequest(DeleteInstancesRequest &&) = default ;
    DeleteInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInstancesRequest() = default ;
    DeleteInstancesRequest& operator=(const DeleteInstancesRequest &) = default ;
    DeleteInstancesRequest& operator=(DeleteInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->instanceIds_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteInstancesRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string instanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline DeleteInstancesRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the instance to be deleted.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
