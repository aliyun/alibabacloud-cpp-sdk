// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSCANNERLISTRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSCANNERLISTRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterScannerListResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterScannerListResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
      DARABONBA_PTR_TO_JSON(NeedUpdate, needUpdate_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(WebhookOpen, webhookOpen_);
      DARABONBA_PTR_TO_JSON(WebhookStatus, webhookStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterScannerListResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
      DARABONBA_PTR_FROM_JSON(NeedUpdate, needUpdate_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(WebhookOpen, webhookOpen_);
      DARABONBA_PTR_FROM_JSON(WebhookStatus, webhookStatus_);
    };
    DescribeClusterScannerListResponseBodyList() = default ;
    DescribeClusterScannerListResponseBodyList(const DescribeClusterScannerListResponseBodyList &) = default ;
    DescribeClusterScannerListResponseBodyList(DescribeClusterScannerListResponseBodyList &&) = default ;
    DescribeClusterScannerListResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterScannerListResponseBodyList() = default ;
    DescribeClusterScannerListResponseBodyList& operator=(const DescribeClusterScannerListResponseBodyList &) = default ;
    DescribeClusterScannerListResponseBodyList& operator=(DescribeClusterScannerListResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lastTime_ == nullptr
        && return this->needUpdate_ == nullptr && return this->status_ == nullptr && return this->version_ == nullptr && return this->webhookOpen_ == nullptr && return this->webhookStatus_ == nullptr; };
    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int64_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
    inline DescribeClusterScannerListResponseBodyList& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // needUpdate Field Functions 
    bool hasNeedUpdate() const { return this->needUpdate_ != nullptr;};
    void deleteNeedUpdate() { this->needUpdate_ = nullptr;};
    inline bool needUpdate() const { DARABONBA_PTR_GET_DEFAULT(needUpdate_, false) };
    inline DescribeClusterScannerListResponseBodyList& setNeedUpdate(bool needUpdate) { DARABONBA_PTR_SET_VALUE(needUpdate_, needUpdate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeClusterScannerListResponseBodyList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeClusterScannerListResponseBodyList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // webhookOpen Field Functions 
    bool hasWebhookOpen() const { return this->webhookOpen_ != nullptr;};
    void deleteWebhookOpen() { this->webhookOpen_ = nullptr;};
    inline int32_t webhookOpen() const { DARABONBA_PTR_GET_DEFAULT(webhookOpen_, 0) };
    inline DescribeClusterScannerListResponseBodyList& setWebhookOpen(int32_t webhookOpen) { DARABONBA_PTR_SET_VALUE(webhookOpen_, webhookOpen) };


    // webhookStatus Field Functions 
    bool hasWebhookStatus() const { return this->webhookStatus_ != nullptr;};
    void deleteWebhookStatus() { this->webhookStatus_ = nullptr;};
    inline string webhookStatus() const { DARABONBA_PTR_GET_DEFAULT(webhookStatus_, "") };
    inline DescribeClusterScannerListResponseBodyList& setWebhookStatus(string webhookStatus) { DARABONBA_PTR_SET_VALUE(webhookStatus_, webhookStatus) };


  protected:
    // Latest heartbeat time.
    std::shared_ptr<int64_t> lastTime_ = nullptr;
    // Whether an update is needed.
    std::shared_ptr<bool> needUpdate_ = nullptr;
    // Scanner status. Values:
    // - **online**: Running
    // - **offline**: Offline
    // - **not_installed**: Not Installed
    std::shared_ptr<string> status_ = nullptr;
    // Version number.
    std::shared_ptr<string> version_ = nullptr;
    // Whether the incremental scan switch is enabled. Values: 
    // - **0**: Not enabled
    //  - **1**: Enabled
    std::shared_ptr<int32_t> webhookOpen_ = nullptr;
    // The incremental scan component status. Values: 
    // - **n**: Not deployed 
    // - **y**: Deployed
    std::shared_ptr<string> webhookStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
