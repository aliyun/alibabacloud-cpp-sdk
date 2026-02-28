// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELOVERALLDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELOVERALLDATARESPONSEBODY_HPP_
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
  class DescribeChannelOverallDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelOverallDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallInfo, callInfo_);
      DARABONBA_PTR_TO_JSON(MetricDatas, metricDatas_);
      DARABONBA_PTR_TO_JSON(OverallData, overallData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelOverallDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallInfo, callInfo_);
      DARABONBA_PTR_FROM_JSON(MetricDatas, metricDatas_);
      DARABONBA_PTR_FROM_JSON(OverallData, overallData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeChannelOverallDataResponseBody() = default ;
    DescribeChannelOverallDataResponseBody(const DescribeChannelOverallDataResponseBody &) = default ;
    DescribeChannelOverallDataResponseBody(DescribeChannelOverallDataResponseBody &&) = default ;
    DescribeChannelOverallDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelOverallDataResponseBody() = default ;
    DescribeChannelOverallDataResponseBody& operator=(const DescribeChannelOverallDataResponseBody &) = default ;
    DescribeChannelOverallDataResponseBody& operator=(DescribeChannelOverallDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OverallData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OverallData& obj) { 
        DARABONBA_PTR_TO_JSON(ConnAvgTime, connAvgTime_);
        DARABONBA_PTR_TO_JSON(FiveSecJoinRate, fiveSecJoinRate_);
        DARABONBA_PTR_TO_JSON(TotalAudioStuckRate, totalAudioStuckRate_);
        DARABONBA_PTR_TO_JSON(TotalVideoStuckRate, totalVideoStuckRate_);
        DARABONBA_PTR_TO_JSON(TotalVideoVagueRate, totalVideoVagueRate_);
      };
      friend void from_json(const Darabonba::Json& j, OverallData& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnAvgTime, connAvgTime_);
        DARABONBA_PTR_FROM_JSON(FiveSecJoinRate, fiveSecJoinRate_);
        DARABONBA_PTR_FROM_JSON(TotalAudioStuckRate, totalAudioStuckRate_);
        DARABONBA_PTR_FROM_JSON(TotalVideoStuckRate, totalVideoStuckRate_);
        DARABONBA_PTR_FROM_JSON(TotalVideoVagueRate, totalVideoVagueRate_);
      };
      OverallData() = default ;
      OverallData(const OverallData &) = default ;
      OverallData(OverallData &&) = default ;
      OverallData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OverallData() = default ;
      OverallData& operator=(const OverallData &) = default ;
      OverallData& operator=(OverallData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connAvgTime_ == nullptr
        && this->fiveSecJoinRate_ == nullptr && this->totalAudioStuckRate_ == nullptr && this->totalVideoStuckRate_ == nullptr && this->totalVideoVagueRate_ == nullptr; };
      // connAvgTime Field Functions 
      bool hasConnAvgTime() const { return this->connAvgTime_ != nullptr;};
      void deleteConnAvgTime() { this->connAvgTime_ = nullptr;};
      inline float getConnAvgTime() const { DARABONBA_PTR_GET_DEFAULT(connAvgTime_, 0.0) };
      inline OverallData& setConnAvgTime(float connAvgTime) { DARABONBA_PTR_SET_VALUE(connAvgTime_, connAvgTime) };


      // fiveSecJoinRate Field Functions 
      bool hasFiveSecJoinRate() const { return this->fiveSecJoinRate_ != nullptr;};
      void deleteFiveSecJoinRate() { this->fiveSecJoinRate_ = nullptr;};
      inline float getFiveSecJoinRate() const { DARABONBA_PTR_GET_DEFAULT(fiveSecJoinRate_, 0.0) };
      inline OverallData& setFiveSecJoinRate(float fiveSecJoinRate) { DARABONBA_PTR_SET_VALUE(fiveSecJoinRate_, fiveSecJoinRate) };


      // totalAudioStuckRate Field Functions 
      bool hasTotalAudioStuckRate() const { return this->totalAudioStuckRate_ != nullptr;};
      void deleteTotalAudioStuckRate() { this->totalAudioStuckRate_ = nullptr;};
      inline float getTotalAudioStuckRate() const { DARABONBA_PTR_GET_DEFAULT(totalAudioStuckRate_, 0.0) };
      inline OverallData& setTotalAudioStuckRate(float totalAudioStuckRate) { DARABONBA_PTR_SET_VALUE(totalAudioStuckRate_, totalAudioStuckRate) };


      // totalVideoStuckRate Field Functions 
      bool hasTotalVideoStuckRate() const { return this->totalVideoStuckRate_ != nullptr;};
      void deleteTotalVideoStuckRate() { this->totalVideoStuckRate_ = nullptr;};
      inline float getTotalVideoStuckRate() const { DARABONBA_PTR_GET_DEFAULT(totalVideoStuckRate_, 0.0) };
      inline OverallData& setTotalVideoStuckRate(float totalVideoStuckRate) { DARABONBA_PTR_SET_VALUE(totalVideoStuckRate_, totalVideoStuckRate) };


      // totalVideoVagueRate Field Functions 
      bool hasTotalVideoVagueRate() const { return this->totalVideoVagueRate_ != nullptr;};
      void deleteTotalVideoVagueRate() { this->totalVideoVagueRate_ = nullptr;};
      inline float getTotalVideoVagueRate() const { DARABONBA_PTR_GET_DEFAULT(totalVideoVagueRate_, 0.0) };
      inline OverallData& setTotalVideoVagueRate(float totalVideoVagueRate) { DARABONBA_PTR_SET_VALUE(totalVideoVagueRate_, totalVideoVagueRate) };


    protected:
      shared_ptr<float> connAvgTime_ {};
      shared_ptr<float> fiveSecJoinRate_ {};
      shared_ptr<float> totalAudioStuckRate_ {};
      shared_ptr<float> totalVideoStuckRate_ {};
      shared_ptr<float> totalVideoVagueRate_ {};
    };

    class MetricDatas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MetricDatas& obj) { 
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, MetricDatas& obj) { 
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      MetricDatas() = default ;
      MetricDatas(const MetricDatas &) = default ;
      MetricDatas(MetricDatas &&) = default ;
      MetricDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MetricDatas() = default ;
      MetricDatas& operator=(const MetricDatas &) = default ;
      MetricDatas& operator=(MetricDatas &&) = default ;
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
        inline         const Darabonba::Json & getExt() const { DARABONBA_GET(ext_) };
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
        && this->type_ == nullptr; };
      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<MetricDatas::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<MetricDatas::Nodes>) };
      inline vector<MetricDatas::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<MetricDatas::Nodes>) };
      inline MetricDatas& setNodes(const vector<MetricDatas::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline MetricDatas& setNodes(vector<MetricDatas::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline MetricDatas& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<vector<MetricDatas::Nodes>> nodes_ {};
      shared_ptr<string> type_ {};
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
      shared_ptr<string> appId_ {};
      shared_ptr<string> callStatus_ {};
      shared_ptr<string> channelId_ {};
      shared_ptr<int64_t> createdTs_ {};
      shared_ptr<int64_t> destroyedTs_ {};
      shared_ptr<int64_t> duration_ {};
    };

    virtual bool empty() const override { return this->callInfo_ == nullptr
        && this->metricDatas_ == nullptr && this->overallData_ == nullptr && this->requestId_ == nullptr; };
    // callInfo Field Functions 
    bool hasCallInfo() const { return this->callInfo_ != nullptr;};
    void deleteCallInfo() { this->callInfo_ = nullptr;};
    inline const DescribeChannelOverallDataResponseBody::CallInfo & getCallInfo() const { DARABONBA_PTR_GET_CONST(callInfo_, DescribeChannelOverallDataResponseBody::CallInfo) };
    inline DescribeChannelOverallDataResponseBody::CallInfo getCallInfo() { DARABONBA_PTR_GET(callInfo_, DescribeChannelOverallDataResponseBody::CallInfo) };
    inline DescribeChannelOverallDataResponseBody& setCallInfo(const DescribeChannelOverallDataResponseBody::CallInfo & callInfo) { DARABONBA_PTR_SET_VALUE(callInfo_, callInfo) };
    inline DescribeChannelOverallDataResponseBody& setCallInfo(DescribeChannelOverallDataResponseBody::CallInfo && callInfo) { DARABONBA_PTR_SET_RVALUE(callInfo_, callInfo) };


    // metricDatas Field Functions 
    bool hasMetricDatas() const { return this->metricDatas_ != nullptr;};
    void deleteMetricDatas() { this->metricDatas_ = nullptr;};
    inline const vector<DescribeChannelOverallDataResponseBody::MetricDatas> & getMetricDatas() const { DARABONBA_PTR_GET_CONST(metricDatas_, vector<DescribeChannelOverallDataResponseBody::MetricDatas>) };
    inline vector<DescribeChannelOverallDataResponseBody::MetricDatas> getMetricDatas() { DARABONBA_PTR_GET(metricDatas_, vector<DescribeChannelOverallDataResponseBody::MetricDatas>) };
    inline DescribeChannelOverallDataResponseBody& setMetricDatas(const vector<DescribeChannelOverallDataResponseBody::MetricDatas> & metricDatas) { DARABONBA_PTR_SET_VALUE(metricDatas_, metricDatas) };
    inline DescribeChannelOverallDataResponseBody& setMetricDatas(vector<DescribeChannelOverallDataResponseBody::MetricDatas> && metricDatas) { DARABONBA_PTR_SET_RVALUE(metricDatas_, metricDatas) };


    // overallData Field Functions 
    bool hasOverallData() const { return this->overallData_ != nullptr;};
    void deleteOverallData() { this->overallData_ = nullptr;};
    inline const DescribeChannelOverallDataResponseBody::OverallData & getOverallData() const { DARABONBA_PTR_GET_CONST(overallData_, DescribeChannelOverallDataResponseBody::OverallData) };
    inline DescribeChannelOverallDataResponseBody::OverallData getOverallData() { DARABONBA_PTR_GET(overallData_, DescribeChannelOverallDataResponseBody::OverallData) };
    inline DescribeChannelOverallDataResponseBody& setOverallData(const DescribeChannelOverallDataResponseBody::OverallData & overallData) { DARABONBA_PTR_SET_VALUE(overallData_, overallData) };
    inline DescribeChannelOverallDataResponseBody& setOverallData(DescribeChannelOverallDataResponseBody::OverallData && overallData) { DARABONBA_PTR_SET_RVALUE(overallData_, overallData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChannelOverallDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeChannelOverallDataResponseBody::CallInfo> callInfo_ {};
    shared_ptr<vector<DescribeChannelOverallDataResponseBody::MetricDatas>> metricDatas_ {};
    shared_ptr<DescribeChannelOverallDataResponseBody::OverallData> overallData_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
