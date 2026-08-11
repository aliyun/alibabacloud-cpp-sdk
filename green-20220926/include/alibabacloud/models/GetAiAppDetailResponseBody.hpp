// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIAPPDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIAPPDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetAiAppDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiAppDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Chart, chart_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskEvents, riskEvents_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiAppDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Chart, chart_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskEvents, riskEvents_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    GetAiAppDetailResponseBody() = default ;
    GetAiAppDetailResponseBody(const GetAiAppDetailResponseBody &) = default ;
    GetAiAppDetailResponseBody(GetAiAppDetailResponseBody &&) = default ;
    GetAiAppDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiAppDetailResponseBody() = default ;
    GetAiAppDetailResponseBody& operator=(const GetAiAppDetailResponseBody &) = default ;
    GetAiAppDetailResponseBody& operator=(GetAiAppDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RiskEvents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RiskEvents& obj) { 
        DARABONBA_PTR_TO_JSON(EventCode, eventCode_);
        DARABONBA_PTR_TO_JSON(EventCount, eventCount_);
        DARABONBA_PTR_TO_JSON(EventIds, eventIds_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(EventStatus, eventStatus_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
      };
      friend void from_json(const Darabonba::Json& j, RiskEvents& obj) { 
        DARABONBA_PTR_FROM_JSON(EventCode, eventCode_);
        DARABONBA_PTR_FROM_JSON(EventCount, eventCount_);
        DARABONBA_PTR_FROM_JSON(EventIds, eventIds_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(EventStatus, eventStatus_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
      };
      RiskEvents() = default ;
      RiskEvents(const RiskEvents &) = default ;
      RiskEvents(RiskEvents &&) = default ;
      RiskEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RiskEvents() = default ;
      RiskEvents& operator=(const RiskEvents &) = default ;
      RiskEvents& operator=(RiskEvents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Labels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Labels& obj) { 
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(LabelDesc, labelDesc_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Labels& obj) { 
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(LabelDesc, labelDesc_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Labels() = default ;
        Labels(const Labels &) = default ;
        Labels(Labels &&) = default ;
        Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Labels() = default ;
        Labels& operator=(const Labels &) = default ;
        Labels& operator=(Labels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->label_ == nullptr
        && this->labelDesc_ == nullptr && this->type_ == nullptr; };
        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Labels& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // labelDesc Field Functions 
        bool hasLabelDesc() const { return this->labelDesc_ != nullptr;};
        void deleteLabelDesc() { this->labelDesc_ = nullptr;};
        inline string getLabelDesc() const { DARABONBA_PTR_GET_DEFAULT(labelDesc_, "") };
        inline Labels& setLabelDesc(string labelDesc) { DARABONBA_PTR_SET_VALUE(labelDesc_, labelDesc) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Labels& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The labels.
        shared_ptr<string> label_ {};
        // The label description.
        shared_ptr<string> labelDesc_ {};
        // The type.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->eventCode_ == nullptr
        && this->eventCount_ == nullptr && this->eventIds_ == nullptr && this->eventName_ == nullptr && this->eventStatus_ == nullptr && this->labels_ == nullptr; };
      // eventCode Field Functions 
      bool hasEventCode() const { return this->eventCode_ != nullptr;};
      void deleteEventCode() { this->eventCode_ = nullptr;};
      inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
      inline RiskEvents& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


      // eventCount Field Functions 
      bool hasEventCount() const { return this->eventCount_ != nullptr;};
      void deleteEventCount() { this->eventCount_ = nullptr;};
      inline int64_t getEventCount() const { DARABONBA_PTR_GET_DEFAULT(eventCount_, 0L) };
      inline RiskEvents& setEventCount(int64_t eventCount) { DARABONBA_PTR_SET_VALUE(eventCount_, eventCount) };


      // eventIds Field Functions 
      bool hasEventIds() const { return this->eventIds_ != nullptr;};
      void deleteEventIds() { this->eventIds_ = nullptr;};
      inline const vector<string> & getEventIds() const { DARABONBA_PTR_GET_CONST(eventIds_, vector<string>) };
      inline vector<string> getEventIds() { DARABONBA_PTR_GET(eventIds_, vector<string>) };
      inline RiskEvents& setEventIds(const vector<string> & eventIds) { DARABONBA_PTR_SET_VALUE(eventIds_, eventIds) };
      inline RiskEvents& setEventIds(vector<string> && eventIds) { DARABONBA_PTR_SET_RVALUE(eventIds_, eventIds) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline RiskEvents& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // eventStatus Field Functions 
      bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
      void deleteEventStatus() { this->eventStatus_ = nullptr;};
      inline string getEventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, "") };
      inline RiskEvents& setEventStatus(string eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<RiskEvents::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<RiskEvents::Labels>) };
      inline vector<RiskEvents::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<RiskEvents::Labels>) };
      inline RiskEvents& setLabels(const vector<RiskEvents::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline RiskEvents& setLabels(vector<RiskEvents::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    protected:
      // The risk event code.
      shared_ptr<string> eventCode_ {};
      // The number of events.
      shared_ptr<int64_t> eventCount_ {};
      // The list of risk event IDs.
      shared_ptr<vector<string>> eventIds_ {};
      // The risk event name.
      shared_ptr<string> eventName_ {};
      // The event status. Valid values:
      // - **unhandled**: Not handled.
      // - **resolved**: Handled.
      shared_ptr<string> eventStatus_ {};
      // The labels.
      shared_ptr<vector<RiskEvents::Labels>> labels_ {};
    };

    class Chart : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Chart& obj) { 
        DARABONBA_PTR_TO_JSON(X, x_);
        DARABONBA_PTR_TO_JSON(Y, y_);
      };
      friend void from_json(const Darabonba::Json& j, Chart& obj) { 
        DARABONBA_PTR_FROM_JSON(X, x_);
        DARABONBA_PTR_FROM_JSON(Y, y_);
      };
      Chart() = default ;
      Chart(const Chart &) = default ;
      Chart(Chart &&) = default ;
      Chart(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Chart() = default ;
      Chart& operator=(const Chart &) = default ;
      Chart& operator=(Chart &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Y : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Y& obj) { 
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Y& obj) { 
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Y() = default ;
        Y(const Y &) = default ;
        Y(Y &&) = default ;
        Y(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Y() = default ;
        Y& operator=(const Y &) = default ;
        Y& operator=(Y &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->data_ == nullptr
        && this->name_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const vector<int64_t> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<int64_t>) };
        inline vector<int64_t> getData() { DARABONBA_PTR_GET(data_, vector<int64_t>) };
        inline Y& setData(const vector<int64_t> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline Y& setData(vector<int64_t> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Y& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The returned collection.
        shared_ptr<vector<int64_t>> data_ {};
        // The name.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->x_ == nullptr
        && this->y_ == nullptr; };
      // x Field Functions 
      bool hasX() const { return this->x_ != nullptr;};
      void deleteX() { this->x_ = nullptr;};
      inline const vector<string> & getX() const { DARABONBA_PTR_GET_CONST(x_, vector<string>) };
      inline vector<string> getX() { DARABONBA_PTR_GET(x_, vector<string>) };
      inline Chart& setX(const vector<string> & x) { DARABONBA_PTR_SET_VALUE(x_, x) };
      inline Chart& setX(vector<string> && x) { DARABONBA_PTR_SET_RVALUE(x_, x) };


      // y Field Functions 
      bool hasY() const { return this->y_ != nullptr;};
      void deleteY() { this->y_ = nullptr;};
      inline const vector<Chart::Y> & getY() const { DARABONBA_PTR_GET_CONST(y_, vector<Chart::Y>) };
      inline vector<Chart::Y> getY() { DARABONBA_PTR_GET(y_, vector<Chart::Y>) };
      inline Chart& setY(const vector<Chart::Y> & y) { DARABONBA_PTR_SET_VALUE(y_, y) };
      inline Chart& setY(vector<Chart::Y> && y) { DARABONBA_PTR_SET_RVALUE(y_, y) };


    protected:
      // The X value of the coordinate point.
      shared_ptr<vector<string>> x_ {};
      // The Y value of the coordinate point.
      shared_ptr<vector<Chart::Y>> y_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->chart_ == nullptr && this->requestId_ == nullptr && this->riskEvents_ == nullptr && this->score_ == nullptr
        && this->uid_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetAiAppDetailResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetAiAppDetailResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // chart Field Functions 
    bool hasChart() const { return this->chart_ != nullptr;};
    void deleteChart() { this->chart_ = nullptr;};
    inline const GetAiAppDetailResponseBody::Chart & getChart() const { DARABONBA_PTR_GET_CONST(chart_, GetAiAppDetailResponseBody::Chart) };
    inline GetAiAppDetailResponseBody::Chart getChart() { DARABONBA_PTR_GET(chart_, GetAiAppDetailResponseBody::Chart) };
    inline GetAiAppDetailResponseBody& setChart(const GetAiAppDetailResponseBody::Chart & chart) { DARABONBA_PTR_SET_VALUE(chart_, chart) };
    inline GetAiAppDetailResponseBody& setChart(GetAiAppDetailResponseBody::Chart && chart) { DARABONBA_PTR_SET_RVALUE(chart_, chart) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAiAppDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskEvents Field Functions 
    bool hasRiskEvents() const { return this->riskEvents_ != nullptr;};
    void deleteRiskEvents() { this->riskEvents_ = nullptr;};
    inline const vector<GetAiAppDetailResponseBody::RiskEvents> & getRiskEvents() const { DARABONBA_PTR_GET_CONST(riskEvents_, vector<GetAiAppDetailResponseBody::RiskEvents>) };
    inline vector<GetAiAppDetailResponseBody::RiskEvents> getRiskEvents() { DARABONBA_PTR_GET(riskEvents_, vector<GetAiAppDetailResponseBody::RiskEvents>) };
    inline GetAiAppDetailResponseBody& setRiskEvents(const vector<GetAiAppDetailResponseBody::RiskEvents> & riskEvents) { DARABONBA_PTR_SET_VALUE(riskEvents_, riskEvents) };
    inline GetAiAppDetailResponseBody& setRiskEvents(vector<GetAiAppDetailResponseBody::RiskEvents> && riskEvents) { DARABONBA_PTR_SET_RVALUE(riskEvents_, riskEvents) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline GetAiAppDetailResponseBody& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline GetAiAppDetailResponseBody& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // appId。
    shared_ptr<string> appId_ {};
    // The application name.
    shared_ptr<string> appName_ {};
    // The chart.
    shared_ptr<GetAiAppDetailResponseBody::Chart> chart_ {};
    // The ID assigned by the backend to uniquely identify a request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The risk events.
    shared_ptr<vector<GetAiAppDetailResponseBody::RiskEvents>> riskEvents_ {};
    // The score.
    shared_ptr<int32_t> score_ {};
    // UID。
    shared_ptr<string> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
