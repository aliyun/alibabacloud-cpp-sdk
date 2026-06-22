// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUMMARY_HPP_
#define ALIBABACLOUD_MODELS_SUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Illustration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Summary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Summary& obj) { 
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, Summary& obj) { 
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    Summary() = default ;
    Summary(const Summary &) = default ;
    Summary(Summary &&) = default ;
    Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Summary() = default ;
    Summary& operator=(const Summary &) = default ;
    Summary& operator=(Summary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->image_ == nullptr
        && this->text_ == nullptr; };
    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline const Illustration & getImage() const { DARABONBA_PTR_GET_CONST(image_, Illustration) };
    inline Illustration getImage() { DARABONBA_PTR_GET(image_, Illustration) };
    inline Summary& setImage(const Illustration & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
    inline Summary& setImage(Illustration && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline Summary& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    shared_ptr<Illustration> image_ {};
    shared_ptr<string> text_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
