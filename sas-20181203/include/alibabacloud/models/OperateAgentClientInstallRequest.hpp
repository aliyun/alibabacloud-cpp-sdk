// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEAGENTCLIENTINSTALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEAGENTCLIENTINSTALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OperateAgentClientInstallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateAgentClientInstallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, OperateAgentClientInstallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    OperateAgentClientInstallRequest() = default ;
    OperateAgentClientInstallRequest(const OperateAgentClientInstallRequest &) = default ;
    OperateAgentClientInstallRequest(OperateAgentClientInstallRequest &&) = default ;
    OperateAgentClientInstallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateAgentClientInstallRequest() = default ;
    OperateAgentClientInstallRequest& operator=(const OperateAgentClientInstallRequest &) = default ;
    OperateAgentClientInstallRequest& operator=(OperateAgentClientInstallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceIds_ != nullptr
        && this->lang_ != nullptr && this->os_ != nullptr && this->region_ != nullptr && this->uuids_ != nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string instanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline OperateAgentClientInstallRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline OperateAgentClientInstallRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline OperateAgentClientInstallRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline OperateAgentClientInstallRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string uuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline OperateAgentClientInstallRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The IDs of the servers on which you want to install the Security Center agent. Separate multiple IDs with commas (,).
    // 
    // > : You must specify at least one of **InstanceIds** and **Uuids**. If you specify **InstanceIds**, you must also specify **Region** and **Os**.
    std::shared_ptr<string> instanceIds_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The operating system of the servers. Valid values:
    // 
    // *   **linux**
    // *   **windows**
    std::shared_ptr<string> os_ = nullptr;
    // The region where the servers reside. Valid values include the following regions:
    // 
    // *   cn-hangzhou: China (Hangzhou)
    // *   cn-beijing: China (Beijing)
    // *   cn-shanghai: China (Shanghai)
    // *   cn-zhangjiakou: China (Zhangjiakou)
    // *   cn-shenzhen: China (Shenzhen)
    std::shared_ptr<string> region_ = nullptr;
    // The UUIDs of the servers on which you want to install the Security Center agent. Separate multiple UUIDs with commas (,).
    // 
    // > You must specify at least one of the **InstanceIds** and **Uuids** parameters before you can call this operation.
    std::shared_ptr<string> uuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
