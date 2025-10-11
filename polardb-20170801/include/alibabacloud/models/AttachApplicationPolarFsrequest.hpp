// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHAPPLICATIONPOLARFSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHAPPLICATIONPOLARFSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class AttachApplicationPolarFSRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachApplicationPolarFSRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(PolarFSAccessKeyId, polarFSAccessKeyId_);
      DARABONBA_PTR_TO_JSON(PolarFSAccessKeySecret, polarFSAccessKeySecret_);
      DARABONBA_PTR_TO_JSON(PolarFSInstanceId, polarFSInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachApplicationPolarFSRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(PolarFSAccessKeyId, polarFSAccessKeyId_);
      DARABONBA_PTR_FROM_JSON(PolarFSAccessKeySecret, polarFSAccessKeySecret_);
      DARABONBA_PTR_FROM_JSON(PolarFSInstanceId, polarFSInstanceId_);
    };
    AttachApplicationPolarFSRequest() = default ;
    AttachApplicationPolarFSRequest(const AttachApplicationPolarFSRequest &) = default ;
    AttachApplicationPolarFSRequest(AttachApplicationPolarFSRequest &&) = default ;
    AttachApplicationPolarFSRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachApplicationPolarFSRequest() = default ;
    AttachApplicationPolarFSRequest& operator=(const AttachApplicationPolarFSRequest &) = default ;
    AttachApplicationPolarFSRequest& operator=(AttachApplicationPolarFSRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->polarFSAccessKeyId_ != nullptr && this->polarFSAccessKeySecret_ != nullptr && this->polarFSInstanceId_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline AttachApplicationPolarFSRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // polarFSAccessKeyId Field Functions 
    bool hasPolarFSAccessKeyId() const { return this->polarFSAccessKeyId_ != nullptr;};
    void deletePolarFSAccessKeyId() { this->polarFSAccessKeyId_ = nullptr;};
    inline string polarFSAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(polarFSAccessKeyId_, "") };
    inline AttachApplicationPolarFSRequest& setPolarFSAccessKeyId(string polarFSAccessKeyId) { DARABONBA_PTR_SET_VALUE(polarFSAccessKeyId_, polarFSAccessKeyId) };


    // polarFSAccessKeySecret Field Functions 
    bool hasPolarFSAccessKeySecret() const { return this->polarFSAccessKeySecret_ != nullptr;};
    void deletePolarFSAccessKeySecret() { this->polarFSAccessKeySecret_ = nullptr;};
    inline string polarFSAccessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(polarFSAccessKeySecret_, "") };
    inline AttachApplicationPolarFSRequest& setPolarFSAccessKeySecret(string polarFSAccessKeySecret) { DARABONBA_PTR_SET_VALUE(polarFSAccessKeySecret_, polarFSAccessKeySecret) };


    // polarFSInstanceId Field Functions 
    bool hasPolarFSInstanceId() const { return this->polarFSInstanceId_ != nullptr;};
    void deletePolarFSInstanceId() { this->polarFSInstanceId_ = nullptr;};
    inline string polarFSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFSInstanceId_, "") };
    inline AttachApplicationPolarFSRequest& setPolarFSInstanceId(string polarFSInstanceId) { DARABONBA_PTR_SET_VALUE(polarFSInstanceId_, polarFSInstanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    std::shared_ptr<string> polarFSAccessKeyId_ = nullptr;
    std::shared_ptr<string> polarFSAccessKeySecret_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> polarFSInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
