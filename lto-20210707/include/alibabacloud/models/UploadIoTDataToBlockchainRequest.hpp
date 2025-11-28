// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADIOTDATATOBLOCKCHAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADIOTDATATOBLOCKCHAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class UploadIoTDataToBlockchainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadIoTDataToBlockchainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IotAuthType, iotAuthType_);
      DARABONBA_PTR_TO_JSON(IotDataDID, iotDataDID_);
      DARABONBA_PTR_TO_JSON(IotDataDigest, iotDataDigest_);
      DARABONBA_PTR_TO_JSON(IotDataToken, iotDataToken_);
      DARABONBA_PTR_TO_JSON(IotId, iotId_);
      DARABONBA_PTR_TO_JSON(IotIdServiceProvider, iotIdServiceProvider_);
      DARABONBA_PTR_TO_JSON(IotIdSource, iotIdSource_);
      DARABONBA_PTR_TO_JSON(PlainData, plainData_);
      DARABONBA_PTR_TO_JSON(PrivacyData, privacyData_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadIoTDataToBlockchainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IotAuthType, iotAuthType_);
      DARABONBA_PTR_FROM_JSON(IotDataDID, iotDataDID_);
      DARABONBA_PTR_FROM_JSON(IotDataDigest, iotDataDigest_);
      DARABONBA_PTR_FROM_JSON(IotDataToken, iotDataToken_);
      DARABONBA_PTR_FROM_JSON(IotId, iotId_);
      DARABONBA_PTR_FROM_JSON(IotIdServiceProvider, iotIdServiceProvider_);
      DARABONBA_PTR_FROM_JSON(IotIdSource, iotIdSource_);
      DARABONBA_PTR_FROM_JSON(PlainData, plainData_);
      DARABONBA_PTR_FROM_JSON(PrivacyData, privacyData_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UploadIoTDataToBlockchainRequest() = default ;
    UploadIoTDataToBlockchainRequest(const UploadIoTDataToBlockchainRequest &) = default ;
    UploadIoTDataToBlockchainRequest(UploadIoTDataToBlockchainRequest &&) = default ;
    UploadIoTDataToBlockchainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadIoTDataToBlockchainRequest() = default ;
    UploadIoTDataToBlockchainRequest& operator=(const UploadIoTDataToBlockchainRequest &) = default ;
    UploadIoTDataToBlockchainRequest& operator=(UploadIoTDataToBlockchainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->iotAuthType_ == nullptr
        && return this->iotDataDID_ == nullptr && return this->iotDataDigest_ == nullptr && return this->iotDataToken_ == nullptr && return this->iotId_ == nullptr && return this->iotIdServiceProvider_ == nullptr
        && return this->iotIdSource_ == nullptr && return this->plainData_ == nullptr && return this->privacyData_ == nullptr && return this->regionId_ == nullptr; };
    // iotAuthType Field Functions 
    bool hasIotAuthType() const { return this->iotAuthType_ != nullptr;};
    void deleteIotAuthType() { this->iotAuthType_ = nullptr;};
    inline string iotAuthType() const { DARABONBA_PTR_GET_DEFAULT(iotAuthType_, "") };
    inline UploadIoTDataToBlockchainRequest& setIotAuthType(string iotAuthType) { DARABONBA_PTR_SET_VALUE(iotAuthType_, iotAuthType) };


    // iotDataDID Field Functions 
    bool hasIotDataDID() const { return this->iotDataDID_ != nullptr;};
    void deleteIotDataDID() { this->iotDataDID_ = nullptr;};
    inline string iotDataDID() const { DARABONBA_PTR_GET_DEFAULT(iotDataDID_, "") };
    inline UploadIoTDataToBlockchainRequest& setIotDataDID(string iotDataDID) { DARABONBA_PTR_SET_VALUE(iotDataDID_, iotDataDID) };


    // iotDataDigest Field Functions 
    bool hasIotDataDigest() const { return this->iotDataDigest_ != nullptr;};
    void deleteIotDataDigest() { this->iotDataDigest_ = nullptr;};
    inline string iotDataDigest() const { DARABONBA_PTR_GET_DEFAULT(iotDataDigest_, "") };
    inline UploadIoTDataToBlockchainRequest& setIotDataDigest(string iotDataDigest) { DARABONBA_PTR_SET_VALUE(iotDataDigest_, iotDataDigest) };


    // iotDataToken Field Functions 
    bool hasIotDataToken() const { return this->iotDataToken_ != nullptr;};
    void deleteIotDataToken() { this->iotDataToken_ = nullptr;};
    inline string iotDataToken() const { DARABONBA_PTR_GET_DEFAULT(iotDataToken_, "") };
    inline UploadIoTDataToBlockchainRequest& setIotDataToken(string iotDataToken) { DARABONBA_PTR_SET_VALUE(iotDataToken_, iotDataToken) };


    // iotId Field Functions 
    bool hasIotId() const { return this->iotId_ != nullptr;};
    void deleteIotId() { this->iotId_ = nullptr;};
    inline string iotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
    inline UploadIoTDataToBlockchainRequest& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


    // iotIdServiceProvider Field Functions 
    bool hasIotIdServiceProvider() const { return this->iotIdServiceProvider_ != nullptr;};
    void deleteIotIdServiceProvider() { this->iotIdServiceProvider_ = nullptr;};
    inline string iotIdServiceProvider() const { DARABONBA_PTR_GET_DEFAULT(iotIdServiceProvider_, "") };
    inline UploadIoTDataToBlockchainRequest& setIotIdServiceProvider(string iotIdServiceProvider) { DARABONBA_PTR_SET_VALUE(iotIdServiceProvider_, iotIdServiceProvider) };


    // iotIdSource Field Functions 
    bool hasIotIdSource() const { return this->iotIdSource_ != nullptr;};
    void deleteIotIdSource() { this->iotIdSource_ = nullptr;};
    inline string iotIdSource() const { DARABONBA_PTR_GET_DEFAULT(iotIdSource_, "") };
    inline UploadIoTDataToBlockchainRequest& setIotIdSource(string iotIdSource) { DARABONBA_PTR_SET_VALUE(iotIdSource_, iotIdSource) };


    // plainData Field Functions 
    bool hasPlainData() const { return this->plainData_ != nullptr;};
    void deletePlainData() { this->plainData_ = nullptr;};
    inline string plainData() const { DARABONBA_PTR_GET_DEFAULT(plainData_, "") };
    inline UploadIoTDataToBlockchainRequest& setPlainData(string plainData) { DARABONBA_PTR_SET_VALUE(plainData_, plainData) };


    // privacyData Field Functions 
    bool hasPrivacyData() const { return this->privacyData_ != nullptr;};
    void deletePrivacyData() { this->privacyData_ = nullptr;};
    inline string privacyData() const { DARABONBA_PTR_GET_DEFAULT(privacyData_, "") };
    inline UploadIoTDataToBlockchainRequest& setPrivacyData(string privacyData) { DARABONBA_PTR_SET_VALUE(privacyData_, privacyData) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UploadIoTDataToBlockchainRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> iotAuthType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> iotDataDID_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> iotDataDigest_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> iotDataToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> iotId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> iotIdServiceProvider_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> iotIdSource_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> plainData_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> privacyData_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
