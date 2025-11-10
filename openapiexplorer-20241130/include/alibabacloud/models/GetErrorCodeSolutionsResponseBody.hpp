// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERRORCODESOLUTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETERRORCODESOLUTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetErrorCodeSolutionsResponseBodySolutions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetErrorCodeSolutionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErrorCodeSolutionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(solutions, solutions_);
    };
    friend void from_json(const Darabonba::Json& j, GetErrorCodeSolutionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(solutions, solutions_);
    };
    GetErrorCodeSolutionsResponseBody() = default ;
    GetErrorCodeSolutionsResponseBody(const GetErrorCodeSolutionsResponseBody &) = default ;
    GetErrorCodeSolutionsResponseBody(GetErrorCodeSolutionsResponseBody &&) = default ;
    GetErrorCodeSolutionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErrorCodeSolutionsResponseBody() = default ;
    GetErrorCodeSolutionsResponseBody& operator=(const GetErrorCodeSolutionsResponseBody &) = default ;
    GetErrorCodeSolutionsResponseBody& operator=(GetErrorCodeSolutionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->solutions_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetErrorCodeSolutionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // solutions Field Functions 
    bool hasSolutions() const { return this->solutions_ != nullptr;};
    void deleteSolutions() { this->solutions_ = nullptr;};
    inline const vector<GetErrorCodeSolutionsResponseBodySolutions> & solutions() const { DARABONBA_PTR_GET_CONST(solutions_, vector<GetErrorCodeSolutionsResponseBodySolutions>) };
    inline vector<GetErrorCodeSolutionsResponseBodySolutions> solutions() { DARABONBA_PTR_GET(solutions_, vector<GetErrorCodeSolutionsResponseBodySolutions>) };
    inline GetErrorCodeSolutionsResponseBody& setSolutions(const vector<GetErrorCodeSolutionsResponseBodySolutions> & solutions) { DARABONBA_PTR_SET_VALUE(solutions_, solutions) };
    inline GetErrorCodeSolutionsResponseBody& setSolutions(vector<GetErrorCodeSolutionsResponseBodySolutions> && solutions) { DARABONBA_PTR_SET_RVALUE(solutions_, solutions) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The solutions. Not all error codes have corresponding solutions. You can submit a ticket or use OpenAPI Explorer to contact technical support if necessary.
    std::shared_ptr<vector<GetErrorCodeSolutionsResponseBodySolutions>> solutions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
