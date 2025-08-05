// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONINSTANCESDESTINATIONENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONINSTANCESDESTINATIONENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(EngineName, engineName_);
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint() = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint(const DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint &) = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint(DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint &&) = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint() = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint& operator=(const DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint &) = default ;
    DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint& operator=(DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->engineName_ != nullptr
        && this->IP_ != nullptr && this->instanceId_ != nullptr && this->instanceType_ != nullptr && this->port_ != nullptr && this->userName_ != nullptr; };
    // engineName Field Functions 
    bool hasEngineName() const { return this->engineName_ != nullptr;};
    void deleteEngineName() { this->engineName_ = nullptr;};
    inline string engineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeSynchronizationJobsResponseBodySynchronizationInstancesDestinationEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The database type of the destination instance.
    std::shared_ptr<string> engineName_ = nullptr;
    // The endpoint of the destination instance.
    std::shared_ptr<string> IP_ = nullptr;
    // The ID of the destination instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the destination instance.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The database service port of the destination instance.
    std::shared_ptr<string> port_ = nullptr;
    // The database account of the destination instance.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
