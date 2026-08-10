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
    // The remake parameters (JSON string). The structure varies depending on `RemakeType`. For `faithful-remake`, the structure is as follows:
    // 
    // - ComprehensionResult (string, required): The content comprehension result. A URL to a JSON file.
    // 
    // - Product (Object, required): The product information (original product + new product).
    // 
    //   - OriginalProductName (String, required): The product or brand name in the original video (the object to be replaced). Used to locate and replace mentions of the original product in the script.
    // 
    //   - NewProduct (Object, required): The new product information. 
    // 
    //     - ProductName (String, required): The product or brand name.
    //     - Description (String, required): The product description.
    //     - ProductKnowledge (String, required): The physical knowledge of the product, such as material and usage instructions.
    //     - ProductImages (Array\\<String\\>, required): The images of the new product. Must not be empty. Each item is an http(s) URL.
    //     - SellingPoints (Array\\<String\\>, optional): The list of product selling points.
    //     - OriginalPrice (String, optional): The original price.
    //     - CurrentPrice (String, optional): The current price.
    //     - Discount (String, optional): The discount information, such as "50 off 200" or "buy one get one free".
    // 
    // - Avatar (Object, required): The model information (original model + new model).
    // 
    //     - NewAvatarImages (Array\\<String\\>, required): The list of new model images. Must not be empty. Each item is a media asset ID or an image URL (when a URL is provided, the system automatically registers it as a media asset). **Currently, only 1 image is supported** (only the first element of the array is used). The array format is reserved for future expansion.
    //     - OriginalAvatarName (String, required): The name of the model in the original video (the object to be replaced). Used to locate and replace the original model in the script and visuals.
    // 
    // -   VoiceoverLanguage (String, optional): The voiceover language. Valid values: `zh` (Chinese), `en` (English), `es` (Spanish), `pt` (Portuguese), `fr` (French), `de` (German), `ja` (Japanese), `ko` (Korean), `ar` (Arabic). Default value: `zh`.
    shared_ptr<string> remakeParams_ {};
    // The remake type, which determines the structure of `RemakeParams`. Currently, only `faithful-remake` is supported (faithful remake: remakes the original hit video segment by segment, replacing the product and model).
    shared_ptr<string> remakeType_ {};
    // The custom parameters in JSON format. These parameters are returned as-is in the callback result (for example, newsKey). The system reserved field NotifyAddress specifies the callback URL. The system sends a callback to this URL after the task is completed.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
