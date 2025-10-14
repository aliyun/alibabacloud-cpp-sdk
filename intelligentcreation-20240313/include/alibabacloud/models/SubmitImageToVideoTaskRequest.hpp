// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITIMAGETOVIDEOTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITIMAGETOVIDEOTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class SubmitImageToVideoTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitImageToVideoTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(posPrompt, posPrompt_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitImageToVideoTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(posPrompt, posPrompt_);
    };
    SubmitImageToVideoTaskRequest() = default ;
    SubmitImageToVideoTaskRequest(const SubmitImageToVideoTaskRequest &) = default ;
    SubmitImageToVideoTaskRequest(SubmitImageToVideoTaskRequest &&) = default ;
    SubmitImageToVideoTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitImageToVideoTaskRequest() = default ;
    SubmitImageToVideoTaskRequest& operator=(const SubmitImageToVideoTaskRequest &) = default ;
    SubmitImageToVideoTaskRequest& operator=(SubmitImageToVideoTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr
        && return this->posPrompt_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline SubmitImageToVideoTaskRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // posPrompt Field Functions 
    bool hasPosPrompt() const { return this->posPrompt_ != nullptr;};
    void deletePosPrompt() { this->posPrompt_ = nullptr;};
    inline string posPrompt() const { DARABONBA_PTR_GET_DEFAULT(posPrompt_, "") };
    inline SubmitImageToVideoTaskRequest& setPosPrompt(string posPrompt) { DARABONBA_PTR_SET_VALUE(posPrompt_, posPrompt) };


  protected:
    std::shared_ptr<string> imageUrl_ = nullptr;
    std::shared_ptr<string> posPrompt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
