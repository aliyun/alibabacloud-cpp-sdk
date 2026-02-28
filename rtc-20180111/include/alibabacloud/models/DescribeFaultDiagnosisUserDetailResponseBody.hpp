// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeFaultDiagnosisUserDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaultDiagnosisUserDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallInfo, callInfo_);
      DARABONBA_PTR_TO_JSON(FactorList, factorList_);
      DARABONBA_PTR_TO_JSON(FaultMetricData, faultMetricData_);
      DARABONBA_PTR_TO_JSON(NetworkOperators, networkOperators_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserDetail, userDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaultDiagnosisUserDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallInfo, callInfo_);
      DARABONBA_PTR_FROM_JSON(FactorList, factorList_);
      DARABONBA_PTR_FROM_JSON(FaultMetricData, faultMetricData_);
      DARABONBA_PTR_FROM_JSON(NetworkOperators, networkOperators_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserDetail, userDetail_);
    };
    DescribeFaultDiagnosisUserDetailResponseBody() = default ;
    DescribeFaultDiagnosisUserDetailResponseBody(const DescribeFaultDiagnosisUserDetailResponseBody &) = default ;
    DescribeFaultDiagnosisUserDetailResponseBody(DescribeFaultDiagnosisUserDetailResponseBody &&) = default ;
    DescribeFaultDiagnosisUserDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaultDiagnosisUserDetailResponseBody() = default ;
    DescribeFaultDiagnosisUserDetailResponseBody& operator=(const DescribeFaultDiagnosisUserDetailResponseBody &) = default ;
    DescribeFaultDiagnosisUserDetailResponseBody& operator=(DescribeFaultDiagnosisUserDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserDetail& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTs, createdTs_);
        DARABONBA_PTR_TO_JSON(DestroyedTs, destroyedTs_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(Location, location_);
        DARABONBA_PTR_TO_JSON(Network, network_);
        DARABONBA_PTR_TO_JSON(OnlineDuration, onlineDuration_);
        DARABONBA_PTR_TO_JSON(OnlinePeriods, onlinePeriods_);
        DARABONBA_PTR_TO_JSON(Os, os_);
        DARABONBA_PTR_TO_JSON(SdkVersion, sdkVersion_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, UserDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTs, createdTs_);
        DARABONBA_PTR_FROM_JSON(DestroyedTs, destroyedTs_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(Location, location_);
        DARABONBA_PTR_FROM_JSON(Network, network_);
        DARABONBA_PTR_FROM_JSON(OnlineDuration, onlineDuration_);
        DARABONBA_PTR_FROM_JSON(OnlinePeriods, onlinePeriods_);
        DARABONBA_PTR_FROM_JSON(Os, os_);
        DARABONBA_PTR_FROM_JSON(SdkVersion, sdkVersion_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      UserDetail() = default ;
      UserDetail(const UserDetail &) = default ;
      UserDetail(UserDetail &&) = default ;
      UserDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserDetail() = default ;
      UserDetail& operator=(const UserDetail &) = default ;
      UserDetail& operator=(UserDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OnlinePeriods : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OnlinePeriods& obj) { 
          DARABONBA_PTR_TO_JSON(JoinTs, joinTs_);
          DARABONBA_PTR_TO_JSON(LeaveTs, leaveTs_);
        };
        friend void from_json(const Darabonba::Json& j, OnlinePeriods& obj) { 
          DARABONBA_PTR_FROM_JSON(JoinTs, joinTs_);
          DARABONBA_PTR_FROM_JSON(LeaveTs, leaveTs_);
        };
        OnlinePeriods() = default ;
        OnlinePeriods(const OnlinePeriods &) = default ;
        OnlinePeriods(OnlinePeriods &&) = default ;
        OnlinePeriods(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OnlinePeriods() = default ;
        OnlinePeriods& operator=(const OnlinePeriods &) = default ;
        OnlinePeriods& operator=(OnlinePeriods &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->joinTs_ == nullptr
        && this->leaveTs_ == nullptr; };
        // joinTs Field Functions 
        bool hasJoinTs() const { return this->joinTs_ != nullptr;};
        void deleteJoinTs() { this->joinTs_ = nullptr;};
        inline int64_t getJoinTs() const { DARABONBA_PTR_GET_DEFAULT(joinTs_, 0L) };
        inline OnlinePeriods& setJoinTs(int64_t joinTs) { DARABONBA_PTR_SET_VALUE(joinTs_, joinTs) };


        // leaveTs Field Functions 
        bool hasLeaveTs() const { return this->leaveTs_ != nullptr;};
        void deleteLeaveTs() { this->leaveTs_ = nullptr;};
        inline int64_t getLeaveTs() const { DARABONBA_PTR_GET_DEFAULT(leaveTs_, 0L) };
        inline OnlinePeriods& setLeaveTs(int64_t leaveTs) { DARABONBA_PTR_SET_VALUE(leaveTs_, leaveTs) };


      protected:
        shared_ptr<int64_t> joinTs_ {};
        shared_ptr<int64_t> leaveTs_ {};
      };

      virtual bool empty() const override { return this->createdTs_ == nullptr
        && this->destroyedTs_ == nullptr && this->duration_ == nullptr && this->location_ == nullptr && this->network_ == nullptr && this->onlineDuration_ == nullptr
        && this->onlinePeriods_ == nullptr && this->os_ == nullptr && this->sdkVersion_ == nullptr && this->userId_ == nullptr; };
      // createdTs Field Functions 
      bool hasCreatedTs() const { return this->createdTs_ != nullptr;};
      void deleteCreatedTs() { this->createdTs_ = nullptr;};
      inline int64_t getCreatedTs() const { DARABONBA_PTR_GET_DEFAULT(createdTs_, 0L) };
      inline UserDetail& setCreatedTs(int64_t createdTs) { DARABONBA_PTR_SET_VALUE(createdTs_, createdTs) };


      // destroyedTs Field Functions 
      bool hasDestroyedTs() const { return this->destroyedTs_ != nullptr;};
      void deleteDestroyedTs() { this->destroyedTs_ = nullptr;};
      inline int64_t getDestroyedTs() const { DARABONBA_PTR_GET_DEFAULT(destroyedTs_, 0L) };
      inline UserDetail& setDestroyedTs(int64_t destroyedTs) { DARABONBA_PTR_SET_VALUE(destroyedTs_, destroyedTs) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline UserDetail& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline UserDetail& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // network Field Functions 
      bool hasNetwork() const { return this->network_ != nullptr;};
      void deleteNetwork() { this->network_ = nullptr;};
      inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
      inline UserDetail& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


      // onlineDuration Field Functions 
      bool hasOnlineDuration() const { return this->onlineDuration_ != nullptr;};
      void deleteOnlineDuration() { this->onlineDuration_ = nullptr;};
      inline int64_t getOnlineDuration() const { DARABONBA_PTR_GET_DEFAULT(onlineDuration_, 0L) };
      inline UserDetail& setOnlineDuration(int64_t onlineDuration) { DARABONBA_PTR_SET_VALUE(onlineDuration_, onlineDuration) };


      // onlinePeriods Field Functions 
      bool hasOnlinePeriods() const { return this->onlinePeriods_ != nullptr;};
      void deleteOnlinePeriods() { this->onlinePeriods_ = nullptr;};
      inline const vector<UserDetail::OnlinePeriods> & getOnlinePeriods() const { DARABONBA_PTR_GET_CONST(onlinePeriods_, vector<UserDetail::OnlinePeriods>) };
      inline vector<UserDetail::OnlinePeriods> getOnlinePeriods() { DARABONBA_PTR_GET(onlinePeriods_, vector<UserDetail::OnlinePeriods>) };
      inline UserDetail& setOnlinePeriods(const vector<UserDetail::OnlinePeriods> & onlinePeriods) { DARABONBA_PTR_SET_VALUE(onlinePeriods_, onlinePeriods) };
      inline UserDetail& setOnlinePeriods(vector<UserDetail::OnlinePeriods> && onlinePeriods) { DARABONBA_PTR_SET_RVALUE(onlinePeriods_, onlinePeriods) };


      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline UserDetail& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // sdkVersion Field Functions 
      bool hasSdkVersion() const { return this->sdkVersion_ != nullptr;};
      void deleteSdkVersion() { this->sdkVersion_ = nullptr;};
      inline string getSdkVersion() const { DARABONBA_PTR_GET_DEFAULT(sdkVersion_, "") };
      inline UserDetail& setSdkVersion(string sdkVersion) { DARABONBA_PTR_SET_VALUE(sdkVersion_, sdkVersion) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline UserDetail& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<int64_t> createdTs_ {};
      shared_ptr<int64_t> destroyedTs_ {};
      shared_ptr<int64_t> duration_ {};
      shared_ptr<string> location_ {};
      shared_ptr<string> network_ {};
      shared_ptr<int64_t> onlineDuration_ {};
      shared_ptr<vector<UserDetail::OnlinePeriods>> onlinePeriods_ {};
      shared_ptr<string> os_ {};
      shared_ptr<string> sdkVersion_ {};
      shared_ptr<string> userId_ {};
    };

    class FaultMetricData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FaultMetricData& obj) { 
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      };
      friend void from_json(const Darabonba::Json& j, FaultMetricData& obj) { 
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      };
      FaultMetricData() = default ;
      FaultMetricData(const FaultMetricData &) = default ;
      FaultMetricData(FaultMetricData &&) = default ;
      FaultMetricData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FaultMetricData() = default ;
      FaultMetricData& operator=(const FaultMetricData &) = default ;
      FaultMetricData& operator=(FaultMetricData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(X, x_);
          DARABONBA_PTR_TO_JSON(Y, y_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_PTR_FROM_JSON(X, x_);
          DARABONBA_PTR_FROM_JSON(Y, y_);
        };
        Nodes() = default ;
        Nodes(const Nodes &) = default ;
        Nodes(Nodes &&) = default ;
        Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nodes() = default ;
        Nodes& operator=(const Nodes &) = default ;
        Nodes& operator=(Nodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->x_ == nullptr
        && this->y_ == nullptr; };
        // x Field Functions 
        bool hasX() const { return this->x_ != nullptr;};
        void deleteX() { this->x_ = nullptr;};
        inline string getX() const { DARABONBA_PTR_GET_DEFAULT(x_, "") };
        inline Nodes& setX(string x) { DARABONBA_PTR_SET_VALUE(x_, x) };


        // y Field Functions 
        bool hasY() const { return this->y_ != nullptr;};
        void deleteY() { this->y_ = nullptr;};
        inline string getY() const { DARABONBA_PTR_GET_DEFAULT(y_, "") };
        inline Nodes& setY(string y) { DARABONBA_PTR_SET_VALUE(y_, y) };


      protected:
        shared_ptr<string> x_ {};
        shared_ptr<string> y_ {};
      };

      virtual bool empty() const override { return this->nodes_ == nullptr; };
      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<FaultMetricData::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<FaultMetricData::Nodes>) };
      inline vector<FaultMetricData::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<FaultMetricData::Nodes>) };
      inline FaultMetricData& setNodes(const vector<FaultMetricData::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline FaultMetricData& setNodes(vector<FaultMetricData::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    protected:
      shared_ptr<vector<FaultMetricData::Nodes>> nodes_ {};
    };

    class FactorList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FactorList& obj) { 
        DARABONBA_PTR_TO_JSON(FactorId, factorId_);
        DARABONBA_PTR_TO_JSON(FaultSource, faultSource_);
        DARABONBA_PTR_TO_JSON(RelatedEventDatas, relatedEventDatas_);
        DARABONBA_PTR_TO_JSON(RelatedMetricDatas, relatedMetricDatas_);
      };
      friend void from_json(const Darabonba::Json& j, FactorList& obj) { 
        DARABONBA_PTR_FROM_JSON(FactorId, factorId_);
        DARABONBA_PTR_FROM_JSON(FaultSource, faultSource_);
        DARABONBA_PTR_FROM_JSON(RelatedEventDatas, relatedEventDatas_);
        DARABONBA_PTR_FROM_JSON(RelatedMetricDatas, relatedMetricDatas_);
      };
      FactorList() = default ;
      FactorList(const FactorList &) = default ;
      FactorList(FactorList &&) = default ;
      FactorList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FactorList() = default ;
      FactorList& operator=(const FactorList &) = default ;
      FactorList& operator=(FactorList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RelatedMetricDatas : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RelatedMetricDatas& obj) { 
          DARABONBA_PTR_TO_JSON(Nodes, nodes_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, RelatedMetricDatas& obj) { 
          DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        RelatedMetricDatas() = default ;
        RelatedMetricDatas(const RelatedMetricDatas &) = default ;
        RelatedMetricDatas(RelatedMetricDatas &&) = default ;
        RelatedMetricDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RelatedMetricDatas() = default ;
        RelatedMetricDatas& operator=(const RelatedMetricDatas &) = default ;
        RelatedMetricDatas& operator=(RelatedMetricDatas &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Nodes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
            DARABONBA_ANY_TO_JSON(Ext, ext_);
            DARABONBA_PTR_TO_JSON(X, x_);
            DARABONBA_PTR_TO_JSON(Y, y_);
          };
          friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
            DARABONBA_ANY_FROM_JSON(Ext, ext_);
            DARABONBA_PTR_FROM_JSON(X, x_);
            DARABONBA_PTR_FROM_JSON(Y, y_);
          };
          Nodes() = default ;
          Nodes(const Nodes &) = default ;
          Nodes(Nodes &&) = default ;
          Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Nodes() = default ;
          Nodes& operator=(const Nodes &) = default ;
          Nodes& operator=(Nodes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ext_ == nullptr
        && this->x_ == nullptr && this->y_ == nullptr; };
          // ext Field Functions 
          bool hasExt() const { return this->ext_ != nullptr;};
          void deleteExt() { this->ext_ = nullptr;};
          inline           const Darabonba::Json & getExt() const { DARABONBA_GET(ext_) };
          Darabonba::Json & getExt() { DARABONBA_GET(ext_) };
          inline Nodes& setExt(const Darabonba::Json & ext) { DARABONBA_SET_VALUE(ext_, ext) };
          inline Nodes& setExt(Darabonba::Json && ext) { DARABONBA_SET_RVALUE(ext_, ext) };


          // x Field Functions 
          bool hasX() const { return this->x_ != nullptr;};
          void deleteX() { this->x_ = nullptr;};
          inline string getX() const { DARABONBA_PTR_GET_DEFAULT(x_, "") };
          inline Nodes& setX(string x) { DARABONBA_PTR_SET_VALUE(x_, x) };


          // y Field Functions 
          bool hasY() const { return this->y_ != nullptr;};
          void deleteY() { this->y_ = nullptr;};
          inline string getY() const { DARABONBA_PTR_GET_DEFAULT(y_, "") };
          inline Nodes& setY(string y) { DARABONBA_PTR_SET_VALUE(y_, y) };


        protected:
          Darabonba::Json ext_ {};
          shared_ptr<string> x_ {};
          shared_ptr<string> y_ {};
        };

        virtual bool empty() const override { return this->nodes_ == nullptr
        && this->role_ == nullptr && this->type_ == nullptr && this->userId_ == nullptr; };
        // nodes Field Functions 
        bool hasNodes() const { return this->nodes_ != nullptr;};
        void deleteNodes() { this->nodes_ = nullptr;};
        inline const vector<RelatedMetricDatas::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<RelatedMetricDatas::Nodes>) };
        inline vector<RelatedMetricDatas::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<RelatedMetricDatas::Nodes>) };
        inline RelatedMetricDatas& setNodes(const vector<RelatedMetricDatas::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
        inline RelatedMetricDatas& setNodes(vector<RelatedMetricDatas::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline RelatedMetricDatas& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline RelatedMetricDatas& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline RelatedMetricDatas& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<vector<RelatedMetricDatas::Nodes>> nodes_ {};
        shared_ptr<string> role_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> userId_ {};
      };

      class RelatedEventDatas : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RelatedEventDatas& obj) { 
          DARABONBA_PTR_TO_JSON(EventDataItems, eventDataItems_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, RelatedEventDatas& obj) { 
          DARABONBA_PTR_FROM_JSON(EventDataItems, eventDataItems_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        RelatedEventDatas() = default ;
        RelatedEventDatas(const RelatedEventDatas &) = default ;
        RelatedEventDatas(RelatedEventDatas &&) = default ;
        RelatedEventDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RelatedEventDatas() = default ;
        RelatedEventDatas& operator=(const RelatedEventDatas &) = default ;
        RelatedEventDatas& operator=(RelatedEventDatas &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EventDataItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EventDataItems& obj) { 
            DARABONBA_PTR_TO_JSON(EventList, eventList_);
            DARABONBA_PTR_TO_JSON(Ts, ts_);
          };
          friend void from_json(const Darabonba::Json& j, EventDataItems& obj) { 
            DARABONBA_PTR_FROM_JSON(EventList, eventList_);
            DARABONBA_PTR_FROM_JSON(Ts, ts_);
          };
          EventDataItems() = default ;
          EventDataItems(const EventDataItems &) = default ;
          EventDataItems(EventDataItems &&) = default ;
          EventDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EventDataItems() = default ;
          EventDataItems& operator=(const EventDataItems &) = default ;
          EventDataItems& operator=(EventDataItems &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class EventList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const EventList& obj) { 
              DARABONBA_PTR_TO_JSON(EventName, eventName_);
              DARABONBA_PTR_TO_JSON(EventType, eventType_);
              DARABONBA_PTR_TO_JSON(Ts, ts_);
            };
            friend void from_json(const Darabonba::Json& j, EventList& obj) { 
              DARABONBA_PTR_FROM_JSON(EventName, eventName_);
              DARABONBA_PTR_FROM_JSON(EventType, eventType_);
              DARABONBA_PTR_FROM_JSON(Ts, ts_);
            };
            EventList() = default ;
            EventList(const EventList &) = default ;
            EventList(EventList &&) = default ;
            EventList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~EventList() = default ;
            EventList& operator=(const EventList &) = default ;
            EventList& operator=(EventList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->eventName_ == nullptr
        && this->eventType_ == nullptr && this->ts_ == nullptr; };
            // eventName Field Functions 
            bool hasEventName() const { return this->eventName_ != nullptr;};
            void deleteEventName() { this->eventName_ = nullptr;};
            inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
            inline EventList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


            // eventType Field Functions 
            bool hasEventType() const { return this->eventType_ != nullptr;};
            void deleteEventType() { this->eventType_ = nullptr;};
            inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
            inline EventList& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


            // ts Field Functions 
            bool hasTs() const { return this->ts_ != nullptr;};
            void deleteTs() { this->ts_ = nullptr;};
            inline int64_t getTs() const { DARABONBA_PTR_GET_DEFAULT(ts_, 0L) };
            inline EventList& setTs(int64_t ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };


          protected:
            shared_ptr<string> eventName_ {};
            shared_ptr<string> eventType_ {};
            shared_ptr<int64_t> ts_ {};
          };

          virtual bool empty() const override { return this->eventList_ == nullptr
        && this->ts_ == nullptr; };
          // eventList Field Functions 
          bool hasEventList() const { return this->eventList_ != nullptr;};
          void deleteEventList() { this->eventList_ = nullptr;};
          inline const vector<EventDataItems::EventList> & getEventList() const { DARABONBA_PTR_GET_CONST(eventList_, vector<EventDataItems::EventList>) };
          inline vector<EventDataItems::EventList> getEventList() { DARABONBA_PTR_GET(eventList_, vector<EventDataItems::EventList>) };
          inline EventDataItems& setEventList(const vector<EventDataItems::EventList> & eventList) { DARABONBA_PTR_SET_VALUE(eventList_, eventList) };
          inline EventDataItems& setEventList(vector<EventDataItems::EventList> && eventList) { DARABONBA_PTR_SET_RVALUE(eventList_, eventList) };


          // ts Field Functions 
          bool hasTs() const { return this->ts_ != nullptr;};
          void deleteTs() { this->ts_ = nullptr;};
          inline int64_t getTs() const { DARABONBA_PTR_GET_DEFAULT(ts_, 0L) };
          inline EventDataItems& setTs(int64_t ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };


        protected:
          shared_ptr<vector<EventDataItems::EventList>> eventList_ {};
          shared_ptr<int64_t> ts_ {};
        };

        virtual bool empty() const override { return this->eventDataItems_ == nullptr
        && this->role_ == nullptr && this->userId_ == nullptr; };
        // eventDataItems Field Functions 
        bool hasEventDataItems() const { return this->eventDataItems_ != nullptr;};
        void deleteEventDataItems() { this->eventDataItems_ = nullptr;};
        inline const vector<RelatedEventDatas::EventDataItems> & getEventDataItems() const { DARABONBA_PTR_GET_CONST(eventDataItems_, vector<RelatedEventDatas::EventDataItems>) };
        inline vector<RelatedEventDatas::EventDataItems> getEventDataItems() { DARABONBA_PTR_GET(eventDataItems_, vector<RelatedEventDatas::EventDataItems>) };
        inline RelatedEventDatas& setEventDataItems(const vector<RelatedEventDatas::EventDataItems> & eventDataItems) { DARABONBA_PTR_SET_VALUE(eventDataItems_, eventDataItems) };
        inline RelatedEventDatas& setEventDataItems(vector<RelatedEventDatas::EventDataItems> && eventDataItems) { DARABONBA_PTR_SET_RVALUE(eventDataItems_, eventDataItems) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline RelatedEventDatas& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline RelatedEventDatas& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<vector<RelatedEventDatas::EventDataItems>> eventDataItems_ {};
        shared_ptr<string> role_ {};
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->factorId_ == nullptr
        && this->faultSource_ == nullptr && this->relatedEventDatas_ == nullptr && this->relatedMetricDatas_ == nullptr; };
      // factorId Field Functions 
      bool hasFactorId() const { return this->factorId_ != nullptr;};
      void deleteFactorId() { this->factorId_ = nullptr;};
      inline string getFactorId() const { DARABONBA_PTR_GET_DEFAULT(factorId_, "") };
      inline FactorList& setFactorId(string factorId) { DARABONBA_PTR_SET_VALUE(factorId_, factorId) };


      // faultSource Field Functions 
      bool hasFaultSource() const { return this->faultSource_ != nullptr;};
      void deleteFaultSource() { this->faultSource_ = nullptr;};
      inline string getFaultSource() const { DARABONBA_PTR_GET_DEFAULT(faultSource_, "") };
      inline FactorList& setFaultSource(string faultSource) { DARABONBA_PTR_SET_VALUE(faultSource_, faultSource) };


      // relatedEventDatas Field Functions 
      bool hasRelatedEventDatas() const { return this->relatedEventDatas_ != nullptr;};
      void deleteRelatedEventDatas() { this->relatedEventDatas_ = nullptr;};
      inline const vector<FactorList::RelatedEventDatas> & getRelatedEventDatas() const { DARABONBA_PTR_GET_CONST(relatedEventDatas_, vector<FactorList::RelatedEventDatas>) };
      inline vector<FactorList::RelatedEventDatas> getRelatedEventDatas() { DARABONBA_PTR_GET(relatedEventDatas_, vector<FactorList::RelatedEventDatas>) };
      inline FactorList& setRelatedEventDatas(const vector<FactorList::RelatedEventDatas> & relatedEventDatas) { DARABONBA_PTR_SET_VALUE(relatedEventDatas_, relatedEventDatas) };
      inline FactorList& setRelatedEventDatas(vector<FactorList::RelatedEventDatas> && relatedEventDatas) { DARABONBA_PTR_SET_RVALUE(relatedEventDatas_, relatedEventDatas) };


      // relatedMetricDatas Field Functions 
      bool hasRelatedMetricDatas() const { return this->relatedMetricDatas_ != nullptr;};
      void deleteRelatedMetricDatas() { this->relatedMetricDatas_ = nullptr;};
      inline const vector<FactorList::RelatedMetricDatas> & getRelatedMetricDatas() const { DARABONBA_PTR_GET_CONST(relatedMetricDatas_, vector<FactorList::RelatedMetricDatas>) };
      inline vector<FactorList::RelatedMetricDatas> getRelatedMetricDatas() { DARABONBA_PTR_GET(relatedMetricDatas_, vector<FactorList::RelatedMetricDatas>) };
      inline FactorList& setRelatedMetricDatas(const vector<FactorList::RelatedMetricDatas> & relatedMetricDatas) { DARABONBA_PTR_SET_VALUE(relatedMetricDatas_, relatedMetricDatas) };
      inline FactorList& setRelatedMetricDatas(vector<FactorList::RelatedMetricDatas> && relatedMetricDatas) { DARABONBA_PTR_SET_RVALUE(relatedMetricDatas_, relatedMetricDatas) };


    protected:
      shared_ptr<string> factorId_ {};
      shared_ptr<string> faultSource_ {};
      shared_ptr<vector<FactorList::RelatedEventDatas>> relatedEventDatas_ {};
      shared_ptr<vector<FactorList::RelatedMetricDatas>> relatedMetricDatas_ {};
    };

    class CallInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CallInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(CallStatus, callStatus_);
        DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
        DARABONBA_PTR_TO_JSON(CreatedTs, createdTs_);
        DARABONBA_PTR_TO_JSON(DestroyedTs, destroyedTs_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
      };
      friend void from_json(const Darabonba::Json& j, CallInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(CallStatus, callStatus_);
        DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
        DARABONBA_PTR_FROM_JSON(CreatedTs, createdTs_);
        DARABONBA_PTR_FROM_JSON(DestroyedTs, destroyedTs_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
      };
      CallInfo() = default ;
      CallInfo(const CallInfo &) = default ;
      CallInfo(CallInfo &&) = default ;
      CallInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CallInfo() = default ;
      CallInfo& operator=(const CallInfo &) = default ;
      CallInfo& operator=(CallInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->callStatus_ == nullptr && this->channelId_ == nullptr && this->createdTs_ == nullptr && this->destroyedTs_ == nullptr && this->duration_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline CallInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // callStatus Field Functions 
      bool hasCallStatus() const { return this->callStatus_ != nullptr;};
      void deleteCallStatus() { this->callStatus_ = nullptr;};
      inline string getCallStatus() const { DARABONBA_PTR_GET_DEFAULT(callStatus_, "") };
      inline CallInfo& setCallStatus(string callStatus) { DARABONBA_PTR_SET_VALUE(callStatus_, callStatus) };


      // channelId Field Functions 
      bool hasChannelId() const { return this->channelId_ != nullptr;};
      void deleteChannelId() { this->channelId_ = nullptr;};
      inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
      inline CallInfo& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


      // createdTs Field Functions 
      bool hasCreatedTs() const { return this->createdTs_ != nullptr;};
      void deleteCreatedTs() { this->createdTs_ = nullptr;};
      inline int64_t getCreatedTs() const { DARABONBA_PTR_GET_DEFAULT(createdTs_, 0L) };
      inline CallInfo& setCreatedTs(int64_t createdTs) { DARABONBA_PTR_SET_VALUE(createdTs_, createdTs) };


      // destroyedTs Field Functions 
      bool hasDestroyedTs() const { return this->destroyedTs_ != nullptr;};
      void deleteDestroyedTs() { this->destroyedTs_ = nullptr;};
      inline int64_t getDestroyedTs() const { DARABONBA_PTR_GET_DEFAULT(destroyedTs_, 0L) };
      inline CallInfo& setDestroyedTs(int64_t destroyedTs) { DARABONBA_PTR_SET_VALUE(destroyedTs_, destroyedTs) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline CallInfo& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    protected:
      // App ID。
      shared_ptr<string> appId_ {};
      shared_ptr<string> callStatus_ {};
      shared_ptr<string> channelId_ {};
      shared_ptr<int64_t> createdTs_ {};
      shared_ptr<int64_t> destroyedTs_ {};
      shared_ptr<int64_t> duration_ {};
    };

    virtual bool empty() const override { return this->callInfo_ == nullptr
        && this->factorList_ == nullptr && this->faultMetricData_ == nullptr && this->networkOperators_ == nullptr && this->requestId_ == nullptr && this->userDetail_ == nullptr; };
    // callInfo Field Functions 
    bool hasCallInfo() const { return this->callInfo_ != nullptr;};
    void deleteCallInfo() { this->callInfo_ = nullptr;};
    inline const DescribeFaultDiagnosisUserDetailResponseBody::CallInfo & getCallInfo() const { DARABONBA_PTR_GET_CONST(callInfo_, DescribeFaultDiagnosisUserDetailResponseBody::CallInfo) };
    inline DescribeFaultDiagnosisUserDetailResponseBody::CallInfo getCallInfo() { DARABONBA_PTR_GET(callInfo_, DescribeFaultDiagnosisUserDetailResponseBody::CallInfo) };
    inline DescribeFaultDiagnosisUserDetailResponseBody& setCallInfo(const DescribeFaultDiagnosisUserDetailResponseBody::CallInfo & callInfo) { DARABONBA_PTR_SET_VALUE(callInfo_, callInfo) };
    inline DescribeFaultDiagnosisUserDetailResponseBody& setCallInfo(DescribeFaultDiagnosisUserDetailResponseBody::CallInfo && callInfo) { DARABONBA_PTR_SET_RVALUE(callInfo_, callInfo) };


    // factorList Field Functions 
    bool hasFactorList() const { return this->factorList_ != nullptr;};
    void deleteFactorList() { this->factorList_ = nullptr;};
    inline const vector<DescribeFaultDiagnosisUserDetailResponseBody::FactorList> & getFactorList() const { DARABONBA_PTR_GET_CONST(factorList_, vector<DescribeFaultDiagnosisUserDetailResponseBody::FactorList>) };
    inline vector<DescribeFaultDiagnosisUserDetailResponseBody::FactorList> getFactorList() { DARABONBA_PTR_GET(factorList_, vector<DescribeFaultDiagnosisUserDetailResponseBody::FactorList>) };
    inline DescribeFaultDiagnosisUserDetailResponseBody& setFactorList(const vector<DescribeFaultDiagnosisUserDetailResponseBody::FactorList> & factorList) { DARABONBA_PTR_SET_VALUE(factorList_, factorList) };
    inline DescribeFaultDiagnosisUserDetailResponseBody& setFactorList(vector<DescribeFaultDiagnosisUserDetailResponseBody::FactorList> && factorList) { DARABONBA_PTR_SET_RVALUE(factorList_, factorList) };


    // faultMetricData Field Functions 
    bool hasFaultMetricData() const { return this->faultMetricData_ != nullptr;};
    void deleteFaultMetricData() { this->faultMetricData_ = nullptr;};
    inline const DescribeFaultDiagnosisUserDetailResponseBody::FaultMetricData & getFaultMetricData() const { DARABONBA_PTR_GET_CONST(faultMetricData_, DescribeFaultDiagnosisUserDetailResponseBody::FaultMetricData) };
    inline DescribeFaultDiagnosisUserDetailResponseBody::FaultMetricData getFaultMetricData() { DARABONBA_PTR_GET(faultMetricData_, DescribeFaultDiagnosisUserDetailResponseBody::FaultMetricData) };
    inline DescribeFaultDiagnosisUserDetailResponseBody& setFaultMetricData(const DescribeFaultDiagnosisUserDetailResponseBody::FaultMetricData & faultMetricData) { DARABONBA_PTR_SET_VALUE(faultMetricData_, faultMetricData) };
    inline DescribeFaultDiagnosisUserDetailResponseBody& setFaultMetricData(DescribeFaultDiagnosisUserDetailResponseBody::FaultMetricData && faultMetricData) { DARABONBA_PTR_SET_RVALUE(faultMetricData_, faultMetricData) };


    // networkOperators Field Functions 
    bool hasNetworkOperators() const { return this->networkOperators_ != nullptr;};
    void deleteNetworkOperators() { this->networkOperators_ = nullptr;};
    inline const vector<string> & getNetworkOperators() const { DARABONBA_PTR_GET_CONST(networkOperators_, vector<string>) };
    inline vector<string> getNetworkOperators() { DARABONBA_PTR_GET(networkOperators_, vector<string>) };
    inline DescribeFaultDiagnosisUserDetailResponseBody& setNetworkOperators(const vector<string> & networkOperators) { DARABONBA_PTR_SET_VALUE(networkOperators_, networkOperators) };
    inline DescribeFaultDiagnosisUserDetailResponseBody& setNetworkOperators(vector<string> && networkOperators) { DARABONBA_PTR_SET_RVALUE(networkOperators_, networkOperators) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFaultDiagnosisUserDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userDetail Field Functions 
    bool hasUserDetail() const { return this->userDetail_ != nullptr;};
    void deleteUserDetail() { this->userDetail_ = nullptr;};
    inline const DescribeFaultDiagnosisUserDetailResponseBody::UserDetail & getUserDetail() const { DARABONBA_PTR_GET_CONST(userDetail_, DescribeFaultDiagnosisUserDetailResponseBody::UserDetail) };
    inline DescribeFaultDiagnosisUserDetailResponseBody::UserDetail getUserDetail() { DARABONBA_PTR_GET(userDetail_, DescribeFaultDiagnosisUserDetailResponseBody::UserDetail) };
    inline DescribeFaultDiagnosisUserDetailResponseBody& setUserDetail(const DescribeFaultDiagnosisUserDetailResponseBody::UserDetail & userDetail) { DARABONBA_PTR_SET_VALUE(userDetail_, userDetail) };
    inline DescribeFaultDiagnosisUserDetailResponseBody& setUserDetail(DescribeFaultDiagnosisUserDetailResponseBody::UserDetail && userDetail) { DARABONBA_PTR_SET_RVALUE(userDetail_, userDetail) };


  protected:
    shared_ptr<DescribeFaultDiagnosisUserDetailResponseBody::CallInfo> callInfo_ {};
    shared_ptr<vector<DescribeFaultDiagnosisUserDetailResponseBody::FactorList>> factorList_ {};
    shared_ptr<DescribeFaultDiagnosisUserDetailResponseBody::FaultMetricData> faultMetricData_ {};
    shared_ptr<vector<string>> networkOperators_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeFaultDiagnosisUserDetailResponseBody::UserDetail> userDetail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
