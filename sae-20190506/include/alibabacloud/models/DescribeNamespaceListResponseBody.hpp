// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeNamespaceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespaceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespaceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeNamespaceListResponseBody() = default ;
    DescribeNamespaceListResponseBody(const DescribeNamespaceListResponseBody &) = default ;
    DescribeNamespaceListResponseBody(DescribeNamespaceListResponseBody &&) = default ;
    DescribeNamespaceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespaceListResponseBody() = default ;
    DescribeNamespaceListResponseBody& operator=(const DescribeNamespaceListResponseBody &) = default ;
    DescribeNamespaceListResponseBody& operator=(DescribeNamespaceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentInstall, agentInstall_);
        DARABONBA_PTR_TO_JSON(Current, current_);
        DARABONBA_PTR_TO_JSON(Custom, custom_);
        DARABONBA_PTR_TO_JSON(HybridCloudEnable, hybridCloudEnable_);
        DARABONBA_PTR_TO_JSON(NameSpaceShortId, nameSpaceShortId_);
        DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentInstall, agentInstall_);
        DARABONBA_PTR_FROM_JSON(Current, current_);
        DARABONBA_PTR_FROM_JSON(Custom, custom_);
        DARABONBA_PTR_FROM_JSON(HybridCloudEnable, hybridCloudEnable_);
        DARABONBA_PTR_FROM_JSON(NameSpaceShortId, nameSpaceShortId_);
        DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentInstall_ == nullptr
        && this->current_ == nullptr && this->custom_ == nullptr && this->hybridCloudEnable_ == nullptr && this->nameSpaceShortId_ == nullptr && this->namespaceId_ == nullptr
        && this->namespaceName_ == nullptr && this->regionId_ == nullptr && this->securityGroupId_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
      // agentInstall Field Functions 
      bool hasAgentInstall() const { return this->agentInstall_ != nullptr;};
      void deleteAgentInstall() { this->agentInstall_ = nullptr;};
      inline string getAgentInstall() const { DARABONBA_PTR_GET_DEFAULT(agentInstall_, "") };
      inline Data& setAgentInstall(string agentInstall) { DARABONBA_PTR_SET_VALUE(agentInstall_, agentInstall) };


      // current Field Functions 
      bool hasCurrent() const { return this->current_ != nullptr;};
      void deleteCurrent() { this->current_ = nullptr;};
      inline bool getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, false) };
      inline Data& setCurrent(bool current) { DARABONBA_PTR_SET_VALUE(current_, current) };


      // custom Field Functions 
      bool hasCustom() const { return this->custom_ != nullptr;};
      void deleteCustom() { this->custom_ = nullptr;};
      inline bool getCustom() const { DARABONBA_PTR_GET_DEFAULT(custom_, false) };
      inline Data& setCustom(bool custom) { DARABONBA_PTR_SET_VALUE(custom_, custom) };


      // hybridCloudEnable Field Functions 
      bool hasHybridCloudEnable() const { return this->hybridCloudEnable_ != nullptr;};
      void deleteHybridCloudEnable() { this->hybridCloudEnable_ = nullptr;};
      inline bool getHybridCloudEnable() const { DARABONBA_PTR_GET_DEFAULT(hybridCloudEnable_, false) };
      inline Data& setHybridCloudEnable(bool hybridCloudEnable) { DARABONBA_PTR_SET_VALUE(hybridCloudEnable_, hybridCloudEnable) };


      // nameSpaceShortId Field Functions 
      bool hasNameSpaceShortId() const { return this->nameSpaceShortId_ != nullptr;};
      void deleteNameSpaceShortId() { this->nameSpaceShortId_ = nullptr;};
      inline string getNameSpaceShortId() const { DARABONBA_PTR_GET_DEFAULT(nameSpaceShortId_, "") };
      inline Data& setNameSpaceShortId(string nameSpaceShortId) { DARABONBA_PTR_SET_VALUE(nameSpaceShortId_, nameSpaceShortId) };


      // namespaceId Field Functions 
      bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
      void deleteNamespaceId() { this->namespaceId_ = nullptr;};
      inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
      inline Data& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


      // namespaceName Field Functions 
      bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
      void deleteNamespaceName() { this->namespaceName_ = nullptr;};
      inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
      inline Data& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline Data& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline Data& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The command that was run to install the agent.
      shared_ptr<string> agentInstall_ {};
      // This parameter is no longer valid.
      shared_ptr<bool> current_ {};
      // Indicates whether custom namespaces are returned. Valid values:
      // 
      // *   **true**: Custom namespaces are returned.
      // *   **false**: Custom namespaces are not returned.
      shared_ptr<bool> custom_ {};
      // Indicates whether hybrid cloud namespaces are excluded. Valid values:
      // 
      // *   **true**: Hybrid cloud namespaces are excluded.
      // *   **false**: Hybrid cloud namespaces are included.
      shared_ptr<bool> hybridCloudEnable_ {};
      // The short ID of the namespace.
      shared_ptr<string> nameSpaceShortId_ {};
      // The ID of the namespace.
      shared_ptr<string> namespaceId_ {};
      // The name of the namespace.
      shared_ptr<string> namespaceName_ {};
      // The region to which the namespace belongs.
      shared_ptr<string> regionId_ {};
      // The ID of the security group.
      shared_ptr<string> securityGroupId_ {};
      // The ID of the vSwitch.
      shared_ptr<string> vSwitchId_ {};
      // The ID of the virtual private cloud (VPC).
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeNamespaceListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeNamespaceListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeNamespaceListResponseBody::Data>) };
    inline vector<DescribeNamespaceListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeNamespaceListResponseBody::Data>) };
    inline DescribeNamespaceListResponseBody& setData(const vector<DescribeNamespaceListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeNamespaceListResponseBody& setData(vector<DescribeNamespaceListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeNamespaceListResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeNamespaceListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNamespaceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeNamespaceListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeNamespaceListResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: The call was successful.
    // *   **3xx**: The call was redirected.
    // *   **4xx**: The call failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The list of namespaces.
    shared_ptr<vector<DescribeNamespaceListResponseBody::Data>> data_ {};
    // The error code. Valid values:
    // 
    // *   If the call is successful, the **ErrorCode** parameter is not returned.
    // *   If the call fails, the **ErrorCode** parameter is returned. For more information, see the **Error codes** section in this topic.
    shared_ptr<string> errorCode_ {};
    // The returned message. Valid values:
    // 
    // *   success: If the call is successful, **success** is returned.
    // *   An error code: If the call fails, an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the list of namespaces was queried. Valid values:
    // 
    // *   **true**: The list was queried.
    // *   **false**: The list failed to be queried.
    shared_ptr<bool> success_ {};
    // The trace ID that is used to query the details of the request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
