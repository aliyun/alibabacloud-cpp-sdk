// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEAFTERANSWERDELAYPLAYBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEAFTERANSWERDELAYPLAYBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class SaveAfterAnswerDelayPlaybackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveAfterAnswerDelayPlaybackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AfterAnswerDelayPlayback, afterAnswerDelayPlayback_);
      DARABONBA_PTR_TO_JSON(EntryId, entryId_);
      DARABONBA_PTR_TO_JSON(StrategyLevel, strategyLevel_);
    };
    friend void from_json(const Darabonba::Json& j, SaveAfterAnswerDelayPlaybackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterAnswerDelayPlayback, afterAnswerDelayPlayback_);
      DARABONBA_PTR_FROM_JSON(EntryId, entryId_);
      DARABONBA_PTR_FROM_JSON(StrategyLevel, strategyLevel_);
    };
    SaveAfterAnswerDelayPlaybackRequest() = default ;
    SaveAfterAnswerDelayPlaybackRequest(const SaveAfterAnswerDelayPlaybackRequest &) = default ;
    SaveAfterAnswerDelayPlaybackRequest(SaveAfterAnswerDelayPlaybackRequest &&) = default ;
    SaveAfterAnswerDelayPlaybackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveAfterAnswerDelayPlaybackRequest() = default ;
    SaveAfterAnswerDelayPlaybackRequest& operator=(const SaveAfterAnswerDelayPlaybackRequest &) = default ;
    SaveAfterAnswerDelayPlaybackRequest& operator=(SaveAfterAnswerDelayPlaybackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->afterAnswerDelayPlayback_ == nullptr
        && return this->entryId_ == nullptr && return this->strategyLevel_ == nullptr; };
    // afterAnswerDelayPlayback Field Functions 
    bool hasAfterAnswerDelayPlayback() const { return this->afterAnswerDelayPlayback_ != nullptr;};
    void deleteAfterAnswerDelayPlayback() { this->afterAnswerDelayPlayback_ = nullptr;};
    inline int32_t afterAnswerDelayPlayback() const { DARABONBA_PTR_GET_DEFAULT(afterAnswerDelayPlayback_, 0) };
    inline SaveAfterAnswerDelayPlaybackRequest& setAfterAnswerDelayPlayback(int32_t afterAnswerDelayPlayback) { DARABONBA_PTR_SET_VALUE(afterAnswerDelayPlayback_, afterAnswerDelayPlayback) };


    // entryId Field Functions 
    bool hasEntryId() const { return this->entryId_ != nullptr;};
    void deleteEntryId() { this->entryId_ = nullptr;};
    inline string entryId() const { DARABONBA_PTR_GET_DEFAULT(entryId_, "") };
    inline SaveAfterAnswerDelayPlaybackRequest& setEntryId(string entryId) { DARABONBA_PTR_SET_VALUE(entryId_, entryId) };


    // strategyLevel Field Functions 
    bool hasStrategyLevel() const { return this->strategyLevel_ != nullptr;};
    void deleteStrategyLevel() { this->strategyLevel_ = nullptr;};
    inline int32_t strategyLevel() const { DARABONBA_PTR_GET_DEFAULT(strategyLevel_, 0) };
    inline SaveAfterAnswerDelayPlaybackRequest& setStrategyLevel(int32_t strategyLevel) { DARABONBA_PTR_SET_VALUE(strategyLevel_, strategyLevel) };


  protected:
    std::shared_ptr<int32_t> afterAnswerDelayPlayback_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> entryId_ = nullptr;
    std::shared_ptr<int32_t> strategyLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
