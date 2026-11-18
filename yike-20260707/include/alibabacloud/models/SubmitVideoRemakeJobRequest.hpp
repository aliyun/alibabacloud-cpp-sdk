// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVIDEOREMAKEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVIDEOREMAKEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class SubmitVideoRemakeJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVideoRemakeJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(RemakeParams, remakeParams_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVideoRemakeJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(RemakeParams, remakeParams_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitVideoRemakeJobRequest() = default ;
    SubmitVideoRemakeJobRequest(const SubmitVideoRemakeJobRequest &) = default ;
    SubmitVideoRemakeJobRequest(SubmitVideoRemakeJobRequest &&) = default ;
    SubmitVideoRemakeJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVideoRemakeJobRequest() = default ;
    SubmitVideoRemakeJobRequest& operator=(const SubmitVideoRemakeJobRequest &) = default ;
    SubmitVideoRemakeJobRequest& operator=(SubmitVideoRemakeJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->input_ == nullptr
        && this->remakeParams_ == nullptr && this->userData_ == nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline SubmitVideoRemakeJobRequest& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // remakeParams Field Functions 
    bool hasRemakeParams() const { return this->remakeParams_ != nullptr;};
    void deleteRemakeParams() { this->remakeParams_ = nullptr;};
    inline string getRemakeParams() const { DARABONBA_PTR_GET_DEFAULT(remakeParams_, "") };
    inline SubmitVideoRemakeJobRequest& setRemakeParams(string remakeParams) { DARABONBA_PTR_SET_VALUE(remakeParams_, remakeParams) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitVideoRemakeJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The input materials. The value is a JSON string with the following structure:
    // 
    // - Medias (Array<Object>, required): A non-empty list of media assets. This operation uses the first video in the list and does not support batch remakes. The first item contains the following fields:
    //   - Type (String, required): The type of the media asset. For this operation, set the value to video for the first item. The value is case-insensitive.
    //   - Url (String, mutually exclusive with MediaId): The URL of the media asset. The URL must start with http:// or https:// and cannot exceed 2,048 characters in length. Unregistered URLs are automatically registered as media assets.
    //   - MediaId (String, mutually exclusive with Url): The ID of the registered media asset. If both Url and MediaId are specified, MediaId takes precedence.
    shared_ptr<string> input_ {};
    // The remake parameters. The value is a JSON string with the following structure:
    // 
    // - Product (Object, required): The product information, including the original product and the new product.
    //   - OriginalProductName (String, optional): The name of the product or brand in the original video. This is used to locate and replace mentions of the original product.
    //   - NewProduct (Object, required): The information about the new product.
    //     - ProductName (String, required): The name of the product or brand.
    //     - Description (String, optional): The description of the product.
    //     - ProductKnowledge (String, optional): The physical knowledge of the product, such as the material and usage.
    //     - ProductImages (Array\\<String\\>, required): The images of the new product. The list cannot be empty. Each item is an HTTP or HTTPS URL.
    //     - SellingPoints (Array\\<String\\>, optional): The list of selling points of the product.
    //     - OriginalPrice (String, optional): The original price.
    //     - CurrentPrice (String, optional): The current price.
    //     - Discount (String, optional): The discount information, such as "50 off for orders over 200" or "buy one get one free".
    // - AvatarList (Array\\<Object\\>, optional): The list of character replacements. Single-character and multi-character replacements are supported. Pass one item for single-character replacement and two to five items for multi-character replacement. Each item is an object that describes the replacement relationship between an original character and a new character. If this parameter is not passed or is an empty array, no characters are replaced.
    //   - OriginalAvatarImage (String, required for each item in multi-character replacement, optional for single-character replacement): The reference image of the target character in the original video. HTTP and HTTPS URLs or registered image MediaIds are supported. The value cannot be duplicated within the same list.
    //   - NewAvatarImages (Array\\<String\\>, required for each item): The list of reference images for the new character. The list cannot be empty. HTTP and HTTPS URLs or registered image MediaIds are supported.
    //   - AvatarName (String, optional for each item): The role name of the replaced character in the generated script.
    // - VoiceoverLanguage (String, optional): The voiceover language. Explicitly specify the language, such as zh for Chinese or en for English.
    // - AdditionalRequirements (String, optional): Additional remake requirements.
    shared_ptr<string> remakeParams_ {};
    // The user-defined data.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
