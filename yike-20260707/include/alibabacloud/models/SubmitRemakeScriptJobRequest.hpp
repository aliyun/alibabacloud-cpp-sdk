// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITREMAKESCRIPTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITREMAKESCRIPTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class SubmitRemakeScriptJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitRemakeScriptJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RemakeParams, remakeParams_);
      DARABONBA_PTR_TO_JSON(RemakeType, remakeType_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitRemakeScriptJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RemakeParams, remakeParams_);
      DARABONBA_PTR_FROM_JSON(RemakeType, remakeType_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitRemakeScriptJobRequest() = default ;
    SubmitRemakeScriptJobRequest(const SubmitRemakeScriptJobRequest &) = default ;
    SubmitRemakeScriptJobRequest(SubmitRemakeScriptJobRequest &&) = default ;
    SubmitRemakeScriptJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitRemakeScriptJobRequest() = default ;
    SubmitRemakeScriptJobRequest& operator=(const SubmitRemakeScriptJobRequest &) = default ;
    SubmitRemakeScriptJobRequest& operator=(SubmitRemakeScriptJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remakeParams_ == nullptr
        && this->remakeType_ == nullptr && this->userData_ == nullptr; };
    // remakeParams Field Functions 
    bool hasRemakeParams() const { return this->remakeParams_ != nullptr;};
    void deleteRemakeParams() { this->remakeParams_ = nullptr;};
    inline string getRemakeParams() const { DARABONBA_PTR_GET_DEFAULT(remakeParams_, "") };
    inline SubmitRemakeScriptJobRequest& setRemakeParams(string remakeParams) { DARABONBA_PTR_SET_VALUE(remakeParams_, remakeParams) };


    // remakeType Field Functions 
    bool hasRemakeType() const { return this->remakeType_ != nullptr;};
    void deleteRemakeType() { this->remakeType_ = nullptr;};
    inline string getRemakeType() const { DARABONBA_PTR_GET_DEFAULT(remakeType_, "") };
    inline SubmitRemakeScriptJobRequest& setRemakeType(string remakeType) { DARABONBA_PTR_SET_VALUE(remakeType_, remakeType) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitRemakeScriptJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The remake parameters. This parameter is a JSON string. The structure varies based on RemakeType. For faithful-remake, the structure is as follows:
    // 
    // - ComprehensionResult (string, required): The content understanding result. This is the URL of the JSON file.
    // 
    // - Product (object, required): The product information, including the original product and the new product.
    // 
    //   - OriginalProductName (string, required): The product or brand name in the original video to be replaced. This is used to locate and replace mentions of the original product in the script.
    // 
    //   - NewProduct (object, required): The new product information. 
    // 
    //     - ProductName (string, required): The product or brand name.
    //     - Description (string, required): The product description.
    //     - ProductKnowledge (string, required): The physical knowledge of the product, such as the material and usage instructions.
    //     - ProductImages (array of strings, required): The images of the new product. This array cannot be empty. Each item must be an HTTP or HTTPS URL.
    //     - SellingPoints (array of strings, optional): The list of product selling points.
    //     - OriginalPrice (string, optional): The original price.
    //     - CurrentPrice (string, optional): The current price.
    //     - Discount (string, optional): The discount information, such as "50 off for purchases over 200" or "buy one get one free".
    // 
    // - Avatar (object, required): The avatar information, including the original avatar and the new avatar.
    // 
    //     - NewAvatarImages (array of strings, required): The list of images for the new avatar. This array cannot be empty. Each item must be a media asset ID or an image URL. If a URL is provided, the system automatically registers it as a media asset. **Currently, only one image is supported** (only the first element of the array is used). The array format is reserved for future extensions.
    //     - OriginalAvatarName (string, required): The avatar name in the original video to be replaced. This is used to locate and replace the original avatar in the script or video frames.
    // 
    // - VoiceoverLanguage (string, optional): The voiceover language. Valid values: `zh` (Chinese), `en` (English), `es` (Spanish), `pt` (Portuguese), `fr` (French), `de` (German), `ja` (Japanese), `ko` (Korean), and `ar` (Arabic). Default value: `zh`.
    shared_ptr<string> remakeParams_ {};
    // The remake type. This parameter determines the structure of RemakeParams. Currently, only faithful-remake is supported. faithful-remake indicates a faithful remake that replicates the original viral structure paragraph by paragraph and replaces the product and avatar.
    shared_ptr<string> remakeType_ {};
    // The custom parameters. This parameter is a JSON string and is returned as-is in the callback result, such as newsKey. NotifyAddress is a system-reserved field for the callback URL. The system sends a callback to this URL after the task is completed.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
