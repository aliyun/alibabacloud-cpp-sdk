// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINONLINEUSERNUMRESPONSEBODYONLINEUSERINFOLIVESTREAMONLINEUSERNUMINFOINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINONLINEUSERNUMRESPONSEBODYONLINEUSERINFOLIVESTREAMONLINEUSERNUMINFOINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Info, info_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Info, info_);
    };
    DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfos() = default ;
    DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfos(const DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfos &) = default ;
    DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfos(DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfos &&) = default ;
    DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfos() = default ;
    DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfos& operator=(const DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfos &) = default ;
    DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfos& operator=(DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->info_ == nullptr; };
    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo> & info() const { DARABONBA_PTR_GET_CONST(info_, vector<Models::DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo>) };
    inline vector<Models::DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo> info() { DARABONBA_PTR_GET(info_, vector<Models::DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo>) };
    inline DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfos& setInfo(const vector<Models::DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
    inline DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfos& setInfo(vector<Models::DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo>> info_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
