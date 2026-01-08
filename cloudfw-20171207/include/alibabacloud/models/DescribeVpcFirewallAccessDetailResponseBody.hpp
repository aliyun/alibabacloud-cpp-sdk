// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLACCESSDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLACCESSDETAILRESPONSEBODY_HPP_
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
  class DescribeVpcFirewallAccessDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallAccessDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallAccessDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVpcFirewallAccessDetailResponseBody() = default ;
    DescribeVpcFirewallAccessDetailResponseBody(const DescribeVpcFirewallAccessDetailResponseBody &) = default ;
    DescribeVpcFirewallAccessDetailResponseBody(DescribeVpcFirewallAccessDetailResponseBody &&) = default ;
    DescribeVpcFirewallAccessDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallAccessDetailResponseBody() = default ;
    DescribeVpcFirewallAccessDetailResponseBody& operator=(const DescribeVpcFirewallAccessDetailResponseBody &) = default ;
    DescribeVpcFirewallAccessDetailResponseBody& operator=(DescribeVpcFirewallAccessDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
        DARABONBA_PTR_TO_JSON(OutBytes, outBytes_);
        DARABONBA_PTR_TO_JSON(PeerAssetIP, peerAssetIP_);
        DARABONBA_PTR_TO_JSON(PeerAssetInstanceId, peerAssetInstanceId_);
        DARABONBA_PTR_TO_JSON(PeerAssetInstanceName, peerAssetInstanceName_);
        DARABONBA_PTR_TO_JSON(PeerVpcId, peerVpcId_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_TO_JSON(peerVpcName, peerVpcName_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
        DARABONBA_PTR_FROM_JSON(OutBytes, outBytes_);
        DARABONBA_PTR_FROM_JSON(PeerAssetIP, peerAssetIP_);
        DARABONBA_PTR_FROM_JSON(PeerAssetInstanceId, peerAssetInstanceId_);
        DARABONBA_PTR_FROM_JSON(PeerAssetInstanceName, peerAssetInstanceName_);
        DARABONBA_PTR_FROM_JSON(PeerVpcId, peerVpcId_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_FROM_JSON(peerVpcName, peerVpcName_);
      };
      DataList() = default ;
      DataList(const DataList &) = default ;
      DataList(DataList &&) = default ;
      DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataList() = default ;
      DataList& operator=(const DataList &) = default ;
      DataList& operator=(DataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->inBytes_ == nullptr
        && this->outBytes_ == nullptr && this->peerAssetIP_ == nullptr && this->peerAssetInstanceId_ == nullptr && this->peerAssetInstanceName_ == nullptr && this->peerVpcId_ == nullptr
        && this->regionNo_ == nullptr && this->sessionCount_ == nullptr && this->peerVpcName_ == nullptr; };
      // inBytes Field Functions 
      bool hasInBytes() const { return this->inBytes_ != nullptr;};
      void deleteInBytes() { this->inBytes_ = nullptr;};
      inline int64_t getInBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
      inline DataList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


      // outBytes Field Functions 
      bool hasOutBytes() const { return this->outBytes_ != nullptr;};
      void deleteOutBytes() { this->outBytes_ = nullptr;};
      inline int64_t getOutBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
      inline DataList& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


      // peerAssetIP Field Functions 
      bool hasPeerAssetIP() const { return this->peerAssetIP_ != nullptr;};
      void deletePeerAssetIP() { this->peerAssetIP_ = nullptr;};
      inline string getPeerAssetIP() const { DARABONBA_PTR_GET_DEFAULT(peerAssetIP_, "") };
      inline DataList& setPeerAssetIP(string peerAssetIP) { DARABONBA_PTR_SET_VALUE(peerAssetIP_, peerAssetIP) };


      // peerAssetInstanceId Field Functions 
      bool hasPeerAssetInstanceId() const { return this->peerAssetInstanceId_ != nullptr;};
      void deletePeerAssetInstanceId() { this->peerAssetInstanceId_ = nullptr;};
      inline string getPeerAssetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(peerAssetInstanceId_, "") };
      inline DataList& setPeerAssetInstanceId(string peerAssetInstanceId) { DARABONBA_PTR_SET_VALUE(peerAssetInstanceId_, peerAssetInstanceId) };


      // peerAssetInstanceName Field Functions 
      bool hasPeerAssetInstanceName() const { return this->peerAssetInstanceName_ != nullptr;};
      void deletePeerAssetInstanceName() { this->peerAssetInstanceName_ = nullptr;};
      inline string getPeerAssetInstanceName() const { DARABONBA_PTR_GET_DEFAULT(peerAssetInstanceName_, "") };
      inline DataList& setPeerAssetInstanceName(string peerAssetInstanceName) { DARABONBA_PTR_SET_VALUE(peerAssetInstanceName_, peerAssetInstanceName) };


      // peerVpcId Field Functions 
      bool hasPeerVpcId() const { return this->peerVpcId_ != nullptr;};
      void deletePeerVpcId() { this->peerVpcId_ = nullptr;};
      inline string getPeerVpcId() const { DARABONBA_PTR_GET_DEFAULT(peerVpcId_, "") };
      inline DataList& setPeerVpcId(string peerVpcId) { DARABONBA_PTR_SET_VALUE(peerVpcId_, peerVpcId) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline DataList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // sessionCount Field Functions 
      bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
      void deleteSessionCount() { this->sessionCount_ = nullptr;};
      inline int64_t getSessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
      inline DataList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


      // peerVpcName Field Functions 
      bool hasPeerVpcName() const { return this->peerVpcName_ != nullptr;};
      void deletePeerVpcName() { this->peerVpcName_ = nullptr;};
      inline string getPeerVpcName() const { DARABONBA_PTR_GET_DEFAULT(peerVpcName_, "") };
      inline DataList& setPeerVpcName(string peerVpcName) { DARABONBA_PTR_SET_VALUE(peerVpcName_, peerVpcName) };


    protected:
      shared_ptr<int64_t> inBytes_ {};
      shared_ptr<int64_t> outBytes_ {};
      shared_ptr<string> peerAssetIP_ {};
      shared_ptr<string> peerAssetInstanceId_ {};
      shared_ptr<string> peerAssetInstanceName_ {};
      shared_ptr<string> peerVpcId_ {};
      shared_ptr<string> regionNo_ {};
      shared_ptr<int64_t> sessionCount_ {};
      shared_ptr<string> peerVpcName_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeVpcFirewallAccessDetailResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeVpcFirewallAccessDetailResponseBody::DataList>) };
    inline vector<DescribeVpcFirewallAccessDetailResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeVpcFirewallAccessDetailResponseBody::DataList>) };
    inline DescribeVpcFirewallAccessDetailResponseBody& setDataList(const vector<DescribeVpcFirewallAccessDetailResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeVpcFirewallAccessDetailResponseBody& setDataList(vector<DescribeVpcFirewallAccessDetailResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallAccessDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpcFirewallAccessDetailResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeVpcFirewallAccessDetailResponseBody::DataList>> dataList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
