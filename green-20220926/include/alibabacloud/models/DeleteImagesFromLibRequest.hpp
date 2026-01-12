// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIMAGESFROMLIBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEIMAGESFROMLIBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class DeleteImagesFromLibRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteImagesFromLibRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageIds, imageIds_);
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteImagesFromLibRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageIds, imageIds_);
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteImagesFromLibRequest() = default ;
    DeleteImagesFromLibRequest(const DeleteImagesFromLibRequest &) = default ;
    DeleteImagesFromLibRequest(DeleteImagesFromLibRequest &&) = default ;
    DeleteImagesFromLibRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteImagesFromLibRequest() = default ;
    DeleteImagesFromLibRequest& operator=(const DeleteImagesFromLibRequest &) = default ;
    DeleteImagesFromLibRequest& operator=(DeleteImagesFromLibRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageIds_ == nullptr
        && this->libId_ == nullptr && this->regionId_ == nullptr; };
    // imageIds Field Functions 
    bool hasImageIds() const { return this->imageIds_ != nullptr;};
    void deleteImageIds() { this->imageIds_ = nullptr;};
    inline string getImageIds() const { DARABONBA_PTR_GET_DEFAULT(imageIds_, "") };
    inline DeleteImagesFromLibRequest& setImageIds(string imageIds) { DARABONBA_PTR_SET_VALUE(imageIds_, imageIds) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string getLibId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline DeleteImagesFromLibRequest& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteImagesFromLibRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the images.
    shared_ptr<string> imageIds_ {};
    // Library ID.
    shared_ptr<string> libId_ {};
    // Region ID
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
