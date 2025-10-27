// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRULESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRULESUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetClusterRuleSummaryResponseBodyClusterRuleSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClusterRuleSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterRuleSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterRuleSummary, clusterRuleSummary_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterRuleSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterRuleSummary, clusterRuleSummary_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetClusterRuleSummaryResponseBody() = default ;
    GetClusterRuleSummaryResponseBody(const GetClusterRuleSummaryResponseBody &) = default ;
    GetClusterRuleSummaryResponseBody(GetClusterRuleSummaryResponseBody &&) = default ;
    GetClusterRuleSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterRuleSummaryResponseBody() = default ;
    GetClusterRuleSummaryResponseBody& operator=(const GetClusterRuleSummaryResponseBody &) = default ;
    GetClusterRuleSummaryResponseBody& operator=(GetClusterRuleSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterRuleSummary_ == nullptr
        && return this->requestId_ == nullptr; };
    // clusterRuleSummary Field Functions 
    bool hasClusterRuleSummary() const { return this->clusterRuleSummary_ != nullptr;};
    void deleteClusterRuleSummary() { this->clusterRuleSummary_ = nullptr;};
    inline const GetClusterRuleSummaryResponseBodyClusterRuleSummary & clusterRuleSummary() const { DARABONBA_PTR_GET_CONST(clusterRuleSummary_, GetClusterRuleSummaryResponseBodyClusterRuleSummary) };
    inline GetClusterRuleSummaryResponseBodyClusterRuleSummary clusterRuleSummary() { DARABONBA_PTR_GET(clusterRuleSummary_, GetClusterRuleSummaryResponseBodyClusterRuleSummary) };
    inline GetClusterRuleSummaryResponseBody& setClusterRuleSummary(const GetClusterRuleSummaryResponseBodyClusterRuleSummary & clusterRuleSummary) { DARABONBA_PTR_SET_VALUE(clusterRuleSummary_, clusterRuleSummary) };
    inline GetClusterRuleSummaryResponseBody& setClusterRuleSummary(GetClusterRuleSummaryResponseBodyClusterRuleSummary && clusterRuleSummary) { DARABONBA_PTR_SET_RVALUE(clusterRuleSummary_, clusterRuleSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterRuleSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The overall information about the cluster defense rules.
    std::shared_ptr<GetClusterRuleSummaryResponseBodyClusterRuleSummary> clusterRuleSummary_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
