// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONMETADATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONMETADATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationMetadataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationMetadataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(LensCode, lensCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TopicCode, topicCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationMetadataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(LensCode, lensCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TopicCode, topicCode_);
    };
    ListEvaluationMetadataRequest() = default ;
    ListEvaluationMetadataRequest(const ListEvaluationMetadataRequest &) = default ;
    ListEvaluationMetadataRequest(ListEvaluationMetadataRequest &&) = default ;
    ListEvaluationMetadataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationMetadataRequest() = default ;
    ListEvaluationMetadataRequest& operator=(const ListEvaluationMetadataRequest &) = default ;
    ListEvaluationMetadataRequest& operator=(ListEvaluationMetadataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->language_ == nullptr
        && return this->lensCode_ == nullptr && return this->regionId_ == nullptr && return this->topicCode_ == nullptr; };
    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListEvaluationMetadataRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // lensCode Field Functions 
    bool hasLensCode() const { return this->lensCode_ != nullptr;};
    void deleteLensCode() { this->lensCode_ = nullptr;};
    inline string lensCode() const { DARABONBA_PTR_GET_DEFAULT(lensCode_, "") };
    inline ListEvaluationMetadataRequest& setLensCode(string lensCode) { DARABONBA_PTR_SET_VALUE(lensCode_, lensCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEvaluationMetadataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // topicCode Field Functions 
    bool hasTopicCode() const { return this->topicCode_ != nullptr;};
    void deleteTopicCode() { this->topicCode_ = nullptr;};
    inline string topicCode() const { DARABONBA_PTR_GET_DEFAULT(topicCode_, "") };
    inline ListEvaluationMetadataRequest& setTopicCode(string topicCode) { DARABONBA_PTR_SET_VALUE(topicCode_, topicCode) };


  protected:
    // The language. The information is returned in the specified language. Valid values:
    // 
    // *   en: English
    // *   zh: Chinese
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> lensCode_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> topicCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
