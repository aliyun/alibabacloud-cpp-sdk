// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERCEPTIONTARGETDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINTERCEPTIONTARGETDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetInterceptionTargetDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInterceptionTargetDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleTarget, ruleTarget_);
    };
    friend void from_json(const Darabonba::Json& j, GetInterceptionTargetDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleTarget, ruleTarget_);
    };
    GetInterceptionTargetDetailResponseBody() = default ;
    GetInterceptionTargetDetailResponseBody(const GetInterceptionTargetDetailResponseBody &) = default ;
    GetInterceptionTargetDetailResponseBody(GetInterceptionTargetDetailResponseBody &&) = default ;
    GetInterceptionTargetDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInterceptionTargetDetailResponseBody() = default ;
    GetInterceptionTargetDetailResponseBody& operator=(const GetInterceptionTargetDetailResponseBody &) = default ;
    GetInterceptionTargetDetailResponseBody& operator=(GetInterceptionTargetDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleTarget : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleTarget& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(ImageList, imageList_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(TagList, tagList_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetName, targetName_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, RuleTarget& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(ImageList, imageList_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(TagList, tagList_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      };
      RuleTarget() = default ;
      RuleTarget(const RuleTarget &) = default ;
      RuleTarget(RuleTarget &&) = default ;
      RuleTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleTarget() = default ;
      RuleTarget& operator=(const RuleTarget &) = default ;
      RuleTarget& operator=(RuleTarget &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appName_ == nullptr
        && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->imageList_ == nullptr && this->namespace_ == nullptr && this->tagList_ == nullptr
        && this->targetId_ == nullptr && this->targetName_ == nullptr && this->targetType_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline RuleTarget& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline RuleTarget& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline RuleTarget& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // imageList Field Functions 
      bool hasImageList() const { return this->imageList_ != nullptr;};
      void deleteImageList() { this->imageList_ = nullptr;};
      inline const vector<string> & getImageList() const { DARABONBA_PTR_GET_CONST(imageList_, vector<string>) };
      inline vector<string> getImageList() { DARABONBA_PTR_GET(imageList_, vector<string>) };
      inline RuleTarget& setImageList(const vector<string> & imageList) { DARABONBA_PTR_SET_VALUE(imageList_, imageList) };
      inline RuleTarget& setImageList(vector<string> && imageList) { DARABONBA_PTR_SET_RVALUE(imageList_, imageList) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline RuleTarget& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // tagList Field Functions 
      bool hasTagList() const { return this->tagList_ != nullptr;};
      void deleteTagList() { this->tagList_ = nullptr;};
      inline const vector<string> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<string>) };
      inline vector<string> getTagList() { DARABONBA_PTR_GET(tagList_, vector<string>) };
      inline RuleTarget& setTagList(const vector<string> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
      inline RuleTarget& setTagList(vector<string> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline int64_t getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, 0L) };
      inline RuleTarget& setTargetId(int64_t targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline RuleTarget& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline RuleTarget& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      // The name of the application to which the network object belongs.
      shared_ptr<string> appName_ {};
      // The ID of the container cluster.
      shared_ptr<string> clusterId_ {};
      // The name of the container cluster.
      shared_ptr<string> clusterName_ {};
      // An array that consists of the images of the network object.
      shared_ptr<vector<string>> imageList_ {};
      // The namespace.
      shared_ptr<string> namespace_ {};
      // An array that consists of the labels specified for the network object.
      shared_ptr<vector<string>> tagList_ {};
      // The ID of the network object.
      shared_ptr<int64_t> targetId_ {};
      // The name of the network object.
      shared_ptr<string> targetName_ {};
      // The type of the network object. Valid values:
      // 
      // *   **IMAGE**: image
      shared_ptr<string> targetType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->ruleTarget_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInterceptionTargetDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleTarget Field Functions 
    bool hasRuleTarget() const { return this->ruleTarget_ != nullptr;};
    void deleteRuleTarget() { this->ruleTarget_ = nullptr;};
    inline const GetInterceptionTargetDetailResponseBody::RuleTarget & getRuleTarget() const { DARABONBA_PTR_GET_CONST(ruleTarget_, GetInterceptionTargetDetailResponseBody::RuleTarget) };
    inline GetInterceptionTargetDetailResponseBody::RuleTarget getRuleTarget() { DARABONBA_PTR_GET(ruleTarget_, GetInterceptionTargetDetailResponseBody::RuleTarget) };
    inline GetInterceptionTargetDetailResponseBody& setRuleTarget(const GetInterceptionTargetDetailResponseBody::RuleTarget & ruleTarget) { DARABONBA_PTR_SET_VALUE(ruleTarget_, ruleTarget) };
    inline GetInterceptionTargetDetailResponseBody& setRuleTarget(GetInterceptionTargetDetailResponseBody::RuleTarget && ruleTarget) { DARABONBA_PTR_SET_RVALUE(ruleTarget_, ruleTarget) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The information about the network object.
    shared_ptr<GetInterceptionTargetDetailResponseBody::RuleTarget> ruleTarget_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
