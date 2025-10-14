// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEUPLOADINFOREQUESTOPTION_HPP_
#define ALIBABACLOUD_MODELS_GETFILEUPLOADINFOREQUESTOPTION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFileUploadInfoRequestOptionPreCheckParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetFileUploadInfoRequestOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileUploadInfoRequestOption& obj) { 
      DARABONBA_PTR_TO_JSON(PreCheckParam, preCheckParam_);
      DARABONBA_PTR_TO_JSON(PreferIntranet, preferIntranet_);
      DARABONBA_PTR_TO_JSON(PreferRegion, preferRegion_);
      DARABONBA_PTR_TO_JSON(StorageDriver, storageDriver_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileUploadInfoRequestOption& obj) { 
      DARABONBA_PTR_FROM_JSON(PreCheckParam, preCheckParam_);
      DARABONBA_PTR_FROM_JSON(PreferIntranet, preferIntranet_);
      DARABONBA_PTR_FROM_JSON(PreferRegion, preferRegion_);
      DARABONBA_PTR_FROM_JSON(StorageDriver, storageDriver_);
    };
    GetFileUploadInfoRequestOption() = default ;
    GetFileUploadInfoRequestOption(const GetFileUploadInfoRequestOption &) = default ;
    GetFileUploadInfoRequestOption(GetFileUploadInfoRequestOption &&) = default ;
    GetFileUploadInfoRequestOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileUploadInfoRequestOption() = default ;
    GetFileUploadInfoRequestOption& operator=(const GetFileUploadInfoRequestOption &) = default ;
    GetFileUploadInfoRequestOption& operator=(GetFileUploadInfoRequestOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->preCheckParam_ == nullptr
        && return this->preferIntranet_ == nullptr && return this->preferRegion_ == nullptr && return this->storageDriver_ == nullptr; };
    // preCheckParam Field Functions 
    bool hasPreCheckParam() const { return this->preCheckParam_ != nullptr;};
    void deletePreCheckParam() { this->preCheckParam_ = nullptr;};
    inline const Models::GetFileUploadInfoRequestOptionPreCheckParam & preCheckParam() const { DARABONBA_PTR_GET_CONST(preCheckParam_, Models::GetFileUploadInfoRequestOptionPreCheckParam) };
    inline Models::GetFileUploadInfoRequestOptionPreCheckParam preCheckParam() { DARABONBA_PTR_GET(preCheckParam_, Models::GetFileUploadInfoRequestOptionPreCheckParam) };
    inline GetFileUploadInfoRequestOption& setPreCheckParam(const Models::GetFileUploadInfoRequestOptionPreCheckParam & preCheckParam) { DARABONBA_PTR_SET_VALUE(preCheckParam_, preCheckParam) };
    inline GetFileUploadInfoRequestOption& setPreCheckParam(Models::GetFileUploadInfoRequestOptionPreCheckParam && preCheckParam) { DARABONBA_PTR_SET_RVALUE(preCheckParam_, preCheckParam) };


    // preferIntranet Field Functions 
    bool hasPreferIntranet() const { return this->preferIntranet_ != nullptr;};
    void deletePreferIntranet() { this->preferIntranet_ = nullptr;};
    inline bool preferIntranet() const { DARABONBA_PTR_GET_DEFAULT(preferIntranet_, false) };
    inline GetFileUploadInfoRequestOption& setPreferIntranet(bool preferIntranet) { DARABONBA_PTR_SET_VALUE(preferIntranet_, preferIntranet) };


    // preferRegion Field Functions 
    bool hasPreferRegion() const { return this->preferRegion_ != nullptr;};
    void deletePreferRegion() { this->preferRegion_ = nullptr;};
    inline string preferRegion() const { DARABONBA_PTR_GET_DEFAULT(preferRegion_, "") };
    inline GetFileUploadInfoRequestOption& setPreferRegion(string preferRegion) { DARABONBA_PTR_SET_VALUE(preferRegion_, preferRegion) };


    // storageDriver Field Functions 
    bool hasStorageDriver() const { return this->storageDriver_ != nullptr;};
    void deleteStorageDriver() { this->storageDriver_ = nullptr;};
    inline string storageDriver() const { DARABONBA_PTR_GET_DEFAULT(storageDriver_, "") };
    inline GetFileUploadInfoRequestOption& setStorageDriver(string storageDriver) { DARABONBA_PTR_SET_VALUE(storageDriver_, storageDriver) };


  protected:
    std::shared_ptr<Models::GetFileUploadInfoRequestOptionPreCheckParam> preCheckParam_ = nullptr;
    std::shared_ptr<bool> preferIntranet_ = nullptr;
    std::shared_ptr<string> preferRegion_ = nullptr;
    std::shared_ptr<string> storageDriver_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
