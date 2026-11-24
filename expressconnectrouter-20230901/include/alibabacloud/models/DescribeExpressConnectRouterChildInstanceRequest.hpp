// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERCHILDINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERCHILDINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class DescribeExpressConnectRouterChildInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressConnectRouterChildInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssociationId, associationId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceRegionId, childInstanceRegionId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceType, childInstanceType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressConnectRouterChildInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociationId, associationId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceRegionId, childInstanceRegionId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceType, childInstanceType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeExpressConnectRouterChildInstanceRequest() = default ;
    DescribeExpressConnectRouterChildInstanceRequest(const DescribeExpressConnectRouterChildInstanceRequest &) = default ;
    DescribeExpressConnectRouterChildInstanceRequest(DescribeExpressConnectRouterChildInstanceRequest &&) = default ;
    DescribeExpressConnectRouterChildInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressConnectRouterChildInstanceRequest() = default ;
    DescribeExpressConnectRouterChildInstanceRequest& operator=(const DescribeExpressConnectRouterChildInstanceRequest &) = default ;
    DescribeExpressConnectRouterChildInstanceRequest& operator=(DescribeExpressConnectRouterChildInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associationId_ == nullptr
        && this->childInstanceId_ == nullptr && this->childInstanceRegionId_ == nullptr && this->childInstanceType_ == nullptr && this->clientToken_ == nullptr && this->dryRun_ == nullptr
        && this->ecrId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->version_ == nullptr; };
    // associationId Field Functions 
    bool hasAssociationId() const { return this->associationId_ != nullptr;};
    void deleteAssociationId() { this->associationId_ = nullptr;};
    inline string getAssociationId() const { DARABONBA_PTR_GET_DEFAULT(associationId_, "") };
    inline DescribeExpressConnectRouterChildInstanceRequest& setAssociationId(string associationId) { DARABONBA_PTR_SET_VALUE(associationId_, associationId) };


    // childInstanceId Field Functions 
    bool hasChildInstanceId() const { return this->childInstanceId_ != nullptr;};
    void deleteChildInstanceId() { this->childInstanceId_ = nullptr;};
    inline string getChildInstanceId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceId_, "") };
    inline DescribeExpressConnectRouterChildInstanceRequest& setChildInstanceId(string childInstanceId) { DARABONBA_PTR_SET_VALUE(childInstanceId_, childInstanceId) };


    // childInstanceRegionId Field Functions 
    bool hasChildInstanceRegionId() const { return this->childInstanceRegionId_ != nullptr;};
    void deleteChildInstanceRegionId() { this->childInstanceRegionId_ = nullptr;};
    inline string getChildInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceRegionId_, "") };
    inline DescribeExpressConnectRouterChildInstanceRequest& setChildInstanceRegionId(string childInstanceRegionId) { DARABONBA_PTR_SET_VALUE(childInstanceRegionId_, childInstanceRegionId) };


    // childInstanceType Field Functions 
    bool hasChildInstanceType() const { return this->childInstanceType_ != nullptr;};
    void deleteChildInstanceType() { this->childInstanceType_ = nullptr;};
    inline string getChildInstanceType() const { DARABONBA_PTR_GET_DEFAULT(childInstanceType_, "") };
    inline DescribeExpressConnectRouterChildInstanceRequest& setChildInstanceType(string childInstanceType) { DARABONBA_PTR_SET_VALUE(childInstanceType_, childInstanceType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeExpressConnectRouterChildInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DescribeExpressConnectRouterChildInstanceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline DescribeExpressConnectRouterChildInstanceRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeExpressConnectRouterChildInstanceRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeExpressConnectRouterChildInstanceRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeExpressConnectRouterChildInstanceRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The ID used to associate the Express Connect Router (ECR) with the VBR.
    shared_ptr<string> associationId_ {};
    // The instance ID of the network instance to be queried.
    shared_ptr<string> childInstanceId_ {};
    // The region where the network instance resides.
    shared_ptr<string> childInstanceRegionId_ {};
    // The type of the network instance. Valid values: **VBR**: virtual border router.
    shared_ptr<string> childInstanceType_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the value from your client and ensure that the value is unique across different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is unique.
    shared_ptr<string> clientToken_ {};
    // Specifies whether this request is only a dry run. Valid values:
    // 
    // - **true**: sends a check request without modifying the EPS resource.
    // - **false** (default): sends a normal request.
    shared_ptr<bool> dryRun_ {};
    // Instance ID of the Express Connect Router (ECR) instance.
    // > You can call the DescribeExpressConnectRouter API operation to obtain instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> ecrId_ {};
    // The maximum number of entries to return. Valid values: 1 to 2147483647. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. Valid values:
    // - If this is the first query or no next query is required, leave this parameter empty.
    // - If a next query is required, set the value to the NextToken value returned from the previous API call.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
