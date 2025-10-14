// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHENSINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHENSINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class AttachEnsInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachEnsInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Scripts, scripts_);
    };
    friend void from_json(const Darabonba::Json& j, AttachEnsInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Scripts, scripts_);
    };
    AttachEnsInstancesRequest() = default ;
    AttachEnsInstancesRequest(const AttachEnsInstancesRequest &) = default ;
    AttachEnsInstancesRequest(AttachEnsInstancesRequest &&) = default ;
    AttachEnsInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachEnsInstancesRequest() = default ;
    AttachEnsInstancesRequest& operator=(const AttachEnsInstancesRequest &) = default ;
    AttachEnsInstancesRequest& operator=(AttachEnsInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->scripts_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AttachEnsInstancesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scripts Field Functions 
    bool hasScripts() const { return this->scripts_ != nullptr;};
    void deleteScripts() { this->scripts_ = nullptr;};
    inline string scripts() const { DARABONBA_PTR_GET_DEFAULT(scripts_, "") };
    inline AttachEnsInstancesRequest& setScripts(string scripts) { DARABONBA_PTR_SET_VALUE(scripts_, scripts) };


  protected:
    // The ID of the instance. You can specify only one instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The command that you want to execute on the instance. The command must be encoded in Base64 or UTF-8.
    // 
    // This parameter is required.
    std::shared_ptr<string> scripts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
