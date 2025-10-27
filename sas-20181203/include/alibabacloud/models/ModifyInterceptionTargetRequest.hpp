// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINTERCEPTIONTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINTERCEPTIONTARGETREQUEST_HPP_
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
  class ModifyInterceptionTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInterceptionTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ImageList, imageList_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInterceptionTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ImageList, imageList_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    ModifyInterceptionTargetRequest() = default ;
    ModifyInterceptionTargetRequest(const ModifyInterceptionTargetRequest &) = default ;
    ModifyInterceptionTargetRequest(ModifyInterceptionTargetRequest &&) = default ;
    ModifyInterceptionTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInterceptionTargetRequest() = default ;
    ModifyInterceptionTargetRequest& operator=(const ModifyInterceptionTargetRequest &) = default ;
    ModifyInterceptionTargetRequest& operator=(ModifyInterceptionTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->imageList_ == nullptr && return this->namespace_ == nullptr && return this->tagList_ == nullptr && return this->targetId_ == nullptr && return this->targetName_ == nullptr
        && return this->targetType_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ModifyInterceptionTargetRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // imageList Field Functions 
    bool hasImageList() const { return this->imageList_ != nullptr;};
    void deleteImageList() { this->imageList_ = nullptr;};
    inline const vector<string> & imageList() const { DARABONBA_PTR_GET_CONST(imageList_, vector<string>) };
    inline vector<string> imageList() { DARABONBA_PTR_GET(imageList_, vector<string>) };
    inline ModifyInterceptionTargetRequest& setImageList(const vector<string> & imageList) { DARABONBA_PTR_SET_VALUE(imageList_, imageList) };
    inline ModifyInterceptionTargetRequest& setImageList(vector<string> && imageList) { DARABONBA_PTR_SET_RVALUE(imageList_, imageList) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ModifyInterceptionTargetRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<string> & tagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<string>) };
    inline vector<string> tagList() { DARABONBA_PTR_GET(tagList_, vector<string>) };
    inline ModifyInterceptionTargetRequest& setTagList(const vector<string> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline ModifyInterceptionTargetRequest& setTagList(vector<string> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline int64_t targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, 0L) };
    inline ModifyInterceptionTargetRequest& setTargetId(int64_t targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline ModifyInterceptionTargetRequest& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ModifyInterceptionTargetRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The name of the application.
    // 
    // > You can call the [DescribeContainerTags](~~DescribeContainerTags~~) operation to obtain the value of this parameter.
    std::shared_ptr<string> appName_ = nullptr;
    // An array that consists of images.
    // 
    // > You can call the [DescribeContainerTags](~~DescribeContainerTags~~) operation to obtain the value of this parameter.
    std::shared_ptr<vector<string>> imageList_ = nullptr;
    // The namespace.
    // 
    // > You can call the [DescribeContainerTags](~~DescribeContainerTags~~) operation to obtain the value of this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // An array that consists of tags.
    // 
    // > You can call the [DescribeContainerTags](~~DescribeContainerTags~~) operation to obtain the value of this parameter.
    std::shared_ptr<vector<string>> tagList_ = nullptr;
    // The ID of the network object.
    // 
    // > You can call the [ListInterceptionTargetPage](~~ListInterceptionTargetPage~~) operation to obtain the value of this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> targetId_ = nullptr;
    // The name.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetName_ = nullptr;
    // The object type. Valid values:
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
