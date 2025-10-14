// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVCIESCHEDULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVCIESCHEDULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeServcieScheduleResponseBodyPodAbstractInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeServcieScheduleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServcieScheduleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceIp, instanceIp_);
      DARABONBA_PTR_TO_JSON(InstancePort, instancePort_);
      DARABONBA_PTR_TO_JSON(PodAbstractInfo, podAbstractInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestRepeated, requestRepeated_);
      DARABONBA_PTR_TO_JSON(TcpPorts, tcpPorts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServcieScheduleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceIp, instanceIp_);
      DARABONBA_PTR_FROM_JSON(InstancePort, instancePort_);
      DARABONBA_PTR_FROM_JSON(PodAbstractInfo, podAbstractInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestRepeated, requestRepeated_);
      DARABONBA_PTR_FROM_JSON(TcpPorts, tcpPorts_);
    };
    DescribeServcieScheduleResponseBody() = default ;
    DescribeServcieScheduleResponseBody(const DescribeServcieScheduleResponseBody &) = default ;
    DescribeServcieScheduleResponseBody(DescribeServcieScheduleResponseBody &&) = default ;
    DescribeServcieScheduleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServcieScheduleResponseBody() = default ;
    DescribeServcieScheduleResponseBody& operator=(const DescribeServcieScheduleResponseBody &) = default ;
    DescribeServcieScheduleResponseBody& operator=(DescribeServcieScheduleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->index_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceIp_ == nullptr && return this->instancePort_ == nullptr && return this->podAbstractInfo_ == nullptr && return this->requestId_ == nullptr
        && return this->requestRepeated_ == nullptr && return this->tcpPorts_ == nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline DescribeServcieScheduleResponseBody& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeServcieScheduleResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceIp Field Functions 
    bool hasInstanceIp() const { return this->instanceIp_ != nullptr;};
    void deleteInstanceIp() { this->instanceIp_ = nullptr;};
    inline string instanceIp() const { DARABONBA_PTR_GET_DEFAULT(instanceIp_, "") };
    inline DescribeServcieScheduleResponseBody& setInstanceIp(string instanceIp) { DARABONBA_PTR_SET_VALUE(instanceIp_, instanceIp) };


    // instancePort Field Functions 
    bool hasInstancePort() const { return this->instancePort_ != nullptr;};
    void deleteInstancePort() { this->instancePort_ = nullptr;};
    inline int32_t instancePort() const { DARABONBA_PTR_GET_DEFAULT(instancePort_, 0) };
    inline DescribeServcieScheduleResponseBody& setInstancePort(int32_t instancePort) { DARABONBA_PTR_SET_VALUE(instancePort_, instancePort) };


    // podAbstractInfo Field Functions 
    bool hasPodAbstractInfo() const { return this->podAbstractInfo_ != nullptr;};
    void deletePodAbstractInfo() { this->podAbstractInfo_ = nullptr;};
    inline const DescribeServcieScheduleResponseBodyPodAbstractInfo & podAbstractInfo() const { DARABONBA_PTR_GET_CONST(podAbstractInfo_, DescribeServcieScheduleResponseBodyPodAbstractInfo) };
    inline DescribeServcieScheduleResponseBodyPodAbstractInfo podAbstractInfo() { DARABONBA_PTR_GET(podAbstractInfo_, DescribeServcieScheduleResponseBodyPodAbstractInfo) };
    inline DescribeServcieScheduleResponseBody& setPodAbstractInfo(const DescribeServcieScheduleResponseBodyPodAbstractInfo & podAbstractInfo) { DARABONBA_PTR_SET_VALUE(podAbstractInfo_, podAbstractInfo) };
    inline DescribeServcieScheduleResponseBody& setPodAbstractInfo(DescribeServcieScheduleResponseBodyPodAbstractInfo && podAbstractInfo) { DARABONBA_PTR_SET_RVALUE(podAbstractInfo_, podAbstractInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServcieScheduleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestRepeated Field Functions 
    bool hasRequestRepeated() const { return this->requestRepeated_ != nullptr;};
    void deleteRequestRepeated() { this->requestRepeated_ = nullptr;};
    inline bool requestRepeated() const { DARABONBA_PTR_GET_DEFAULT(requestRepeated_, false) };
    inline DescribeServcieScheduleResponseBody& setRequestRepeated(bool requestRepeated) { DARABONBA_PTR_SET_VALUE(requestRepeated_, requestRepeated) };


    // tcpPorts Field Functions 
    bool hasTcpPorts() const { return this->tcpPorts_ != nullptr;};
    void deleteTcpPorts() { this->tcpPorts_ = nullptr;};
    inline string tcpPorts() const { DARABONBA_PTR_GET_DEFAULT(tcpPorts_, "") };
    inline DescribeServcieScheduleResponseBody& setTcpPorts(string tcpPorts) { DARABONBA_PTR_SET_VALUE(tcpPorts_, tcpPorts) };


  protected:
    // The index number of the scheduled virtual device (pod).
    std::shared_ptr<int32_t> index_ = nullptr;
    // The ID of the scheduled instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the scheduled instance.
    std::shared_ptr<string> instanceIp_ = nullptr;
    // The start port of the scheduled instance.
    std::shared_ptr<int32_t> instancePort_ = nullptr;
    // The summary information about the scheduled virtual device.
    std::shared_ptr<DescribeServcieScheduleResponseBodyPodAbstractInfo> podAbstractInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is repeated.
    std::shared_ptr<bool> requestRepeated_ = nullptr;
    // The TCP port range of the scheduled instance or container. The value is in the ${from}-$-{to} format. Example: 80-88.
    std::shared_ptr<string> tcpPorts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
