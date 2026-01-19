// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAFORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAFORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSafOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSafOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSafOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeSafOrderResponseBody() = default ;
    DescribeSafOrderResponseBody(const DescribeSafOrderResponseBody &) = default ;
    DescribeSafOrderResponseBody(DescribeSafOrderResponseBody &&) = default ;
    DescribeSafOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSafOrderResponseBody() = default ;
    DescribeSafOrderResponseBody& operator=(const DescribeSafOrderResponseBody &) = default ;
    DescribeSafOrderResponseBody& operator=(DescribeSafOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(expirationDate, expirationDate_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(expirationDate, expirationDate_);
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
      virtual bool empty() const override { return this->expirationDate_ == nullptr; };
      // expirationDate Field Functions 
      bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
      void deleteExpirationDate() { this->expirationDate_ = nullptr;};
      inline int64_t getExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, 0L) };
      inline ResultObject& setExpirationDate(int64_t expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


    protected:
      // Expiration date (timestamp).
      shared_ptr<int64_t> expirationDate_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSafOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeSafOrderResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeSafOrderResponseBody::ResultObject) };
    inline DescribeSafOrderResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeSafOrderResponseBody::ResultObject) };
    inline DescribeSafOrderResponseBody& setResultObject(const DescribeSafOrderResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeSafOrderResponseBody& setResultObject(DescribeSafOrderResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned object.
    shared_ptr<DescribeSafOrderResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
