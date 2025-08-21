// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTPUBLISHSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTPUBLISHSTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class StartPublishStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartPublishStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PublishUrl, publishUrl_);
    };
    friend void from_json(const Darabonba::Json& j, StartPublishStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PublishUrl, publishUrl_);
    };
    StartPublishStreamRequest() = default ;
    StartPublishStreamRequest(const StartPublishStreamRequest &) = default ;
    StartPublishStreamRequest(StartPublishStreamRequest &&) = default ;
    StartPublishStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartPublishStreamRequest() = default ;
    StartPublishStreamRequest& operator=(const StartPublishStreamRequest &) = default ;
    StartPublishStreamRequest& operator=(StartPublishStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->ownerId_ != nullptr && this->publishUrl_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline StartPublishStreamRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline StartPublishStreamRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // publishUrl Field Functions 
    bool hasPublishUrl() const { return this->publishUrl_ != nullptr;};
    void deletePublishUrl() { this->publishUrl_ = nullptr;};
    inline string publishUrl() const { DARABONBA_PTR_GET_DEFAULT(publishUrl_, "") };
    inline StartPublishStreamRequest& setPublishUrl(string publishUrl) { DARABONBA_PTR_SET_VALUE(publishUrl_, publishUrl) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> publishUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
