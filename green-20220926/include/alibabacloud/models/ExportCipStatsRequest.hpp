// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTCIPSTATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTCIPSTATSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ExportCipStatsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportCipStatsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ByMonth, byMonth_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ExportType, exportType_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(SubUid, subUid_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ExportCipStatsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ByMonth, byMonth_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(SubUid, subUid_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ExportCipStatsRequest() = default ;
    ExportCipStatsRequest(const ExportCipStatsRequest &) = default ;
    ExportCipStatsRequest(ExportCipStatsRequest &&) = default ;
    ExportCipStatsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportCipStatsRequest() = default ;
    ExportCipStatsRequest& operator=(const ExportCipStatsRequest &) = default ;
    ExportCipStatsRequest& operator=(ExportCipStatsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->byMonth_ == nullptr
        && return this->endDate_ == nullptr && return this->exportType_ == nullptr && return this->label_ == nullptr && return this->regionId_ == nullptr && return this->resourceType_ == nullptr
        && return this->serviceCode_ == nullptr && return this->startDate_ == nullptr && return this->subUid_ == nullptr && return this->type_ == nullptr; };
    // byMonth Field Functions 
    bool hasByMonth() const { return this->byMonth_ != nullptr;};
    void deleteByMonth() { this->byMonth_ = nullptr;};
    inline bool byMonth() const { DARABONBA_PTR_GET_DEFAULT(byMonth_, false) };
    inline ExportCipStatsRequest& setByMonth(bool byMonth) { DARABONBA_PTR_SET_VALUE(byMonth_, byMonth) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ExportCipStatsRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string exportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline ExportCipStatsRequest& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ExportCipStatsRequest& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ExportCipStatsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ExportCipStatsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline ExportCipStatsRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline ExportCipStatsRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // subUid Field Functions 
    bool hasSubUid() const { return this->subUid_ != nullptr;};
    void deleteSubUid() { this->subUid_ = nullptr;};
    inline string subUid() const { DARABONBA_PTR_GET_DEFAULT(subUid_, "") };
    inline ExportCipStatsRequest& setSubUid(string subUid) { DARABONBA_PTR_SET_VALUE(subUid_, subUid) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ExportCipStatsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Whether to support monthly indexing. Values: -**true**: Supported. -**false**: Not supported.
    std::shared_ptr<bool> byMonth_ = nullptr;
    // The end time of the query, in the format yyyy-MM-dd HH:mm:ss.
    std::shared_ptr<string> endDate_ = nullptr;
    // Export type. Values: -**level**: Export by risk level. -**label**: Export by label.
    std::shared_ptr<string> exportType_ = nullptr;
    // The label of the task to be exported.
    std::shared_ptr<string> label_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // Service code.
    std::shared_ptr<string> serviceCode_ = nullptr;
    // The start time of the query, in the format yyyy-MM-dd HH:mm:ss.
    std::shared_ptr<string> startDate_ = nullptr;
    // Sub-account UID.
    std::shared_ptr<string> subUid_ = nullptr;
    // Type, values: -**cip**: Content Security Invocation Count Statistics. -**risk_level**: Content Security Risk Level Statistics. -**content_moderation**: AI Safety Guardrail Content Compliance Risk Level and Label Statistics. -**sensitive_data**: AI Safety Guardrail Sensitive Data Risk Level and Label Statistics. -**prompt_attack**: AI Safety Guardrail Prompt Word Risk Level and Label Statistics.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
