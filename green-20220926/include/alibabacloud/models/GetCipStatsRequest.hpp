// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCIPSTATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCIPSTATSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetCipStatsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCipStatsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ByMonth, byMonth_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(SubUid, subUid_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetCipStatsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ByMonth, byMonth_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(SubUid, subUid_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetCipStatsRequest() = default ;
    GetCipStatsRequest(const GetCipStatsRequest &) = default ;
    GetCipStatsRequest(GetCipStatsRequest &&) = default ;
    GetCipStatsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCipStatsRequest() = default ;
    GetCipStatsRequest& operator=(const GetCipStatsRequest &) = default ;
    GetCipStatsRequest& operator=(GetCipStatsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->byMonth_ == nullptr
        && this->endDate_ == nullptr && this->label_ == nullptr && this->query_ == nullptr && this->regionId_ == nullptr && this->resourceType_ == nullptr
        && this->serviceCode_ == nullptr && this->startDate_ == nullptr && this->subUid_ == nullptr && this->type_ == nullptr; };
    // byMonth Field Functions 
    bool hasByMonth() const { return this->byMonth_ != nullptr;};
    void deleteByMonth() { this->byMonth_ = nullptr;};
    inline bool getByMonth() const { DARABONBA_PTR_GET_DEFAULT(byMonth_, false) };
    inline GetCipStatsRequest& setByMonth(bool byMonth) { DARABONBA_PTR_SET_VALUE(byMonth_, byMonth) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline GetCipStatsRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetCipStatsRequest& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline GetCipStatsRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetCipStatsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetCipStatsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline GetCipStatsRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline GetCipStatsRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // subUid Field Functions 
    bool hasSubUid() const { return this->subUid_ != nullptr;};
    void deleteSubUid() { this->subUid_ = nullptr;};
    inline string getSubUid() const { DARABONBA_PTR_GET_DEFAULT(subUid_, "") };
    inline GetCipStatsRequest& setSubUid(string subUid) { DARABONBA_PTR_SET_VALUE(subUid_, subUid) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetCipStatsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<bool> byMonth_ {};
    shared_ptr<string> endDate_ {};
    shared_ptr<string> label_ {};
    shared_ptr<string> query_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceType_ {};
    shared_ptr<string> serviceCode_ {};
    shared_ptr<string> startDate_ {};
    shared_ptr<string> subUid_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
