// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINITDIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINITDIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInitDigResponseBodyResultObject.hpp>
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
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resultObject_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInitDigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeInitDigResponseBodyResultObject & resultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeInitDigResponseBodyResultObject) };
    inline DescribeInitDigResponseBodyResultObject resultObject() { DARABONBA_PTR_GET(resultObject_, DescribeInitDigResponseBodyResultObject) };
    inline DescribeInitDigResponseBody& setResultObject(const DescribeInitDigResponseBodyResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeInitDigResponseBody& setResultObject(DescribeInitDigResponseBodyResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // ID of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // Returned result information
    std::shared_ptr<DescribeInitDigResponseBodyResultObject> resultObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
