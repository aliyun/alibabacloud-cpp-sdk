// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGESKYADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGESKYADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class ChangeSkyAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeSkyAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
      DARABONBA_TO_JSON(ReplaceImageURL, replaceImageURLObject_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeSkyAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
      DARABONBA_FROM_JSON(ReplaceImageURL, replaceImageURLObject_);
    };
    ChangeSkyAdvanceRequest() = default ;
    ChangeSkyAdvanceRequest(const ChangeSkyAdvanceRequest &) = default ;
    ChangeSkyAdvanceRequest(ChangeSkyAdvanceRequest &&) = default ;
    ChangeSkyAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeSkyAdvanceRequest() = default ;
    ChangeSkyAdvanceRequest& operator=(const ChangeSkyAdvanceRequest &) = default ;
    ChangeSkyAdvanceRequest& operator=(ChangeSkyAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURLObject_ == nullptr
        && return this->replaceImageURLObject_ == nullptr; };
    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline ChangeSkyAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


    // replaceImageURLObject Field Functions 
    bool hasReplaceImageURLObject() const { return this->replaceImageURLObject_ != nullptr;};
    void deleteReplaceImageURLObject() { this->replaceImageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> replaceImageURLObject() const { DARABONBA_GET(replaceImageURLObject_) };
    inline ChangeSkyAdvanceRequest& setReplaceImageURLObject(shared_ptr<Darabonba::IStream> replaceImageURLObject) { DARABONBA_SET_VALUE(replaceImageURLObject_, replaceImageURLObject) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> replaceImageURLObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
