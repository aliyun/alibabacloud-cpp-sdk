// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEJENKINSIMAGEREGISTRYPERSISTENCEDAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEJENKINSIMAGEREGISTRYPERSISTENCEDAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateJenkinsImageRegistryPersistenceDayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateJenkinsImageRegistryPersistenceDayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PersistenceDay, persistenceDay_);
      DARABONBA_PTR_TO_JSON(RegistryId, registryId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateJenkinsImageRegistryPersistenceDayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PersistenceDay, persistenceDay_);
      DARABONBA_PTR_FROM_JSON(RegistryId, registryId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    UpdateJenkinsImageRegistryPersistenceDayRequest() = default ;
    UpdateJenkinsImageRegistryPersistenceDayRequest(const UpdateJenkinsImageRegistryPersistenceDayRequest &) = default ;
    UpdateJenkinsImageRegistryPersistenceDayRequest(UpdateJenkinsImageRegistryPersistenceDayRequest &&) = default ;
    UpdateJenkinsImageRegistryPersistenceDayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateJenkinsImageRegistryPersistenceDayRequest() = default ;
    UpdateJenkinsImageRegistryPersistenceDayRequest& operator=(const UpdateJenkinsImageRegistryPersistenceDayRequest &) = default ;
    UpdateJenkinsImageRegistryPersistenceDayRequest& operator=(UpdateJenkinsImageRegistryPersistenceDayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->persistenceDay_ == nullptr
        && return this->registryId_ == nullptr && return this->sourceIp_ == nullptr; };
    // persistenceDay Field Functions 
    bool hasPersistenceDay() const { return this->persistenceDay_ != nullptr;};
    void deletePersistenceDay() { this->persistenceDay_ = nullptr;};
    inline int32_t persistenceDay() const { DARABONBA_PTR_GET_DEFAULT(persistenceDay_, 0) };
    inline UpdateJenkinsImageRegistryPersistenceDayRequest& setPersistenceDay(int32_t persistenceDay) { DARABONBA_PTR_SET_VALUE(persistenceDay_, persistenceDay) };


    // registryId Field Functions 
    bool hasRegistryId() const { return this->registryId_ != nullptr;};
    void deleteRegistryId() { this->registryId_ = nullptr;};
    inline int64_t registryId() const { DARABONBA_PTR_GET_DEFAULT(registryId_, 0L) };
    inline UpdateJenkinsImageRegistryPersistenceDayRequest& setRegistryId(int64_t registryId) { DARABONBA_PTR_SET_VALUE(registryId_, registryId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline UpdateJenkinsImageRegistryPersistenceDayRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The retention period. Unit: days.
    std::shared_ptr<int32_t> persistenceDay_ = nullptr;
    // The ID of the image repository.
    // 
    // > You can call the [PageImageRegistry](~~PageImageRegistry~~) operation to query the IDs of image repositories.
    std::shared_ptr<int64_t> registryId_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
