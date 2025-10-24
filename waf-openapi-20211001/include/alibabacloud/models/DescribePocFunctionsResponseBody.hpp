// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOCFUNCTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOCFUNCTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePocFunctionsResponseBodyFunctions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribePocFunctionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePocFunctionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Functions, functions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePocFunctionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Functions, functions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePocFunctionsResponseBody() = default ;
    DescribePocFunctionsResponseBody(const DescribePocFunctionsResponseBody &) = default ;
    DescribePocFunctionsResponseBody(DescribePocFunctionsResponseBody &&) = default ;
    DescribePocFunctionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePocFunctionsResponseBody() = default ;
    DescribePocFunctionsResponseBody& operator=(const DescribePocFunctionsResponseBody &) = default ;
    DescribePocFunctionsResponseBody& operator=(DescribePocFunctionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functions_ == nullptr
        && return this->requestId_ == nullptr; };
    // functions Field Functions 
    bool hasFunctions() const { return this->functions_ != nullptr;};
    void deleteFunctions() { this->functions_ = nullptr;};
    inline const vector<DescribePocFunctionsResponseBodyFunctions> & functions() const { DARABONBA_PTR_GET_CONST(functions_, vector<DescribePocFunctionsResponseBodyFunctions>) };
    inline vector<DescribePocFunctionsResponseBodyFunctions> functions() { DARABONBA_PTR_GET(functions_, vector<DescribePocFunctionsResponseBodyFunctions>) };
    inline DescribePocFunctionsResponseBody& setFunctions(const vector<DescribePocFunctionsResponseBodyFunctions> & functions) { DARABONBA_PTR_SET_VALUE(functions_, functions) };
    inline DescribePocFunctionsResponseBody& setFunctions(vector<DescribePocFunctionsResponseBodyFunctions> && functions) { DARABONBA_PTR_SET_RVALUE(functions_, functions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePocFunctionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribePocFunctionsResponseBodyFunctions>> functions_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
