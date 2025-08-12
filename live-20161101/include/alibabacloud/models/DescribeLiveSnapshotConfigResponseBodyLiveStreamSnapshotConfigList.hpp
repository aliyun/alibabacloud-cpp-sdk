// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESNAPSHOTCONFIGRESPONSEBODYLIVESTREAMSNAPSHOTCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESNAPSHOTCONFIGRESPONSEBODYLIVESTREAMSNAPSHOTCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigListLiveStreamSnapshotConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamSnapshotConfig, liveStreamSnapshotConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamSnapshotConfig, liveStreamSnapshotConfig_);
    };
    DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigList() = default ;
    DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigList(const DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigList &) = default ;
    DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigList(DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigList &&) = default ;
    DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigList() = default ;
    DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigList& operator=(const DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigList &) = default ;
    DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigList& operator=(DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveStreamSnapshotConfig_ != nullptr; };
    // liveStreamSnapshotConfig Field Functions 
    bool hasLiveStreamSnapshotConfig() const { return this->liveStreamSnapshotConfig_ != nullptr;};
    void deleteLiveStreamSnapshotConfig() { this->liveStreamSnapshotConfig_ = nullptr;};
    inline const vector<Models::DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigListLiveStreamSnapshotConfig> & liveStreamSnapshotConfig() const { DARABONBA_PTR_GET_CONST(liveStreamSnapshotConfig_, vector<Models::DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigListLiveStreamSnapshotConfig>) };
    inline vector<Models::DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigListLiveStreamSnapshotConfig> liveStreamSnapshotConfig() { DARABONBA_PTR_GET(liveStreamSnapshotConfig_, vector<Models::DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigListLiveStreamSnapshotConfig>) };
    inline DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigList& setLiveStreamSnapshotConfig(const vector<Models::DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigListLiveStreamSnapshotConfig> & liveStreamSnapshotConfig) { DARABONBA_PTR_SET_VALUE(liveStreamSnapshotConfig_, liveStreamSnapshotConfig) };
    inline DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigList& setLiveStreamSnapshotConfig(vector<Models::DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigListLiveStreamSnapshotConfig> && liveStreamSnapshotConfig) { DARABONBA_PTR_SET_RVALUE(liveStreamSnapshotConfig_, liveStreamSnapshotConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveSnapshotConfigResponseBodyLiveStreamSnapshotConfigListLiveStreamSnapshotConfig>> liveStreamSnapshotConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
