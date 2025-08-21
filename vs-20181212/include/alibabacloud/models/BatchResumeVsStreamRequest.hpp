// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHRESUMEVSSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHRESUMEVSSTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchResumeVsStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchResumeVsStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(ControlStreamAction, controlStreamAction_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(LiveStreamType, liveStreamType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchResumeVsStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(ControlStreamAction, controlStreamAction_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(LiveStreamType, liveStreamType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    BatchResumeVsStreamRequest() = default ;
    BatchResumeVsStreamRequest(const BatchResumeVsStreamRequest &) = default ;
    BatchResumeVsStreamRequest(BatchResumeVsStreamRequest &&) = default ;
    BatchResumeVsStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchResumeVsStreamRequest() = default ;
    BatchResumeVsStreamRequest& operator=(const BatchResumeVsStreamRequest &) = default ;
    BatchResumeVsStreamRequest& operator=(BatchResumeVsStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channel_ != nullptr
        && this->controlStreamAction_ != nullptr && this->domainName_ != nullptr && this->liveStreamType_ != nullptr && this->ownerId_ != nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline BatchResumeVsStreamRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // controlStreamAction Field Functions 
    bool hasControlStreamAction() const { return this->controlStreamAction_ != nullptr;};
    void deleteControlStreamAction() { this->controlStreamAction_ = nullptr;};
    inline string controlStreamAction() const { DARABONBA_PTR_GET_DEFAULT(controlStreamAction_, "") };
    inline BatchResumeVsStreamRequest& setControlStreamAction(string controlStreamAction) { DARABONBA_PTR_SET_VALUE(controlStreamAction_, controlStreamAction) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline BatchResumeVsStreamRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // liveStreamType Field Functions 
    bool hasLiveStreamType() const { return this->liveStreamType_ != nullptr;};
    void deleteLiveStreamType() { this->liveStreamType_ = nullptr;};
    inline string liveStreamType() const { DARABONBA_PTR_GET_DEFAULT(liveStreamType_, "") };
    inline BatchResumeVsStreamRequest& setLiveStreamType(string liveStreamType) { DARABONBA_PTR_SET_VALUE(liveStreamType_, liveStreamType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BatchResumeVsStreamRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> channel_ = nullptr;
    std::shared_ptr<string> controlStreamAction_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> liveStreamType_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
