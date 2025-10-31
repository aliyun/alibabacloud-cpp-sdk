// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class CopyImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUid, imageUid_);
      DARABONBA_PTR_TO_JSON(TargetRegionId, targetRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUid, imageUid_);
      DARABONBA_PTR_FROM_JSON(TargetRegionId, targetRegionId_);
    };
    CopyImageRequest() = default ;
    CopyImageRequest(const CopyImageRequest &) = default ;
    CopyImageRequest(CopyImageRequest &&) = default ;
    CopyImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyImageRequest() = default ;
    CopyImageRequest& operator=(const CopyImageRequest &) = default ;
    CopyImageRequest& operator=(CopyImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUid_ == nullptr
        && return this->targetRegionId_ == nullptr; };
    // imageUid Field Functions 
    bool hasImageUid() const { return this->imageUid_ != nullptr;};
    void deleteImageUid() { this->imageUid_ = nullptr;};
    inline string imageUid() const { DARABONBA_PTR_GET_DEFAULT(imageUid_, "") };
    inline CopyImageRequest& setImageUid(string imageUid) { DARABONBA_PTR_SET_VALUE(imageUid_, imageUid) };


    // targetRegionId Field Functions 
    bool hasTargetRegionId() const { return this->targetRegionId_ != nullptr;};
    void deleteTargetRegionId() { this->targetRegionId_ = nullptr;};
    inline string targetRegionId() const { DARABONBA_PTR_GET_DEFAULT(targetRegionId_, "") };
    inline CopyImageRequest& setTargetRegionId(string targetRegionId) { DARABONBA_PTR_SET_VALUE(targetRegionId_, targetRegionId) };


  protected:
    // The ID of the image.
    std::shared_ptr<string> imageUid_ = nullptr;
    // The ID of the destination region.
    std::shared_ptr<string> targetRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
