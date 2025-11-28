// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMBERAUTHORIZEDBIZCHAINRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMBERAUTHORIZEDBIZCHAINRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMemberAuthorizedBizChainResponseBodyDataPeerList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListMemberAuthorizedBizChainResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMemberAuthorizedBizChainResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Authorized, authorized_);
      DARABONBA_PTR_TO_JSON(BizChainId, bizChainId_);
      DARABONBA_PTR_TO_JSON(BizChainName, bizChainName_);
      DARABONBA_PTR_TO_JSON(BizChainType, bizChainType_);
      DARABONBA_PTR_TO_JSON(PeerList, peerList_);
    };
    friend void from_json(const Darabonba::Json& j, ListMemberAuthorizedBizChainResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Authorized, authorized_);
      DARABONBA_PTR_FROM_JSON(BizChainId, bizChainId_);
      DARABONBA_PTR_FROM_JSON(BizChainName, bizChainName_);
      DARABONBA_PTR_FROM_JSON(BizChainType, bizChainType_);
      DARABONBA_PTR_FROM_JSON(PeerList, peerList_);
    };
    ListMemberAuthorizedBizChainResponseBodyData() = default ;
    ListMemberAuthorizedBizChainResponseBodyData(const ListMemberAuthorizedBizChainResponseBodyData &) = default ;
    ListMemberAuthorizedBizChainResponseBodyData(ListMemberAuthorizedBizChainResponseBodyData &&) = default ;
    ListMemberAuthorizedBizChainResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMemberAuthorizedBizChainResponseBodyData() = default ;
    ListMemberAuthorizedBizChainResponseBodyData& operator=(const ListMemberAuthorizedBizChainResponseBodyData &) = default ;
    ListMemberAuthorizedBizChainResponseBodyData& operator=(ListMemberAuthorizedBizChainResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorized_ == nullptr
        && return this->bizChainId_ == nullptr && return this->bizChainName_ == nullptr && return this->bizChainType_ == nullptr && return this->peerList_ == nullptr; };
    // authorized Field Functions 
    bool hasAuthorized() const { return this->authorized_ != nullptr;};
    void deleteAuthorized() { this->authorized_ = nullptr;};
    inline bool authorized() const { DARABONBA_PTR_GET_DEFAULT(authorized_, false) };
    inline ListMemberAuthorizedBizChainResponseBodyData& setAuthorized(bool authorized) { DARABONBA_PTR_SET_VALUE(authorized_, authorized) };


    // bizChainId Field Functions 
    bool hasBizChainId() const { return this->bizChainId_ != nullptr;};
    void deleteBizChainId() { this->bizChainId_ = nullptr;};
    inline string bizChainId() const { DARABONBA_PTR_GET_DEFAULT(bizChainId_, "") };
    inline ListMemberAuthorizedBizChainResponseBodyData& setBizChainId(string bizChainId) { DARABONBA_PTR_SET_VALUE(bizChainId_, bizChainId) };


    // bizChainName Field Functions 
    bool hasBizChainName() const { return this->bizChainName_ != nullptr;};
    void deleteBizChainName() { this->bizChainName_ = nullptr;};
    inline string bizChainName() const { DARABONBA_PTR_GET_DEFAULT(bizChainName_, "") };
    inline ListMemberAuthorizedBizChainResponseBodyData& setBizChainName(string bizChainName) { DARABONBA_PTR_SET_VALUE(bizChainName_, bizChainName) };


    // bizChainType Field Functions 
    bool hasBizChainType() const { return this->bizChainType_ != nullptr;};
    void deleteBizChainType() { this->bizChainType_ = nullptr;};
    inline string bizChainType() const { DARABONBA_PTR_GET_DEFAULT(bizChainType_, "") };
    inline ListMemberAuthorizedBizChainResponseBodyData& setBizChainType(string bizChainType) { DARABONBA_PTR_SET_VALUE(bizChainType_, bizChainType) };


    // peerList Field Functions 
    bool hasPeerList() const { return this->peerList_ != nullptr;};
    void deletePeerList() { this->peerList_ = nullptr;};
    inline const vector<Models::ListMemberAuthorizedBizChainResponseBodyDataPeerList> & peerList() const { DARABONBA_PTR_GET_CONST(peerList_, vector<Models::ListMemberAuthorizedBizChainResponseBodyDataPeerList>) };
    inline vector<Models::ListMemberAuthorizedBizChainResponseBodyDataPeerList> peerList() { DARABONBA_PTR_GET(peerList_, vector<Models::ListMemberAuthorizedBizChainResponseBodyDataPeerList>) };
    inline ListMemberAuthorizedBizChainResponseBodyData& setPeerList(const vector<Models::ListMemberAuthorizedBizChainResponseBodyDataPeerList> & peerList) { DARABONBA_PTR_SET_VALUE(peerList_, peerList) };
    inline ListMemberAuthorizedBizChainResponseBodyData& setPeerList(vector<Models::ListMemberAuthorizedBizChainResponseBodyDataPeerList> && peerList) { DARABONBA_PTR_SET_RVALUE(peerList_, peerList) };


  protected:
    std::shared_ptr<bool> authorized_ = nullptr;
    std::shared_ptr<string> bizChainId_ = nullptr;
    std::shared_ptr<string> bizChainName_ = nullptr;
    std::shared_ptr<string> bizChainType_ = nullptr;
    std::shared_ptr<vector<Models::ListMemberAuthorizedBizChainResponseBodyDataPeerList>> peerList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
