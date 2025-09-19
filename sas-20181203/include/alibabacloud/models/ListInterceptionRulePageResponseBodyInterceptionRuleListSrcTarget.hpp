// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERCEPTIONRULEPAGERESPONSEBODYINTERCEPTIONRULELISTSRCTARGET_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERCEPTIONRULEPAGERESPONSEBODYINTERCEPTIONRULELISTSRCTARGET_HPP_
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
  class ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ImageList, imageList_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ImageList, imageList_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget() = default ;
    ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget(const ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget &) = default ;
    ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget(ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget &&) = default ;
    ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget() = default ;
    ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget& operator=(const ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget &) = default ;
    ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget& operator=(ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->imageList_ != nullptr && this->namespace_ != nullptr && this->ruleType_ != nullptr && this->tagList_ != nullptr && this->targetId_ != nullptr
        && this->targetName_ != nullptr && this->targetType_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // imageList Field Functions 
    bool hasImageList() const { return this->imageList_ != nullptr;};
    void deleteImageList() { this->imageList_ = nullptr;};
    inline const vector<string> & imageList() const { DARABONBA_PTR_GET_CONST(imageList_, vector<string>) };
    inline vector<string> imageList() { DARABONBA_PTR_GET(imageList_, vector<string>) };
    inline ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget& setImageList(const vector<string> & imageList) { DARABONBA_PTR_SET_VALUE(imageList_, imageList) };
    inline ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget& setImageList(vector<string> && imageList) { DARABONBA_PTR_SET_RVALUE(imageList_, imageList) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<string> & tagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<string>) };
    inline vector<string> tagList() { DARABONBA_PTR_GET(tagList_, vector<string>) };
    inline ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget& setTagList(const vector<string> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget& setTagList(vector<string> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline int32_t targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, 0) };
    inline ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget& setTargetId(int32_t targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListInterceptionRulePageResponseBodyInterceptionRuleListSrcTarget& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // An array that consists of the images of the network object.
    std::shared_ptr<vector<string>> imageList_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The type of the defense rule. Valid values:
    // 
    // *   **suggest**: intelligently recommended rule
    // *   **customize**: custom rule
    // *   **system**: system rule
    std::shared_ptr<string> ruleType_ = nullptr;
    // An array that consists of tags added to the source network object.
    std::shared_ptr<vector<string>> tagList_ = nullptr;
    // The ID of the network object.
    std::shared_ptr<int32_t> targetId_ = nullptr;
    // The name of the network object.
    std::shared_ptr<string> targetName_ = nullptr;
    // The type of the affected assets.
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
