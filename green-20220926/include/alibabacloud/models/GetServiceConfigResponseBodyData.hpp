// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICECONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICECONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetServiceConfigResponseBodyDataCustomServiceConf.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetServiceConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CustomServiceConf, customServiceConf_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomServiceConf, customServiceConf_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    GetServiceConfigResponseBodyData() = default ;
    GetServiceConfigResponseBodyData(const GetServiceConfigResponseBodyData &) = default ;
    GetServiceConfigResponseBodyData(GetServiceConfigResponseBodyData &&) = default ;
    GetServiceConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceConfigResponseBodyData() = default ;
    GetServiceConfigResponseBodyData& operator=(const GetServiceConfigResponseBodyData &) = default ;
    GetServiceConfigResponseBodyData& operator=(GetServiceConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customServiceConf_ == nullptr
        && return this->gmtModified_ == nullptr && return this->resourceType_ == nullptr && return this->serviceCode_ == nullptr && return this->uid_ == nullptr; };
    // customServiceConf Field Functions 
    bool hasCustomServiceConf() const { return this->customServiceConf_ != nullptr;};
    void deleteCustomServiceConf() { this->customServiceConf_ = nullptr;};
    inline const Models::GetServiceConfigResponseBodyDataCustomServiceConf & customServiceConf() const { DARABONBA_PTR_GET_CONST(customServiceConf_, Models::GetServiceConfigResponseBodyDataCustomServiceConf) };
    inline Models::GetServiceConfigResponseBodyDataCustomServiceConf customServiceConf() { DARABONBA_PTR_GET(customServiceConf_, Models::GetServiceConfigResponseBodyDataCustomServiceConf) };
    inline GetServiceConfigResponseBodyData& setCustomServiceConf(const Models::GetServiceConfigResponseBodyDataCustomServiceConf & customServiceConf) { DARABONBA_PTR_SET_VALUE(customServiceConf_, customServiceConf) };
    inline GetServiceConfigResponseBodyData& setCustomServiceConf(Models::GetServiceConfigResponseBodyDataCustomServiceConf && customServiceConf) { DARABONBA_PTR_SET_RVALUE(customServiceConf_, customServiceConf) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetServiceConfigResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetServiceConfigResponseBodyData& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline GetServiceConfigResponseBodyData& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline GetServiceConfigResponseBodyData& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // Custom service details
    std::shared_ptr<Models::GetServiceConfigResponseBodyDataCustomServiceConf> customServiceConf_ = nullptr;
    // Modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // Service code.
    std::shared_ptr<string> serviceCode_ = nullptr;
    // UID.
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
