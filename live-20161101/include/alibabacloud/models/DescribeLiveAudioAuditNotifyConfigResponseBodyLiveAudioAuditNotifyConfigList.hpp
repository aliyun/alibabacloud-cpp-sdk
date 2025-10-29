// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAUDIOAUDITNOTIFYCONFIGRESPONSEBODYLIVEAUDIOAUDITNOTIFYCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAUDIOAUDITNOTIFYCONFIGRESPONSEBODYLIVEAUDIOAUDITNOTIFYCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigListLiveAudioAuditNotifyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(LiveAudioAuditNotifyConfig, liveAudioAuditNotifyConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveAudioAuditNotifyConfig, liveAudioAuditNotifyConfig_);
    };
    DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList() = default ;
    DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList(const DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList &) = default ;
    DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList(DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList &&) = default ;
    DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList() = default ;
    DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList& operator=(const DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList &) = default ;
    DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList& operator=(DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveAudioAuditNotifyConfig_ == nullptr; };
    // liveAudioAuditNotifyConfig Field Functions 
    bool hasLiveAudioAuditNotifyConfig() const { return this->liveAudioAuditNotifyConfig_ != nullptr;};
    void deleteLiveAudioAuditNotifyConfig() { this->liveAudioAuditNotifyConfig_ = nullptr;};
    inline const vector<Models::DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigListLiveAudioAuditNotifyConfig> & liveAudioAuditNotifyConfig() const { DARABONBA_PTR_GET_CONST(liveAudioAuditNotifyConfig_, vector<Models::DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigListLiveAudioAuditNotifyConfig>) };
    inline vector<Models::DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigListLiveAudioAuditNotifyConfig> liveAudioAuditNotifyConfig() { DARABONBA_PTR_GET(liveAudioAuditNotifyConfig_, vector<Models::DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigListLiveAudioAuditNotifyConfig>) };
    inline DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList& setLiveAudioAuditNotifyConfig(const vector<Models::DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigListLiveAudioAuditNotifyConfig> & liveAudioAuditNotifyConfig) { DARABONBA_PTR_SET_VALUE(liveAudioAuditNotifyConfig_, liveAudioAuditNotifyConfig) };
    inline DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList& setLiveAudioAuditNotifyConfig(vector<Models::DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigListLiveAudioAuditNotifyConfig> && liveAudioAuditNotifyConfig) { DARABONBA_PTR_SET_RVALUE(liveAudioAuditNotifyConfig_, liveAudioAuditNotifyConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigListLiveAudioAuditNotifyConfig>> liveAudioAuditNotifyConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
