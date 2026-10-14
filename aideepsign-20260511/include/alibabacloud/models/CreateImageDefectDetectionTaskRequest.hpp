// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEDEFECTDETECTIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEDEFECTDETECTIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class CreateImageDefectDetectionTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageDefectDetectionTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageDefectDetectionTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
    };
    CreateImageDefectDetectionTaskRequest() = default ;
    CreateImageDefectDetectionTaskRequest(const CreateImageDefectDetectionTaskRequest &) = default ;
    CreateImageDefectDetectionTaskRequest(CreateImageDefectDetectionTaskRequest &&) = default ;
    CreateImageDefectDetectionTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageDefectDetectionTaskRequest() = default ;
    CreateImageDefectDetectionTaskRequest& operator=(const CreateImageDefectDetectionTaskRequest &) = default ;
    CreateImageDefectDetectionTaskRequest& operator=(CreateImageDefectDetectionTaskRequest &&) = default ;
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
    inline CreateImageDefectDetectionTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CreateImageDefectDetectionTaskRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


  protected:
    // The idempotency token.
    shared_ptr<string> clientToken_ {};
    // The URL of the image to be detected. Only HTTP/HTTPS protocols are supported.
    shared_ptr<string> imageUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
