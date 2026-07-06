// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCINFOBYAGENTSTORAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCINFOBYAGENTSTORAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class ListVpcInfoByAgentStorageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcInfoByAgentStorageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpcInfos, vpcInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcInfoByAgentStorageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpcInfos, vpcInfos_);
    };
    ListVpcInfoByAgentStorageResponseBody() = default ;
    ListVpcInfoByAgentStorageResponseBody(const ListVpcInfoByAgentStorageResponseBody &) = default ;
    ListVpcInfoByAgentStorageResponseBody(ListVpcInfoByAgentStorageResponseBody &&) = default ;
    ListVpcInfoByAgentStorageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcInfoByAgentStorageResponseBody() = default ;
    ListVpcInfoByAgentStorageResponseBody& operator=(const ListVpcInfoByAgentStorageResponseBody &) = default ;
    ListVpcInfoByAgentStorageResponseBody& operator=(ListVpcInfoByAgentStorageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VpcInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpcInfos& obj) { 
        DARABONBA_PTR_TO_JSON(AgentStorageVpcName, agentStorageVpcName_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, VpcInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentStorageVpcName, agentStorageVpcName_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      VpcInfos() = default ;
      VpcInfos(const VpcInfos &) = default ;
      VpcInfos(VpcInfos &&) = default ;
      VpcInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VpcInfos() = default ;
      VpcInfos& operator=(const VpcInfos &) = default ;
      VpcInfos& operator=(VpcInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentStorageVpcName_ == nullptr
        && this->domain_ == nullptr && this->endpoint_ == nullptr && this->regionNo_ == nullptr && this->vpcId_ == nullptr; };
      // agentStorageVpcName Field Functions 
      bool hasAgentStorageVpcName() const { return this->agentStorageVpcName_ != nullptr;};
      void deleteAgentStorageVpcName() { this->agentStorageVpcName_ = nullptr;};
      inline string getAgentStorageVpcName() const { DARABONBA_PTR_GET_DEFAULT(agentStorageVpcName_, "") };
      inline VpcInfos& setAgentStorageVpcName(string agentStorageVpcName) { DARABONBA_PTR_SET_VALUE(agentStorageVpcName_, agentStorageVpcName) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline VpcInfos& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline VpcInfos& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline VpcInfos& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline VpcInfos& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The VPC name.
      shared_ptr<string> agentStorageVpcName_ {};
      // The VPC access address.
      shared_ptr<string> domain_ {};
      // The endpoint of the agent storage.
      shared_ptr<string> endpoint_ {};
      // The region ID.
      shared_ptr<string> regionNo_ {};
      // VPC ID
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->agentStorageName_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vpcInfos_ == nullptr; };
    // agentStorageName Field Functions 
    bool hasAgentStorageName() const { return this->agentStorageName_ != nullptr;};
    void deleteAgentStorageName() { this->agentStorageName_ = nullptr;};
    inline string getAgentStorageName() const { DARABONBA_PTR_GET_DEFAULT(agentStorageName_, "") };
    inline ListVpcInfoByAgentStorageResponseBody& setAgentStorageName(string agentStorageName) { DARABONBA_PTR_SET_VALUE(agentStorageName_, agentStorageName) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline ListVpcInfoByAgentStorageResponseBody& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListVpcInfoByAgentStorageResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcInfoByAgentStorageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListVpcInfoByAgentStorageResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpcInfos Field Functions 
    bool hasVpcInfos() const { return this->vpcInfos_ != nullptr;};
    void deleteVpcInfos() { this->vpcInfos_ = nullptr;};
    inline const vector<ListVpcInfoByAgentStorageResponseBody::VpcInfos> & getVpcInfos() const { DARABONBA_PTR_GET_CONST(vpcInfos_, vector<ListVpcInfoByAgentStorageResponseBody::VpcInfos>) };
    inline vector<ListVpcInfoByAgentStorageResponseBody::VpcInfos> getVpcInfos() { DARABONBA_PTR_GET(vpcInfos_, vector<ListVpcInfoByAgentStorageResponseBody::VpcInfos>) };
    inline ListVpcInfoByAgentStorageResponseBody& setVpcInfos(const vector<ListVpcInfoByAgentStorageResponseBody::VpcInfos> & vpcInfos) { DARABONBA_PTR_SET_VALUE(vpcInfos_, vpcInfos) };
    inline ListVpcInfoByAgentStorageResponseBody& setVpcInfos(vector<ListVpcInfoByAgentStorageResponseBody::VpcInfos> && vpcInfos) { DARABONBA_PTR_SET_RVALUE(vpcInfos_, vpcInfos) };


  protected:
    // The agent storage name.
    shared_ptr<string> agentStorageName_ {};
    // The page number.
    shared_ptr<int64_t> pageNum_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID, which can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // The total number of VPCs.
    shared_ptr<int64_t> totalCount_ {};
    // The VPC details.
    shared_ptr<vector<ListVpcInfoByAgentStorageResponseBody::VpcInfos>> vpcInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
