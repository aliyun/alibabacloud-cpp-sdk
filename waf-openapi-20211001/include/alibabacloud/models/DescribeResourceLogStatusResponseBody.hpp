// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCELOGSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCELOGSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeResourceLogStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceLogStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceLogStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DescribeResourceLogStatusResponseBody() = default ;
    DescribeResourceLogStatusResponseBody(const DescribeResourceLogStatusResponseBody &) = default ;
    DescribeResourceLogStatusResponseBody(DescribeResourceLogStatusResponseBody &&) = default ;
    DescribeResourceLogStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceLogStatusResponseBody() = default ;
    DescribeResourceLogStatusResponseBody& operator=(const DescribeResourceLogStatusResponseBody &) = default ;
    DescribeResourceLogStatusResponseBody& operator=(DescribeResourceLogStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Resource, resource_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TraceConfig, traceConfig_);
        DARABONBA_PTR_TO_JSON(TraceStatus, traceStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TraceConfig, traceConfig_);
        DARABONBA_PTR_FROM_JSON(TraceStatus, traceStatus_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TraceConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TraceConfig& obj) { 
          DARABONBA_PTR_TO_JSON(RatePerMille, ratePerMille_);
          DARABONBA_PTR_TO_JSON(Workspace, workspace_);
        };
        friend void from_json(const Darabonba::Json& j, TraceConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(RatePerMille, ratePerMille_);
          DARABONBA_PTR_FROM_JSON(Workspace, workspace_);
        };
        TraceConfig() = default ;
        TraceConfig(const TraceConfig &) = default ;
        TraceConfig(TraceConfig &&) = default ;
        TraceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TraceConfig() = default ;
        TraceConfig& operator=(const TraceConfig &) = default ;
        TraceConfig& operator=(TraceConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ratePerMille_ == nullptr
        && this->workspace_ == nullptr; };
        // ratePerMille Field Functions 
        bool hasRatePerMille() const { return this->ratePerMille_ != nullptr;};
        void deleteRatePerMille() { this->ratePerMille_ = nullptr;};
        inline int32_t getRatePerMille() const { DARABONBA_PTR_GET_DEFAULT(ratePerMille_, 0) };
        inline TraceConfig& setRatePerMille(int32_t ratePerMille) { DARABONBA_PTR_SET_VALUE(ratePerMille_, ratePerMille) };


        // workspace Field Functions 
        bool hasWorkspace() const { return this->workspace_ != nullptr;};
        void deleteWorkspace() { this->workspace_ = nullptr;};
        inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
        inline TraceConfig& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


      protected:
        shared_ptr<int32_t> ratePerMille_ {};
        shared_ptr<string> workspace_ {};
      };

      virtual bool empty() const override { return this->resource_ == nullptr
        && this->status_ == nullptr && this->traceConfig_ == nullptr && this->traceStatus_ == nullptr; };
      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
      inline Result& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
      inline Result& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // traceConfig Field Functions 
      bool hasTraceConfig() const { return this->traceConfig_ != nullptr;};
      void deleteTraceConfig() { this->traceConfig_ = nullptr;};
      inline const Result::TraceConfig & getTraceConfig() const { DARABONBA_PTR_GET_CONST(traceConfig_, Result::TraceConfig) };
      inline Result::TraceConfig getTraceConfig() { DARABONBA_PTR_GET(traceConfig_, Result::TraceConfig) };
      inline Result& setTraceConfig(const Result::TraceConfig & traceConfig) { DARABONBA_PTR_SET_VALUE(traceConfig_, traceConfig) };
      inline Result& setTraceConfig(Result::TraceConfig && traceConfig) { DARABONBA_PTR_SET_RVALUE(traceConfig_, traceConfig) };


      // traceStatus Field Functions 
      bool hasTraceStatus() const { return this->traceStatus_ != nullptr;};
      void deleteTraceStatus() { this->traceStatus_ = nullptr;};
      inline bool getTraceStatus() const { DARABONBA_PTR_GET_DEFAULT(traceStatus_, false) };
      inline Result& setTraceStatus(bool traceStatus) { DARABONBA_PTR_SET_VALUE(traceStatus_, traceStatus) };


    protected:
      // The name of the protected object.
      shared_ptr<string> resource_ {};
      // Indicates whether log collection is enabled for the protected object. Valid values:
      // 
      // - **true**: Log collection is enabled.
      // 
      // - **false**: Log collection is disabled.
      shared_ptr<bool> status_ {};
      shared_ptr<Result::TraceConfig> traceConfig_ {};
      shared_ptr<bool> traceStatus_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceLogStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<DescribeResourceLogStatusResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<DescribeResourceLogStatusResponseBody::Result>) };
    inline vector<DescribeResourceLogStatusResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<DescribeResourceLogStatusResponseBody::Result>) };
    inline DescribeResourceLogStatusResponseBody& setResult(const vector<DescribeResourceLogStatusResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeResourceLogStatusResponseBody& setResult(vector<DescribeResourceLogStatusResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The log status information of protected objects.
    shared_ptr<vector<DescribeResourceLogStatusResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
