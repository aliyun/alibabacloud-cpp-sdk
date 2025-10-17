// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSTATUSRESPONSEBODYSOURCEENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSTATUSRESPONSEBODYSOURCEENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSynchronizationJobStatusResponseBodySourceEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSynchronizationJobStatusResponseBodySourceEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(EngineName, engineName_);
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSynchronizationJobStatusResponseBodySourceEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DescribeSynchronizationJobStatusResponseBodySourceEndpoint() = default ;
    DescribeSynchronizationJobStatusResponseBodySourceEndpoint(const DescribeSynchronizationJobStatusResponseBodySourceEndpoint &) = default ;
    DescribeSynchronizationJobStatusResponseBodySourceEndpoint(DescribeSynchronizationJobStatusResponseBodySourceEndpoint &&) = default ;
    DescribeSynchronizationJobStatusResponseBodySourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSynchronizationJobStatusResponseBodySourceEndpoint() = default ;
    DescribeSynchronizationJobStatusResponseBodySourceEndpoint& operator=(const DescribeSynchronizationJobStatusResponseBodySourceEndpoint &) = default ;
    DescribeSynchronizationJobStatusResponseBodySourceEndpoint& operator=(DescribeSynchronizationJobStatusResponseBodySourceEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->engineName_ == nullptr
        && return this->IP_ == nullptr && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr && return this->port_ == nullptr && return this->userName_ == nullptr; };
    // engineName Field Functions 
    bool hasEngineName() const { return this->engineName_ != nullptr;};
    void deleteEngineName() { this->engineName_ = nullptr;};
    inline string engineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
    inline DescribeSynchronizationJobStatusResponseBodySourceEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline DescribeSynchronizationJobStatusResponseBodySourceEndpoint& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSynchronizationJobStatusResponseBodySourceEndpoint& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeSynchronizationJobStatusResponseBodySourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeSynchronizationJobStatusResponseBodySourceEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeSynchronizationJobStatusResponseBodySourceEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The database type of the source instance.
    std::shared_ptr<string> engineName_ = nullptr;
    // The endpoint of the source instance.
    std::shared_ptr<string> IP_ = nullptr;
    // The ID of the source instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the source instance.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The database service port of the source instance.
    std::shared_ptr<string> port_ = nullptr;
    // The database account of the source instance.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
