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
    // The JSON object string for the original video input. The Type of the first item in Medias is video, and a MediaId or HTTP(S) URL is provided.
    shared_ptr<string> input_ {};
    // The remake parameters in JSON string format. The structure is as follows:
    // 
    // - Product (Object, required): The product information, including the original and new products.
    //   - OriginalProductName (String, optional): The product or brand name in the original video, used to locate and replace mentions of the original product.
    //   - NewProduct (Object, required): The new product information.
    //     - ProductName (String, required): The product or brand name.
    //     - Description (String, optional): The product description.
    //     - ProductKnowledge (String, optional): The physical knowledge of the product, such as material and usage.
    //     - ProductImages (Array<String>, required): A non-empty list of new product images, where each item is an HTTP(S) URL.
    //     - SellingPoints (Array<String>, optional): The list of product selling points.
    //     - OriginalPrice (String, optional): The original price.
    //     - CurrentPrice (String, optional): The current price.
    //     - Discount (String, optional): The discount information, such as "$50 off for orders over $200" or "Buy one get one free".
    // - AvatarList (Array<Object>, optional): The character replacement list, supporting 1 to 5 items. Each item describes the replacement relationship between an original character and a new character. If this parameter is not passed or is an empty array, no characters are replaced.
    //   - OriginalAvatarImage (String, required for each item when there are multiple characters, optional for a single character): The reference image of the target character in the original video. An HTTP(S) URL or a registered image MediaId is supported. Duplicates are not allowed in the same list.
    //   - NewAvatarImages (Array<String>, required for each item): A non-empty list of reference images for the new character. An HTTP(S) URL or a registered image MediaId is supported.
    //   - AvatarName (String, optional for each item): The role name of the replaced character in the generated script.
    // - VoiceoverLanguage (String, optional): The voiceover language. Default value: zh.
    // - AdditionalRequirements (String, optional): Additional remake requirements.
    // 
    // This operation uses AvatarList and does not use the legacy Avatar or OriginalAvatarName from the standalone scripting interface. The two character structures are not interchangeable.
    shared_ptr<string> remakeParams_ {};
    // The user-defined JSON object string, which is returned as-is when queried. NotifyAddress is the callback URL for the final state of the task.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
