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
    // The remake parameters in JSON string format. The structure varies depending on the RemakeType. For faithful-remake, the structure is as follows:
    // 
    // - ComprehensionResult (String, required): The content understanding result, which is the URL of a JSON file.
    // - Product (Object, required): The product information, including the original and new products.
    //   - OriginalProductName (String, required): The product or brand name in the original video, used to locate and replace mentions of the original product.
    //   - NewProduct (Object, required): The new product information.
    //     - ProductName (String, required): The product or brand name.
    //     - Description (String, required): The product description.
    //     - ProductKnowledge (String, optional): The physical knowledge of the product, such as the material and usage.
    //     - ProductImages (Array<String>, required): The images of the new product. This array cannot be empty, and each item must be an HTTP or HTTPS URL.
    //     - SellingPoints (Array<String>, optional): The list of product selling points.
    //     - OriginalPrice (String, optional): The original price.
    //     - CurrentPrice (String, optional): The current price.
    //     - Discount (String, optional): The discount information, such as "50 off for orders over 200" or "buy one get one free".
    // - AvatarList (Array<Object>, optional): The list of avatar replacements, supporting single and multiple avatar replacements. We recommend using this field. Pass one item for a single avatar and two to five items for multiple avatars. Each item is an object that describes the replacement relationship between an original avatar and a new avatar:
    //   - OriginalAvatarName (String, required for each item): The name of the avatar to be replaced in the original video. Use the avatar name from the video breakdown result to locate the replacement target in the script or video. The original avatar names in the same list cannot be duplicated.
    //   - NewAvatarImages (Array<String>, required for each item): The list of reference images for the new avatar. This array cannot be empty. Images can be HTTP or HTTPS URLs or registered image MediaIds. Currently, only the first image is used.
    //   - AvatarName (String, optional for each item): The role name of the replaced avatar in the generated script.
    // - Avatar (Object, optional): The single avatar replacement information compatible with historical calls, retained as a transitional field. We recommend using AvatarList for new integrations and subsequent calls. The field structure is the same as a single item in AvatarList. When using this field, OriginalAvatarName and NewAvatarImages are required, and AvatarName is optional.
    // - VoiceoverLanguage (String, optional): The voiceover language. Valid values: zh (Chinese), en (English), es (Spanish), pt (Portuguese), fr (French), de (German), ja (Japanese), ko (Korean), and ar (Arabic). We recommend explicitly specifying this parameter.
    // - AdditionalRequirements (String, optional): Additional remake requirements.
    shared_ptr<string> remakeParams_ {};
    // The remake type, which determines the structure of RemakeParams. Currently, only faithful-remake is supported. This type faithfully remakes the original viral video structure segment by segment, replacing the product and avatar.
    shared_ptr<string> remakeType_ {};
    // The custom parameters in JSON string format, which are returned as-is in the callback result, such as newsKey. The system reserves the NotifyAddress field for the callback URL, which is invoked after the task is completed.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
