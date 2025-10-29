// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAUDIOAUDITCONFIGRESPONSEBODYLIVEAUDIOAUDITCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAUDIOAUDITCONFIGRESPONSEBODYLIVEAUDIOAUDITCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigListLiveAudioAuditConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(LiveAudioAuditConfig, liveAudioAuditConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveAudioAuditConfig, liveAudioAuditConfig_);
    };
    DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList() = default ;
    DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList(const DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList &) = default ;
    DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList(DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList &&) = default ;
    DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList() = default ;
    DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList& operator=(const DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList &) = default ;
    DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList& operator=(DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveAudioAuditConfig_ == nullptr; };
    // liveAudioAuditConfig Field Functions 
    bool hasLiveAudioAuditConfig() const { return this->liveAudioAuditConfig_ != nullptr;};
    void deleteLiveAudioAuditConfig() { this->liveAudioAuditConfig_ = nullptr;};
    inline const vector<Models::DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigListLiveAudioAuditConfig> & liveAudioAuditConfig() const { DARABONBA_PTR_GET_CONST(liveAudioAuditConfig_, vector<Models::DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigListLiveAudioAuditConfig>) };
    inline vector<Models::DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigListLiveAudioAuditConfig> liveAudioAuditConfig() { DARABONBA_PTR_GET(liveAudioAuditConfig_, vector<Models::DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigListLiveAudioAuditConfig>) };
    inline DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList& setLiveAudioAuditConfig(const vector<Models::DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigListLiveAudioAuditConfig> & liveAudioAuditConfig) { DARABONBA_PTR_SET_VALUE(liveAudioAuditConfig_, liveAudioAuditConfig) };
    inline DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList& setLiveAudioAuditConfig(vector<Models::DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigListLiveAudioAuditConfig> && liveAudioAuditConfig) { DARABONBA_PTR_SET_RVALUE(liveAudioAuditConfig_, liveAudioAuditConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigListLiveAudioAuditConfig>> liveAudioAuditConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
