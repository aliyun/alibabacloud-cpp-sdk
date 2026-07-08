// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGVALUESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGVALUESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListTagValuesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagValuesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagValuesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    ListTagValuesResponseBody() = default ;
    ListTagValuesResponseBody(const ListTagValuesResponseBody &) = default ;
    ListTagValuesResponseBody(ListTagValuesResponseBody &&) = default ;
    ListTagValuesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagValuesResponseBody() = default ;
    ListTagValuesResponseBody& operator=(const ListTagValuesResponseBody &) = default ;
    ListTagValuesResponseBody& operator=(ListTagValuesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Values : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Values& obj) { 
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Values& obj) { 
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Values() = default ;
      Values(const Values &) = default ;
      Values(Values &&) = default ;
      Values(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Values() = default ;
      Values& operator=(const Values &) = default ;
      Values& operator=(Values &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->value_ == nullptr; };
      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline const vector<string> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
      inline vector<string> getValue() { DARABONBA_PTR_GET(value_, vector<string>) };
      inline Values& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
      inline Values& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    protected:
      shared_ptr<vector<string>> value_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->values_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTagValuesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTagValuesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const ListTagValuesResponseBody::Values & getValues() const { DARABONBA_PTR_GET_CONST(values_, ListTagValuesResponseBody::Values) };
    inline ListTagValuesResponseBody::Values getValues() { DARABONBA_PTR_GET(values_, ListTagValuesResponseBody::Values) };
    inline ListTagValuesResponseBody& setValues(const ListTagValuesResponseBody::Values & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline ListTagValuesResponseBody& setValues(ListTagValuesResponseBody::Values && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // Indicates whether the next query is required. The value of this parameter may be empty.
    // 
    // *   If the value of this parameter is empty (`"NextToken": ""`), all results are returned, and the next query is not required.
    // *   If the value of this parameter is not empty, the next query is required, and the value is the token used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<ListTagValuesResponseBody::Values> values_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
