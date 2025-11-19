// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDESKTOPIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDESKTOPIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class DeleteDesktopImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDesktopImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(IsCleanImageCode, isCleanImageCode_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDesktopImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(IsCleanImageCode, isCleanImageCode_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    DeleteDesktopImageRequest() = default ;
    DeleteDesktopImageRequest(const DeleteDesktopImageRequest &) = default ;
    DeleteDesktopImageRequest(DeleteDesktopImageRequest &&) = default ;
    DeleteDesktopImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDesktopImageRequest() = default ;
    DeleteDesktopImageRequest& operator=(const DeleteDesktopImageRequest &) = default ;
    DeleteDesktopImageRequest& operator=(DeleteDesktopImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && return this->imageId_ == nullptr && return this->isCleanImageCode_ == nullptr && return this->sessionId_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline DeleteDesktopImageRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DeleteDesktopImageRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // isCleanImageCode Field Functions 
    bool hasIsCleanImageCode() const { return this->isCleanImageCode_ != nullptr;};
    void deleteIsCleanImageCode() { this->isCleanImageCode_ = nullptr;};
    inline bool isCleanImageCode() const { DARABONBA_PTR_GET_DEFAULT(isCleanImageCode_, false) };
    inline DeleteDesktopImageRequest& setIsCleanImageCode(bool isCleanImageCode) { DARABONBA_PTR_SET_VALUE(isCleanImageCode_, isCleanImageCode) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DeleteDesktopImageRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> apiKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<bool> isCleanImageCode_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
