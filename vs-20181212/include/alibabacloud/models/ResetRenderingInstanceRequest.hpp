// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETRENDERINGINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETRENDERINGINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ResetRenderingInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetRenderingInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionName, actionName_);
      DARABONBA_PTR_TO_JSON(DataPackageId, dataPackageId_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetRenderingInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionName, actionName_);
      DARABONBA_PTR_FROM_JSON(DataPackageId, dataPackageId_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    ResetRenderingInstanceRequest() = default ;
    ResetRenderingInstanceRequest(const ResetRenderingInstanceRequest &) = default ;
    ResetRenderingInstanceRequest(ResetRenderingInstanceRequest &&) = default ;
    ResetRenderingInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetRenderingInstanceRequest() = default ;
    ResetRenderingInstanceRequest& operator=(const ResetRenderingInstanceRequest &) = default ;
    ResetRenderingInstanceRequest& operator=(ResetRenderingInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionName_ == nullptr
        && this->dataPackageId_ == nullptr && this->renderingInstanceId_ == nullptr; };
    // actionName Field Functions 
    bool hasActionName() const { return this->actionName_ != nullptr;};
    void deleteActionName() { this->actionName_ = nullptr;};
    inline string getActionName() const { DARABONBA_PTR_GET_DEFAULT(actionName_, "") };
    inline ResetRenderingInstanceRequest& setActionName(string actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };


    // dataPackageId Field Functions 
    bool hasDataPackageId() const { return this->dataPackageId_ != nullptr;};
    void deleteDataPackageId() { this->dataPackageId_ = nullptr;};
    inline string getDataPackageId() const { DARABONBA_PTR_GET_DEFAULT(dataPackageId_, "") };
    inline ResetRenderingInstanceRequest& setDataPackageId(string dataPackageId) { DARABONBA_PTR_SET_VALUE(dataPackageId_, dataPackageId) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline ResetRenderingInstanceRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    shared_ptr<string> actionName_ {};
    shared_ptr<string> dataPackageId_ {};
    // This parameter is required.
    shared_ptr<string> renderingInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
