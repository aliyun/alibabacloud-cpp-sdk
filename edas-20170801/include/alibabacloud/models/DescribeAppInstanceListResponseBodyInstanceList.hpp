// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPINSTANCELISTRESPONSEBODYINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPINSTANCELISTRESPONSEBODYINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class DescribeAppInstanceListResponseBodyInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppInstanceListResponseBodyInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Canary, canary_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(NodeLabels, nodeLabels_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(PodRaw, podRaw_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppInstanceListResponseBodyInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Canary, canary_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(NodeLabels, nodeLabels_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(PodRaw, podRaw_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeAppInstanceListResponseBodyInstanceList() = default ;
    DescribeAppInstanceListResponseBodyInstanceList(const DescribeAppInstanceListResponseBodyInstanceList &) = default ;
    DescribeAppInstanceListResponseBodyInstanceList(DescribeAppInstanceListResponseBodyInstanceList &&) = default ;
    DescribeAppInstanceListResponseBodyInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppInstanceListResponseBodyInstanceList() = default ;
    DescribeAppInstanceListResponseBodyInstanceList& operator=(const DescribeAppInstanceListResponseBodyInstanceList &) = default ;
    DescribeAppInstanceListResponseBodyInstanceList& operator=(DescribeAppInstanceListResponseBodyInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->canary_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->nodeLabels_ == nullptr && return this->nodeName_ == nullptr
        && return this->podRaw_ == nullptr && return this->version_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeAppInstanceListResponseBodyInstanceList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // canary Field Functions 
    bool hasCanary() const { return this->canary_ != nullptr;};
    void deleteCanary() { this->canary_ = nullptr;};
    inline bool canary() const { DARABONBA_PTR_GET_DEFAULT(canary_, false) };
    inline DescribeAppInstanceListResponseBodyInstanceList& setCanary(bool canary) { DARABONBA_PTR_SET_VALUE(canary_, canary) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeAppInstanceListResponseBodyInstanceList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeAppInstanceListResponseBodyInstanceList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // nodeLabels Field Functions 
    bool hasNodeLabels() const { return this->nodeLabels_ != nullptr;};
    void deleteNodeLabels() { this->nodeLabels_ = nullptr;};
    inline string nodeLabels() const { DARABONBA_PTR_GET_DEFAULT(nodeLabels_, "") };
    inline DescribeAppInstanceListResponseBodyInstanceList& setNodeLabels(string nodeLabels) { DARABONBA_PTR_SET_VALUE(nodeLabels_, nodeLabels) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribeAppInstanceListResponseBodyInstanceList& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // podRaw Field Functions 
    bool hasPodRaw() const { return this->podRaw_ != nullptr;};
    void deletePodRaw() { this->podRaw_ = nullptr;};
    inline string podRaw() const { DARABONBA_PTR_GET_DEFAULT(podRaw_, "") };
    inline DescribeAppInstanceListResponseBodyInstanceList& setPodRaw(string podRaw) { DARABONBA_PTR_SET_VALUE(podRaw_, podRaw) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeAppInstanceListResponseBodyInstanceList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // Indicates whether the application was released in canary release mode.
    // 
    // *   `true`: The application was released in canary release mode.
    // *   `false`: The application was not released in canary release mode
    std::shared_ptr<bool> canary_ = nullptr;
    // The ID of the instance group to which the application is deployed.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the instance group to which the application is deployed.
    std::shared_ptr<string> groupName_ = nullptr;
    // The labels of the node. The value is a JSON string.
    std::shared_ptr<string> nodeLabels_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The information about the pod. The value is a JSON string.
    std::shared_ptr<string> podRaw_ = nullptr;
    // The deployment package version of the node.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
