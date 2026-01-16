// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODY_HPP_
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
  class DescribeRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DescribeRegionsResponseBody() = default ;
    DescribeRegionsResponseBody(const DescribeRegionsResponseBody &) = default ;
    DescribeRegionsResponseBody(DescribeRegionsResponseBody &&) = default ;
    DescribeRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBody() = default ;
    DescribeRegionsResponseBody& operator=(const DescribeRegionsResponseBody &) = default ;
    DescribeRegionsResponseBody& operator=(DescribeRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(consoleEndpoint, consoleEndpoint_);
        DARABONBA_PTR_TO_JSON(localName, localName_);
        DARABONBA_PTR_TO_JSON(regionEndpoint, regionEndpoint_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(consoleEndpoint, consoleEndpoint_);
        DARABONBA_PTR_FROM_JSON(localName, localName_);
        DARABONBA_PTR_FROM_JSON(regionEndpoint, regionEndpoint_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
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
      virtual bool empty() const override { return this->consoleEndpoint_ == nullptr
        && this->localName_ == nullptr && this->regionEndpoint_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr; };
      // consoleEndpoint Field Functions 
      bool hasConsoleEndpoint() const { return this->consoleEndpoint_ != nullptr;};
      void deleteConsoleEndpoint() { this->consoleEndpoint_ = nullptr;};
      inline string getConsoleEndpoint() const { DARABONBA_PTR_GET_DEFAULT(consoleEndpoint_, "") };
      inline Result& setConsoleEndpoint(string consoleEndpoint) { DARABONBA_PTR_SET_VALUE(consoleEndpoint_, consoleEndpoint) };


      // localName Field Functions 
      bool hasLocalName() const { return this->localName_ != nullptr;};
      void deleteLocalName() { this->localName_ = nullptr;};
      inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
      inline Result& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


      // regionEndpoint Field Functions 
      bool hasRegionEndpoint() const { return this->regionEndpoint_ != nullptr;};
      void deleteRegionEndpoint() { this->regionEndpoint_ = nullptr;};
      inline string getRegionEndpoint() const { DARABONBA_PTR_GET_DEFAULT(regionEndpoint_, "") };
      inline Result& setRegionEndpoint(string regionEndpoint) { DARABONBA_PTR_SET_VALUE(regionEndpoint_, regionEndpoint) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Result& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> consoleEndpoint_ {};
      shared_ptr<string> localName_ {};
      shared_ptr<string> regionEndpoint_ {};
      // The name of the region.
      shared_ptr<string> regionId_ {};
      // The endpoint of the region that is exposed in the console.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<DescribeRegionsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<DescribeRegionsResponseBody::Result>) };
    inline vector<DescribeRegionsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<DescribeRegionsResponseBody::Result>) };
    inline DescribeRegionsResponseBody& setResult(const vector<DescribeRegionsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeRegionsResponseBody& setResult(vector<DescribeRegionsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The available status of the region.
    shared_ptr<string> requestId_ {};
    // The endpoint of the region.
    shared_ptr<vector<DescribeRegionsResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
