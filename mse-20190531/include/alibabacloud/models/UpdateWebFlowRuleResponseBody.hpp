// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWEBFLOWRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWEBFLOWRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateWebFlowRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWebFlowRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWebFlowRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateWebFlowRuleResponseBody() = default ;
    UpdateWebFlowRuleResponseBody(const UpdateWebFlowRuleResponseBody &) = default ;
    UpdateWebFlowRuleResponseBody(UpdateWebFlowRuleResponseBody &&) = default ;
    UpdateWebFlowRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWebFlowRuleResponseBody() = default ;
    UpdateWebFlowRuleResponseBody& operator=(const UpdateWebFlowRuleResponseBody &) = default ;
    UpdateWebFlowRuleResponseBody& operator=(UpdateWebFlowRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(Burst, burst_);
        DARABONBA_PTR_TO_JSON(ControlBehavior, controlBehavior_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MaxQueueingTimeMs, maxQueueingTimeMs_);
        DARABONBA_PTR_TO_JSON(MetricType, metricType_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(ParamItem, paramItem_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ReourceMode, reourceMode_);
        DARABONBA_PTR_TO_JSON(Resource, resource_);
        DARABONBA_PTR_TO_JSON(StatIntervalMs, statIntervalMs_);
        DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(Burst, burst_);
        DARABONBA_PTR_FROM_JSON(ControlBehavior, controlBehavior_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MaxQueueingTimeMs, maxQueueingTimeMs_);
        DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(ParamItem, paramItem_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ReourceMode, reourceMode_);
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
        DARABONBA_PTR_FROM_JSON(StatIntervalMs, statIntervalMs_);
        DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
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
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->burst_ == nullptr && this->controlBehavior_ == nullptr && this->enable_ == nullptr && this->id_ == nullptr
        && this->maxQueueingTimeMs_ == nullptr && this->metricType_ == nullptr && this->namespace_ == nullptr && this->paramItem_ == nullptr && this->regionId_ == nullptr
        && this->reourceMode_ == nullptr && this->resource_ == nullptr && this->statIntervalMs_ == nullptr && this->threshold_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Data& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // burst Field Functions 
      bool hasBurst() const { return this->burst_ != nullptr;};
      void deleteBurst() { this->burst_ = nullptr;};
      inline int32_t getBurst() const { DARABONBA_PTR_GET_DEFAULT(burst_, 0) };
      inline Data& setBurst(int32_t burst) { DARABONBA_PTR_SET_VALUE(burst_, burst) };


      // controlBehavior Field Functions 
      bool hasControlBehavior() const { return this->controlBehavior_ != nullptr;};
      void deleteControlBehavior() { this->controlBehavior_ = nullptr;};
      inline int32_t getControlBehavior() const { DARABONBA_PTR_GET_DEFAULT(controlBehavior_, 0) };
      inline Data& setControlBehavior(int32_t controlBehavior) { DARABONBA_PTR_SET_VALUE(controlBehavior_, controlBehavior) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Data& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // maxQueueingTimeMs Field Functions 
      bool hasMaxQueueingTimeMs() const { return this->maxQueueingTimeMs_ != nullptr;};
      void deleteMaxQueueingTimeMs() { this->maxQueueingTimeMs_ = nullptr;};
      inline int32_t getMaxQueueingTimeMs() const { DARABONBA_PTR_GET_DEFAULT(maxQueueingTimeMs_, 0) };
      inline Data& setMaxQueueingTimeMs(int32_t maxQueueingTimeMs) { DARABONBA_PTR_SET_VALUE(maxQueueingTimeMs_, maxQueueingTimeMs) };


      // metricType Field Functions 
      bool hasMetricType() const { return this->metricType_ != nullptr;};
      void deleteMetricType() { this->metricType_ = nullptr;};
      inline int32_t getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, 0) };
      inline Data& setMetricType(int32_t metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Data& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // paramItem Field Functions 
      bool hasParamItem() const { return this->paramItem_ != nullptr;};
      void deleteParamItem() { this->paramItem_ = nullptr;};
      inline string getParamItem() const { DARABONBA_PTR_GET_DEFAULT(paramItem_, "") };
      inline Data& setParamItem(string paramItem) { DARABONBA_PTR_SET_VALUE(paramItem_, paramItem) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // reourceMode Field Functions 
      bool hasReourceMode() const { return this->reourceMode_ != nullptr;};
      void deleteReourceMode() { this->reourceMode_ = nullptr;};
      inline int32_t getReourceMode() const { DARABONBA_PTR_GET_DEFAULT(reourceMode_, 0) };
      inline Data& setReourceMode(int32_t reourceMode) { DARABONBA_PTR_SET_VALUE(reourceMode_, reourceMode) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
      inline Data& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


      // statIntervalMs Field Functions 
      bool hasStatIntervalMs() const { return this->statIntervalMs_ != nullptr;};
      void deleteStatIntervalMs() { this->statIntervalMs_ = nullptr;};
      inline int32_t getStatIntervalMs() const { DARABONBA_PTR_GET_DEFAULT(statIntervalMs_, 0) };
      inline Data& setStatIntervalMs(int32_t statIntervalMs) { DARABONBA_PTR_SET_VALUE(statIntervalMs_, statIntervalMs) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
      inline Data& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> appName_ {};
      shared_ptr<int32_t> burst_ {};
      shared_ptr<int32_t> controlBehavior_ {};
      shared_ptr<bool> enable_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<int32_t> maxQueueingTimeMs_ {};
      shared_ptr<int32_t> metricType_ {};
      shared_ptr<string> namespace_ {};
      shared_ptr<string> paramItem_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<int32_t> reourceMode_ {};
      shared_ptr<string> resource_ {};
      shared_ptr<int32_t> statIntervalMs_ {};
      shared_ptr<float> threshold_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateWebFlowRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateWebFlowRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateWebFlowRuleResponseBody::Data) };
    inline UpdateWebFlowRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateWebFlowRuleResponseBody::Data) };
    inline UpdateWebFlowRuleResponseBody& setData(const UpdateWebFlowRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateWebFlowRuleResponseBody& setData(UpdateWebFlowRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateWebFlowRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateWebFlowRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateWebFlowRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<UpdateWebFlowRuleResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
