// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPACLUSTERSTRATEGYNEWRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTOPACLUSTERSTRATEGYNEWRESPONSEBODYLIST_HPP_
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
  class ListOpaClusterStrategyNewResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOpaClusterStrategyNewResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(ClusterCount, clusterCount_);
      DARABONBA_PTR_TO_JSON(ClusterIdList, clusterIdList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(MaliciousImage, maliciousImage_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(UnScanedImage, unScanedImage_);
    };
    friend void from_json(const Darabonba::Json& j, ListOpaClusterStrategyNewResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(ClusterCount, clusterCount_);
      DARABONBA_PTR_FROM_JSON(ClusterIdList, clusterIdList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(MaliciousImage, maliciousImage_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(UnScanedImage, unScanedImage_);
    };
    ListOpaClusterStrategyNewResponseBodyList() = default ;
    ListOpaClusterStrategyNewResponseBodyList(const ListOpaClusterStrategyNewResponseBodyList &) = default ;
    ListOpaClusterStrategyNewResponseBodyList(ListOpaClusterStrategyNewResponseBodyList &&) = default ;
    ListOpaClusterStrategyNewResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOpaClusterStrategyNewResponseBodyList() = default ;
    ListOpaClusterStrategyNewResponseBodyList& operator=(const ListOpaClusterStrategyNewResponseBodyList &) = default ;
    ListOpaClusterStrategyNewResponseBodyList& operator=(ListOpaClusterStrategyNewResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->clusterCount_ == nullptr && return this->clusterIdList_ == nullptr && return this->description_ == nullptr && return this->imageName_ == nullptr && return this->label_ == nullptr
        && return this->maliciousImage_ == nullptr && return this->strategyId_ == nullptr && return this->strategyName_ == nullptr && return this->unScanedImage_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline int32_t action() const { DARABONBA_PTR_GET_DEFAULT(action_, 0) };
    inline ListOpaClusterStrategyNewResponseBodyList& setAction(int32_t action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // clusterCount Field Functions 
    bool hasClusterCount() const { return this->clusterCount_ != nullptr;};
    void deleteClusterCount() { this->clusterCount_ = nullptr;};
    inline int32_t clusterCount() const { DARABONBA_PTR_GET_DEFAULT(clusterCount_, 0) };
    inline ListOpaClusterStrategyNewResponseBodyList& setClusterCount(int32_t clusterCount) { DARABONBA_PTR_SET_VALUE(clusterCount_, clusterCount) };


    // clusterIdList Field Functions 
    bool hasClusterIdList() const { return this->clusterIdList_ != nullptr;};
    void deleteClusterIdList() { this->clusterIdList_ = nullptr;};
    inline const vector<string> & clusterIdList() const { DARABONBA_PTR_GET_CONST(clusterIdList_, vector<string>) };
    inline vector<string> clusterIdList() { DARABONBA_PTR_GET(clusterIdList_, vector<string>) };
    inline ListOpaClusterStrategyNewResponseBodyList& setClusterIdList(const vector<string> & clusterIdList) { DARABONBA_PTR_SET_VALUE(clusterIdList_, clusterIdList) };
    inline ListOpaClusterStrategyNewResponseBodyList& setClusterIdList(vector<string> && clusterIdList) { DARABONBA_PTR_SET_RVALUE(clusterIdList_, clusterIdList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListOpaClusterStrategyNewResponseBodyList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline const vector<string> & imageName() const { DARABONBA_PTR_GET_CONST(imageName_, vector<string>) };
    inline vector<string> imageName() { DARABONBA_PTR_GET(imageName_, vector<string>) };
    inline ListOpaClusterStrategyNewResponseBodyList& setImageName(const vector<string> & imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };
    inline ListOpaClusterStrategyNewResponseBodyList& setImageName(vector<string> && imageName) { DARABONBA_PTR_SET_RVALUE(imageName_, imageName) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline const vector<string> & label() const { DARABONBA_PTR_GET_CONST(label_, vector<string>) };
    inline vector<string> label() { DARABONBA_PTR_GET(label_, vector<string>) };
    inline ListOpaClusterStrategyNewResponseBodyList& setLabel(const vector<string> & label) { DARABONBA_PTR_SET_VALUE(label_, label) };
    inline ListOpaClusterStrategyNewResponseBodyList& setLabel(vector<string> && label) { DARABONBA_PTR_SET_RVALUE(label_, label) };


    // maliciousImage Field Functions 
    bool hasMaliciousImage() const { return this->maliciousImage_ != nullptr;};
    void deleteMaliciousImage() { this->maliciousImage_ = nullptr;};
    inline bool maliciousImage() const { DARABONBA_PTR_GET_DEFAULT(maliciousImage_, false) };
    inline ListOpaClusterStrategyNewResponseBodyList& setMaliciousImage(bool maliciousImage) { DARABONBA_PTR_SET_VALUE(maliciousImage_, maliciousImage) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline ListOpaClusterStrategyNewResponseBodyList& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline ListOpaClusterStrategyNewResponseBodyList& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // unScanedImage Field Functions 
    bool hasUnScanedImage() const { return this->unScanedImage_ != nullptr;};
    void deleteUnScanedImage() { this->unScanedImage_ = nullptr;};
    inline bool unScanedImage() const { DARABONBA_PTR_GET_DEFAULT(unScanedImage_, false) };
    inline ListOpaClusterStrategyNewResponseBodyList& setUnScanedImage(bool unScanedImage) { DARABONBA_PTR_SET_VALUE(unScanedImage_, unScanedImage) };


  protected:
    // The action of the rule. Valid values:
    // 
    // *   **1**: trigger alerts
    // *   **2**: block
    // *   **3**: allow
    std::shared_ptr<int32_t> action_ = nullptr;
    // The number of clusters on which the rule takes effect.
    std::shared_ptr<int32_t> clusterCount_ = nullptr;
    // The clusters on which the rule takes effect.
    std::shared_ptr<vector<string>> clusterIdList_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The image names.
    std::shared_ptr<vector<string>> imageName_ = nullptr;
    // The tags that are added to the container.
    std::shared_ptr<vector<string>> label_ = nullptr;
    // Indicates whether the rule supports malicious Internet images. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> maliciousImage_ = nullptr;
    // The rule ID.
    std::shared_ptr<int64_t> strategyId_ = nullptr;
    // The rule name.
    std::shared_ptr<string> strategyName_ = nullptr;
    // Indicates whether the rule supports unscanned images. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> unScanedImage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
