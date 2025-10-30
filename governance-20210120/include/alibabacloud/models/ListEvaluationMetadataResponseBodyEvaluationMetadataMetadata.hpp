// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONMETADATARESPONSEBODYEVALUATIONMETADATAMETADATA_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONMETADATARESPONSEBODYEVALUATIONMETADATAMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata.hpp>
#include <alibabacloud/models/ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RecommendationLevel, recommendationLevel_);
      DARABONBA_PTR_TO_JSON(RemediationMetadata, remediationMetadata_);
      DARABONBA_PTR_TO_JSON(ResourceMetadata, resourceMetadata_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(Stage, stage_);
      DARABONBA_PTR_TO_JSON(TopicCode, topicCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RecommendationLevel, recommendationLevel_);
      DARABONBA_PTR_FROM_JSON(RemediationMetadata, remediationMetadata_);
      DARABONBA_PTR_FROM_JSON(ResourceMetadata, resourceMetadata_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(Stage, stage_);
      DARABONBA_PTR_FROM_JSON(TopicCode, topicCode_);
    };
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata() = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata(const ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata &) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata(ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata &&) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata() = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata& operator=(const ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata &) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata& operator=(ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->id_ == nullptr && return this->recommendationLevel_ == nullptr && return this->remediationMetadata_ == nullptr
        && return this->resourceMetadata_ == nullptr && return this->scope_ == nullptr && return this->stage_ == nullptr && return this->topicCode_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // recommendationLevel Field Functions 
    bool hasRecommendationLevel() const { return this->recommendationLevel_ != nullptr;};
    void deleteRecommendationLevel() { this->recommendationLevel_ = nullptr;};
    inline string recommendationLevel() const { DARABONBA_PTR_GET_DEFAULT(recommendationLevel_, "") };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata& setRecommendationLevel(string recommendationLevel) { DARABONBA_PTR_SET_VALUE(recommendationLevel_, recommendationLevel) };


    // remediationMetadata Field Functions 
    bool hasRemediationMetadata() const { return this->remediationMetadata_ != nullptr;};
    void deleteRemediationMetadata() { this->remediationMetadata_ = nullptr;};
    inline const Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata & remediationMetadata() const { DARABONBA_PTR_GET_CONST(remediationMetadata_, Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata) };
    inline Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata remediationMetadata() { DARABONBA_PTR_GET(remediationMetadata_, Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata) };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata& setRemediationMetadata(const Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata & remediationMetadata) { DARABONBA_PTR_SET_VALUE(remediationMetadata_, remediationMetadata) };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata& setRemediationMetadata(Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata && remediationMetadata) { DARABONBA_PTR_SET_RVALUE(remediationMetadata_, remediationMetadata) };


    // resourceMetadata Field Functions 
    bool hasResourceMetadata() const { return this->resourceMetadata_ != nullptr;};
    void deleteResourceMetadata() { this->resourceMetadata_ = nullptr;};
    inline const Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata & resourceMetadata() const { DARABONBA_PTR_GET_CONST(resourceMetadata_, Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata) };
    inline Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata resourceMetadata() { DARABONBA_PTR_GET(resourceMetadata_, Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata) };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata& setResourceMetadata(const Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata & resourceMetadata) { DARABONBA_PTR_SET_VALUE(resourceMetadata_, resourceMetadata) };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata& setResourceMetadata(Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata && resourceMetadata) { DARABONBA_PTR_SET_RVALUE(resourceMetadata_, resourceMetadata) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // stage Field Functions 
    bool hasStage() const { return this->stage_ != nullptr;};
    void deleteStage() { this->stage_ = nullptr;};
    inline string stage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


    // topicCode Field Functions 
    bool hasTopicCode() const { return this->topicCode_ != nullptr;};
    void deleteTopicCode() { this->topicCode_ = nullptr;};
    inline string topicCode() const { DARABONBA_PTR_GET_DEFAULT(topicCode_, "") };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata& setTopicCode(string topicCode) { DARABONBA_PTR_SET_VALUE(topicCode_, topicCode) };


  protected:
    // The category of the check item.
    std::shared_ptr<string> category_ = nullptr;
    // The description of the check item.
    std::shared_ptr<string> description_ = nullptr;
    // The display name of the check item.
    std::shared_ptr<string> displayName_ = nullptr;
    // The ID of the metadata.
    std::shared_ptr<string> id_ = nullptr;
    // The governance level of the check item.
    std::shared_ptr<string> recommendationLevel_ = nullptr;
    // The metadata of the fixing task.
    std::shared_ptr<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataRemediationMetadata> remediationMetadata_ = nullptr;
    // The metadata of the checked resources.
    std::shared_ptr<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata> resourceMetadata_ = nullptr;
    // The scope of the check item. Valid values:
    // 
    // *   Account: the check item in a single-account governance maturity check
    // *   ResourceDirectory: the check item in a multi-account governance maturity check
    std::shared_ptr<string> scope_ = nullptr;
    // The status of the check item. Valid values:
    // 
    // *   Released: The check item is released.
    // *   Beta: The check item is pre-released.
    std::shared_ptr<string> stage_ = nullptr;
    std::shared_ptr<string> topicCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
