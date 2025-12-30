// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFORWARDTABLEENTRIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFORWARDTABLEENTRIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeForwardTableEntriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeForwardTableEntriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardEntryId, forwardEntryId_);
      DARABONBA_PTR_TO_JSON(ForwardTableId, forwardTableId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeForwardTableEntriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardEntryId, forwardEntryId_);
      DARABONBA_PTR_FROM_JSON(ForwardTableId, forwardTableId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeForwardTableEntriesRequest() = default ;
    DescribeForwardTableEntriesRequest(const DescribeForwardTableEntriesRequest &) = default ;
    DescribeForwardTableEntriesRequest(DescribeForwardTableEntriesRequest &&) = default ;
    DescribeForwardTableEntriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeForwardTableEntriesRequest() = default ;
    DescribeForwardTableEntriesRequest& operator=(const DescribeForwardTableEntriesRequest &) = default ;
    DescribeForwardTableEntriesRequest& operator=(DescribeForwardTableEntriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forwardEntryId_ == nullptr
        && this->forwardTableId_ == nullptr && this->maxResults_ == nullptr && this->natGatewayId_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr; };
    // forwardEntryId Field Functions 
    bool hasForwardEntryId() const { return this->forwardEntryId_ != nullptr;};
    void deleteForwardEntryId() { this->forwardEntryId_ = nullptr;};
    inline string getForwardEntryId() const { DARABONBA_PTR_GET_DEFAULT(forwardEntryId_, "") };
    inline DescribeForwardTableEntriesRequest& setForwardEntryId(string forwardEntryId) { DARABONBA_PTR_SET_VALUE(forwardEntryId_, forwardEntryId) };


    // forwardTableId Field Functions 
    bool hasForwardTableId() const { return this->forwardTableId_ != nullptr;};
    void deleteForwardTableId() { this->forwardTableId_ = nullptr;};
    inline string getForwardTableId() const { DARABONBA_PTR_GET_DEFAULT(forwardTableId_, "") };
    inline DescribeForwardTableEntriesRequest& setForwardTableId(string forwardTableId) { DARABONBA_PTR_SET_VALUE(forwardTableId_, forwardTableId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeForwardTableEntriesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeForwardTableEntriesRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeForwardTableEntriesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeForwardTableEntriesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> forwardEntryId_ {};
    shared_ptr<string> forwardTableId_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> natGatewayId_ {};
    shared_ptr<string> nextToken_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
