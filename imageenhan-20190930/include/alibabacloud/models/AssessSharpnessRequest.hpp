// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSESSSHARPNESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSESSSHARPNESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class AssessSharpnessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssessSharpnessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
    };
    friend void from_json(const Darabonba::Json& j, AssessSharpnessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
    };
    AssessSharpnessRequest() = default ;
    AssessSharpnessRequest(const AssessSharpnessRequest &) = default ;
    AssessSharpnessRequest(AssessSharpnessRequest &&) = default ;
    AssessSharpnessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssessSharpnessRequest() = default ;
    AssessSharpnessRequest& operator=(const AssessSharpnessRequest &) = default ;
    AssessSharpnessRequest& operator=(AssessSharpnessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURL_ == nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline AssessSharpnessRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
