// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKOPERATIONRISKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKOPERATIONRISKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListStackOperationRisksResponseBodyRiskResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackOperationRisksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackOperationRisksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MissingPolicyActions, missingPolicyActions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskResources, riskResources_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackOperationRisksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MissingPolicyActions, missingPolicyActions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskResources, riskResources_);
    };
    ListStackOperationRisksResponseBody() = default ;
    ListStackOperationRisksResponseBody(const ListStackOperationRisksResponseBody &) = default ;
    ListStackOperationRisksResponseBody(ListStackOperationRisksResponseBody &&) = default ;
    ListStackOperationRisksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackOperationRisksResponseBody() = default ;
    ListStackOperationRisksResponseBody& operator=(const ListStackOperationRisksResponseBody &) = default ;
    ListStackOperationRisksResponseBody& operator=(ListStackOperationRisksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->missingPolicyActions_ != nullptr
        && this->requestId_ != nullptr && this->riskResources_ != nullptr; };
    // missingPolicyActions Field Functions 
    bool hasMissingPolicyActions() const { return this->missingPolicyActions_ != nullptr;};
    void deleteMissingPolicyActions() { this->missingPolicyActions_ = nullptr;};
    inline const vector<string> & missingPolicyActions() const { DARABONBA_PTR_GET_CONST(missingPolicyActions_, vector<string>) };
    inline vector<string> missingPolicyActions() { DARABONBA_PTR_GET(missingPolicyActions_, vector<string>) };
    inline ListStackOperationRisksResponseBody& setMissingPolicyActions(const vector<string> & missingPolicyActions) { DARABONBA_PTR_SET_VALUE(missingPolicyActions_, missingPolicyActions) };
    inline ListStackOperationRisksResponseBody& setMissingPolicyActions(vector<string> && missingPolicyActions) { DARABONBA_PTR_SET_RVALUE(missingPolicyActions_, missingPolicyActions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStackOperationRisksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskResources Field Functions 
    bool hasRiskResources() const { return this->riskResources_ != nullptr;};
    void deleteRiskResources() { this->riskResources_ = nullptr;};
    inline const vector<ListStackOperationRisksResponseBodyRiskResources> & riskResources() const { DARABONBA_PTR_GET_CONST(riskResources_, vector<ListStackOperationRisksResponseBodyRiskResources>) };
    inline vector<ListStackOperationRisksResponseBodyRiskResources> riskResources() { DARABONBA_PTR_GET(riskResources_, vector<ListStackOperationRisksResponseBodyRiskResources>) };
    inline ListStackOperationRisksResponseBody& setRiskResources(const vector<ListStackOperationRisksResponseBodyRiskResources> & riskResources) { DARABONBA_PTR_SET_VALUE(riskResources_, riskResources) };
    inline ListStackOperationRisksResponseBody& setRiskResources(vector<ListStackOperationRisksResponseBodyRiskResources> && riskResources) { DARABONBA_PTR_SET_RVALUE(riskResources_, riskResources) };


  protected:
    // The operations on which the permissions are not granted to the Alibaba Cloud account of the caller.
    std::shared_ptr<vector<string>> missingPolicyActions_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resources that are at risk.
    std::shared_ptr<vector<ListStackOperationRisksResponseBodyRiskResources>> riskResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
