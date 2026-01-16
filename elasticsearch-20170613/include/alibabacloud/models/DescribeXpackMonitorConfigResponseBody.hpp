// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEXPACKMONITORCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEXPACKMONITORCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeXpackMonitorConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeXpackMonitorConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeXpackMonitorConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DescribeXpackMonitorConfigResponseBody() = default ;
    DescribeXpackMonitorConfigResponseBody(const DescribeXpackMonitorConfigResponseBody &) = default ;
    DescribeXpackMonitorConfigResponseBody(DescribeXpackMonitorConfigResponseBody &&) = default ;
    DescribeXpackMonitorConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeXpackMonitorConfigResponseBody() = default ;
    DescribeXpackMonitorConfigResponseBody& operator=(const DescribeXpackMonitorConfigResponseBody &) = default ;
    DescribeXpackMonitorConfigResponseBody& operator=(DescribeXpackMonitorConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(enable, enable_);
        DARABONBA_PTR_TO_JSON(endpoints, endpoints_);
        DARABONBA_PTR_TO_JSON(esInstanceId, esInstanceId_);
        DARABONBA_PTR_TO_JSON(pipelineIds, pipelineIds_);
        DARABONBA_PTR_TO_JSON(userName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(enable, enable_);
        DARABONBA_PTR_FROM_JSON(endpoints, endpoints_);
        DARABONBA_PTR_FROM_JSON(esInstanceId, esInstanceId_);
        DARABONBA_PTR_FROM_JSON(pipelineIds, pipelineIds_);
        DARABONBA_PTR_FROM_JSON(userName, userName_);
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
      virtual bool empty() const override { return this->enable_ == nullptr
        && this->endpoints_ == nullptr && this->esInstanceId_ == nullptr && this->pipelineIds_ == nullptr && this->userName_ == nullptr; };
      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Result& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // endpoints Field Functions 
      bool hasEndpoints() const { return this->endpoints_ != nullptr;};
      void deleteEndpoints() { this->endpoints_ = nullptr;};
      inline const vector<string> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<string>) };
      inline vector<string> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<string>) };
      inline Result& setEndpoints(const vector<string> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
      inline Result& setEndpoints(vector<string> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


      // esInstanceId Field Functions 
      bool hasEsInstanceId() const { return this->esInstanceId_ != nullptr;};
      void deleteEsInstanceId() { this->esInstanceId_ = nullptr;};
      inline string getEsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(esInstanceId_, "") };
      inline Result& setEsInstanceId(string esInstanceId) { DARABONBA_PTR_SET_VALUE(esInstanceId_, esInstanceId) };


      // pipelineIds Field Functions 
      bool hasPipelineIds() const { return this->pipelineIds_ != nullptr;};
      void deletePipelineIds() { this->pipelineIds_ = nullptr;};
      inline const vector<string> & getPipelineIds() const { DARABONBA_PTR_GET_CONST(pipelineIds_, vector<string>) };
      inline vector<string> getPipelineIds() { DARABONBA_PTR_GET(pipelineIds_, vector<string>) };
      inline Result& setPipelineIds(const vector<string> & pipelineIds) { DARABONBA_PTR_SET_VALUE(pipelineIds_, pipelineIds) };
      inline Result& setPipelineIds(vector<string> && pipelineIds) { DARABONBA_PTR_SET_RVALUE(pipelineIds_, pipelineIds) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Result& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // Indicates whether the X-Pack Monitoring feature is enabled. Valid values:
      // 
      // *   true: enabled
      // *   false: disabled
      shared_ptr<bool> enable_ {};
      shared_ptr<vector<string>> endpoints_ {};
      // The ID of the associated Elasticsearch cluster.
      shared_ptr<string> esInstanceId_ {};
      shared_ptr<vector<string>> pipelineIds_ {};
      // The username that is used to access the associated Elasticsearch cluster.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeXpackMonitorConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribeXpackMonitorConfigResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DescribeXpackMonitorConfigResponseBody::Result) };
    inline DescribeXpackMonitorConfigResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DescribeXpackMonitorConfigResponseBody::Result) };
    inline DescribeXpackMonitorConfigResponseBody& setResult(const DescribeXpackMonitorConfigResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeXpackMonitorConfigResponseBody& setResult(DescribeXpackMonitorConfigResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<DescribeXpackMonitorConfigResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
