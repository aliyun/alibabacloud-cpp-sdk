// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTVARIABLECONFIGLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTVARIABLECONFIGLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCustVariableConfigListResponseBodyResultObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeCustVariableConfigListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustVariableConfigListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustVariableConfigListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeCustVariableConfigListResponseBody() = default ;
    DescribeCustVariableConfigListResponseBody(const DescribeCustVariableConfigListResponseBody &) = default ;
    DescribeCustVariableConfigListResponseBody(DescribeCustVariableConfigListResponseBody &&) = default ;
    DescribeCustVariableConfigListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustVariableConfigListResponseBody() = default ;
    DescribeCustVariableConfigListResponseBody& operator=(const DescribeCustVariableConfigListResponseBody &) = default ;
    DescribeCustVariableConfigListResponseBody& operator=(DescribeCustVariableConfigListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustVariableConfigListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeCustVariableConfigListResponseBodyResultObject> & resultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeCustVariableConfigListResponseBodyResultObject>) };
    inline vector<DescribeCustVariableConfigListResponseBodyResultObject> resultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeCustVariableConfigListResponseBodyResultObject>) };
    inline DescribeCustVariableConfigListResponseBody& setResultObject(const vector<DescribeCustVariableConfigListResponseBodyResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeCustVariableConfigListResponseBody& setResultObject(vector<DescribeCustVariableConfigListResponseBodyResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Return object
    std::shared_ptr<vector<DescribeCustVariableConfigListResponseBodyResultObject>> resultObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
