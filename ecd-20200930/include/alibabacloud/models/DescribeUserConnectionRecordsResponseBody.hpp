// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERCONNECTIONRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERCONNECTIONRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserConnectionRecordsResponseBodyConnectionRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeUserConnectionRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserConnectionRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionRecords, connectionRecords_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserConnectionRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionRecords, connectionRecords_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserConnectionRecordsResponseBody() = default ;
    DescribeUserConnectionRecordsResponseBody(const DescribeUserConnectionRecordsResponseBody &) = default ;
    DescribeUserConnectionRecordsResponseBody(DescribeUserConnectionRecordsResponseBody &&) = default ;
    DescribeUserConnectionRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserConnectionRecordsResponseBody() = default ;
    DescribeUserConnectionRecordsResponseBody& operator=(const DescribeUserConnectionRecordsResponseBody &) = default ;
    DescribeUserConnectionRecordsResponseBody& operator=(DescribeUserConnectionRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionRecords_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // connectionRecords Field Functions 
    bool hasConnectionRecords() const { return this->connectionRecords_ != nullptr;};
    void deleteConnectionRecords() { this->connectionRecords_ = nullptr;};
    inline const vector<DescribeUserConnectionRecordsResponseBodyConnectionRecords> & connectionRecords() const { DARABONBA_PTR_GET_CONST(connectionRecords_, vector<DescribeUserConnectionRecordsResponseBodyConnectionRecords>) };
    inline vector<DescribeUserConnectionRecordsResponseBodyConnectionRecords> connectionRecords() { DARABONBA_PTR_GET(connectionRecords_, vector<DescribeUserConnectionRecordsResponseBodyConnectionRecords>) };
    inline DescribeUserConnectionRecordsResponseBody& setConnectionRecords(const vector<DescribeUserConnectionRecordsResponseBodyConnectionRecords> & connectionRecords) { DARABONBA_PTR_SET_VALUE(connectionRecords_, connectionRecords) };
    inline DescribeUserConnectionRecordsResponseBody& setConnectionRecords(vector<DescribeUserConnectionRecordsResponseBodyConnectionRecords> && connectionRecords) { DARABONBA_PTR_SET_RVALUE(connectionRecords_, connectionRecords) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeUserConnectionRecordsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserConnectionRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The connection records.
    std::shared_ptr<vector<DescribeUserConnectionRecordsResponseBodyConnectionRecords>> connectionRecords_ = nullptr;
    // The token that is used to start the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
