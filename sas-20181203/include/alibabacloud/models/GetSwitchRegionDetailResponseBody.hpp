// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSWITCHREGIONDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSWITCHREGIONDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSwitchRegionDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSwitchRegionDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSwitchRegionDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSwitchRegionDetailResponseBody() = default ;
    GetSwitchRegionDetailResponseBody(const GetSwitchRegionDetailResponseBody &) = default ;
    GetSwitchRegionDetailResponseBody(GetSwitchRegionDetailResponseBody &&) = default ;
    GetSwitchRegionDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSwitchRegionDetailResponseBody() = default ;
    GetSwitchRegionDetailResponseBody& operator=(const GetSwitchRegionDetailResponseBody &) = default ;
    GetSwitchRegionDetailResponseBody& operator=(GetSwitchRegionDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(GmtIsAgreeModified, gmtIsAgreeModified_);
        DARABONBA_PTR_TO_JSON(GmtNoticed, gmtNoticed_);
        DARABONBA_PTR_TO_JSON(IsAgree, isAgree_);
        DARABONBA_PTR_TO_JSON(IsNoticed, isNoticed_);
        DARABONBA_PTR_TO_JSON(NeedNotice, needNotice_);
        DARABONBA_PTR_TO_JSON(NeedSwitch, needSwitch_);
        DARABONBA_PTR_TO_JSON(RegionStatus, regionStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtIsAgreeModified, gmtIsAgreeModified_);
        DARABONBA_PTR_FROM_JSON(GmtNoticed, gmtNoticed_);
        DARABONBA_PTR_FROM_JSON(IsAgree, isAgree_);
        DARABONBA_PTR_FROM_JSON(IsNoticed, isNoticed_);
        DARABONBA_PTR_FROM_JSON(NeedNotice, needNotice_);
        DARABONBA_PTR_FROM_JSON(NeedSwitch, needSwitch_);
        DARABONBA_PTR_FROM_JSON(RegionStatus, regionStatus_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RegionStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RegionStatus& obj) { 
          DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
          DARABONBA_PTR_TO_JSON(GmtPlanSwitchTime, gmtPlanSwitchTime_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, RegionStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
          DARABONBA_PTR_FROM_JSON(GmtPlanSwitchTime, gmtPlanSwitchTime_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        RegionStatus() = default ;
        RegionStatus(const RegionStatus &) = default ;
        RegionStatus(RegionStatus &&) = default ;
        RegionStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RegionStatus() = default ;
        RegionStatus& operator=(const RegionStatus &) = default ;
        RegionStatus& operator=(RegionStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ecsCount_ == nullptr
        && this->gmtPlanSwitchTime_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr; };
        // ecsCount Field Functions 
        bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
        void deleteEcsCount() { this->ecsCount_ = nullptr;};
        inline int32_t getEcsCount() const { DARABONBA_PTR_GET_DEFAULT(ecsCount_, 0) };
        inline RegionStatus& setEcsCount(int32_t ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };


        // gmtPlanSwitchTime Field Functions 
        bool hasGmtPlanSwitchTime() const { return this->gmtPlanSwitchTime_ != nullptr;};
        void deleteGmtPlanSwitchTime() { this->gmtPlanSwitchTime_ = nullptr;};
        inline int64_t getGmtPlanSwitchTime() const { DARABONBA_PTR_GET_DEFAULT(gmtPlanSwitchTime_, 0L) };
        inline RegionStatus& setGmtPlanSwitchTime(int64_t gmtPlanSwitchTime) { DARABONBA_PTR_SET_VALUE(gmtPlanSwitchTime_, gmtPlanSwitchTime) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline RegionStatus& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline RegionStatus& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The number of ECS instances.
        shared_ptr<int32_t> ecsCount_ {};
        // The time when the migration is scheduled.
        shared_ptr<int64_t> gmtPlanSwitchTime_ {};
        // The region in which the server resides.
        shared_ptr<string> regionId_ {};
        // The migration status. Valid values:
        // 
        // *   **0**: pending
        // *   **1**: successful
        shared_ptr<int32_t> status_ {};
      };

      virtual bool empty() const override { return this->gmtIsAgreeModified_ == nullptr
        && this->gmtNoticed_ == nullptr && this->isAgree_ == nullptr && this->isNoticed_ == nullptr && this->needNotice_ == nullptr && this->needSwitch_ == nullptr
        && this->regionStatus_ == nullptr; };
      // gmtIsAgreeModified Field Functions 
      bool hasGmtIsAgreeModified() const { return this->gmtIsAgreeModified_ != nullptr;};
      void deleteGmtIsAgreeModified() { this->gmtIsAgreeModified_ = nullptr;};
      inline int64_t getGmtIsAgreeModified() const { DARABONBA_PTR_GET_DEFAULT(gmtIsAgreeModified_, 0L) };
      inline Data& setGmtIsAgreeModified(int64_t gmtIsAgreeModified) { DARABONBA_PTR_SET_VALUE(gmtIsAgreeModified_, gmtIsAgreeModified) };


      // gmtNoticed Field Functions 
      bool hasGmtNoticed() const { return this->gmtNoticed_ != nullptr;};
      void deleteGmtNoticed() { this->gmtNoticed_ = nullptr;};
      inline int64_t getGmtNoticed() const { DARABONBA_PTR_GET_DEFAULT(gmtNoticed_, 0L) };
      inline Data& setGmtNoticed(int64_t gmtNoticed) { DARABONBA_PTR_SET_VALUE(gmtNoticed_, gmtNoticed) };


      // isAgree Field Functions 
      bool hasIsAgree() const { return this->isAgree_ != nullptr;};
      void deleteIsAgree() { this->isAgree_ = nullptr;};
      inline string getIsAgree() const { DARABONBA_PTR_GET_DEFAULT(isAgree_, "") };
      inline Data& setIsAgree(string isAgree) { DARABONBA_PTR_SET_VALUE(isAgree_, isAgree) };


      // isNoticed Field Functions 
      bool hasIsNoticed() const { return this->isNoticed_ != nullptr;};
      void deleteIsNoticed() { this->isNoticed_ = nullptr;};
      inline string getIsNoticed() const { DARABONBA_PTR_GET_DEFAULT(isNoticed_, "") };
      inline Data& setIsNoticed(string isNoticed) { DARABONBA_PTR_SET_VALUE(isNoticed_, isNoticed) };


      // needNotice Field Functions 
      bool hasNeedNotice() const { return this->needNotice_ != nullptr;};
      void deleteNeedNotice() { this->needNotice_ = nullptr;};
      inline bool getNeedNotice() const { DARABONBA_PTR_GET_DEFAULT(needNotice_, false) };
      inline Data& setNeedNotice(bool needNotice) { DARABONBA_PTR_SET_VALUE(needNotice_, needNotice) };


      // needSwitch Field Functions 
      bool hasNeedSwitch() const { return this->needSwitch_ != nullptr;};
      void deleteNeedSwitch() { this->needSwitch_ = nullptr;};
      inline bool getNeedSwitch() const { DARABONBA_PTR_GET_DEFAULT(needSwitch_, false) };
      inline Data& setNeedSwitch(bool needSwitch) { DARABONBA_PTR_SET_VALUE(needSwitch_, needSwitch) };


      // regionStatus Field Functions 
      bool hasRegionStatus() const { return this->regionStatus_ != nullptr;};
      void deleteRegionStatus() { this->regionStatus_ = nullptr;};
      inline const vector<Data::RegionStatus> & getRegionStatus() const { DARABONBA_PTR_GET_CONST(regionStatus_, vector<Data::RegionStatus>) };
      inline vector<Data::RegionStatus> getRegionStatus() { DARABONBA_PTR_GET(regionStatus_, vector<Data::RegionStatus>) };
      inline Data& setRegionStatus(const vector<Data::RegionStatus> & regionStatus) { DARABONBA_PTR_SET_VALUE(regionStatus_, regionStatus) };
      inline Data& setRegionStatus(vector<Data::RegionStatus> && regionStatus) { DARABONBA_PTR_SET_RVALUE(regionStatus_, regionStatus) };


    protected:
      // The time when the permissions were modified.
      shared_ptr<int64_t> gmtIsAgreeModified_ {};
      // The notification time.
      shared_ptr<int64_t> gmtNoticed_ {};
      // Indicates whether the migration is approved.
      shared_ptr<string> isAgree_ {};
      // Indicates whether the notification is sent.
      shared_ptr<string> isNoticed_ {};
      // Specifies whether to notify the account.
      shared_ptr<bool> needNotice_ {};
      // Specifies whether to switch.
      shared_ptr<bool> needSwitch_ {};
      // The status of the switching to the region.
      shared_ptr<vector<Data::RegionStatus>> regionStatus_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSwitchRegionDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSwitchRegionDetailResponseBody::Data) };
    inline GetSwitchRegionDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSwitchRegionDetailResponseBody::Data) };
    inline GetSwitchRegionDetailResponseBody& setData(const GetSwitchRegionDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSwitchRegionDetailResponseBody& setData(GetSwitchRegionDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSwitchRegionDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<GetSwitchRegionDetailResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
