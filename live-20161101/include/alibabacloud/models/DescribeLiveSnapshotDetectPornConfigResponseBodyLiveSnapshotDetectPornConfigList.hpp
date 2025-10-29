// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESNAPSHOTDETECTPORNCONFIGRESPONSEBODYLIVESNAPSHOTDETECTPORNCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESNAPSHOTDETECTPORNCONFIGRESPONSEBODYLIVESNAPSHOTDETECTPORNCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(LiveSnapshotDetectPornConfig, liveSnapshotDetectPornConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveSnapshotDetectPornConfig, liveSnapshotDetectPornConfig_);
    };
    DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList() = default ;
    DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList(const DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList &) = default ;
    DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList(DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList &&) = default ;
    DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList() = default ;
    DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList& operator=(const DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList &) = default ;
    DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList& operator=(DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveSnapshotDetectPornConfig_ == nullptr; };
    // liveSnapshotDetectPornConfig Field Functions 
    bool hasLiveSnapshotDetectPornConfig() const { return this->liveSnapshotDetectPornConfig_ != nullptr;};
    void deleteLiveSnapshotDetectPornConfig() { this->liveSnapshotDetectPornConfig_ = nullptr;};
    inline const vector<Models::DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfig> & liveSnapshotDetectPornConfig() const { DARABONBA_PTR_GET_CONST(liveSnapshotDetectPornConfig_, vector<Models::DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfig>) };
    inline vector<Models::DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfig> liveSnapshotDetectPornConfig() { DARABONBA_PTR_GET(liveSnapshotDetectPornConfig_, vector<Models::DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfig>) };
    inline DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList& setLiveSnapshotDetectPornConfig(const vector<Models::DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfig> & liveSnapshotDetectPornConfig) { DARABONBA_PTR_SET_VALUE(liveSnapshotDetectPornConfig_, liveSnapshotDetectPornConfig) };
    inline DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigList& setLiveSnapshotDetectPornConfig(vector<Models::DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfig> && liveSnapshotDetectPornConfig) { DARABONBA_PTR_SET_RVALUE(liveSnapshotDetectPornConfig_, liveSnapshotDetectPornConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfig>> liveSnapshotDetectPornConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
