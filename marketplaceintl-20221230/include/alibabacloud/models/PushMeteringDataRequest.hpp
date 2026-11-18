// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHMETERINGDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHMETERINGDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketplaceIntl20221230
{
namespace Models
{
  class PushMeteringDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushMeteringDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(Metering, metering_);
      DARABONBA_PTR_TO_JSON(MeteringData, meteringData_);
    };
    friend void from_json(const Darabonba::Json& j, PushMeteringDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(Metering, metering_);
      DARABONBA_PTR_FROM_JSON(MeteringData, meteringData_);
    };
    PushMeteringDataRequest() = default ;
    PushMeteringDataRequest(const PushMeteringDataRequest &) = default ;
    PushMeteringDataRequest(PushMeteringDataRequest &&) = default ;
    PushMeteringDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushMeteringDataRequest() = default ;
    PushMeteringDataRequest& operator=(const PushMeteringDataRequest &) = default ;
    PushMeteringDataRequest& operator=(PushMeteringDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MeteringData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MeteringData& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(MeteringAssist, meteringAssist_);
        DARABONBA_PTR_TO_JSON(MeteringEntity, meteringEntity_);
        DARABONBA_PTR_TO_JSON(PushOrderBizId, pushOrderBizId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, MeteringData& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(MeteringAssist, meteringAssist_);
        DARABONBA_PTR_FROM_JSON(MeteringEntity, meteringEntity_);
        DARABONBA_PTR_FROM_JSON(PushOrderBizId, pushOrderBizId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      MeteringData() = default ;
      MeteringData(const MeteringData &) = default ;
      MeteringData(MeteringData &&) = default ;
      MeteringData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MeteringData() = default ;
      MeteringData& operator=(const MeteringData &) = default ;
      MeteringData& operator=(MeteringData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->instanceId_ == nullptr && this->meteringAssist_ == nullptr && this->meteringEntity_ == nullptr && this->pushOrderBizId_ == nullptr && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline MeteringData& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline MeteringData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // meteringAssist Field Functions 
      bool hasMeteringAssist() const { return this->meteringAssist_ != nullptr;};
      void deleteMeteringAssist() { this->meteringAssist_ = nullptr;};
      inline string getMeteringAssist() const { DARABONBA_PTR_GET_DEFAULT(meteringAssist_, "") };
      inline MeteringData& setMeteringAssist(string meteringAssist) { DARABONBA_PTR_SET_VALUE(meteringAssist_, meteringAssist) };


      // meteringEntity Field Functions 
      bool hasMeteringEntity() const { return this->meteringEntity_ != nullptr;};
      void deleteMeteringEntity() { this->meteringEntity_ = nullptr;};
      inline string getMeteringEntity() const { DARABONBA_PTR_GET_DEFAULT(meteringEntity_, "") };
      inline MeteringData& setMeteringEntity(string meteringEntity) { DARABONBA_PTR_SET_VALUE(meteringEntity_, meteringEntity) };


      // pushOrderBizId Field Functions 
      bool hasPushOrderBizId() const { return this->pushOrderBizId_ != nullptr;};
      void deletePushOrderBizId() { this->pushOrderBizId_ = nullptr;};
      inline string getPushOrderBizId() const { DARABONBA_PTR_GET_DEFAULT(pushOrderBizId_, "") };
      inline MeteringData& setPushOrderBizId(string pushOrderBizId) { DARABONBA_PTR_SET_VALUE(pushOrderBizId_, pushOrderBizId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline MeteringData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> meteringAssist_ {};
      shared_ptr<string> meteringEntity_ {};
      shared_ptr<string> pushOrderBizId_ {};
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && this->metering_ == nullptr && this->meteringData_ == nullptr; };
    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline PushMeteringDataRequest& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // metering Field Functions 
    bool hasMetering() const { return this->metering_ != nullptr;};
    void deleteMetering() { this->metering_ = nullptr;};
    inline string getMetering() const { DARABONBA_PTR_GET_DEFAULT(metering_, "") };
    inline PushMeteringDataRequest& setMetering(string metering) { DARABONBA_PTR_SET_VALUE(metering_, metering) };


    // meteringData Field Functions 
    bool hasMeteringData() const { return this->meteringData_ != nullptr;};
    void deleteMeteringData() { this->meteringData_ = nullptr;};
    inline const vector<PushMeteringDataRequest::MeteringData> & getMeteringData() const { DARABONBA_PTR_GET_CONST(meteringData_, vector<PushMeteringDataRequest::MeteringData>) };
    inline vector<PushMeteringDataRequest::MeteringData> getMeteringData() { DARABONBA_PTR_GET(meteringData_, vector<PushMeteringDataRequest::MeteringData>) };
    inline PushMeteringDataRequest& setMeteringData(const vector<PushMeteringDataRequest::MeteringData> & meteringData) { DARABONBA_PTR_SET_VALUE(meteringData_, meteringData) };
    inline PushMeteringDataRequest& setMeteringData(vector<PushMeteringDataRequest::MeteringData> && meteringData) { DARABONBA_PTR_SET_RVALUE(meteringData_, meteringData) };


  protected:
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> metering_ {};
    shared_ptr<vector<PushMeteringDataRequest::MeteringData>> meteringData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketplaceIntl20221230
#endif
