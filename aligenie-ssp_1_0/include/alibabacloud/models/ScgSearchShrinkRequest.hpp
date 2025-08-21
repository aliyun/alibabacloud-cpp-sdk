// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCGSEARCHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCGSEARCHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ScgSearchShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScgSearchShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ScgFilter, scgFilterShrink_);
      DARABONBA_PTR_TO_JSON(TopicId, topicId_);
    };
    friend void from_json(const Darabonba::Json& j, ScgSearchShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ScgFilter, scgFilterShrink_);
      DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
    };
    ScgSearchShrinkRequest() = default ;
    ScgSearchShrinkRequest(const ScgSearchShrinkRequest &) = default ;
    ScgSearchShrinkRequest(ScgSearchShrinkRequest &&) = default ;
    ScgSearchShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScgSearchShrinkRequest() = default ;
    ScgSearchShrinkRequest& operator=(const ScgSearchShrinkRequest &) = default ;
    ScgSearchShrinkRequest& operator=(ScgSearchShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scgFilterShrink_ != nullptr
        && this->topicId_ != nullptr; };
    // scgFilterShrink Field Functions 
    bool hasScgFilterShrink() const { return this->scgFilterShrink_ != nullptr;};
    void deleteScgFilterShrink() { this->scgFilterShrink_ = nullptr;};
    inline string scgFilterShrink() const { DARABONBA_PTR_GET_DEFAULT(scgFilterShrink_, "") };
    inline ScgSearchShrinkRequest& setScgFilterShrink(string scgFilterShrink) { DARABONBA_PTR_SET_VALUE(scgFilterShrink_, scgFilterShrink) };


    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline string topicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, "") };
    inline ScgSearchShrinkRequest& setTopicId(string topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> scgFilterShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> topicId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
