// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTERCEPTIONTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTERCEPTIONTARGETREQUEST_HPP_
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
  class CreateInterceptionTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInterceptionTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ImageList, imageList_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInterceptionTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ImageList, imageList_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    CreateInterceptionTargetRequest() = default ;
    CreateInterceptionTargetRequest(const CreateInterceptionTargetRequest &) = default ;
    CreateInterceptionTargetRequest(CreateInterceptionTargetRequest &&) = default ;
    CreateInterceptionTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInterceptionTargetRequest() = default ;
    CreateInterceptionTargetRequest& operator=(const CreateInterceptionTargetRequest &) = default ;
    CreateInterceptionTargetRequest& operator=(CreateInterceptionTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->clusterId_ == nullptr && return this->clusterName_ == nullptr && return this->imageList_ == nullptr && return this->namespace_ == nullptr && return this->tagList_ == nullptr
        && return this->targetName_ == nullptr && return this->targetType_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateInterceptionTargetRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateInterceptionTargetRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateInterceptionTargetRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // imageList Field Functions 
    bool hasImageList() const { return this->imageList_ != nullptr;};
    void deleteImageList() { this->imageList_ = nullptr;};
    inline const vector<string> & imageList() const { DARABONBA_PTR_GET_CONST(imageList_, vector<string>) };
    inline vector<string> imageList() { DARABONBA_PTR_GET(imageList_, vector<string>) };
    inline CreateInterceptionTargetRequest& setImageList(const vector<string> & imageList) { DARABONBA_PTR_SET_VALUE(imageList_, imageList) };
    inline CreateInterceptionTargetRequest& setImageList(vector<string> && imageList) { DARABONBA_PTR_SET_RVALUE(imageList_, imageList) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateInterceptionTargetRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<string> & tagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<string>) };
    inline vector<string> tagList() { DARABONBA_PTR_GET(tagList_, vector<string>) };
    inline CreateInterceptionTargetRequest& setTagList(const vector<string> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline CreateInterceptionTargetRequest& setTagList(vector<string> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline CreateInterceptionTargetRequest& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateInterceptionTargetRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The name of the application to which the network object belongs.
    std::shared_ptr<string> appName_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> clusterName_ = nullptr;
    // An array that consists of the images of the network object.
    std::shared_ptr<vector<string>> imageList_ = nullptr;
    // The namespace to which the network object belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // An array that consists of the labels specified for the network object.
    std::shared_ptr<vector<string>> tagList_ = nullptr;
    // The name of the object to be blocked.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetName_ = nullptr;
    // The object type. Valid value:
    // 
    // *   **IMAGE**
    // 
    // This parameter is required.
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
