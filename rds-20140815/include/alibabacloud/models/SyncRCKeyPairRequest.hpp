// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCRCKEYPAIRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCRCKEYPAIRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class SyncRCKeyPairRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncRCKeyPairRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SyncMode, syncMode_);
    };
    friend void from_json(const Darabonba::Json& j, SyncRCKeyPairRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SyncMode, syncMode_);
    };
    SyncRCKeyPairRequest() = default ;
    SyncRCKeyPairRequest(const SyncRCKeyPairRequest &) = default ;
    SyncRCKeyPairRequest(SyncRCKeyPairRequest &&) = default ;
    SyncRCKeyPairRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncRCKeyPairRequest() = default ;
    SyncRCKeyPairRequest& operator=(const SyncRCKeyPairRequest &) = default ;
    SyncRCKeyPairRequest& operator=(SyncRCKeyPairRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyPairName_ == nullptr
        && this->regionId_ == nullptr && this->syncMode_ == nullptr; };
    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline SyncRCKeyPairRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SyncRCKeyPairRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // syncMode Field Functions 
    bool hasSyncMode() const { return this->syncMode_ != nullptr;};
    void deleteSyncMode() { this->syncMode_ = nullptr;};
    inline bool getSyncMode() const { DARABONBA_PTR_GET_DEFAULT(syncMode_, false) };
    inline SyncRCKeyPairRequest& setSyncMode(bool syncMode) { DARABONBA_PTR_SET_VALUE(syncMode_, syncMode) };


  protected:
    // The name of the key pair.
    shared_ptr<string> keyPairName_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    shared_ptr<bool> syncMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
