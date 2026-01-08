// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCEVPCLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCEVPCLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAccessInstanceVpcListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessInstanceVpcListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpcList, vpcList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessInstanceVpcListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpcList, vpcList_);
    };
    DescribeAccessInstanceVpcListResponseBody() = default ;
    DescribeAccessInstanceVpcListResponseBody(const DescribeAccessInstanceVpcListResponseBody &) = default ;
    DescribeAccessInstanceVpcListResponseBody(DescribeAccessInstanceVpcListResponseBody &&) = default ;
    DescribeAccessInstanceVpcListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessInstanceVpcListResponseBody() = default ;
    DescribeAccessInstanceVpcListResponseBody& operator=(const DescribeAccessInstanceVpcListResponseBody &) = default ;
    DescribeAccessInstanceVpcListResponseBody& operator=(DescribeAccessInstanceVpcListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VpcList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpcList& obj) { 
        DARABONBA_PTR_TO_JSON(FirewallVpc, firewallVpc_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
      };
      friend void from_json(const Darabonba::Json& j, VpcList& obj) { 
        DARABONBA_PTR_FROM_JSON(FirewallVpc, firewallVpc_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
      };
      VpcList() = default ;
      VpcList(const VpcList &) = default ;
      VpcList(VpcList &&) = default ;
      VpcList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VpcList() = default ;
      VpcList& operator=(const VpcList &) = default ;
      VpcList& operator=(VpcList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->firewallVpc_ == nullptr
        && this->vpcId_ == nullptr && this->vpcName_ == nullptr; };
      // firewallVpc Field Functions 
      bool hasFirewallVpc() const { return this->firewallVpc_ != nullptr;};
      void deleteFirewallVpc() { this->firewallVpc_ = nullptr;};
      inline bool getFirewallVpc() const { DARABONBA_PTR_GET_DEFAULT(firewallVpc_, false) };
      inline VpcList& setFirewallVpc(bool firewallVpc) { DARABONBA_PTR_SET_VALUE(firewallVpc_, firewallVpc) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline VpcList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcName Field Functions 
      bool hasVpcName() const { return this->vpcName_ != nullptr;};
      void deleteVpcName() { this->vpcName_ = nullptr;};
      inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
      inline VpcList& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


    protected:
      shared_ptr<bool> firewallVpc_ {};
      shared_ptr<string> vpcId_ {};
      shared_ptr<string> vpcName_ {};
    };

    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vpcList_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DescribeAccessInstanceVpcListResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAccessInstanceVpcListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccessInstanceVpcListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeAccessInstanceVpcListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpcList Field Functions 
    bool hasVpcList() const { return this->vpcList_ != nullptr;};
    void deleteVpcList() { this->vpcList_ = nullptr;};
    inline const vector<DescribeAccessInstanceVpcListResponseBody::VpcList> & getVpcList() const { DARABONBA_PTR_GET_CONST(vpcList_, vector<DescribeAccessInstanceVpcListResponseBody::VpcList>) };
    inline vector<DescribeAccessInstanceVpcListResponseBody::VpcList> getVpcList() { DARABONBA_PTR_GET(vpcList_, vector<DescribeAccessInstanceVpcListResponseBody::VpcList>) };
    inline DescribeAccessInstanceVpcListResponseBody& setVpcList(const vector<DescribeAccessInstanceVpcListResponseBody::VpcList> & vpcList) { DARABONBA_PTR_SET_VALUE(vpcList_, vpcList) };
    inline DescribeAccessInstanceVpcListResponseBody& setVpcList(vector<DescribeAccessInstanceVpcListResponseBody::VpcList> && vpcList) { DARABONBA_PTR_SET_RVALUE(vpcList_, vpcList) };


  protected:
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
    shared_ptr<vector<DescribeAccessInstanceVpcListResponseBody::VpcList>> vpcList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
