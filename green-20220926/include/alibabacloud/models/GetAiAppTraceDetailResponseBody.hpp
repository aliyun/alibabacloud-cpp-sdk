// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIAPPTRACEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIAPPTRACEDETAILRESPONSEBODY_HPP_
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
  class GetAiAppTraceDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiAppTraceDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Analysis, analysis_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
      DARABONBA_PTR_TO_JSON(WarningTime, warningTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiAppTraceDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
      DARABONBA_PTR_FROM_JSON(WarningTime, warningTime_);
    };
    GetAiAppTraceDetailResponseBody() = default ;
    GetAiAppTraceDetailResponseBody(const GetAiAppTraceDetailResponseBody &) = default ;
    GetAiAppTraceDetailResponseBody(GetAiAppTraceDetailResponseBody &&) = default ;
    GetAiAppTraceDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiAppTraceDetailResponseBody() = default ;
    GetAiAppTraceDetailResponseBody& operator=(const GetAiAppTraceDetailResponseBody &) = default ;
    GetAiAppTraceDetailResponseBody& operator=(GetAiAppTraceDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Labels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Labels& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Label, label_);
        DARABONBA_PTR_TO_JSON(LabelDesc, labelDesc_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Labels& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
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
      virtual bool empty() const override { return this->count_ == nullptr
        && this->label_ == nullptr && this->labelDesc_ == nullptr && this->type_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline Labels& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


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
      // The count.
      shared_ptr<int64_t> count_ {};
      // The label name.
      shared_ptr<string> label_ {};
      // The label description.
      shared_ptr<string> labelDesc_ {};
      // The type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->analysis_ == nullptr
        && this->appId_ == nullptr && this->appName_ == nullptr && this->channel_ == nullptr && this->labels_ == nullptr && this->requestId_ == nullptr
        && this->traceId_ == nullptr && this->warningTime_ == nullptr; };
    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline string getAnalysis() const { DARABONBA_PTR_GET_DEFAULT(analysis_, "") };
    inline GetAiAppTraceDetailResponseBody& setAnalysis(string analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetAiAppTraceDetailResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetAiAppTraceDetailResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline GetAiAppTraceDetailResponseBody& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<GetAiAppTraceDetailResponseBody::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<GetAiAppTraceDetailResponseBody::Labels>) };
    inline vector<GetAiAppTraceDetailResponseBody::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<GetAiAppTraceDetailResponseBody::Labels>) };
    inline GetAiAppTraceDetailResponseBody& setLabels(const vector<GetAiAppTraceDetailResponseBody::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline GetAiAppTraceDetailResponseBody& setLabels(vector<GetAiAppTraceDetailResponseBody::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAiAppTraceDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline GetAiAppTraceDetailResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


    // warningTime Field Functions 
    bool hasWarningTime() const { return this->warningTime_ != nullptr;};
    void deleteWarningTime() { this->warningTime_ = nullptr;};
    inline string getWarningTime() const { DARABONBA_PTR_GET_DEFAULT(warningTime_, "") };
    inline GetAiAppTraceDetailResponseBody& setWarningTime(string warningTime) { DARABONBA_PTR_SET_VALUE(warningTime_, warningTime) };


  protected:
    // The AI analysis result.
    shared_ptr<string> analysis_ {};
    // The application ID.
    shared_ptr<string> appId_ {};
    // The application name.
    shared_ptr<string> appName_ {};
    // The application channel.
    shared_ptr<string> channel_ {};
    // The list of labels.
    shared_ptr<vector<GetAiAppTraceDetailResponseBody::Labels>> labels_ {};
    // The backend-assigned ID that uniquely identifies a request. You can use this ID for troubleshooting.
    shared_ptr<string> requestId_ {};
    // The trace ID used to correlate and track alert events.
    shared_ptr<string> traceId_ {};
    // The alert time.
    shared_ptr<string> warningTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
