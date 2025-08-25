// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTELLIGENTCOMPOSITIONADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTELLIGENTCOMPOSITIONADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class IntelligentCompositionAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntelligentCompositionAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_TO_JSON(NumBoxes, numBoxes_);
    };
    friend void from_json(const Darabonba::Json& j, IntelligentCompositionAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_FROM_JSON(NumBoxes, numBoxes_);
    };
    IntelligentCompositionAdvanceRequest() = default ;
    IntelligentCompositionAdvanceRequest(const IntelligentCompositionAdvanceRequest &) = default ;
    IntelligentCompositionAdvanceRequest(IntelligentCompositionAdvanceRequest &&) = default ;
    IntelligentCompositionAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntelligentCompositionAdvanceRequest() = default ;
    IntelligentCompositionAdvanceRequest& operator=(const IntelligentCompositionAdvanceRequest &) = default ;
    IntelligentCompositionAdvanceRequest& operator=(IntelligentCompositionAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageURLObject_ != nullptr
        && this->numBoxes_ != nullptr; };
    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline IntelligentCompositionAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


    // numBoxes Field Functions 
    bool hasNumBoxes() const { return this->numBoxes_ != nullptr;};
    void deleteNumBoxes() { this->numBoxes_ = nullptr;};
    inline int32_t numBoxes() const { DARABONBA_PTR_GET_DEFAULT(numBoxes_, 0) };
    inline IntelligentCompositionAdvanceRequest& setNumBoxes(int32_t numBoxes) { DARABONBA_PTR_SET_VALUE(numBoxes_, numBoxes) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
    std::shared_ptr<int32_t> numBoxes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
