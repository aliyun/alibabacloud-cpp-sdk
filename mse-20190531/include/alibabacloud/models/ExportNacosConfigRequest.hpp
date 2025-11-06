// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTNACOSCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTNACOSCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ExportNacosConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportNacosConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(DataIds, dataIds_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportNacosConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(DataIds, dataIds_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    ExportNacosConfigRequest() = default ;
    ExportNacosConfigRequest(const ExportNacosConfigRequest &) = default ;
    ExportNacosConfigRequest(ExportNacosConfigRequest &&) = default ;
    ExportNacosConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportNacosConfigRequest() = default ;
    ExportNacosConfigRequest& operator=(const ExportNacosConfigRequest &) = default ;
    ExportNacosConfigRequest& operator=(ExportNacosConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->appName_ == nullptr && return this->dataId_ == nullptr && return this->dataIds_ == nullptr && return this->group_ == nullptr && return this->ids_ == nullptr
        && return this->instanceId_ == nullptr && return this->namespaceId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ExportNacosConfigRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ExportNacosConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline ExportNacosConfigRequest& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // dataIds Field Functions 
    bool hasDataIds() const { return this->dataIds_ != nullptr;};
    void deleteDataIds() { this->dataIds_ = nullptr;};
    inline string dataIds() const { DARABONBA_PTR_GET_DEFAULT(dataIds_, "") };
    inline ExportNacosConfigRequest& setDataIds(string dataIds) { DARABONBA_PTR_SET_VALUE(dataIds_, dataIds) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline ExportNacosConfigRequest& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string ids() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline ExportNacosConfigRequest& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ExportNacosConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ExportNacosConfigRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The application tag.
    std::shared_ptr<string> appName_ = nullptr;
    // The ID of the data that you want to export.
    // 
    // > 
    // 
    // *   Multiple export methods are supported.
    // 
    // *   If you want to export a single configuration, you must leave the Ids parameter empty and specify the DataID and Group parameters.
    std::shared_ptr<string> dataId_ = nullptr;
    // The configuration group name and the ID of the configuration that you want to export. Separate multiple configurations with comma (,).
    std::shared_ptr<string> dataIds_ = nullptr;
    // The name of the configuration group.
    std::shared_ptr<string> group_ = nullptr;
    // The ID of the primary key of a configuration item.
    // 
    // >  - Multiple export methods are supported. You must specify this parameter if you want to export multiple configurations. - You can obtain the value of this parameter by calling the ListNacosConfigs operation. - If you specify this parameter, multiple configurations are exported. The DataId and Group parameters are invalid.
    std::shared_ptr<string> ids_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
