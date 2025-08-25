// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEIMAGEWITHTEXTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEIMAGEWITHTEXTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class GenerateImageWithTextRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateImageWithTextRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateImageWithTextRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    GenerateImageWithTextRequest() = default ;
    GenerateImageWithTextRequest(const GenerateImageWithTextRequest &) = default ;
    GenerateImageWithTextRequest(GenerateImageWithTextRequest &&) = default ;
    GenerateImageWithTextRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateImageWithTextRequest() = default ;
    GenerateImageWithTextRequest& operator=(const GenerateImageWithTextRequest &) = default ;
    GenerateImageWithTextRequest& operator=(GenerateImageWithTextRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->number_ != nullptr
        && this->resolution_ != nullptr && this->text_ != nullptr; };
    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline int32_t number() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
    inline GenerateImageWithTextRequest& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string resolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline GenerateImageWithTextRequest& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline GenerateImageWithTextRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<int32_t> number_ = nullptr;
    std::shared_ptr<string> resolution_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
