// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISABLEDEXPRESSCONNECTROUTERROUTEENTRIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISABLEDEXPRESSCONNECTROUTERROUTEENTRIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class DescribeDisabledExpressConnectRouterRouteEntriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisabledExpressConnectRouterRouteEntriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisabledExpressConnectRouterRouteEntriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeDisabledExpressConnectRouterRouteEntriesRequest() = default ;
    DescribeDisabledExpressConnectRouterRouteEntriesRequest(const DescribeDisabledExpressConnectRouterRouteEntriesRequest &) = default ;
    DescribeDisabledExpressConnectRouterRouteEntriesRequest(DescribeDisabledExpressConnectRouterRouteEntriesRequest &&) = default ;
    DescribeDisabledExpressConnectRouterRouteEntriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisabledExpressConnectRouterRouteEntriesRequest() = default ;
    DescribeDisabledExpressConnectRouterRouteEntriesRequest& operator=(const DescribeDisabledExpressConnectRouterRouteEntriesRequest &) = default ;
    DescribeDisabledExpressConnectRouterRouteEntriesRequest& operator=(DescribeDisabledExpressConnectRouterRouteEntriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->ecrId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->version_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeDisabledExpressConnectRouterRouteEntriesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DescribeDisabledExpressConnectRouterRouteEntriesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline DescribeDisabledExpressConnectRouterRouteEntriesRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeDisabledExpressConnectRouterRouteEntriesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDisabledExpressConnectRouterRouteEntriesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeDisabledExpressConnectRouterRouteEntriesRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the parameter value from your client to ensure that the value is unique across different requests. The ClientToken parameter supports only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is unique.
    shared_ptr<string> clientToken_ {};
    // Specifies whether the request is a dry run. Valid values:
    // 
    // - **true**: performs a dry run on the request without modifying the EPS resources.
    // 
    // - **false** (default): sends a normal request.
    shared_ptr<bool> dryRun_ {};
    // The instance ID of the Express Connect Router (ECR).
    // 
    // This parameter is required.
    shared_ptr<string> ecrId_ {};
    // The maximum number of entries to return. Valid values: 1 to 2147483647. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. Valid values:
    // 
    // - If this is the first query or no next query is required, you do not need to specify this parameter.
    // - If a next query is required, set the value to the NextToken value returned by the previous API call.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
