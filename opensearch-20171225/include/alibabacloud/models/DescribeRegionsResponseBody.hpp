// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class DescribeRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
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
        DARABONBA_PTR_TO_JSON(consoleUrl, consoleUrl_);
        DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(localName, localName_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(consoleUrl, consoleUrl_);
        DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(localName, localName_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
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
      virtual bool empty() const override { return this->consoleUrl_ == nullptr
        && this->endpoint_ == nullptr && this->localName_ == nullptr && this->regionId_ == nullptr; };
      // consoleUrl Field Functions 
      bool hasConsoleUrl() const { return this->consoleUrl_ != nullptr;};
      void deleteConsoleUrl() { this->consoleUrl_ = nullptr;};
      inline string getConsoleUrl() const { DARABONBA_PTR_GET_DEFAULT(consoleUrl_, "") };
      inline Result& setConsoleUrl(string consoleUrl) { DARABONBA_PTR_SET_VALUE(consoleUrl_, consoleUrl) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline Result& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // localName Field Functions 
      bool hasLocalName() const { return this->localName_ != nullptr;};
      void deleteLocalName() { this->localName_ = nullptr;};
      inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
      inline Result& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Result& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The console URL.
      shared_ptr<string> consoleUrl_ {};
      // The endpoint.
      shared_ptr<string> endpoint_ {};
      // The region name.
      shared_ptr<string> localName_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
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
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The result.
    shared_ptr<vector<DescribeRegionsResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
