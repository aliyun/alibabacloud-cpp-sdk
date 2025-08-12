// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINONLINEUSERNUMRESPONSEBODYONLINEUSERINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINONLINEUSERNUMRESPONSEBODYONLINEUSERINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamOnlineUserNumInfo, liveStreamOnlineUserNumInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamOnlineUserNumInfo, liveStreamOnlineUserNumInfo_);
    };
    DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo() = default ;
    DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo(const DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo &) = default ;
    DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo(DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo &&) = default ;
    DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo() = default ;
    DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo& operator=(const DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo &) = default ;
    DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo& operator=(DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveStreamOnlineUserNumInfo_ != nullptr; };
    // liveStreamOnlineUserNumInfo Field Functions 
    bool hasLiveStreamOnlineUserNumInfo() const { return this->liveStreamOnlineUserNumInfo_ != nullptr;};
    void deleteLiveStreamOnlineUserNumInfo() { this->liveStreamOnlineUserNumInfo_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfo> & liveStreamOnlineUserNumInfo() const { DARABONBA_PTR_GET_CONST(liveStreamOnlineUserNumInfo_, vector<Models::DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfo>) };
    inline vector<Models::DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfo> liveStreamOnlineUserNumInfo() { DARABONBA_PTR_GET(liveStreamOnlineUserNumInfo_, vector<Models::DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfo>) };
    inline DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo& setLiveStreamOnlineUserNumInfo(const vector<Models::DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfo> & liveStreamOnlineUserNumInfo) { DARABONBA_PTR_SET_VALUE(liveStreamOnlineUserNumInfo_, liveStreamOnlineUserNumInfo) };
    inline DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfo& setLiveStreamOnlineUserNumInfo(vector<Models::DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfo> && liveStreamOnlineUserNumInfo) { DARABONBA_PTR_SET_RVALUE(liveStreamOnlineUserNumInfo_, liveStreamOnlineUserNumInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfo>> liveStreamOnlineUserNumInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
