// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMELISTTYPELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMELISTTYPELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeNameListTypeListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNameListTypeListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNameListTypeListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeNameListTypeListResponseBody() = default ;
    DescribeNameListTypeListResponseBody(const DescribeNameListTypeListResponseBody &) = default ;
    DescribeNameListTypeListResponseBody(DescribeNameListTypeListResponseBody &&) = default ;
    DescribeNameListTypeListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNameListTypeListResponseBody() = default ;
    DescribeNameListTypeListResponseBody& operator=(const DescribeNameListTypeListResponseBody &) = default ;
    DescribeNameListTypeListResponseBody& operator=(DescribeNameListTypeListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline ResultObject& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ResultObject& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Match Key.
      shared_ptr<string> key_ {};
      // Variable value
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNameListTypeListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeNameListTypeListResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeNameListTypeListResponseBody::ResultObject>) };
    inline vector<DescribeNameListTypeListResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeNameListTypeListResponseBody::ResultObject>) };
    inline DescribeNameListTypeListResponseBody& setResultObject(const vector<DescribeNameListTypeListResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeNameListTypeListResponseBody& setResultObject(vector<DescribeNameListTypeListResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID
    shared_ptr<string> requestId_ {};
    // Returned object
    shared_ptr<vector<DescribeNameListTypeListResponseBody::ResultObject>> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
