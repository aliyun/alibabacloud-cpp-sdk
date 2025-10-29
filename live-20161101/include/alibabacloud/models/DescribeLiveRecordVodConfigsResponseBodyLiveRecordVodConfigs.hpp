// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVERECORDVODCONFIGSRESPONSEBODYLIVERECORDVODCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVERECORDVODCONFIGSRESPONSEBODYLIVERECORDVODCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigsLiveRecordVodConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(LiveRecordVodConfig, liveRecordVodConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveRecordVodConfig, liveRecordVodConfig_);
    };
    DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs() = default ;
    DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs(const DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs &) = default ;
    DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs(DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs &&) = default ;
    DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs() = default ;
    DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs& operator=(const DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs &) = default ;
    DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs& operator=(DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveRecordVodConfig_ == nullptr; };
    // liveRecordVodConfig Field Functions 
    bool hasLiveRecordVodConfig() const { return this->liveRecordVodConfig_ != nullptr;};
    void deleteLiveRecordVodConfig() { this->liveRecordVodConfig_ = nullptr;};
    inline const vector<Models::DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigsLiveRecordVodConfig> & liveRecordVodConfig() const { DARABONBA_PTR_GET_CONST(liveRecordVodConfig_, vector<Models::DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigsLiveRecordVodConfig>) };
    inline vector<Models::DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigsLiveRecordVodConfig> liveRecordVodConfig() { DARABONBA_PTR_GET(liveRecordVodConfig_, vector<Models::DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigsLiveRecordVodConfig>) };
    inline DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs& setLiveRecordVodConfig(const vector<Models::DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigsLiveRecordVodConfig> & liveRecordVodConfig) { DARABONBA_PTR_SET_VALUE(liveRecordVodConfig_, liveRecordVodConfig) };
    inline DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigs& setLiveRecordVodConfig(vector<Models::DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigsLiveRecordVodConfig> && liveRecordVodConfig) { DARABONBA_PTR_SET_RVALUE(liveRecordVodConfig_, liveRecordVodConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveRecordVodConfigsResponseBodyLiveRecordVodConfigsLiveRecordVodConfig>> liveRecordVodConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
