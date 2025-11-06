// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTZOOKEEPERDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTZOOKEEPERDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ExportZookeeperDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportZookeeperDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ExportType, exportType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestPars, requestPars_);
    };
    friend void from_json(const Darabonba::Json& j, ExportZookeeperDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestPars, requestPars_);
    };
    ExportZookeeperDataRequest() = default ;
    ExportZookeeperDataRequest(const ExportZookeeperDataRequest &) = default ;
    ExportZookeeperDataRequest(ExportZookeeperDataRequest &&) = default ;
    ExportZookeeperDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportZookeeperDataRequest() = default ;
    ExportZookeeperDataRequest& operator=(const ExportZookeeperDataRequest &) = default ;
    ExportZookeeperDataRequest& operator=(ExportZookeeperDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->exportType_ == nullptr && return this->instanceId_ == nullptr && return this->regionId_ == nullptr && return this->requestPars_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ExportZookeeperDataRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string exportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline ExportZookeeperDataRequest& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ExportZookeeperDataRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ExportZookeeperDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string requestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline ExportZookeeperDataRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The type of the object that is exported. Valid values:
    // 
    // *   transactionLog: transaction logs
    // *   snapshot: snapshots
    std::shared_ptr<string> exportType_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the region in which the instance resides. The region is supported by Microservices Engine (MSE).
    std::shared_ptr<string> regionId_ = nullptr;
    // The extended request parameters in the JSON format.
    std::shared_ptr<string> requestPars_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
