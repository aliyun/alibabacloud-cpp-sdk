// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEDUHOMEWORKCORRECTSUBMITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEDUHOMEWORKCORRECTSUBMITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenEduAiSuite20261102
{
namespace Models
{
  class CreateEduHomeworkCorrectSubmitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEduHomeworkCorrectSubmitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dewarp, dewarp_);
      DARABONBA_PTR_TO_JSON(imageBase64, imageBase64_);
      DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEduHomeworkCorrectSubmitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dewarp, dewarp_);
      DARABONBA_PTR_FROM_JSON(imageBase64, imageBase64_);
      DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateEduHomeworkCorrectSubmitRequest() = default ;
    CreateEduHomeworkCorrectSubmitRequest(const CreateEduHomeworkCorrectSubmitRequest &) = default ;
    CreateEduHomeworkCorrectSubmitRequest(CreateEduHomeworkCorrectSubmitRequest &&) = default ;
    CreateEduHomeworkCorrectSubmitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEduHomeworkCorrectSubmitRequest() = default ;
    CreateEduHomeworkCorrectSubmitRequest& operator=(const CreateEduHomeworkCorrectSubmitRequest &) = default ;
    CreateEduHomeworkCorrectSubmitRequest& operator=(CreateEduHomeworkCorrectSubmitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dewarp_ == nullptr
        && this->imageBase64_ == nullptr && this->imageUrl_ == nullptr && this->requestId_ == nullptr; };
    // dewarp Field Functions 
    bool hasDewarp() const { return this->dewarp_ != nullptr;};
    void deleteDewarp() { this->dewarp_ = nullptr;};
    inline bool getDewarp() const { DARABONBA_PTR_GET_DEFAULT(dewarp_, false) };
    inline CreateEduHomeworkCorrectSubmitRequest& setDewarp(bool dewarp) { DARABONBA_PTR_SET_VALUE(dewarp_, dewarp) };


    // imageBase64 Field Functions 
    bool hasImageBase64() const { return this->imageBase64_ != nullptr;};
    void deleteImageBase64() { this->imageBase64_ = nullptr;};
    inline string getImageBase64() const { DARABONBA_PTR_GET_DEFAULT(imageBase64_, "") };
    inline CreateEduHomeworkCorrectSubmitRequest& setImageBase64(string imageBase64) { DARABONBA_PTR_SET_VALUE(imageBase64_, imageBase64) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CreateEduHomeworkCorrectSubmitRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateEduHomeworkCorrectSubmitRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<bool> dewarp_ {};
    shared_ptr<string> imageBase64_ {};
    shared_ptr<string> imageUrl_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenEduAiSuite20261102
#endif
