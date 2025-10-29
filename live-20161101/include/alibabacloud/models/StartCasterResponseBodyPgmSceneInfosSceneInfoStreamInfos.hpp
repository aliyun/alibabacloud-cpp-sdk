// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCASTERRESPONSEBODYPGMSCENEINFOSSCENEINFOSTREAMINFOS_HPP_
#define ALIBABACLOUD_MODELS_STARTCASTERRESPONSEBODYPGMSCENEINFOSSCENEINFOSTREAMINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfosStreamInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos& obj) { 
      DARABONBA_PTR_TO_JSON(StreamInfo, streamInfo_);
    };
    friend void from_json(const Darabonba::Json& j, StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(StreamInfo, streamInfo_);
    };
    StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos() = default ;
    StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos(const StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos &) = default ;
    StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos(StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos &&) = default ;
    StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos() = default ;
    StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos& operator=(const StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos &) = default ;
    StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos& operator=(StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->streamInfo_ == nullptr; };
    // streamInfo Field Functions 
    bool hasStreamInfo() const { return this->streamInfo_ != nullptr;};
    void deleteStreamInfo() { this->streamInfo_ = nullptr;};
    inline const vector<Models::StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfosStreamInfo> & streamInfo() const { DARABONBA_PTR_GET_CONST(streamInfo_, vector<Models::StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfosStreamInfo>) };
    inline vector<Models::StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfosStreamInfo> streamInfo() { DARABONBA_PTR_GET(streamInfo_, vector<Models::StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfosStreamInfo>) };
    inline StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos& setStreamInfo(const vector<Models::StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfosStreamInfo> & streamInfo) { DARABONBA_PTR_SET_VALUE(streamInfo_, streamInfo) };
    inline StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos& setStreamInfo(vector<Models::StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfosStreamInfo> && streamInfo) { DARABONBA_PTR_SET_RVALUE(streamInfo_, streamInfo) };


  protected:
    std::shared_ptr<vector<Models::StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfosStreamInfo>> streamInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
