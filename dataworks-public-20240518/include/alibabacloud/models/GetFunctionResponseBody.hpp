// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFunctionResponseBodyFunction.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetFunctionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Function, function_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Function, function_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFunctionResponseBody() = default ;
    GetFunctionResponseBody(const GetFunctionResponseBody &) = default ;
    GetFunctionResponseBody(GetFunctionResponseBody &&) = default ;
    GetFunctionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionResponseBody() = default ;
    GetFunctionResponseBody& operator=(const GetFunctionResponseBody &) = default ;
    GetFunctionResponseBody& operator=(GetFunctionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->function_ != nullptr
        && this->requestId_ != nullptr; };
    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline const GetFunctionResponseBodyFunction & function() const { DARABONBA_PTR_GET_CONST(function_, GetFunctionResponseBodyFunction) };
    inline GetFunctionResponseBodyFunction function() { DARABONBA_PTR_GET(function_, GetFunctionResponseBodyFunction) };
    inline GetFunctionResponseBody& setFunction(const GetFunctionResponseBodyFunction & function) { DARABONBA_PTR_SET_VALUE(function_, function) };
    inline GetFunctionResponseBody& setFunction(GetFunctionResponseBodyFunction && function) { DARABONBA_PTR_SET_RVALUE(function_, function) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFunctionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the UDF.
    std::shared_ptr<GetFunctionResponseBodyFunction> function_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
