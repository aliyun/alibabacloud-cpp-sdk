// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERMIGUUPLOADSOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERMIGUUPLOADSOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterMiguUploadSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterMiguUploadSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fileType, fileType_);
      DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterMiguUploadSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fileType, fileType_);
      DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
    };
    ModelRouterMiguUploadSourceRequest() = default ;
    ModelRouterMiguUploadSourceRequest(const ModelRouterMiguUploadSourceRequest &) = default ;
    ModelRouterMiguUploadSourceRequest(ModelRouterMiguUploadSourceRequest &&) = default ;
    ModelRouterMiguUploadSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterMiguUploadSourceRequest() = default ;
    ModelRouterMiguUploadSourceRequest& operator=(const ModelRouterMiguUploadSourceRequest &) = default ;
    ModelRouterMiguUploadSourceRequest& operator=(ModelRouterMiguUploadSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileType_ == nullptr
        && this->serviceName_ == nullptr; };
    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline ModelRouterMiguUploadSourceRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ModelRouterMiguUploadSourceRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The source file type. Valid values: VIDEO, IMAGE, AUDIO, and TEXT.
    // 
    // This parameter is required.
    shared_ptr<string> fileType_ {};
    // The business service name, such as kling, vidu, or wonder.
    // 
    // This parameter is required.
    shared_ptr<string> serviceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
