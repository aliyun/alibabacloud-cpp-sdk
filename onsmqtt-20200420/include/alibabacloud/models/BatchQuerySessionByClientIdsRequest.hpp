// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYSESSIONBYCLIENTIDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYSESSIONBYCLIENTIDSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class BatchQuerySessionByClientIdsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQuerySessionByClientIdsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIdList, clientIdList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQuerySessionByClientIdsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIdList, clientIdList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    BatchQuerySessionByClientIdsRequest() = default ;
    BatchQuerySessionByClientIdsRequest(const BatchQuerySessionByClientIdsRequest &) = default ;
    BatchQuerySessionByClientIdsRequest(BatchQuerySessionByClientIdsRequest &&) = default ;
    BatchQuerySessionByClientIdsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQuerySessionByClientIdsRequest() = default ;
    BatchQuerySessionByClientIdsRequest& operator=(const BatchQuerySessionByClientIdsRequest &) = default ;
    BatchQuerySessionByClientIdsRequest& operator=(BatchQuerySessionByClientIdsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientIdList_ == nullptr
        && this->instanceId_ == nullptr; };
    // clientIdList Field Functions 
    bool hasClientIdList() const { return this->clientIdList_ != nullptr;};
    void deleteClientIdList() { this->clientIdList_ = nullptr;};
    inline const vector<string> & getClientIdList() const { DARABONBA_PTR_GET_CONST(clientIdList_, vector<string>) };
    inline vector<string> getClientIdList() { DARABONBA_PTR_GET(clientIdList_, vector<string>) };
    inline BatchQuerySessionByClientIdsRequest& setClientIdList(const vector<string> & clientIdList) { DARABONBA_PTR_SET_VALUE(clientIdList_, clientIdList) };
    inline BatchQuerySessionByClientIdsRequest& setClientIdList(vector<string> && clientIdList) { DARABONBA_PTR_SET_RVALUE(clientIdList_, clientIdList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BatchQuerySessionByClientIdsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The list of clients.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> clientIdList_ {};
    // The ID of the ApsaraMQ for MQTT instance. The ID must match the actual instance ID used by the client. You can obtain the ID on the **Instance Details** page in the [console](https://mqtt.console.aliyun.com).
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
