// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCRITERIASTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCRITERIASTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCriteriaStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCriteriaStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
    };
    friend void from_json(const Darabonba::Json& j, ListCriteriaStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
    };
    ListCriteriaStrategyRequest() = default ;
    ListCriteriaStrategyRequest(const ListCriteriaStrategyRequest &) = default ;
    ListCriteriaStrategyRequest(ListCriteriaStrategyRequest &&) = default ;
    ListCriteriaStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCriteriaStrategyRequest() = default ;
    ListCriteriaStrategyRequest& operator=(const ListCriteriaStrategyRequest &) = default ;
    ListCriteriaStrategyRequest& operator=(ListCriteriaStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->imageName_ == nullptr && return this->label_ == nullptr && return this->namespace_ == nullptr && return this->strategyName_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListCriteriaStrategyRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline ListCriteriaStrategyRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ListCriteriaStrategyRequest& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListCriteriaStrategyRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline ListCriteriaStrategyRequest& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


  protected:
    // The cluster ID.
    // 
    // >  You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the image.
    // 
    // >  You can call the [GetOpaClusterImageList](~~GetOpaClusterImageList~~) operation to query the names of images.
    std::shared_ptr<string> imageName_ = nullptr;
    // The tag that is added to the container.
    // 
    // >  You can call the [GetOpaClusterLabelList](~~GetOpaClusterLabelList~~) operation to query the tags that are added to containers.
    std::shared_ptr<string> label_ = nullptr;
    // The namespace of the cluster.
    // 
    // >  You can call the [GetOpaClusterNamespaceList](~~GetOpaClusterNamespaceList~~) operation to query the namespaces of clusters.
    std::shared_ptr<string> namespace_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> strategyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
