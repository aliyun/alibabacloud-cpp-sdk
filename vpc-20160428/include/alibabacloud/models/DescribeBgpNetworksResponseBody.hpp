// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBGPNETWORKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBGPNETWORKSRESPONSEBODY_HPP_
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
  class DescribeBgpNetworksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBgpNetworksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BgpNetworks, bgpNetworks_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBgpNetworksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BgpNetworks, bgpNetworks_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBgpNetworksResponseBody() = default ;
    DescribeBgpNetworksResponseBody(const DescribeBgpNetworksResponseBody &) = default ;
    DescribeBgpNetworksResponseBody(DescribeBgpNetworksResponseBody &&) = default ;
    DescribeBgpNetworksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBgpNetworksResponseBody() = default ;
    DescribeBgpNetworksResponseBody& operator=(const DescribeBgpNetworksResponseBody &) = default ;
    DescribeBgpNetworksResponseBody& operator=(DescribeBgpNetworksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BgpNetworks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BgpNetworks& obj) { 
        DARABONBA_PTR_TO_JSON(BgpNetwork, bgpNetwork_);
      };
      friend void from_json(const Darabonba::Json& j, BgpNetworks& obj) { 
        DARABONBA_PTR_FROM_JSON(BgpNetwork, bgpNetwork_);
      };
      BgpNetworks() = default ;
      BgpNetworks(const BgpNetworks &) = default ;
      BgpNetworks(BgpNetworks &&) = default ;
      BgpNetworks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BgpNetworks() = default ;
      BgpNetworks& operator=(const BgpNetworks &) = default ;
      BgpNetworks& operator=(BgpNetworks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BgpNetwork : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BgpNetwork& obj) { 
          DARABONBA_PTR_TO_JSON(DstCidrBlock, dstCidrBlock_);
          DARABONBA_PTR_TO_JSON(RouterId, routerId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, BgpNetwork& obj) { 
          DARABONBA_PTR_FROM_JSON(DstCidrBlock, dstCidrBlock_);
          DARABONBA_PTR_FROM_JSON(RouterId, routerId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        BgpNetwork() = default ;
        BgpNetwork(const BgpNetwork &) = default ;
        BgpNetwork(BgpNetwork &&) = default ;
        BgpNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BgpNetwork() = default ;
        BgpNetwork& operator=(const BgpNetwork &) = default ;
        BgpNetwork& operator=(BgpNetwork &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dstCidrBlock_ == nullptr
        && this->routerId_ == nullptr && this->status_ == nullptr && this->vpcId_ == nullptr; };
        // dstCidrBlock Field Functions 
        bool hasDstCidrBlock() const { return this->dstCidrBlock_ != nullptr;};
        void deleteDstCidrBlock() { this->dstCidrBlock_ = nullptr;};
        inline string getDstCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(dstCidrBlock_, "") };
        inline BgpNetwork& setDstCidrBlock(string dstCidrBlock) { DARABONBA_PTR_SET_VALUE(dstCidrBlock_, dstCidrBlock) };


        // routerId Field Functions 
        bool hasRouterId() const { return this->routerId_ != nullptr;};
        void deleteRouterId() { this->routerId_ = nullptr;};
        inline string getRouterId() const { DARABONBA_PTR_GET_DEFAULT(routerId_, "") };
        inline BgpNetwork& setRouterId(string routerId) { DARABONBA_PTR_SET_VALUE(routerId_, routerId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline BgpNetwork& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline BgpNetwork& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The CIDR block of the advertised BGP network.
        shared_ptr<string> dstCidrBlock_ {};
        // The ID of the VBR.
        shared_ptr<string> routerId_ {};
        // The status of the advertised BGP network.
        shared_ptr<string> status_ {};
        // The ID of the virtual private cloud (VPC) in which the master instance resides.
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->bgpNetwork_ == nullptr; };
      // bgpNetwork Field Functions 
      bool hasBgpNetwork() const { return this->bgpNetwork_ != nullptr;};
      void deleteBgpNetwork() { this->bgpNetwork_ = nullptr;};
      inline const vector<BgpNetworks::BgpNetwork> & getBgpNetwork() const { DARABONBA_PTR_GET_CONST(bgpNetwork_, vector<BgpNetworks::BgpNetwork>) };
      inline vector<BgpNetworks::BgpNetwork> getBgpNetwork() { DARABONBA_PTR_GET(bgpNetwork_, vector<BgpNetworks::BgpNetwork>) };
      inline BgpNetworks& setBgpNetwork(const vector<BgpNetworks::BgpNetwork> & bgpNetwork) { DARABONBA_PTR_SET_VALUE(bgpNetwork_, bgpNetwork) };
      inline BgpNetworks& setBgpNetwork(vector<BgpNetworks::BgpNetwork> && bgpNetwork) { DARABONBA_PTR_SET_RVALUE(bgpNetwork_, bgpNetwork) };


    protected:
      shared_ptr<vector<BgpNetworks::BgpNetwork>> bgpNetwork_ {};
    };

    virtual bool empty() const override { return this->bgpNetworks_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // bgpNetworks Field Functions 
    bool hasBgpNetworks() const { return this->bgpNetworks_ != nullptr;};
    void deleteBgpNetworks() { this->bgpNetworks_ = nullptr;};
    inline const DescribeBgpNetworksResponseBody::BgpNetworks & getBgpNetworks() const { DARABONBA_PTR_GET_CONST(bgpNetworks_, DescribeBgpNetworksResponseBody::BgpNetworks) };
    inline DescribeBgpNetworksResponseBody::BgpNetworks getBgpNetworks() { DARABONBA_PTR_GET(bgpNetworks_, DescribeBgpNetworksResponseBody::BgpNetworks) };
    inline DescribeBgpNetworksResponseBody& setBgpNetworks(const DescribeBgpNetworksResponseBody::BgpNetworks & bgpNetworks) { DARABONBA_PTR_SET_VALUE(bgpNetworks_, bgpNetworks) };
    inline DescribeBgpNetworksResponseBody& setBgpNetworks(DescribeBgpNetworksResponseBody::BgpNetworks && bgpNetworks) { DARABONBA_PTR_SET_RVALUE(bgpNetworks_, bgpNetworks) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBgpNetworksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBgpNetworksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBgpNetworksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeBgpNetworksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // BGP networks.
    shared_ptr<DescribeBgpNetworksResponseBody::BgpNetworks> bgpNetworks_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of advertised BGP networks.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
