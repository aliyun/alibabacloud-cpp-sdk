// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEJENKINSIMAGEREGISTRYNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEJENKINSIMAGEREGISTRYNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateJenkinsImageRegistryNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateJenkinsImageRegistryNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegistryId, registryId_);
      DARABONBA_PTR_TO_JSON(RegistryName, registryName_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateJenkinsImageRegistryNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegistryId, registryId_);
      DARABONBA_PTR_FROM_JSON(RegistryName, registryName_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    UpdateJenkinsImageRegistryNameRequest() = default ;
    UpdateJenkinsImageRegistryNameRequest(const UpdateJenkinsImageRegistryNameRequest &) = default ;
    UpdateJenkinsImageRegistryNameRequest(UpdateJenkinsImageRegistryNameRequest &&) = default ;
    UpdateJenkinsImageRegistryNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateJenkinsImageRegistryNameRequest() = default ;
    UpdateJenkinsImageRegistryNameRequest& operator=(const UpdateJenkinsImageRegistryNameRequest &) = default ;
    UpdateJenkinsImageRegistryNameRequest& operator=(UpdateJenkinsImageRegistryNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->registryId_ != nullptr
        && this->registryName_ != nullptr && this->sourceIp_ != nullptr; };
    // registryId Field Functions 
    bool hasRegistryId() const { return this->registryId_ != nullptr;};
    void deleteRegistryId() { this->registryId_ = nullptr;};
    inline int64_t registryId() const { DARABONBA_PTR_GET_DEFAULT(registryId_, 0L) };
    inline UpdateJenkinsImageRegistryNameRequest& setRegistryId(int64_t registryId) { DARABONBA_PTR_SET_VALUE(registryId_, registryId) };


    // registryName Field Functions 
    bool hasRegistryName() const { return this->registryName_ != nullptr;};
    void deleteRegistryName() { this->registryName_ = nullptr;};
    inline string registryName() const { DARABONBA_PTR_GET_DEFAULT(registryName_, "") };
    inline UpdateJenkinsImageRegistryNameRequest& setRegistryName(string registryName) { DARABONBA_PTR_SET_VALUE(registryName_, registryName) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline UpdateJenkinsImageRegistryNameRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The ID of the image repository.
    // 
    // > You can call the [PageImageRegistry](~~PageImageRegistry~~) operation to query the IDs of image repositories.
    std::shared_ptr<int64_t> registryId_ = nullptr;
    // The name of the image repository.
    std::shared_ptr<string> registryName_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
