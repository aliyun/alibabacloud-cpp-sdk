// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERCEPTIONTARGETPAGERESPONSEBODYRULETARGETLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERCEPTIONTARGETPAGERESPONSEBODYRULETARGETLIST_HPP_
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
  class ListInterceptionTargetPageResponseBodyRuleTargetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterceptionTargetPageResponseBodyRuleTargetList& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ImageList, imageList_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterceptionTargetPageResponseBodyRuleTargetList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ImageList, imageList_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    ListInterceptionTargetPageResponseBodyRuleTargetList() = default ;
    ListInterceptionTargetPageResponseBodyRuleTargetList(const ListInterceptionTargetPageResponseBodyRuleTargetList &) = default ;
    ListInterceptionTargetPageResponseBodyRuleTargetList(ListInterceptionTargetPageResponseBodyRuleTargetList &&) = default ;
    ListInterceptionTargetPageResponseBodyRuleTargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterceptionTargetPageResponseBodyRuleTargetList() = default ;
    ListInterceptionTargetPageResponseBodyRuleTargetList& operator=(const ListInterceptionTargetPageResponseBodyRuleTargetList &) = default ;
    ListInterceptionTargetPageResponseBodyRuleTargetList& operator=(ListInterceptionTargetPageResponseBodyRuleTargetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->clusterId_ != nullptr && this->clusterName_ != nullptr && this->imageList_ != nullptr && this->namespace_ != nullptr && this->ruleType_ != nullptr
        && this->tagList_ != nullptr && this->targetId_ != nullptr && this->targetName_ != nullptr && this->targetType_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListInterceptionTargetPageResponseBodyRuleTargetList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListInterceptionTargetPageResponseBodyRuleTargetList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListInterceptionTargetPageResponseBodyRuleTargetList& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // imageList Field Functions 
    bool hasImageList() const { return this->imageList_ != nullptr;};
    void deleteImageList() { this->imageList_ = nullptr;};
    inline const vector<string> & imageList() const { DARABONBA_PTR_GET_CONST(imageList_, vector<string>) };
    inline vector<string> imageList() { DARABONBA_PTR_GET(imageList_, vector<string>) };
    inline ListInterceptionTargetPageResponseBodyRuleTargetList& setImageList(const vector<string> & imageList) { DARABONBA_PTR_SET_VALUE(imageList_, imageList) };
    inline ListInterceptionTargetPageResponseBodyRuleTargetList& setImageList(vector<string> && imageList) { DARABONBA_PTR_SET_RVALUE(imageList_, imageList) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListInterceptionTargetPageResponseBodyRuleTargetList& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ListInterceptionTargetPageResponseBodyRuleTargetList& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<string> & tagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<string>) };
    inline vector<string> tagList() { DARABONBA_PTR_GET(tagList_, vector<string>) };
    inline ListInterceptionTargetPageResponseBodyRuleTargetList& setTagList(const vector<string> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline ListInterceptionTargetPageResponseBodyRuleTargetList& setTagList(vector<string> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline int64_t targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, 0L) };
    inline ListInterceptionTargetPageResponseBodyRuleTargetList& setTargetId(int64_t targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline ListInterceptionTargetPageResponseBodyRuleTargetList& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListInterceptionTargetPageResponseBodyRuleTargetList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The name of the application of the network object.
    std::shared_ptr<string> appName_ = nullptr;
    // The ID of the container cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the container cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The images of the network object.
    std::shared_ptr<vector<string>> imageList_ = nullptr;
    // The namespace to which the network object belongs.
    std::shared_ptr<string> namespace_ = nullptr;
    // The type of the rule. Valid value:
    // 
    // *   customize: custom rule
    std::shared_ptr<string> ruleType_ = nullptr;
    // The tags specified for the network object.
    std::shared_ptr<vector<string>> tagList_ = nullptr;
    // The ID of the network object.
    // 
    // > You can call the [ListInterceptionTargetPage](~~ListInterceptionTargetPage~~) operation to query the IDs of network objects.
    std::shared_ptr<int64_t> targetId_ = nullptr;
    // The name of the network object.
    std::shared_ptr<string> targetName_ = nullptr;
    // The type of the network object. Valid value:
    // 
    // *   IMAGE
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
