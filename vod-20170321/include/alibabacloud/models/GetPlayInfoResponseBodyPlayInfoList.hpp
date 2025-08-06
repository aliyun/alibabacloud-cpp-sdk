// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLAYINFORESPONSEBODYPLAYINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPLAYINFORESPONSEBODYPLAYINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPlayInfoResponseBodyPlayInfoListPlayInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetPlayInfoResponseBodyPlayInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPlayInfoResponseBodyPlayInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(PlayInfo, playInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetPlayInfoResponseBodyPlayInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(PlayInfo, playInfo_);
    };
    GetPlayInfoResponseBodyPlayInfoList() = default ;
    GetPlayInfoResponseBodyPlayInfoList(const GetPlayInfoResponseBodyPlayInfoList &) = default ;
    GetPlayInfoResponseBodyPlayInfoList(GetPlayInfoResponseBodyPlayInfoList &&) = default ;
    GetPlayInfoResponseBodyPlayInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPlayInfoResponseBodyPlayInfoList() = default ;
    GetPlayInfoResponseBodyPlayInfoList& operator=(const GetPlayInfoResponseBodyPlayInfoList &) = default ;
    GetPlayInfoResponseBodyPlayInfoList& operator=(GetPlayInfoResponseBodyPlayInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->playInfo_ != nullptr; };
    // playInfo Field Functions 
    bool hasPlayInfo() const { return this->playInfo_ != nullptr;};
    void deletePlayInfo() { this->playInfo_ = nullptr;};
    inline const vector<Models::GetPlayInfoResponseBodyPlayInfoListPlayInfo> & playInfo() const { DARABONBA_PTR_GET_CONST(playInfo_, vector<Models::GetPlayInfoResponseBodyPlayInfoListPlayInfo>) };
    inline vector<Models::GetPlayInfoResponseBodyPlayInfoListPlayInfo> playInfo() { DARABONBA_PTR_GET(playInfo_, vector<Models::GetPlayInfoResponseBodyPlayInfoListPlayInfo>) };
    inline GetPlayInfoResponseBodyPlayInfoList& setPlayInfo(const vector<Models::GetPlayInfoResponseBodyPlayInfoListPlayInfo> & playInfo) { DARABONBA_PTR_SET_VALUE(playInfo_, playInfo) };
    inline GetPlayInfoResponseBodyPlayInfoList& setPlayInfo(vector<Models::GetPlayInfoResponseBodyPlayInfoListPlayInfo> && playInfo) { DARABONBA_PTR_SET_RVALUE(playInfo_, playInfo) };


  protected:
    std::shared_ptr<vector<Models::GetPlayInfoResponseBodyPlayInfoListPlayInfo>> playInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
