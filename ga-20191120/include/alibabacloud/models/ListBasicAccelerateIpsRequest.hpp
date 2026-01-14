// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBASICACCELERATEIPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBASICACCELERATEIPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class ListBasicAccelerateIpsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBasicAccelerateIpsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccelerateIpAddress, accelerateIpAddress_);
      DARABONBA_PTR_TO_JSON(AccelerateIpId, accelerateIpId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(IpSetId, ipSetId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBasicAccelerateIpsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccelerateIpAddress, accelerateIpAddress_);
      DARABONBA_PTR_FROM_JSON(AccelerateIpId, accelerateIpId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(IpSetId, ipSetId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListBasicAccelerateIpsRequest() = default ;
    ListBasicAccelerateIpsRequest(const ListBasicAccelerateIpsRequest &) = default ;
    ListBasicAccelerateIpsRequest(ListBasicAccelerateIpsRequest &&) = default ;
    ListBasicAccelerateIpsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBasicAccelerateIpsRequest() = default ;
    ListBasicAccelerateIpsRequest& operator=(const ListBasicAccelerateIpsRequest &) = default ;
    ListBasicAccelerateIpsRequest& operator=(ListBasicAccelerateIpsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accelerateIpAddress_ == nullptr
        && this->accelerateIpId_ == nullptr && this->clientToken_ == nullptr && this->ipSetId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->regionId_ == nullptr; };
    // accelerateIpAddress Field Functions 
    bool hasAccelerateIpAddress() const { return this->accelerateIpAddress_ != nullptr;};
    void deleteAccelerateIpAddress() { this->accelerateIpAddress_ = nullptr;};
    inline string getAccelerateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(accelerateIpAddress_, "") };
    inline ListBasicAccelerateIpsRequest& setAccelerateIpAddress(string accelerateIpAddress) { DARABONBA_PTR_SET_VALUE(accelerateIpAddress_, accelerateIpAddress) };


    // accelerateIpId Field Functions 
    bool hasAccelerateIpId() const { return this->accelerateIpId_ != nullptr;};
    void deleteAccelerateIpId() { this->accelerateIpId_ = nullptr;};
    inline string getAccelerateIpId() const { DARABONBA_PTR_GET_DEFAULT(accelerateIpId_, "") };
    inline ListBasicAccelerateIpsRequest& setAccelerateIpId(string accelerateIpId) { DARABONBA_PTR_SET_VALUE(accelerateIpId_, accelerateIpId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ListBasicAccelerateIpsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ipSetId Field Functions 
    bool hasIpSetId() const { return this->ipSetId_ != nullptr;};
    void deleteIpSetId() { this->ipSetId_ = nullptr;};
    inline string getIpSetId() const { DARABONBA_PTR_GET_DEFAULT(ipSetId_, "") };
    inline ListBasicAccelerateIpsRequest& setIpSetId(string ipSetId) { DARABONBA_PTR_SET_VALUE(ipSetId_, ipSetId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListBasicAccelerateIpsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListBasicAccelerateIpsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListBasicAccelerateIpsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The accelerated IP address of the basic GA instance.
    shared_ptr<string> accelerateIpAddress_ {};
    // The ID of the accelerated IP address of the basic GA instance.
    shared_ptr<string> accelerateIpId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The ID of the acceleration region.
    // 
    // You can call the [GetBasicAccelerator](https://help.aliyun.com/document_detail/2253380.html) operation to query the ID of the acceleration region.
    // 
    // This parameter is required.
    shared_ptr<string> ipSetId_ {};
    // The number of entries to return on each page. Valid values: **1** to **50**. Default value: **10**.
    shared_ptr<int32_t> maxResults_ {};
    // The token that determines the start point of the query. Valid values:
    // 
    // *   If this is your first query and no next queries are to be sent, ignore this parameter.
    // *   If a subsequent query is to be sent, set the parameter to the value of NextToken that is returned from the last call.
    shared_ptr<string> nextToken_ {};
    // The ID of the region where the GA instance is deployed. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
