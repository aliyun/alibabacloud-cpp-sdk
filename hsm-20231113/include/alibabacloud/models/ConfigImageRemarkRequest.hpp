// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGIMAGEREMARKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGIMAGEREMARKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class ConfigImageRemarkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigImageRemarkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigImageRemarkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    ConfigImageRemarkRequest() = default ;
    ConfigImageRemarkRequest(const ConfigImageRemarkRequest &) = default ;
    ConfigImageRemarkRequest(ConfigImageRemarkRequest &&) = default ;
    ConfigImageRemarkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigImageRemarkRequest() = default ;
    ConfigImageRemarkRequest& operator=(const ConfigImageRemarkRequest &) = default ;
    ConfigImageRemarkRequest& operator=(ConfigImageRemarkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && return this->remark_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ConfigImageRemarkRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ConfigImageRemarkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The ID of the image.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageId_ = nullptr;
    // The description of the image.
    // 
    // This parameter is required.
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
