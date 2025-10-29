// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLIVEDOMAINMULTISTREAMMASTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETLIVEDOMAINMULTISTREAMMASTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetLiveDomainMultiStreamMasterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLiveDomainMultiStreamMasterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(UpstreamSequence, upstreamSequence_);
    };
    friend void from_json(const Darabonba::Json& j, SetLiveDomainMultiStreamMasterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(UpstreamSequence, upstreamSequence_);
    };
    SetLiveDomainMultiStreamMasterRequest() = default ;
    SetLiveDomainMultiStreamMasterRequest(const SetLiveDomainMultiStreamMasterRequest &) = default ;
    SetLiveDomainMultiStreamMasterRequest(SetLiveDomainMultiStreamMasterRequest &&) = default ;
    SetLiveDomainMultiStreamMasterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLiveDomainMultiStreamMasterRequest() = default ;
    SetLiveDomainMultiStreamMasterRequest& operator=(const SetLiveDomainMultiStreamMasterRequest &) = default ;
    SetLiveDomainMultiStreamMasterRequest& operator=(SetLiveDomainMultiStreamMasterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->domain_ == nullptr && return this->ownerId_ == nullptr && return this->streamName_ == nullptr && return this->upstreamSequence_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline SetLiveDomainMultiStreamMasterRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline SetLiveDomainMultiStreamMasterRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetLiveDomainMultiStreamMasterRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline SetLiveDomainMultiStreamMasterRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // upstreamSequence Field Functions 
    bool hasUpstreamSequence() const { return this->upstreamSequence_ != nullptr;};
    void deleteUpstreamSequence() { this->upstreamSequence_ = nullptr;};
    inline string upstreamSequence() const { DARABONBA_PTR_GET_DEFAULT(upstreamSequence_, "") };
    inline SetLiveDomainMultiStreamMasterRequest& setUpstreamSequence(string upstreamSequence) { DARABONBA_PTR_SET_VALUE(upstreamSequence_, upstreamSequence) };


  protected:
    // The name of the application to which the live stream belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The name of the live stream.
    // 
    // This parameter is required.
    std::shared_ptr<string> streamName_ = nullptr;
    // The unique identifier of the stream ingest.
    // 
    // This parameter is required.
    std::shared_ptr<string> upstreamSequence_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
