// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEDISTRIBUTEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEDISTRIBUTEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetImageDistributeInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageDistributeInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageDistributeInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    GetImageDistributeInfoRequest() = default ;
    GetImageDistributeInfoRequest(const GetImageDistributeInfoRequest &) = default ;
    GetImageDistributeInfoRequest(GetImageDistributeInfoRequest &&) = default ;
    GetImageDistributeInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageDistributeInfoRequest() = default ;
    GetImageDistributeInfoRequest& operator=(const GetImageDistributeInfoRequest &) = default ;
    GetImageDistributeInfoRequest& operator=(GetImageDistributeInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && this->versionId_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline GetImageDistributeInfoRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline GetImageDistributeInfoRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The ID of the image whose region distribution information you want to query.
    shared_ptr<string> imageId_ {};
    // The ID of the image version. If this parameter is not specified, the online version of the image is queried.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
