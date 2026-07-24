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
        && this->endDate_ == nullptr && this->exportType_ == nullptr && this->label_ == nullptr && this->regionId_ == nullptr && this->resourceType_ == nullptr
        && this->serviceCode_ == nullptr && this->startDate_ == nullptr && this->subUid_ == nullptr && this->type_ == nullptr; };
    // byMonth Field Functions 
    bool hasByMonth() const { return this->byMonth_ != nullptr;};
    void deleteByMonth() { this->byMonth_ = nullptr;};
    inline bool getByMonth() const { DARABONBA_PTR_GET_DEFAULT(byMonth_, false) };
    inline ExportCipStatsRequest& setByMonth(bool byMonth) { DARABONBA_PTR_SET_VALUE(byMonth_, byMonth) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ExportCipStatsRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string getExportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline ExportCipStatsRequest& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ExportCipStatsRequest& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ExportCipStatsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ExportCipStatsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline ExportCipStatsRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline ExportCipStatsRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // subUid Field Functions 
    bool hasSubUid() const { return this->subUid_ != nullptr;};
    void deleteSubUid() { this->subUid_ = nullptr;};
    inline string getSubUid() const { DARABONBA_PTR_GET_DEFAULT(subUid_, "") };
    inline ExportCipStatsRequest& setSubUid(string subUid) { DARABONBA_PTR_SET_VALUE(subUid_, subUid) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ExportCipStatsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies whether monthly indexing is supported. Valid values:
    // - **true**: Supported.
    // - **false**: Not supported.
    shared_ptr<bool> byMonth_ {};
    // The end time of the query. Format: yyyy-MM-dd HH:mm:ss.
    shared_ptr<string> endDate_ {};
    // The export type. Valid values:
    // - **level**: export by risk level.
    // - **label**: export by label.
    shared_ptr<string> exportType_ {};
    // The task label to export.
    shared_ptr<string> label_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The resource type.
    shared_ptr<string> resourceType_ {};
    // The service code.
    shared_ptr<string> serviceCode_ {};
    // The start time of the query. Format: yyyy-MM-dd HH:mm:ss.
    shared_ptr<string> startDate_ {};
    // The UID of the RAM user.
    shared_ptr<string> subUid_ {};
    // The type. Valid values:
    // - **cip**: Content Moderation invocation volume statistics.
    // - **risk_level**: Content Moderation risk level statistics.
    // - **content_moderation**: AI safety guardrail content compliance risk level and tag statistics.
    // - **sensitive_data**: AI safety guardrail sensitive data risk level and tag statistics.
    // - **prompt_attack**: AI safety guardrail prompt risk level and tag statistics.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
