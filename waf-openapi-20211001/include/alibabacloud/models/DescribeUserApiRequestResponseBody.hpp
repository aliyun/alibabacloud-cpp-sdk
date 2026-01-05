// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERAPIREQUESTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERAPIREQUESTRESPONSEBODY_HPP_
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
  class DescribeUserApiRequestResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserApiRequestResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Requests, requests_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserApiRequestResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Requests, requests_);
    };
    DescribeUserApiRequestResponseBody() = default ;
    DescribeUserApiRequestResponseBody(const DescribeUserApiRequestResponseBody &) = default ;
    DescribeUserApiRequestResponseBody(DescribeUserApiRequestResponseBody &&) = default ;
    DescribeUserApiRequestResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserApiRequestResponseBody() = default ;
    DescribeUserApiRequestResponseBody& operator=(const DescribeUserApiRequestResponseBody &) = default ;
    DescribeUserApiRequestResponseBody& operator=(DescribeUserApiRequestResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Requests : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Requests& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Requests& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Requests() = default ;
      Requests(const Requests &) = default ;
      Requests(Requests &&) = default ;
      Requests(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Requests() = default ;
      Requests& operator=(const Requests &) = default ;
      Requests& operator=(Requests &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->value_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline Requests& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Requests& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The number of entries returned.
      shared_ptr<int64_t> count_ {};
      // The type of the statistics. Valid values:
      // 
      // *   **client_list**: client
      // *   **ip**: IP address
      // *   **region_id** region
      // *   **country_id**: country
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->requests_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserApiRequestResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requests Field Functions 
    bool hasRequests() const { return this->requests_ != nullptr;};
    void deleteRequests() { this->requests_ = nullptr;};
    inline const vector<DescribeUserApiRequestResponseBody::Requests> & getRequests() const { DARABONBA_PTR_GET_CONST(requests_, vector<DescribeUserApiRequestResponseBody::Requests>) };
    inline vector<DescribeUserApiRequestResponseBody::Requests> getRequests() { DARABONBA_PTR_GET(requests_, vector<DescribeUserApiRequestResponseBody::Requests>) };
    inline DescribeUserApiRequestResponseBody& setRequests(const vector<DescribeUserApiRequestResponseBody::Requests> & requests) { DARABONBA_PTR_SET_VALUE(requests_, requests) };
    inline DescribeUserApiRequestResponseBody& setRequests(vector<DescribeUserApiRequestResponseBody::Requests> && requests) { DARABONBA_PTR_SET_RVALUE(requests_, requests) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The statistics.
    shared_ptr<vector<DescribeUserApiRequestResponseBody::Requests>> requests_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
