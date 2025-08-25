// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSESSCOMPOSITIONADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSESSCOMPOSITIONADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class AssessCompositionAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssessCompositionAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
    };
    friend void from_json(const Darabonba::Json& j, AssessCompositionAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
    };
    AssessCompositionAdvanceRequest() = default ;
    AssessCompositionAdvanceRequest(const AssessCompositionAdvanceRequest &) = default ;
    AssessCompositionAdvanceRequest(AssessCompositionAdvanceRequest &&) = default ;
    AssessCompositionAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssessCompositionAdvanceRequest() = default ;
    AssessCompositionAdvanceRequest& operator=(const AssessCompositionAdvanceRequest &) = default ;
    AssessCompositionAdvanceRequest& operator=(AssessCompositionAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageURLObject_ != nullptr; };
    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline AssessCompositionAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
