// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMONITORLISTRESPONSEBODYLIVESTREAMMONITORLISTINPUTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMONITORLISTRESPONSEBODYLIVESTREAMMONITORLISTINPUTLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig.hpp>
#include <alibabacloud/models/DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList& obj) { 
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(InputUrl, inputUrl_);
      DARABONBA_PTR_TO_JSON(LayoutConfig, layoutConfig_);
      DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_TO_JSON(PlayConfig, playConfig_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList& obj) { 
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(InputUrl, inputUrl_);
      DARABONBA_PTR_FROM_JSON(LayoutConfig, layoutConfig_);
      DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_FROM_JSON(PlayConfig, playConfig_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList() = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList(const DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList &) = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList(DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList &&) = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList() = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList& operator=(const DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList &) = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList& operator=(DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->index_ != nullptr
        && this->inputUrl_ != nullptr && this->layoutConfig_ != nullptr && this->layoutId_ != nullptr && this->playConfig_ != nullptr && this->streamName_ != nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // inputUrl Field Functions 
    bool hasInputUrl() const { return this->inputUrl_ != nullptr;};
    void deleteInputUrl() { this->inputUrl_ = nullptr;};
    inline string inputUrl() const { DARABONBA_PTR_GET_DEFAULT(inputUrl_, "") };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList& setInputUrl(string inputUrl) { DARABONBA_PTR_SET_VALUE(inputUrl_, inputUrl) };


    // layoutConfig Field Functions 
    bool hasLayoutConfig() const { return this->layoutConfig_ != nullptr;};
    void deleteLayoutConfig() { this->layoutConfig_ = nullptr;};
    inline const Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig & layoutConfig() const { DARABONBA_PTR_GET_CONST(layoutConfig_, Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig) };
    inline Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig layoutConfig() { DARABONBA_PTR_GET(layoutConfig_, Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig) };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList& setLayoutConfig(const Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig & layoutConfig) { DARABONBA_PTR_SET_VALUE(layoutConfig_, layoutConfig) };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList& setLayoutConfig(Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig && layoutConfig) { DARABONBA_PTR_SET_RVALUE(layoutConfig_, layoutConfig) };


    // layoutId Field Functions 
    bool hasLayoutId() const { return this->layoutId_ != nullptr;};
    void deleteLayoutId() { this->layoutId_ = nullptr;};
    inline int32_t layoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, 0) };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList& setLayoutId(int32_t layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


    // playConfig Field Functions 
    bool hasPlayConfig() const { return this->playConfig_ != nullptr;};
    void deletePlayConfig() { this->playConfig_ = nullptr;};
    inline const Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig & playConfig() const { DARABONBA_PTR_GET_CONST(playConfig_, Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig) };
    inline Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig playConfig() { DARABONBA_PTR_GET(playConfig_, Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig) };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList& setPlayConfig(const Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig & playConfig) { DARABONBA_PTR_SET_VALUE(playConfig_, playConfig) };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList& setPlayConfig(Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig && playConfig) { DARABONBA_PTR_SET_RVALUE(playConfig_, playConfig) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The index.
    std::shared_ptr<int32_t> index_ = nullptr;
    // The URL of the input stream.
    std::shared_ptr<string> inputUrl_ = nullptr;
    // The layout information.
    std::shared_ptr<Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListLayoutConfig> layoutConfig_ = nullptr;
    // The layout ID, which must start from 1.
    std::shared_ptr<int32_t> layoutId_ = nullptr;
    // The playback configurations.
    std::shared_ptr<Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputListPlayConfig> playConfig_ = nullptr;
    // The display name of the monitored stream.
    std::shared_ptr<string> streamName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
