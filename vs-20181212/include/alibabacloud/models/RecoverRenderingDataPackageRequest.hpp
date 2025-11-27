// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOVERRENDERINGDATAPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOVERRENDERINGDATAPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class RecoverRenderingDataPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecoverRenderingDataPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataPackageId, dataPackageId_);
      DARABONBA_PTR_TO_JSON(LoadMode, loadMode_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, RecoverRenderingDataPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataPackageId, dataPackageId_);
      DARABONBA_PTR_FROM_JSON(LoadMode, loadMode_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    RecoverRenderingDataPackageRequest() = default ;
    RecoverRenderingDataPackageRequest(const RecoverRenderingDataPackageRequest &) = default ;
    RecoverRenderingDataPackageRequest(RecoverRenderingDataPackageRequest &&) = default ;
    RecoverRenderingDataPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecoverRenderingDataPackageRequest() = default ;
    RecoverRenderingDataPackageRequest& operator=(const RecoverRenderingDataPackageRequest &) = default ;
    RecoverRenderingDataPackageRequest& operator=(RecoverRenderingDataPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataPackageId_ == nullptr
        && return this->loadMode_ == nullptr && return this->renderingInstanceId_ == nullptr; };
    // dataPackageId Field Functions 
    bool hasDataPackageId() const { return this->dataPackageId_ != nullptr;};
    void deleteDataPackageId() { this->dataPackageId_ = nullptr;};
    inline string dataPackageId() const { DARABONBA_PTR_GET_DEFAULT(dataPackageId_, "") };
    inline RecoverRenderingDataPackageRequest& setDataPackageId(string dataPackageId) { DARABONBA_PTR_SET_VALUE(dataPackageId_, dataPackageId) };


    // loadMode Field Functions 
    bool hasLoadMode() const { return this->loadMode_ != nullptr;};
    void deleteLoadMode() { this->loadMode_ = nullptr;};
    inline string loadMode() const { DARABONBA_PTR_GET_DEFAULT(loadMode_, "") };
    inline RecoverRenderingDataPackageRequest& setLoadMode(string loadMode) { DARABONBA_PTR_SET_VALUE(loadMode_, loadMode) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline RecoverRenderingDataPackageRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dataPackageId_ = nullptr;
    std::shared_ptr<string> loadMode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
