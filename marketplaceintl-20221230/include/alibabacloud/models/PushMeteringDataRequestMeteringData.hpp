// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHMETERINGDATAREQUESTMETERINGDATA_HPP_
#define ALIBABACLOUD_MODELS_PUSHMETERINGDATAREQUESTMETERINGDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketplaceIntl20221230
{
namespace Models
{
  class PushMeteringDataRequestMeteringData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushMeteringDataRequestMeteringData& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MeteringAssist, meteringAssist_);
      DARABONBA_PTR_TO_JSON(MeteringEntity, meteringEntity_);
      DARABONBA_PTR_TO_JSON(PushOrderBizId, pushOrderBizId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, PushMeteringDataRequestMeteringData& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MeteringAssist, meteringAssist_);
      DARABONBA_PTR_FROM_JSON(MeteringEntity, meteringEntity_);
      DARABONBA_PTR_FROM_JSON(PushOrderBizId, pushOrderBizId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    PushMeteringDataRequestMeteringData() = default ;
    PushMeteringDataRequestMeteringData(const PushMeteringDataRequestMeteringData &) = default ;
    PushMeteringDataRequestMeteringData(PushMeteringDataRequestMeteringData &&) = default ;
    PushMeteringDataRequestMeteringData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushMeteringDataRequestMeteringData() = default ;
    PushMeteringDataRequestMeteringData& operator=(const PushMeteringDataRequestMeteringData &) = default ;
    PushMeteringDataRequestMeteringData& operator=(PushMeteringDataRequestMeteringData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->instanceId_ != nullptr && this->meteringAssist_ != nullptr && this->meteringEntity_ != nullptr && this->pushOrderBizId_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline PushMeteringDataRequestMeteringData& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline PushMeteringDataRequestMeteringData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // meteringAssist Field Functions 
    bool hasMeteringAssist() const { return this->meteringAssist_ != nullptr;};
    void deleteMeteringAssist() { this->meteringAssist_ = nullptr;};
    inline string meteringAssist() const { DARABONBA_PTR_GET_DEFAULT(meteringAssist_, "") };
    inline PushMeteringDataRequestMeteringData& setMeteringAssist(string meteringAssist) { DARABONBA_PTR_SET_VALUE(meteringAssist_, meteringAssist) };


    // meteringEntity Field Functions 
    bool hasMeteringEntity() const { return this->meteringEntity_ != nullptr;};
    void deleteMeteringEntity() { this->meteringEntity_ = nullptr;};
    inline string meteringEntity() const { DARABONBA_PTR_GET_DEFAULT(meteringEntity_, "") };
    inline PushMeteringDataRequestMeteringData& setMeteringEntity(string meteringEntity) { DARABONBA_PTR_SET_VALUE(meteringEntity_, meteringEntity) };


    // pushOrderBizId Field Functions 
    bool hasPushOrderBizId() const { return this->pushOrderBizId_ != nullptr;};
    void deletePushOrderBizId() { this->pushOrderBizId_ = nullptr;};
    inline string pushOrderBizId() const { DARABONBA_PTR_GET_DEFAULT(pushOrderBizId_, "") };
    inline PushMeteringDataRequestMeteringData& setPushOrderBizId(string pushOrderBizId) { DARABONBA_PTR_SET_VALUE(pushOrderBizId_, pushOrderBizId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline PushMeteringDataRequestMeteringData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> meteringAssist_ = nullptr;
    std::shared_ptr<string> meteringEntity_ = nullptr;
    std::shared_ptr<string> pushOrderBizId_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketplaceIntl20221230
#endif
