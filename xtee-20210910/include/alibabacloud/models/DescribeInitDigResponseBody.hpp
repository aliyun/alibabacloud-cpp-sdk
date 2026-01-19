// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINITDIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINITDIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeInitDigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInitDigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInitDigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    DescribeInitDigResponseBody() = default ;
    DescribeInitDigResponseBody(const DescribeInitDigResponseBody &) = default ;
    DescribeInitDigResponseBody(DescribeInitDigResponseBody &&) = default ;
    DescribeInitDigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInitDigResponseBody() = default ;
    DescribeInitDigResponseBody& operator=(const DescribeInitDigResponseBody &) = default ;
    DescribeInitDigResponseBody& operator=(DescribeInitDigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(TipInfo, tipInfo_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(TipInfo, tipInfo_);
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
      virtual bool empty() const override { return this->tipInfo_ == nullptr; };
      // tipInfo Field Functions 
      bool hasTipInfo() const { return this->tipInfo_ != nullptr;};
      void deleteTipInfo() { this->tipInfo_ = nullptr;};
      inline string getTipInfo() const { DARABONBA_PTR_GET_DEFAULT(tipInfo_, "") };
      inline ResultObject& setTipInfo(string tipInfo) { DARABONBA_PTR_SET_VALUE(tipInfo_, tipInfo) };


    protected:
      // Prompt information
      shared_ptr<string> tipInfo_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInitDigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeInitDigResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeInitDigResponseBody::ResultObject) };
    inline DescribeInitDigResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeInitDigResponseBody::ResultObject) };
    inline DescribeInitDigResponseBody& setResultObject(const DescribeInitDigResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeInitDigResponseBody& setResultObject(DescribeInitDigResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Returned result information
    shared_ptr<DescribeInitDigResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
