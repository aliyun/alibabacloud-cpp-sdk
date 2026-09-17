// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADERENDERINGINSTANCEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADERENDERINGINSTANCEIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UpgradeRenderingInstanceImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeRenderingInstanceImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceIds, renderingInstanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeRenderingInstanceImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceIds, renderingInstanceIds_);
    };
    UpgradeRenderingInstanceImageRequest() = default ;
    UpgradeRenderingInstanceImageRequest(const UpgradeRenderingInstanceImageRequest &) = default ;
    UpgradeRenderingInstanceImageRequest(UpgradeRenderingInstanceImageRequest &&) = default ;
    UpgradeRenderingInstanceImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeRenderingInstanceImageRequest() = default ;
    UpgradeRenderingInstanceImageRequest& operator=(const UpgradeRenderingInstanceImageRequest &) = default ;
    UpgradeRenderingInstanceImageRequest& operator=(UpgradeRenderingInstanceImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && this->renderingInstanceIds_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline UpgradeRenderingInstanceImageRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // renderingInstanceIds Field Functions 
    bool hasRenderingInstanceIds() const { return this->renderingInstanceIds_ != nullptr;};
    void deleteRenderingInstanceIds() { this->renderingInstanceIds_ = nullptr;};
    inline const vector<string> & getRenderingInstanceIds() const { DARABONBA_PTR_GET_CONST(renderingInstanceIds_, vector<string>) };
    inline vector<string> getRenderingInstanceIds() { DARABONBA_PTR_GET(renderingInstanceIds_, vector<string>) };
    inline UpgradeRenderingInstanceImageRequest& setRenderingInstanceIds(const vector<string> & renderingInstanceIds) { DARABONBA_PTR_SET_VALUE(renderingInstanceIds_, renderingInstanceIds) };
    inline UpgradeRenderingInstanceImageRequest& setRenderingInstanceIds(vector<string> && renderingInstanceIds) { DARABONBA_PTR_SET_RVALUE(renderingInstanceIds_, renderingInstanceIds) };


  protected:
    // The image ID.
    // 
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // The list of cloud application service instance IDs. A maximum of 100 IDs can be specified.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> renderingInstanceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
