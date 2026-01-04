// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEECGRANTRELATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEECGRANTRELATIONRESPONSEBODY_HPP_
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
  class DescribeEcGrantRelationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEcGrantRelationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(EcGrantRelations, ecGrantRelations_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEcGrantRelationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(EcGrantRelations, ecGrantRelations_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEcGrantRelationResponseBody() = default ;
    DescribeEcGrantRelationResponseBody(const DescribeEcGrantRelationResponseBody &) = default ;
    DescribeEcGrantRelationResponseBody(DescribeEcGrantRelationResponseBody &&) = default ;
    DescribeEcGrantRelationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEcGrantRelationResponseBody() = default ;
    DescribeEcGrantRelationResponseBody& operator=(const DescribeEcGrantRelationResponseBody &) = default ;
    DescribeEcGrantRelationResponseBody& operator=(DescribeEcGrantRelationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EcGrantRelations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EcGrantRelations& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GrantType, grantType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InstanceRouterId, instanceRouterId_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VbrInstanceId, vbrInstanceId_);
        DARABONBA_PTR_TO_JSON(VbrOwnerUid, vbrOwnerUid_);
        DARABONBA_PTR_TO_JSON(VbrRegionNo, vbrRegionNo_);
      };
      friend void from_json(const Darabonba::Json& j, EcGrantRelations& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GrantType, grantType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InstanceRouterId, instanceRouterId_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VbrInstanceId, vbrInstanceId_);
        DARABONBA_PTR_FROM_JSON(VbrOwnerUid, vbrOwnerUid_);
        DARABONBA_PTR_FROM_JSON(VbrRegionNo, vbrRegionNo_);
      };
      EcGrantRelations() = default ;
      EcGrantRelations(const EcGrantRelations &) = default ;
      EcGrantRelations(EcGrantRelations &&) = default ;
      EcGrantRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EcGrantRelations() = default ;
      EcGrantRelations& operator=(const EcGrantRelations &) = default ;
      EcGrantRelations& operator=(EcGrantRelations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->gmtCreate_ == nullptr && this->grantType_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceRouterId_ == nullptr
        && this->regionNo_ == nullptr && this->status_ == nullptr && this->vbrInstanceId_ == nullptr && this->vbrOwnerUid_ == nullptr && this->vbrRegionNo_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline EcGrantRelations& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline EcGrantRelations& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // grantType Field Functions 
      bool hasGrantType() const { return this->grantType_ != nullptr;};
      void deleteGrantType() { this->grantType_ = nullptr;};
      inline string getGrantType() const { DARABONBA_PTR_GET_DEFAULT(grantType_, "") };
      inline EcGrantRelations& setGrantType(string grantType) { DARABONBA_PTR_SET_VALUE(grantType_, grantType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline EcGrantRelations& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline EcGrantRelations& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceRouterId Field Functions 
      bool hasInstanceRouterId() const { return this->instanceRouterId_ != nullptr;};
      void deleteInstanceRouterId() { this->instanceRouterId_ = nullptr;};
      inline string getInstanceRouterId() const { DARABONBA_PTR_GET_DEFAULT(instanceRouterId_, "") };
      inline EcGrantRelations& setInstanceRouterId(string instanceRouterId) { DARABONBA_PTR_SET_VALUE(instanceRouterId_, instanceRouterId) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline EcGrantRelations& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline EcGrantRelations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vbrInstanceId Field Functions 
      bool hasVbrInstanceId() const { return this->vbrInstanceId_ != nullptr;};
      void deleteVbrInstanceId() { this->vbrInstanceId_ = nullptr;};
      inline string getVbrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vbrInstanceId_, "") };
      inline EcGrantRelations& setVbrInstanceId(string vbrInstanceId) { DARABONBA_PTR_SET_VALUE(vbrInstanceId_, vbrInstanceId) };


      // vbrOwnerUid Field Functions 
      bool hasVbrOwnerUid() const { return this->vbrOwnerUid_ != nullptr;};
      void deleteVbrOwnerUid() { this->vbrOwnerUid_ = nullptr;};
      inline int64_t getVbrOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(vbrOwnerUid_, 0L) };
      inline EcGrantRelations& setVbrOwnerUid(int64_t vbrOwnerUid) { DARABONBA_PTR_SET_VALUE(vbrOwnerUid_, vbrOwnerUid) };


      // vbrRegionNo Field Functions 
      bool hasVbrRegionNo() const { return this->vbrRegionNo_ != nullptr;};
      void deleteVbrRegionNo() { this->vbrRegionNo_ = nullptr;};
      inline string getVbrRegionNo() const { DARABONBA_PTR_GET_DEFAULT(vbrRegionNo_, "") };
      inline EcGrantRelations& setVbrRegionNo(string vbrRegionNo) { DARABONBA_PTR_SET_VALUE(vbrRegionNo_, vbrRegionNo) };


    protected:
      // The ID of the Alibaba Cloud account to which the VPC belongs.
      shared_ptr<int64_t> aliUid_ {};
      // The time when permissions on the VPC were granted to the VBR.
      shared_ptr<string> gmtCreate_ {};
      // The VBRs that have permissions on the VPC. Valid values:
      // 
      // *   **All**: VBRs that reside in the specified region and belong to the specified Alibaba Cloud account all have permissions on the VPC.
      // *   **Specify**: Only the specified VBR has permissions on the VPC.
      shared_ptr<string> grantType_ {};
      // The ID of the VPC.
      shared_ptr<string> instanceId_ {};
      // The name of the VPC.
      shared_ptr<string> instanceName_ {};
      // The ID of the vRouter.
      shared_ptr<string> instanceRouterId_ {};
      // The ID of the region where the VPC is deployed.
      shared_ptr<string> regionNo_ {};
      // The query result. Valid values:
      // 
      // *   **Created**: The VBR has permissions on the VPC.
      // *   **Deleted**: The VBR does not have permissions on the VPC.
      shared_ptr<string> status_ {};
      // The ID of the VBR.
      shared_ptr<string> vbrInstanceId_ {};
      // The ID of the Alibaba Cloud account to which the VBR belongs.
      shared_ptr<int64_t> vbrOwnerUid_ {};
      // The ID of the region where the VBR is deployed.
      shared_ptr<string> vbrRegionNo_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->ecGrantRelations_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeEcGrantRelationResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ecGrantRelations Field Functions 
    bool hasEcGrantRelations() const { return this->ecGrantRelations_ != nullptr;};
    void deleteEcGrantRelations() { this->ecGrantRelations_ = nullptr;};
    inline const vector<DescribeEcGrantRelationResponseBody::EcGrantRelations> & getEcGrantRelations() const { DARABONBA_PTR_GET_CONST(ecGrantRelations_, vector<DescribeEcGrantRelationResponseBody::EcGrantRelations>) };
    inline vector<DescribeEcGrantRelationResponseBody::EcGrantRelations> getEcGrantRelations() { DARABONBA_PTR_GET(ecGrantRelations_, vector<DescribeEcGrantRelationResponseBody::EcGrantRelations>) };
    inline DescribeEcGrantRelationResponseBody& setEcGrantRelations(const vector<DescribeEcGrantRelationResponseBody::EcGrantRelations> & ecGrantRelations) { DARABONBA_PTR_SET_VALUE(ecGrantRelations_, ecGrantRelations) };
    inline DescribeEcGrantRelationResponseBody& setEcGrantRelations(vector<DescribeEcGrantRelationResponseBody::EcGrantRelations> && ecGrantRelations) { DARABONBA_PTR_SET_RVALUE(ecGrantRelations_, ecGrantRelations) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline DescribeEcGrantRelationResponseBody& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEcGrantRelationResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEcGrantRelationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeEcGrantRelationResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The total number of entries returned.
    shared_ptr<int32_t> count_ {};
    // The query results.
    shared_ptr<vector<DescribeEcGrantRelationResponseBody::EcGrantRelations>> ecGrantRelations_ {};
    // The page number.
    shared_ptr<int32_t> page_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
