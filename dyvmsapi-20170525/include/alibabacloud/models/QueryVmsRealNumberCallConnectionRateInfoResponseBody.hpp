// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVMSREALNUMBERCALLCONNECTIONRATEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYVMSREALNUMBERCALLCONNECTIONRATEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryVmsRealNumberCallConnectionRateInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVmsRealNumberCallConnectionRateInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVmsRealNumberCallConnectionRateInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryVmsRealNumberCallConnectionRateInfoResponseBody() = default ;
    QueryVmsRealNumberCallConnectionRateInfoResponseBody(const QueryVmsRealNumberCallConnectionRateInfoResponseBody &) = default ;
    QueryVmsRealNumberCallConnectionRateInfoResponseBody(QueryVmsRealNumberCallConnectionRateInfoResponseBody &&) = default ;
    QueryVmsRealNumberCallConnectionRateInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVmsRealNumberCallConnectionRateInfoResponseBody() = default ;
    QueryVmsRealNumberCallConnectionRateInfoResponseBody& operator=(const QueryVmsRealNumberCallConnectionRateInfoResponseBody &) = default ;
    QueryVmsRealNumberCallConnectionRateInfoResponseBody& operator=(QueryVmsRealNumberCallConnectionRateInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(CallConnectionRate, callConnectionRate_);
        DARABONBA_PTR_TO_JSON(CompleteCount, completeCount_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RequestCount, requestCount_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(RingingCount, ringingCount_);
        DARABONBA_PTR_TO_JSON(RingingRate, ringingRate_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(CallConnectionRate, callConnectionRate_);
        DARABONBA_PTR_FROM_JSON(CompleteCount, completeCount_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RequestCount, requestCount_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(RingingCount, ringingCount_);
        DARABONBA_PTR_FROM_JSON(RingingRate, ringingRate_);
      };
      Model() = default ;
      Model(const Model &) = default ;
      Model(Model &&) = default ;
      Model(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Model() = default ;
      Model& operator=(const Model &) = default ;
      Model& operator=(Model &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->callConnectionRate_ == nullptr
        && this->completeCount_ == nullptr && this->regionId_ == nullptr && this->requestCount_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr
        && this->ringingCount_ == nullptr && this->ringingRate_ == nullptr; };
      // callConnectionRate Field Functions 
      bool hasCallConnectionRate() const { return this->callConnectionRate_ != nullptr;};
      void deleteCallConnectionRate() { this->callConnectionRate_ = nullptr;};
      inline double getCallConnectionRate() const { DARABONBA_PTR_GET_DEFAULT(callConnectionRate_, 0.0) };
      inline Model& setCallConnectionRate(double callConnectionRate) { DARABONBA_PTR_SET_VALUE(callConnectionRate_, callConnectionRate) };


      // completeCount Field Functions 
      bool hasCompleteCount() const { return this->completeCount_ != nullptr;};
      void deleteCompleteCount() { this->completeCount_ = nullptr;};
      inline int64_t getCompleteCount() const { DARABONBA_PTR_GET_DEFAULT(completeCount_, 0L) };
      inline Model& setCompleteCount(int64_t completeCount) { DARABONBA_PTR_SET_VALUE(completeCount_, completeCount) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Model& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // requestCount Field Functions 
      bool hasRequestCount() const { return this->requestCount_ != nullptr;};
      void deleteRequestCount() { this->requestCount_ = nullptr;};
      inline int64_t getRequestCount() const { DARABONBA_PTR_GET_DEFAULT(requestCount_, 0L) };
      inline Model& setRequestCount(int64_t requestCount) { DARABONBA_PTR_SET_VALUE(requestCount_, requestCount) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Model& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Model& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // ringingCount Field Functions 
      bool hasRingingCount() const { return this->ringingCount_ != nullptr;};
      void deleteRingingCount() { this->ringingCount_ = nullptr;};
      inline int64_t getRingingCount() const { DARABONBA_PTR_GET_DEFAULT(ringingCount_, 0L) };
      inline Model& setRingingCount(int64_t ringingCount) { DARABONBA_PTR_SET_VALUE(ringingCount_, ringingCount) };


      // ringingRate Field Functions 
      bool hasRingingRate() const { return this->ringingRate_ != nullptr;};
      void deleteRingingRate() { this->ringingRate_ = nullptr;};
      inline double getRingingRate() const { DARABONBA_PTR_GET_DEFAULT(ringingRate_, 0.0) };
      inline Model& setRingingRate(double ringingRate) { DARABONBA_PTR_SET_VALUE(ringingRate_, ringingRate) };


    protected:
      // 接通率
      shared_ptr<double> callConnectionRate_ {};
      // 接通数
      shared_ptr<int64_t> completeCount_ {};
      shared_ptr<string> regionId_ {};
      // 请求通话数
      shared_ptr<int64_t> requestCount_ {};
      shared_ptr<string> resourceId_ {};
      // EcsInstance, EcsDisk, EcsImage, EcsSnapshot, EcsSecurityGroup, EcsEip, EcsVpc, EcsVRouter, EcsVSwitch, EcsVRouteTable, EcsAuthImage, EcsAll, SlbLoadbalancer, SlbVm, RdsInstance, RdsAllInstance, KvsInstance, OcsInstance, OdpsInstance
      shared_ptr<string> resourceType_ {};
      // 响铃数
      shared_ptr<int64_t> ringingCount_ {};
      // 响铃率
      shared_ptr<double> ringingRate_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryVmsRealNumberCallConnectionRateInfoResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryVmsRealNumberCallConnectionRateInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryVmsRealNumberCallConnectionRateInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const QueryVmsRealNumberCallConnectionRateInfoResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, QueryVmsRealNumberCallConnectionRateInfoResponseBody::Model) };
    inline QueryVmsRealNumberCallConnectionRateInfoResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, QueryVmsRealNumberCallConnectionRateInfoResponseBody::Model) };
    inline QueryVmsRealNumberCallConnectionRateInfoResponseBody& setModel(const QueryVmsRealNumberCallConnectionRateInfoResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline QueryVmsRealNumberCallConnectionRateInfoResponseBody& setModel(QueryVmsRealNumberCallConnectionRateInfoResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryVmsRealNumberCallConnectionRateInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryVmsRealNumberCallConnectionRateInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<QueryVmsRealNumberCallConnectionRateInfoResponseBody::Model> model_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
