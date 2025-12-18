// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGGREGATEREMEDIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGGREGATEREMEDIATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteAggregateRemediationsResponseBodyRemediationDeleteResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeleteAggregateRemediationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAggregateRemediationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RemediationDeleteResults, remediationDeleteResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAggregateRemediationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RemediationDeleteResults, remediationDeleteResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteAggregateRemediationsResponseBody() = default ;
    DeleteAggregateRemediationsResponseBody(const DeleteAggregateRemediationsResponseBody &) = default ;
    DeleteAggregateRemediationsResponseBody(DeleteAggregateRemediationsResponseBody &&) = default ;
    DeleteAggregateRemediationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAggregateRemediationsResponseBody() = default ;
    DeleteAggregateRemediationsResponseBody& operator=(const DeleteAggregateRemediationsResponseBody &) = default ;
    DeleteAggregateRemediationsResponseBody& operator=(DeleteAggregateRemediationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remediationDeleteResults_ == nullptr
        && return this->requestId_ == nullptr; };
    // remediationDeleteResults Field Functions 
    bool hasRemediationDeleteResults() const { return this->remediationDeleteResults_ != nullptr;};
    void deleteRemediationDeleteResults() { this->remediationDeleteResults_ = nullptr;};
    inline const vector<DeleteAggregateRemediationsResponseBodyRemediationDeleteResults> & remediationDeleteResults() const { DARABONBA_PTR_GET_CONST(remediationDeleteResults_, vector<DeleteAggregateRemediationsResponseBodyRemediationDeleteResults>) };
    inline vector<DeleteAggregateRemediationsResponseBodyRemediationDeleteResults> remediationDeleteResults() { DARABONBA_PTR_GET(remediationDeleteResults_, vector<DeleteAggregateRemediationsResponseBodyRemediationDeleteResults>) };
    inline DeleteAggregateRemediationsResponseBody& setRemediationDeleteResults(const vector<DeleteAggregateRemediationsResponseBodyRemediationDeleteResults> & remediationDeleteResults) { DARABONBA_PTR_SET_VALUE(remediationDeleteResults_, remediationDeleteResults) };
    inline DeleteAggregateRemediationsResponseBody& setRemediationDeleteResults(vector<DeleteAggregateRemediationsResponseBodyRemediationDeleteResults> && remediationDeleteResults) { DARABONBA_PTR_SET_RVALUE(remediationDeleteResults_, remediationDeleteResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAggregateRemediationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The results of the delete operation.
    std::shared_ptr<vector<DeleteAggregateRemediationsResponseBodyRemediationDeleteResults>> remediationDeleteResults_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
