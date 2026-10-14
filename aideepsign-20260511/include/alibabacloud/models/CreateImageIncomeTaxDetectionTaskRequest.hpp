// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEINCOMETAXDETECTIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEINCOMETAXDETECTIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class CreateImageIncomeTaxDetectionTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageIncomeTaxDetectionTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageIncomeTaxDetectionTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
    };
    CreateImageIncomeTaxDetectionTaskRequest() = default ;
    CreateImageIncomeTaxDetectionTaskRequest(const CreateImageIncomeTaxDetectionTaskRequest &) = default ;
    CreateImageIncomeTaxDetectionTaskRequest(CreateImageIncomeTaxDetectionTaskRequest &&) = default ;
    CreateImageIncomeTaxDetectionTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageIncomeTaxDetectionTaskRequest() = default ;
    CreateImageIncomeTaxDetectionTaskRequest& operator=(const CreateImageIncomeTaxDetectionTaskRequest &) = default ;
    CreateImageIncomeTaxDetectionTaskRequest& operator=(CreateImageIncomeTaxDetectionTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->imageUrl_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateImageIncomeTaxDetectionTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CreateImageIncomeTaxDetectionTaskRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


  protected:
    // The idempotency parameter.
    shared_ptr<string> clientToken_ {};
    // The URL of the income tax screenshot to detect. Only HTTP/HTTPS URLs are supported. The image size cannot exceed 10 MB. External images are not supported. Only URLs accessible from the Chinese mainland public network are supported.
    shared_ptr<string> imageUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
