// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCGRANTRULESTOECRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCGRANTRULESTOECRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpcGrantRulesToEcrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcGrantRulesToEcrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GrantRuleModels, grantRuleModels_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcGrantRulesToEcrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GrantRuleModels, grantRuleModels_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVpcGrantRulesToEcrResponseBody() = default ;
    DescribeVpcGrantRulesToEcrResponseBody(const DescribeVpcGrantRulesToEcrResponseBody &) = default ;
    DescribeVpcGrantRulesToEcrResponseBody(DescribeVpcGrantRulesToEcrResponseBody &&) = default ;
    DescribeVpcGrantRulesToEcrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcGrantRulesToEcrResponseBody() = default ;
    DescribeVpcGrantRulesToEcrResponseBody& operator=(const DescribeVpcGrantRulesToEcrResponseBody &) = default ;
    DescribeVpcGrantRulesToEcrResponseBody& operator=(DescribeVpcGrantRulesToEcrResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GrantRuleModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GrantRuleModels& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
        DARABONBA_PTR_TO_JSON(EcrOwnerId, ecrOwnerId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceUid, instanceUid_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, GrantRuleModels& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
        DARABONBA_PTR_FROM_JSON(EcrOwnerId, ecrOwnerId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceUid, instanceUid_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      GrantRuleModels() = default ;
      GrantRuleModels(const GrantRuleModels &) = default ;
      GrantRuleModels(GrantRuleModels &&) = default ;
      GrantRuleModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GrantRuleModels() = default ;
      GrantRuleModels& operator=(const GrantRuleModels &) = default ;
      GrantRuleModels& operator=(GrantRuleModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->ecrId_ == nullptr && this->ecrOwnerId_ == nullptr && this->instanceId_ == nullptr && this->instanceUid_ == nullptr && this->regionNo_ == nullptr
        && this->type_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline GrantRuleModels& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // ecrId Field Functions 
      bool hasEcrId() const { return this->ecrId_ != nullptr;};
      void deleteEcrId() { this->ecrId_ = nullptr;};
      inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
      inline GrantRuleModels& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


      // ecrOwnerId Field Functions 
      bool hasEcrOwnerId() const { return this->ecrOwnerId_ != nullptr;};
      void deleteEcrOwnerId() { this->ecrOwnerId_ = nullptr;};
      inline int64_t getEcrOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ecrOwnerId_, 0L) };
      inline GrantRuleModels& setEcrOwnerId(int64_t ecrOwnerId) { DARABONBA_PTR_SET_VALUE(ecrOwnerId_, ecrOwnerId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline GrantRuleModels& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceUid Field Functions 
      bool hasInstanceUid() const { return this->instanceUid_ != nullptr;};
      void deleteInstanceUid() { this->instanceUid_ = nullptr;};
      inline int64_t getInstanceUid() const { DARABONBA_PTR_GET_DEFAULT(instanceUid_, 0L) };
      inline GrantRuleModels& setInstanceUid(int64_t instanceUid) { DARABONBA_PTR_SET_VALUE(instanceUid_, instanceUid) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline GrantRuleModels& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline GrantRuleModels& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The creation time in milliseconds.
      shared_ptr<string> creationTime_ {};
      // The ECR ID.
      shared_ptr<string> ecrId_ {};
      // The ID of the Alibaba Cloud account to which the ECR belongs.
      shared_ptr<int64_t> ecrOwnerId_ {};
      // The ID of the network instance.
      shared_ptr<string> instanceId_ {};
      // The ID of the Alibaba Cloud account to which the instance belongs.
      shared_ptr<int64_t> instanceUid_ {};
      // The ID of the region where the instance is deployed.
      shared_ptr<string> regionNo_ {};
      // The type of instance. Valid values:
      // 
      // *   **VBR**: queries the permissions that are granted to a VBR.
      // *   **VPC**: queries the permissions that are granted from a VPC.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->grantRuleModels_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // grantRuleModels Field Functions 
    bool hasGrantRuleModels() const { return this->grantRuleModels_ != nullptr;};
    void deleteGrantRuleModels() { this->grantRuleModels_ = nullptr;};
    inline const vector<DescribeVpcGrantRulesToEcrResponseBody::GrantRuleModels> & getGrantRuleModels() const { DARABONBA_PTR_GET_CONST(grantRuleModels_, vector<DescribeVpcGrantRulesToEcrResponseBody::GrantRuleModels>) };
    inline vector<DescribeVpcGrantRulesToEcrResponseBody::GrantRuleModels> getGrantRuleModels() { DARABONBA_PTR_GET(grantRuleModels_, vector<DescribeVpcGrantRulesToEcrResponseBody::GrantRuleModels>) };
    inline DescribeVpcGrantRulesToEcrResponseBody& setGrantRuleModels(const vector<DescribeVpcGrantRulesToEcrResponseBody::GrantRuleModels> & grantRuleModels) { DARABONBA_PTR_SET_VALUE(grantRuleModels_, grantRuleModels) };
    inline DescribeVpcGrantRulesToEcrResponseBody& setGrantRuleModels(vector<DescribeVpcGrantRulesToEcrResponseBody::GrantRuleModels> && grantRuleModels) { DARABONBA_PTR_SET_RVALUE(grantRuleModels_, grantRuleModels) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeVpcGrantRulesToEcrResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcGrantRulesToEcrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeVpcGrantRulesToEcrResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The authorization information.
    shared_ptr<vector<DescribeVpcGrantRulesToEcrResponseBody::GrantRuleModels>> grantRuleModels_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, there is no next page.
    // *   ****
    shared_ptr<string> nextToken_ {};
    // The unique ID that Alibaba Cloud generates for the request.
    shared_ptr<string> requestId_ {};
    // The total number of instances queried. If you specify the MaxResults and NextToken request parameters to perform a paged query, the value of the TotalCount response parameter is invalid.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
