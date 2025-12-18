// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEREMEDIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEREMEDIATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteRemediationsResponseBodyRemediationDeleteResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeleteRemediationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRemediationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RemediationDeleteResults, remediationDeleteResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRemediationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RemediationDeleteResults, remediationDeleteResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteRemediationsResponseBody() = default ;
    DeleteRemediationsResponseBody(const DeleteRemediationsResponseBody &) = default ;
    DeleteRemediationsResponseBody(DeleteRemediationsResponseBody &&) = default ;
    DeleteRemediationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRemediationsResponseBody() = default ;
    DeleteRemediationsResponseBody& operator=(const DeleteRemediationsResponseBody &) = default ;
    DeleteRemediationsResponseBody& operator=(DeleteRemediationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remediationDeleteResults_ == nullptr
        && return this->requestId_ == nullptr; };
    // remediationDeleteResults Field Functions 
    bool hasRemediationDeleteResults() const { return this->remediationDeleteResults_ != nullptr;};
    void deleteRemediationDeleteResults() { this->remediationDeleteResults_ = nullptr;};
    inline const vector<DeleteRemediationsResponseBodyRemediationDeleteResults> & remediationDeleteResults() const { DARABONBA_PTR_GET_CONST(remediationDeleteResults_, vector<DeleteRemediationsResponseBodyRemediationDeleteResults>) };
    inline vector<DeleteRemediationsResponseBodyRemediationDeleteResults> remediationDeleteResults() { DARABONBA_PTR_GET(remediationDeleteResults_, vector<DeleteRemediationsResponseBodyRemediationDeleteResults>) };
    inline DeleteRemediationsResponseBody& setRemediationDeleteResults(const vector<DeleteRemediationsResponseBodyRemediationDeleteResults> & remediationDeleteResults) { DARABONBA_PTR_SET_VALUE(remediationDeleteResults_, remediationDeleteResults) };
    inline DeleteRemediationsResponseBody& setRemediationDeleteResults(vector<DeleteRemediationsResponseBodyRemediationDeleteResults> && remediationDeleteResults) { DARABONBA_PTR_SET_RVALUE(remediationDeleteResults_, remediationDeleteResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteRemediationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result.
    std::shared_ptr<vector<DeleteRemediationsResponseBodyRemediationDeleteResults>> remediationDeleteResults_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
