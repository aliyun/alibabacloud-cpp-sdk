// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMIXSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMIXSTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteMixStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMixStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(MixStreamId, mixStreamId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMixStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(MixStreamId, mixStreamId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    DeleteMixStreamRequest() = default ;
    DeleteMixStreamRequest(const DeleteMixStreamRequest &) = default ;
    DeleteMixStreamRequest(DeleteMixStreamRequest &&) = default ;
    DeleteMixStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMixStreamRequest() = default ;
    DeleteMixStreamRequest& operator=(const DeleteMixStreamRequest &) = default ;
    DeleteMixStreamRequest& operator=(DeleteMixStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->domainName_ == nullptr && return this->mixStreamId_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->streamName_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DeleteMixStreamRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DeleteMixStreamRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // mixStreamId Field Functions 
    bool hasMixStreamId() const { return this->mixStreamId_ != nullptr;};
    void deleteMixStreamId() { this->mixStreamId_ = nullptr;};
    inline string mixStreamId() const { DARABONBA_PTR_GET_DEFAULT(mixStreamId_, "") };
    inline DeleteMixStreamRequest& setMixStreamId(string mixStreamId) { DARABONBA_PTR_SET_VALUE(mixStreamId_, mixStreamId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteMixStreamRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteMixStreamRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DeleteMixStreamRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the stream mixing task. If the task was created by calling the [CreateMixStream](https://help.aliyun.com/document_detail/2848087.html) operation, check the value of the response parameter MixStreamId to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> mixStreamId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the output stream.
    std::shared_ptr<string> streamName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
