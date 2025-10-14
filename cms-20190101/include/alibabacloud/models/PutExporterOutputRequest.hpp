// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTEXPORTEROUTPUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTEXPORTEROUTPUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutExporterOutputRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutExporterOutputRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigJson, configJson_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(DestName, destName_);
      DARABONBA_PTR_TO_JSON(DestType, destType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, PutExporterOutputRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigJson, configJson_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(DestName, destName_);
      DARABONBA_PTR_FROM_JSON(DestType, destType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    PutExporterOutputRequest() = default ;
    PutExporterOutputRequest(const PutExporterOutputRequest &) = default ;
    PutExporterOutputRequest(PutExporterOutputRequest &&) = default ;
    PutExporterOutputRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutExporterOutputRequest() = default ;
    PutExporterOutputRequest& operator=(const PutExporterOutputRequest &) = default ;
    PutExporterOutputRequest& operator=(PutExporterOutputRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configJson_ == nullptr
        && return this->desc_ == nullptr && return this->destName_ == nullptr && return this->destType_ == nullptr && return this->regionId_ == nullptr; };
    // configJson Field Functions 
    bool hasConfigJson() const { return this->configJson_ != nullptr;};
    void deleteConfigJson() { this->configJson_ = nullptr;};
    inline string configJson() const { DARABONBA_PTR_GET_DEFAULT(configJson_, "") };
    inline PutExporterOutputRequest& setConfigJson(string configJson) { DARABONBA_PTR_SET_VALUE(configJson_, configJson) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline PutExporterOutputRequest& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // destName Field Functions 
    bool hasDestName() const { return this->destName_ != nullptr;};
    void deleteDestName() { this->destName_ = nullptr;};
    inline string destName() const { DARABONBA_PTR_GET_DEFAULT(destName_, "") };
    inline PutExporterOutputRequest& setDestName(string destName) { DARABONBA_PTR_SET_VALUE(destName_, destName) };


    // destType Field Functions 
    bool hasDestType() const { return this->destType_ != nullptr;};
    void deleteDestType() { this->destType_ = nullptr;};
    inline string destType() const { DARABONBA_PTR_GET_DEFAULT(destType_, "") };
    inline PutExporterOutputRequest& setDestType(string destType) { DARABONBA_PTR_SET_VALUE(destType_, destType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutExporterOutputRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The configuration set for exporting monitoring data. It is a JSON object string. The string must include the following fields:
    // 
    // *   endpoint: the endpoint of Log Service.
    // *   project: the Log Service project to which monitoring data is exported.
    // *   logstore: the Log Service Logstore to which the monitoring data is exported.
    // *   ak: the AccessKey ID.
    // *   as: the AccessKey secret.
    // 
    // This parameter is required.
    std::shared_ptr<string> configJson_ = nullptr;
    // The description of the configuration set.
    std::shared_ptr<string> desc_ = nullptr;
    // The name of the configuration set.
    // 
    // This parameter is required.
    std::shared_ptr<string> destName_ = nullptr;
    // The service to which the monitoring data is exported.
    std::shared_ptr<string> destType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
