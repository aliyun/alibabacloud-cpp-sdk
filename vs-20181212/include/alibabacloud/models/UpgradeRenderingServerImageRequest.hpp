// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADERENDERINGSERVERIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADERENDERINGSERVERIMAGEREQUEST_HPP_
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
  class UpgradeRenderingServerImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeRenderingServerImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(Precheck, precheck_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceIds, renderingInstanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeRenderingServerImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(Precheck, precheck_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceIds, renderingInstanceIds_);
    };
    UpgradeRenderingServerImageRequest() = default ;
    UpgradeRenderingServerImageRequest(const UpgradeRenderingServerImageRequest &) = default ;
    UpgradeRenderingServerImageRequest(UpgradeRenderingServerImageRequest &&) = default ;
    UpgradeRenderingServerImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeRenderingServerImageRequest() = default ;
    UpgradeRenderingServerImageRequest& operator=(const UpgradeRenderingServerImageRequest &) = default ;
    UpgradeRenderingServerImageRequest& operator=(UpgradeRenderingServerImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && this->precheck_ == nullptr && this->renderingInstanceIds_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline UpgradeRenderingServerImageRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // precheck Field Functions 
    bool hasPrecheck() const { return this->precheck_ != nullptr;};
    void deletePrecheck() { this->precheck_ = nullptr;};
    inline bool getPrecheck() const { DARABONBA_PTR_GET_DEFAULT(precheck_, false) };
    inline UpgradeRenderingServerImageRequest& setPrecheck(bool precheck) { DARABONBA_PTR_SET_VALUE(precheck_, precheck) };


    // renderingInstanceIds Field Functions 
    bool hasRenderingInstanceIds() const { return this->renderingInstanceIds_ != nullptr;};
    void deleteRenderingInstanceIds() { this->renderingInstanceIds_ = nullptr;};
    inline const vector<string> & getRenderingInstanceIds() const { DARABONBA_PTR_GET_CONST(renderingInstanceIds_, vector<string>) };
    inline vector<string> getRenderingInstanceIds() { DARABONBA_PTR_GET(renderingInstanceIds_, vector<string>) };
    inline UpgradeRenderingServerImageRequest& setRenderingInstanceIds(const vector<string> & renderingInstanceIds) { DARABONBA_PTR_SET_VALUE(renderingInstanceIds_, renderingInstanceIds) };
    inline UpgradeRenderingServerImageRequest& setRenderingInstanceIds(vector<string> && renderingInstanceIds) { DARABONBA_PTR_SET_RVALUE(renderingInstanceIds_, renderingInstanceIds) };


  protected:
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    shared_ptr<bool> precheck_ {};
    // This parameter is required.
    shared_ptr<vector<string>> renderingInstanceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
