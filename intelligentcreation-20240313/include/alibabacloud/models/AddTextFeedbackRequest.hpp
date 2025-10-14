// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTEXTFEEDBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDTEXTFEEDBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class AddTextFeedbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTextFeedbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(quality, quality_);
      DARABONBA_PTR_TO_JSON(textId, textId_);
    };
    friend void from_json(const Darabonba::Json& j, AddTextFeedbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(quality, quality_);
      DARABONBA_PTR_FROM_JSON(textId, textId_);
    };
    AddTextFeedbackRequest() = default ;
    AddTextFeedbackRequest(const AddTextFeedbackRequest &) = default ;
    AddTextFeedbackRequest(AddTextFeedbackRequest &&) = default ;
    AddTextFeedbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTextFeedbackRequest() = default ;
    AddTextFeedbackRequest& operator=(const AddTextFeedbackRequest &) = default ;
    AddTextFeedbackRequest& operator=(AddTextFeedbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->quality_ == nullptr && return this->textId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline AddTextFeedbackRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // quality Field Functions 
    bool hasQuality() const { return this->quality_ != nullptr;};
    void deleteQuality() { this->quality_ = nullptr;};
    inline int32_t quality() const { DARABONBA_PTR_GET_DEFAULT(quality_, 0) };
    inline AddTextFeedbackRequest& setQuality(int32_t quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };


    // textId Field Functions 
    bool hasTextId() const { return this->textId_ != nullptr;};
    void deleteTextId() { this->textId_ = nullptr;};
    inline int64_t textId() const { DARABONBA_PTR_GET_DEFAULT(textId_, 0L) };
    inline AddTextFeedbackRequest& setTextId(int64_t textId) { DARABONBA_PTR_SET_VALUE(textId_, textId) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<int32_t> quality_ = nullptr;
    std::shared_ptr<int64_t> textId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
