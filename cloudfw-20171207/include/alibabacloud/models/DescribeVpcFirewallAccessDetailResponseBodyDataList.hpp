// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLACCESSDETAILRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLACCESSDETAILRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallAccessDetailResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallAccessDetailResponseBodyDataList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallAccessDetailResponseBodyDataList& obj) { 
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
    DescribeVpcFirewallAccessDetailResponseBodyDataList() = default ;
    DescribeVpcFirewallAccessDetailResponseBodyDataList(const DescribeVpcFirewallAccessDetailResponseBodyDataList &) = default ;
    DescribeVpcFirewallAccessDetailResponseBodyDataList(DescribeVpcFirewallAccessDetailResponseBodyDataList &&) = default ;
    DescribeVpcFirewallAccessDetailResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallAccessDetailResponseBodyDataList() = default ;
    DescribeVpcFirewallAccessDetailResponseBodyDataList& operator=(const DescribeVpcFirewallAccessDetailResponseBodyDataList &) = default ;
    DescribeVpcFirewallAccessDetailResponseBodyDataList& operator=(DescribeVpcFirewallAccessDetailResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inBytes_ == nullptr
        && return this->outBytes_ == nullptr && return this->peerAssetIP_ == nullptr && return this->peerAssetInstanceId_ == nullptr && return this->peerAssetInstanceName_ == nullptr && return this->peerVpcId_ == nullptr
        && return this->regionNo_ == nullptr && return this->sessionCount_ == nullptr && return this->peerVpcName_ == nullptr; };
    // inBytes Field Functions 
    bool hasInBytes() const { return this->inBytes_ != nullptr;};
    void deleteInBytes() { this->inBytes_ = nullptr;};
    inline int64_t inBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
    inline DescribeVpcFirewallAccessDetailResponseBodyDataList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


    // outBytes Field Functions 
    bool hasOutBytes() const { return this->outBytes_ != nullptr;};
    void deleteOutBytes() { this->outBytes_ = nullptr;};
    inline int64_t outBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
    inline DescribeVpcFirewallAccessDetailResponseBodyDataList& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


    // peerAssetIP Field Functions 
    bool hasPeerAssetIP() const { return this->peerAssetIP_ != nullptr;};
    void deletePeerAssetIP() { this->peerAssetIP_ = nullptr;};
    inline string peerAssetIP() const { DARABONBA_PTR_GET_DEFAULT(peerAssetIP_, "") };
    inline DescribeVpcFirewallAccessDetailResponseBodyDataList& setPeerAssetIP(string peerAssetIP) { DARABONBA_PTR_SET_VALUE(peerAssetIP_, peerAssetIP) };


    // peerAssetInstanceId Field Functions 
    bool hasPeerAssetInstanceId() const { return this->peerAssetInstanceId_ != nullptr;};
    void deletePeerAssetInstanceId() { this->peerAssetInstanceId_ = nullptr;};
    inline string peerAssetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(peerAssetInstanceId_, "") };
    inline DescribeVpcFirewallAccessDetailResponseBodyDataList& setPeerAssetInstanceId(string peerAssetInstanceId) { DARABONBA_PTR_SET_VALUE(peerAssetInstanceId_, peerAssetInstanceId) };


    // peerAssetInstanceName Field Functions 
    bool hasPeerAssetInstanceName() const { return this->peerAssetInstanceName_ != nullptr;};
    void deletePeerAssetInstanceName() { this->peerAssetInstanceName_ = nullptr;};
    inline string peerAssetInstanceName() const { DARABONBA_PTR_GET_DEFAULT(peerAssetInstanceName_, "") };
    inline DescribeVpcFirewallAccessDetailResponseBodyDataList& setPeerAssetInstanceName(string peerAssetInstanceName) { DARABONBA_PTR_SET_VALUE(peerAssetInstanceName_, peerAssetInstanceName) };


    // peerVpcId Field Functions 
    bool hasPeerVpcId() const { return this->peerVpcId_ != nullptr;};
    void deletePeerVpcId() { this->peerVpcId_ = nullptr;};
    inline string peerVpcId() const { DARABONBA_PTR_GET_DEFAULT(peerVpcId_, "") };
    inline DescribeVpcFirewallAccessDetailResponseBodyDataList& setPeerVpcId(string peerVpcId) { DARABONBA_PTR_SET_VALUE(peerVpcId_, peerVpcId) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeVpcFirewallAccessDetailResponseBodyDataList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // sessionCount Field Functions 
    bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
    void deleteSessionCount() { this->sessionCount_ = nullptr;};
    inline int64_t sessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
    inline DescribeVpcFirewallAccessDetailResponseBodyDataList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


    // peerVpcName Field Functions 
    bool hasPeerVpcName() const { return this->peerVpcName_ != nullptr;};
    void deletePeerVpcName() { this->peerVpcName_ = nullptr;};
    inline string peerVpcName() const { DARABONBA_PTR_GET_DEFAULT(peerVpcName_, "") };
    inline DescribeVpcFirewallAccessDetailResponseBodyDataList& setPeerVpcName(string peerVpcName) { DARABONBA_PTR_SET_VALUE(peerVpcName_, peerVpcName) };


  protected:
    std::shared_ptr<int64_t> inBytes_ = nullptr;
    std::shared_ptr<int64_t> outBytes_ = nullptr;
    std::shared_ptr<string> peerAssetIP_ = nullptr;
    std::shared_ptr<string> peerAssetInstanceId_ = nullptr;
    std::shared_ptr<string> peerAssetInstanceName_ = nullptr;
    std::shared_ptr<string> peerVpcId_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
    std::shared_ptr<int64_t> sessionCount_ = nullptr;
    std::shared_ptr<string> peerVpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
