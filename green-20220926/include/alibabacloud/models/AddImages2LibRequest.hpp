// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIMAGES2LIBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDIMAGES2LIBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class AddImages2LibRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddImages2LibRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImgUrl, imgUrl_);
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddImages2LibRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImgUrl, imgUrl_);
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddImages2LibRequest() = default ;
    AddImages2LibRequest(const AddImages2LibRequest &) = default ;
    AddImages2LibRequest(AddImages2LibRequest &&) = default ;
    AddImages2LibRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddImages2LibRequest() = default ;
    AddImages2LibRequest& operator=(const AddImages2LibRequest &) = default ;
    AddImages2LibRequest& operator=(AddImages2LibRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imgUrl_ == nullptr
        && this->libId_ == nullptr && this->regionId_ == nullptr; };
    // imgUrl Field Functions 
    bool hasImgUrl() const { return this->imgUrl_ != nullptr;};
    void deleteImgUrl() { this->imgUrl_ = nullptr;};
    inline string getImgUrl() const { DARABONBA_PTR_GET_DEFAULT(imgUrl_, "") };
    inline AddImages2LibRequest& setImgUrl(string imgUrl) { DARABONBA_PTR_SET_VALUE(imgUrl_, imgUrl) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string getLibId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline AddImages2LibRequest& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddImages2LibRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // URL of the image to be uploaded.
    shared_ptr<string> imgUrl_ {};
    // The ID of image library.
    shared_ptr<string> libId_ {};
    // Region ID
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
