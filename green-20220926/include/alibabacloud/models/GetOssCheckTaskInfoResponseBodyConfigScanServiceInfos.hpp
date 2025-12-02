// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSCHECKTASKINFORESPONSEBODYCONFIGSCANSERVICEINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETOSSCHECKTASKINFORESPONSEBODYCONFIGSCANSERVICEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetOssCheckTaskInfoResponseBodyConfigScanServiceInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssCheckTaskInfoResponseBodyConfigScanServiceInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CopyFrom, copyFrom_);
      DARABONBA_PTR_TO_JSON(IsCopy, isCopy_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssCheckTaskInfoResponseBodyConfigScanServiceInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CopyFrom, copyFrom_);
      DARABONBA_PTR_FROM_JSON(IsCopy, isCopy_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    GetOssCheckTaskInfoResponseBodyConfigScanServiceInfos() = default ;
    GetOssCheckTaskInfoResponseBodyConfigScanServiceInfos(const GetOssCheckTaskInfoResponseBodyConfigScanServiceInfos &) = default ;
    GetOssCheckTaskInfoResponseBodyConfigScanServiceInfos(GetOssCheckTaskInfoResponseBodyConfigScanServiceInfos &&) = default ;
    GetOssCheckTaskInfoResponseBodyConfigScanServiceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssCheckTaskInfoResponseBodyConfigScanServiceInfos() = default ;
    GetOssCheckTaskInfoResponseBodyConfigScanServiceInfos& operator=(const GetOssCheckTaskInfoResponseBodyConfigScanServiceInfos &) = default ;
    GetOssCheckTaskInfoResponseBodyConfigScanServiceInfos& operator=(GetOssCheckTaskInfoResponseBodyConfigScanServiceInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->copyFrom_ == nullptr
        && return this->isCopy_ == nullptr && return this->serviceCode_ == nullptr && return this->serviceName_ == nullptr; };
    // copyFrom Field Functions 
    bool hasCopyFrom() const { return this->copyFrom_ != nullptr;};
    void deleteCopyFrom() { this->copyFrom_ = nullptr;};
    inline string copyFrom() const { DARABONBA_PTR_GET_DEFAULT(copyFrom_, "") };
    inline GetOssCheckTaskInfoResponseBodyConfigScanServiceInfos& setCopyFrom(string copyFrom) { DARABONBA_PTR_SET_VALUE(copyFrom_, copyFrom) };


    // isCopy Field Functions 
    bool hasIsCopy() const { return this->isCopy_ != nullptr;};
    void deleteIsCopy() { this->isCopy_ = nullptr;};
    inline bool isCopy() const { DARABONBA_PTR_GET_DEFAULT(isCopy_, false) };
    inline GetOssCheckTaskInfoResponseBodyConfigScanServiceInfos& setIsCopy(bool isCopy) { DARABONBA_PTR_SET_VALUE(isCopy_, isCopy) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline GetOssCheckTaskInfoResponseBodyConfigScanServiceInfos& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetOssCheckTaskInfoResponseBodyConfigScanServiceInfos& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    std::shared_ptr<string> copyFrom_ = nullptr;
    std::shared_ptr<bool> isCopy_ = nullptr;
    std::shared_ptr<string> serviceCode_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
