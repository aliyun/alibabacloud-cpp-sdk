// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVERIDEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVERIDEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetServerIdeInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServerIdeInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetServerIdeInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetServerIdeInstanceRequest() = default ;
    GetServerIdeInstanceRequest(const GetServerIdeInstanceRequest &) = default ;
    GetServerIdeInstanceRequest(GetServerIdeInstanceRequest &&) = default ;
    GetServerIdeInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServerIdeInstanceRequest() = default ;
    GetServerIdeInstanceRequest& operator=(const GetServerIdeInstanceRequest &) = default ;
    GetServerIdeInstanceRequest& operator=(GetServerIdeInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetServerIdeInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The personal development environment instance ID. You can call ListServerIdeInstances to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
