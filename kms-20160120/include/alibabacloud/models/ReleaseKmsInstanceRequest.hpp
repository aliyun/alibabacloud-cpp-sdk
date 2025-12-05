// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEKMSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASEKMSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ReleaseKmsInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseKmsInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ForceDeleteWithoutBackup, forceDeleteWithoutBackup_);
      DARABONBA_PTR_TO_JSON(KmsInstanceId, kmsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseKmsInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ForceDeleteWithoutBackup, forceDeleteWithoutBackup_);
      DARABONBA_PTR_FROM_JSON(KmsInstanceId, kmsInstanceId_);
    };
    ReleaseKmsInstanceRequest() = default ;
    ReleaseKmsInstanceRequest(const ReleaseKmsInstanceRequest &) = default ;
    ReleaseKmsInstanceRequest(ReleaseKmsInstanceRequest &&) = default ;
    ReleaseKmsInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseKmsInstanceRequest() = default ;
    ReleaseKmsInstanceRequest& operator=(const ReleaseKmsInstanceRequest &) = default ;
    ReleaseKmsInstanceRequest& operator=(ReleaseKmsInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forceDeleteWithoutBackup_ == nullptr
        && return this->kmsInstanceId_ == nullptr; };
    // forceDeleteWithoutBackup Field Functions 
    bool hasForceDeleteWithoutBackup() const { return this->forceDeleteWithoutBackup_ != nullptr;};
    void deleteForceDeleteWithoutBackup() { this->forceDeleteWithoutBackup_ = nullptr;};
    inline string forceDeleteWithoutBackup() const { DARABONBA_PTR_GET_DEFAULT(forceDeleteWithoutBackup_, "") };
    inline ReleaseKmsInstanceRequest& setForceDeleteWithoutBackup(string forceDeleteWithoutBackup) { DARABONBA_PTR_SET_VALUE(forceDeleteWithoutBackup_, forceDeleteWithoutBackup) };


    // kmsInstanceId Field Functions 
    bool hasKmsInstanceId() const { return this->kmsInstanceId_ != nullptr;};
    void deleteKmsInstanceId() { this->kmsInstanceId_ = nullptr;};
    inline string kmsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(kmsInstanceId_, "") };
    inline ReleaseKmsInstanceRequest& setKmsInstanceId(string kmsInstanceId) { DARABONBA_PTR_SET_VALUE(kmsInstanceId_, kmsInstanceId) };


  protected:
    std::shared_ptr<string> forceDeleteWithoutBackup_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> kmsInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
