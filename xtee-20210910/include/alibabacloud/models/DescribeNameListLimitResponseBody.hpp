// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMELISTLIMITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMELISTLIMITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeNameListLimitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNameListLimitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNameListLimitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeNameListLimitResponseBody() = default ;
    DescribeNameListLimitResponseBody(const DescribeNameListLimitResponseBody &) = default ;
    DescribeNameListLimitResponseBody(DescribeNameListLimitResponseBody &&) = default ;
    DescribeNameListLimitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNameListLimitResponseBody() = default ;
    DescribeNameListLimitResponseBody& operator=(const DescribeNameListLimitResponseBody &) = default ;
    DescribeNameListLimitResponseBody& operator=(DescribeNameListLimitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(limit, limit_);
        DARABONBA_PTR_TO_JSON(maxTotalItem, maxTotalItem_);
        DARABONBA_PTR_TO_JSON(totalItem, totalItem_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(limit, limit_);
        DARABONBA_PTR_FROM_JSON(maxTotalItem, maxTotalItem_);
        DARABONBA_PTR_FROM_JSON(totalItem, totalItem_);
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
      virtual bool empty() const override { return this->limit_ == nullptr
        && this->maxTotalItem_ == nullptr && this->totalItem_ == nullptr; };
      // limit Field Functions 
      bool hasLimit() const { return this->limit_ != nullptr;};
      void deleteLimit() { this->limit_ = nullptr;};
      inline bool getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, false) };
      inline ResultObject& setLimit(bool limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


      // maxTotalItem Field Functions 
      bool hasMaxTotalItem() const { return this->maxTotalItem_ != nullptr;};
      void deleteMaxTotalItem() { this->maxTotalItem_ = nullptr;};
      inline int64_t getMaxTotalItem() const { DARABONBA_PTR_GET_DEFAULT(maxTotalItem_, 0L) };
      inline ResultObject& setMaxTotalItem(int64_t maxTotalItem) { DARABONBA_PTR_SET_VALUE(maxTotalItem_, maxTotalItem) };


      // totalItem Field Functions 
      bool hasTotalItem() const { return this->totalItem_ != nullptr;};
      void deleteTotalItem() { this->totalItem_ = nullptr;};
      inline int64_t getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0L) };
      inline ResultObject& setTotalItem(int64_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    protected:
      // Whether it exceeds the maximum quantity
      shared_ptr<bool> limit_ {};
      // Maximum number of creatable items
      shared_ptr<int64_t> maxTotalItem_ {};
      // Total number of items
      shared_ptr<int64_t> totalItem_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNameListLimitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeNameListLimitResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeNameListLimitResponseBody::ResultObject) };
    inline DescribeNameListLimitResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeNameListLimitResponseBody::ResultObject) };
    inline DescribeNameListLimitResponseBody& setResultObject(const DescribeNameListLimitResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeNameListLimitResponseBody& setResultObject(DescribeNameListLimitResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return object
    shared_ptr<DescribeNameListLimitResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
