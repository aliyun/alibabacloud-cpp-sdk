// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTELLIGENTCOMPOSITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTELLIGENTCOMPOSITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class IntelligentCompositionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntelligentCompositionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(NumBoxes, numBoxes_);
    };
    friend void from_json(const Darabonba::Json& j, IntelligentCompositionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(NumBoxes, numBoxes_);
    };
    IntelligentCompositionRequest() = default ;
    IntelligentCompositionRequest(const IntelligentCompositionRequest &) = default ;
    IntelligentCompositionRequest(IntelligentCompositionRequest &&) = default ;
    IntelligentCompositionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntelligentCompositionRequest() = default ;
    IntelligentCompositionRequest& operator=(const IntelligentCompositionRequest &) = default ;
    IntelligentCompositionRequest& operator=(IntelligentCompositionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURL_ == nullptr
        && return this->numBoxes_ == nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline IntelligentCompositionRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // numBoxes Field Functions 
    bool hasNumBoxes() const { return this->numBoxes_ != nullptr;};
    void deleteNumBoxes() { this->numBoxes_ = nullptr;};
    inline int32_t numBoxes() const { DARABONBA_PTR_GET_DEFAULT(numBoxes_, 0) };
    inline IntelligentCompositionRequest& setNumBoxes(int32_t numBoxes) { DARABONBA_PTR_SET_VALUE(numBoxes_, numBoxes) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
    std::shared_ptr<int32_t> numBoxes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
