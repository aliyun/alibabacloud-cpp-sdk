// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICECONFIGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICECONFIGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListServiceConfigsResponseBodyDataCustomServiceConf.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListServiceConfigsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceConfigsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Classify, classify_);
      DARABONBA_PTR_TO_JSON(CopyFrom, copyFrom_);
      DARABONBA_PTR_TO_JSON(CustomServiceConf, customServiceConf_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_ANY_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(ServiceDesc, serviceDesc_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
      DARABONBA_PTR_TO_JSON(UseStatus, useStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceConfigsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Classify, classify_);
      DARABONBA_PTR_FROM_JSON(CopyFrom, copyFrom_);
      DARABONBA_PTR_FROM_JSON(CustomServiceConf, customServiceConf_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_ANY_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(ServiceDesc, serviceDesc_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
      DARABONBA_PTR_FROM_JSON(UseStatus, useStatus_);
    };
    ListServiceConfigsResponseBodyData() = default ;
    ListServiceConfigsResponseBodyData(const ListServiceConfigsResponseBodyData &) = default ;
    ListServiceConfigsResponseBodyData(ListServiceConfigsResponseBodyData &&) = default ;
    ListServiceConfigsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceConfigsResponseBodyData() = default ;
    ListServiceConfigsResponseBodyData& operator=(const ListServiceConfigsResponseBodyData &) = default ;
    ListServiceConfigsResponseBodyData& operator=(ListServiceConfigsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classify_ == nullptr
        && return this->copyFrom_ == nullptr && return this->customServiceConf_ == nullptr && return this->gmtModified_ == nullptr && return this->option_ == nullptr && return this->resourceType_ == nullptr
        && return this->serviceCode_ == nullptr && return this->serviceDesc_ == nullptr && return this->serviceName_ == nullptr && return this->serviceType_ == nullptr && return this->uid_ == nullptr
        && return this->useStatus_ == nullptr; };
    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string classify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline ListServiceConfigsResponseBodyData& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // copyFrom Field Functions 
    bool hasCopyFrom() const { return this->copyFrom_ != nullptr;};
    void deleteCopyFrom() { this->copyFrom_ = nullptr;};
    inline string copyFrom() const { DARABONBA_PTR_GET_DEFAULT(copyFrom_, "") };
    inline ListServiceConfigsResponseBodyData& setCopyFrom(string copyFrom) { DARABONBA_PTR_SET_VALUE(copyFrom_, copyFrom) };


    // customServiceConf Field Functions 
    bool hasCustomServiceConf() const { return this->customServiceConf_ != nullptr;};
    void deleteCustomServiceConf() { this->customServiceConf_ = nullptr;};
    inline const Models::ListServiceConfigsResponseBodyDataCustomServiceConf & customServiceConf() const { DARABONBA_PTR_GET_CONST(customServiceConf_, Models::ListServiceConfigsResponseBodyDataCustomServiceConf) };
    inline Models::ListServiceConfigsResponseBodyDataCustomServiceConf customServiceConf() { DARABONBA_PTR_GET(customServiceConf_, Models::ListServiceConfigsResponseBodyDataCustomServiceConf) };
    inline ListServiceConfigsResponseBodyData& setCustomServiceConf(const Models::ListServiceConfigsResponseBodyDataCustomServiceConf & customServiceConf) { DARABONBA_PTR_SET_VALUE(customServiceConf_, customServiceConf) };
    inline ListServiceConfigsResponseBodyData& setCustomServiceConf(Models::ListServiceConfigsResponseBodyDataCustomServiceConf && customServiceConf) { DARABONBA_PTR_SET_RVALUE(customServiceConf_, customServiceConf) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListServiceConfigsResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline     const Darabonba::Json & option() const { DARABONBA_GET(option_) };
    Darabonba::Json & option() { DARABONBA_GET(option_) };
    inline ListServiceConfigsResponseBodyData& setOption(const Darabonba::Json & option) { DARABONBA_SET_VALUE(option_, option) };
    inline ListServiceConfigsResponseBodyData& setOption(Darabonba::Json & option) { DARABONBA_SET_RVALUE(option_, option) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListServiceConfigsResponseBodyData& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline ListServiceConfigsResponseBodyData& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // serviceDesc Field Functions 
    bool hasServiceDesc() const { return this->serviceDesc_ != nullptr;};
    void deleteServiceDesc() { this->serviceDesc_ = nullptr;};
    inline string serviceDesc() const { DARABONBA_PTR_GET_DEFAULT(serviceDesc_, "") };
    inline ListServiceConfigsResponseBodyData& setServiceDesc(string serviceDesc) { DARABONBA_PTR_SET_VALUE(serviceDesc_, serviceDesc) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListServiceConfigsResponseBodyData& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ListServiceConfigsResponseBodyData& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline ListServiceConfigsResponseBodyData& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // useStatus Field Functions 
    bool hasUseStatus() const { return this->useStatus_ != nullptr;};
    void deleteUseStatus() { this->useStatus_ = nullptr;};
    inline string useStatus() const { DARABONBA_PTR_GET_DEFAULT(useStatus_, "") };
    inline ListServiceConfigsResponseBodyData& setUseStatus(string useStatus) { DARABONBA_PTR_SET_VALUE(useStatus_, useStatus) };


  protected:
    // Category.
    std::shared_ptr<string> classify_ = nullptr;
    // Main service.
    std::shared_ptr<string> copyFrom_ = nullptr;
    // Service configuration.
    std::shared_ptr<Models::ListServiceConfigsResponseBodyDataCustomServiceConf> customServiceConf_ = nullptr;
    // Modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Options.
    Darabonba::Json option_ = nullptr;
    // Resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // Service code.
    std::shared_ptr<string> serviceCode_ = nullptr;
    // Service description.
    std::shared_ptr<string> serviceDesc_ = nullptr;
    // Service name.
    std::shared_ptr<string> serviceName_ = nullptr;
    // Service type.
    std::shared_ptr<string> serviceType_ = nullptr;
    // UID.
    std::shared_ptr<string> uid_ = nullptr;
    // Usage status
    std::shared_ptr<string> useStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
