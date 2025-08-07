// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSERVICEDEPLOYABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKSERVICEDEPLOYABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CheckServiceDeployableResponseBodyCheckResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CheckServiceDeployableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckServiceDeployableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckResults, checkResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckServiceDeployableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckResults, checkResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckServiceDeployableResponseBody() = default ;
    CheckServiceDeployableResponseBody(const CheckServiceDeployableResponseBody &) = default ;
    CheckServiceDeployableResponseBody(CheckServiceDeployableResponseBody &&) = default ;
    CheckServiceDeployableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckServiceDeployableResponseBody() = default ;
    CheckServiceDeployableResponseBody& operator=(const CheckServiceDeployableResponseBody &) = default ;
    CheckServiceDeployableResponseBody& operator=(CheckServiceDeployableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkResults_ != nullptr
        && this->requestId_ != nullptr; };
    // checkResults Field Functions 
    bool hasCheckResults() const { return this->checkResults_ != nullptr;};
    void deleteCheckResults() { this->checkResults_ = nullptr;};
    inline const vector<CheckServiceDeployableResponseBodyCheckResults> & checkResults() const { DARABONBA_PTR_GET_CONST(checkResults_, vector<CheckServiceDeployableResponseBodyCheckResults>) };
    inline vector<CheckServiceDeployableResponseBodyCheckResults> checkResults() { DARABONBA_PTR_GET(checkResults_, vector<CheckServiceDeployableResponseBodyCheckResults>) };
    inline CheckServiceDeployableResponseBody& setCheckResults(const vector<CheckServiceDeployableResponseBodyCheckResults> & checkResults) { DARABONBA_PTR_SET_VALUE(checkResults_, checkResults) };
    inline CheckServiceDeployableResponseBody& setCheckResults(vector<CheckServiceDeployableResponseBodyCheckResults> && checkResults) { DARABONBA_PTR_SET_RVALUE(checkResults_, checkResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckServiceDeployableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Inspection result.
    std::shared_ptr<vector<CheckServiceDeployableResponseBodyCheckResults>> checkResults_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
