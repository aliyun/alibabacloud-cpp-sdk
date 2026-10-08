// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPINSTANCELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPINSTANCELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class DescribeAppInstanceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppInstanceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppInstanceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAppInstanceListResponseBody() = default ;
    DescribeAppInstanceListResponseBody(const DescribeAppInstanceListResponseBody &) = default ;
    DescribeAppInstanceListResponseBody(DescribeAppInstanceListResponseBody &&) = default ;
    DescribeAppInstanceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppInstanceListResponseBody() = default ;
    DescribeAppInstanceListResponseBody& operator=(const DescribeAppInstanceListResponseBody &) = default ;
    DescribeAppInstanceListResponseBody& operator=(DescribeAppInstanceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(Canary, canary_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(NodeLabels, nodeLabels_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(PodRaw, podRaw_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(Canary, canary_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(NodeLabels, nodeLabels_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(PodRaw, podRaw_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      InstanceList() = default ;
      InstanceList(const InstanceList &) = default ;
      InstanceList(InstanceList &&) = default ;
      InstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceList() = default ;
      InstanceList& operator=(const InstanceList &) = default ;
      InstanceList& operator=(InstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->canary_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->nodeLabels_ == nullptr && this->nodeName_ == nullptr
        && this->podRaw_ == nullptr && this->version_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline InstanceList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // canary Field Functions 
      bool hasCanary() const { return this->canary_ != nullptr;};
      void deleteCanary() { this->canary_ = nullptr;};
      inline bool getCanary() const { DARABONBA_PTR_GET_DEFAULT(canary_, false) };
      inline InstanceList& setCanary(bool canary) { DARABONBA_PTR_SET_VALUE(canary_, canary) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline InstanceList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline InstanceList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // nodeLabels Field Functions 
      bool hasNodeLabels() const { return this->nodeLabels_ != nullptr;};
      void deleteNodeLabels() { this->nodeLabels_ = nullptr;};
      inline string getNodeLabels() const { DARABONBA_PTR_GET_DEFAULT(nodeLabels_, "") };
      inline InstanceList& setNodeLabels(string nodeLabels) { DARABONBA_PTR_SET_VALUE(nodeLabels_, nodeLabels) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline InstanceList& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // podRaw Field Functions 
      bool hasPodRaw() const { return this->podRaw_ != nullptr;};
      void deletePodRaw() { this->podRaw_ = nullptr;};
      inline string getPodRaw() const { DARABONBA_PTR_GET_DEFAULT(podRaw_, "") };
      inline InstanceList& setPodRaw(string podRaw) { DARABONBA_PTR_SET_VALUE(podRaw_, podRaw) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline InstanceList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The ID of the application.
      shared_ptr<string> appId_ {};
      // Indicates whether the application was released in canary release mode.
      // 
      // - `true`: The application was released in canary release mode.
      // 
      // - `false`: The application was not released in canary release mode
      shared_ptr<bool> canary_ {};
      // The ID of the instance group to which the application is deployed.
      shared_ptr<string> groupId_ {};
      // The name of the instance group to which the application is deployed.
      shared_ptr<string> groupName_ {};
      // The labels of the node. The value is a JSON string.
      shared_ptr<string> nodeLabels_ {};
      // The name of the node.
      shared_ptr<string> nodeName_ {};
      // The information about the pod. The value is a JSON string.
      shared_ptr<string> podRaw_ {};
      // The deployment package version of the node.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->instanceList_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeAppInstanceListResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<DescribeAppInstanceListResponseBody::InstanceList> & getInstanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<DescribeAppInstanceListResponseBody::InstanceList>) };
    inline vector<DescribeAppInstanceListResponseBody::InstanceList> getInstanceList() { DARABONBA_PTR_GET(instanceList_, vector<DescribeAppInstanceListResponseBody::InstanceList>) };
    inline DescribeAppInstanceListResponseBody& setInstanceList(const vector<DescribeAppInstanceListResponseBody::InstanceList> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline DescribeAppInstanceListResponseBody& setInstanceList(vector<DescribeAppInstanceListResponseBody::InstanceList> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAppInstanceListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppInstanceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The application instances.
    shared_ptr<vector<DescribeAppInstanceListResponseBody::InstanceList>> instanceList_ {};
    // The message that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
