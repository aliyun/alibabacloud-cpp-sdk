// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCINFOBYINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCINFOBYINSTANCERESPONSEBODY_HPP_
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
  class ListVpcInfoByInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcInfoByInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpcInfos, vpcInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcInfoByInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpcInfos, vpcInfos_);
    };
    ListVpcInfoByInstanceResponseBody() = default ;
    ListVpcInfoByInstanceResponseBody(const ListVpcInfoByInstanceResponseBody &) = default ;
    ListVpcInfoByInstanceResponseBody(ListVpcInfoByInstanceResponseBody &&) = default ;
    ListVpcInfoByInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcInfoByInstanceResponseBody() = default ;
    ListVpcInfoByInstanceResponseBody& operator=(const ListVpcInfoByInstanceResponseBody &) = default ;
    ListVpcInfoByInstanceResponseBody& operator=(ListVpcInfoByInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VpcInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpcInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(InstanceVpcName, instanceVpcName_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, VpcInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(InstanceVpcName, instanceVpcName_);
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
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->endpoint_ == nullptr && this->instanceVpcName_ == nullptr && this->regionNo_ == nullptr && this->vpcId_ == nullptr; };
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


      // instanceVpcName Field Functions 
      bool hasInstanceVpcName() const { return this->instanceVpcName_ != nullptr;};
      void deleteInstanceVpcName() { this->instanceVpcName_ = nullptr;};
      inline string getInstanceVpcName() const { DARABONBA_PTR_GET_DEFAULT(instanceVpcName_, "") };
      inline VpcInfos& setInstanceVpcName(string instanceVpcName) { DARABONBA_PTR_SET_VALUE(instanceVpcName_, instanceVpcName) };


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
      shared_ptr<string> domain_ {};
      shared_ptr<string> endpoint_ {};
      shared_ptr<string> instanceVpcName_ {};
      shared_ptr<string> regionNo_ {};
      // VPC ID
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->instanceName_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vpcInfos_ == nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListVpcInfoByInstanceResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline ListVpcInfoByInstanceResponseBody& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListVpcInfoByInstanceResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcInfoByInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListVpcInfoByInstanceResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpcInfos Field Functions 
    bool hasVpcInfos() const { return this->vpcInfos_ != nullptr;};
    void deleteVpcInfos() { this->vpcInfos_ = nullptr;};
    inline const vector<ListVpcInfoByInstanceResponseBody::VpcInfos> & getVpcInfos() const { DARABONBA_PTR_GET_CONST(vpcInfos_, vector<ListVpcInfoByInstanceResponseBody::VpcInfos>) };
    inline vector<ListVpcInfoByInstanceResponseBody::VpcInfos> getVpcInfos() { DARABONBA_PTR_GET(vpcInfos_, vector<ListVpcInfoByInstanceResponseBody::VpcInfos>) };
    inline ListVpcInfoByInstanceResponseBody& setVpcInfos(const vector<ListVpcInfoByInstanceResponseBody::VpcInfos> & vpcInfos) { DARABONBA_PTR_SET_VALUE(vpcInfos_, vpcInfos) };
    inline ListVpcInfoByInstanceResponseBody& setVpcInfos(vector<ListVpcInfoByInstanceResponseBody::VpcInfos> && vpcInfos) { DARABONBA_PTR_SET_RVALUE(vpcInfos_, vpcInfos) };


  protected:
    shared_ptr<string> instanceName_ {};
    shared_ptr<int64_t> pageNum_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
    shared_ptr<vector<ListVpcInfoByInstanceResponseBody::VpcInfos>> vpcInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
