// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHADDFACESADVANCEREQUESTFACES_HPP_
#define ALIBABACLOUD_MODELS_BATCHADDFACESADVANCEREQUESTFACES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class BatchAddFacesAdvanceRequestFaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAddFacesAdvanceRequestFaces& obj) { 
      DARABONBA_PTR_TO_JSON(ExtraData, extraData_);
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAddFacesAdvanceRequestFaces& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtraData, extraData_);
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
    };
    BatchAddFacesAdvanceRequestFaces() = default ;
    BatchAddFacesAdvanceRequestFaces(const BatchAddFacesAdvanceRequestFaces &) = default ;
    BatchAddFacesAdvanceRequestFaces(BatchAddFacesAdvanceRequestFaces &&) = default ;
    BatchAddFacesAdvanceRequestFaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAddFacesAdvanceRequestFaces() = default ;
    BatchAddFacesAdvanceRequestFaces& operator=(const BatchAddFacesAdvanceRequestFaces &) = default ;
    BatchAddFacesAdvanceRequestFaces& operator=(BatchAddFacesAdvanceRequestFaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extraData_ == nullptr
        && return this->imageURLObject_ == nullptr; };
    // extraData Field Functions 
    bool hasExtraData() const { return this->extraData_ != nullptr;};
    void deleteExtraData() { this->extraData_ = nullptr;};
    inline string extraData() const { DARABONBA_PTR_GET_DEFAULT(extraData_, "") };
    inline BatchAddFacesAdvanceRequestFaces& setExtraData(string extraData) { DARABONBA_PTR_SET_VALUE(extraData_, extraData) };


    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline BatchAddFacesAdvanceRequestFaces& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


  protected:
    std::shared_ptr<string> extraData_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
