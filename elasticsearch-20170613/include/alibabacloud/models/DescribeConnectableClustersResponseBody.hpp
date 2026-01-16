// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONNECTABLECLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONNECTABLECLUSTERSRESPONSEBODY_HPP_
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
  class DescribeConnectableClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConnectableClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConnectableClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DescribeConnectableClustersResponseBody() = default ;
    DescribeConnectableClustersResponseBody(const DescribeConnectableClustersResponseBody &) = default ;
    DescribeConnectableClustersResponseBody(DescribeConnectableClustersResponseBody &&) = default ;
    DescribeConnectableClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConnectableClustersResponseBody() = default ;
    DescribeConnectableClustersResponseBody& operator=(const DescribeConnectableClustersResponseBody &) = default ;
    DescribeConnectableClustersResponseBody& operator=(DescribeConnectableClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(instances, instances_);
        DARABONBA_PTR_TO_JSON(networkType, networkType_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(instances, instances_);
        DARABONBA_PTR_FROM_JSON(networkType, networkType_);
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
      virtual bool empty() const override { return this->instances_ == nullptr
        && this->networkType_ == nullptr; };
      // instances Field Functions 
      bool hasInstances() const { return this->instances_ != nullptr;};
      void deleteInstances() { this->instances_ = nullptr;};
      inline string getInstances() const { DARABONBA_PTR_GET_DEFAULT(instances_, "") };
      inline Result& setInstances(string instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };


      // networkType Field Functions 
      bool hasNetworkType() const { return this->networkType_ != nullptr;};
      void deleteNetworkType() { this->networkType_ = nullptr;};
      inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
      inline Result& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    protected:
      shared_ptr<string> instances_ {};
      shared_ptr<string> networkType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConnectableClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<DescribeConnectableClustersResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<DescribeConnectableClustersResponseBody::Result>) };
    inline vector<DescribeConnectableClustersResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<DescribeConnectableClustersResponseBody::Result>) };
    inline DescribeConnectableClustersResponseBody& setResult(const vector<DescribeConnectableClustersResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeConnectableClustersResponseBody& setResult(vector<DescribeConnectableClustersResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeConnectableClustersResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
