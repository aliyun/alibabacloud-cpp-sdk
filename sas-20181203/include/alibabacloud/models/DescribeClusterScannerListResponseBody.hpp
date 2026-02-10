// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSCANNERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSCANNERLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterScannerListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterScannerListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstalledCount, installedCount_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterScannerListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstalledCount, installedCount_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterScannerListResponseBody() = default ;
    DescribeClusterScannerListResponseBody(const DescribeClusterScannerListResponseBody &) = default ;
    DescribeClusterScannerListResponseBody(DescribeClusterScannerListResponseBody &&) = default ;
    DescribeClusterScannerListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterScannerListResponseBody() = default ;
    DescribeClusterScannerListResponseBody& operator=(const DescribeClusterScannerListResponseBody &) = default ;
    DescribeClusterScannerListResponseBody& operator=(DescribeClusterScannerListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
        DARABONBA_PTR_TO_JSON(NeedUpdate, needUpdate_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(WebhookOpen, webhookOpen_);
        DARABONBA_PTR_TO_JSON(WebhookStatus, webhookStatus_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
        DARABONBA_PTR_FROM_JSON(NeedUpdate, needUpdate_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(WebhookOpen, webhookOpen_);
        DARABONBA_PTR_FROM_JSON(WebhookStatus, webhookStatus_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->lastTime_ == nullptr
        && this->needUpdate_ == nullptr && this->status_ == nullptr && this->version_ == nullptr && this->webhookOpen_ == nullptr && this->webhookStatus_ == nullptr; };
      // lastTime Field Functions 
      bool hasLastTime() const { return this->lastTime_ != nullptr;};
      void deleteLastTime() { this->lastTime_ = nullptr;};
      inline int64_t getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
      inline List& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


      // needUpdate Field Functions 
      bool hasNeedUpdate() const { return this->needUpdate_ != nullptr;};
      void deleteNeedUpdate() { this->needUpdate_ = nullptr;};
      inline bool getNeedUpdate() const { DARABONBA_PTR_GET_DEFAULT(needUpdate_, false) };
      inline List& setNeedUpdate(bool needUpdate) { DARABONBA_PTR_SET_VALUE(needUpdate_, needUpdate) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline List& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // webhookOpen Field Functions 
      bool hasWebhookOpen() const { return this->webhookOpen_ != nullptr;};
      void deleteWebhookOpen() { this->webhookOpen_ = nullptr;};
      inline int32_t getWebhookOpen() const { DARABONBA_PTR_GET_DEFAULT(webhookOpen_, 0) };
      inline List& setWebhookOpen(int32_t webhookOpen) { DARABONBA_PTR_SET_VALUE(webhookOpen_, webhookOpen) };


      // webhookStatus Field Functions 
      bool hasWebhookStatus() const { return this->webhookStatus_ != nullptr;};
      void deleteWebhookStatus() { this->webhookStatus_ = nullptr;};
      inline string getWebhookStatus() const { DARABONBA_PTR_GET_DEFAULT(webhookStatus_, "") };
      inline List& setWebhookStatus(string webhookStatus) { DARABONBA_PTR_SET_VALUE(webhookStatus_, webhookStatus) };


    protected:
      // Latest heartbeat time.
      shared_ptr<int64_t> lastTime_ {};
      // Whether an update is needed.
      shared_ptr<bool> needUpdate_ {};
      // Scanner status. Values:
      // - **online**: Running
      // - **offline**: Offline
      // - **not_installed**: Not Installed
      shared_ptr<string> status_ {};
      // Version number.
      shared_ptr<string> version_ {};
      // Whether the incremental scan switch is enabled. Values: 
      // - **0**: Not enabled
      //  - **1**: Enabled
      shared_ptr<int32_t> webhookOpen_ {};
      // The incremental scan component status. Values: 
      // - **n**: Not deployed 
      // - **y**: Deployed
      shared_ptr<string> webhookStatus_ {};
    };

    virtual bool empty() const override { return this->installedCount_ == nullptr
        && this->list_ == nullptr && this->requestId_ == nullptr; };
    // installedCount Field Functions 
    bool hasInstalledCount() const { return this->installedCount_ != nullptr;};
    void deleteInstalledCount() { this->installedCount_ = nullptr;};
    inline int32_t getInstalledCount() const { DARABONBA_PTR_GET_DEFAULT(installedCount_, 0) };
    inline DescribeClusterScannerListResponseBody& setInstalledCount(int32_t installedCount) { DARABONBA_PTR_SET_VALUE(installedCount_, installedCount) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<DescribeClusterScannerListResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<DescribeClusterScannerListResponseBody::List>) };
    inline vector<DescribeClusterScannerListResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<DescribeClusterScannerListResponseBody::List>) };
    inline DescribeClusterScannerListResponseBody& setList(const vector<DescribeClusterScannerListResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeClusterScannerListResponseBody& setList(vector<DescribeClusterScannerListResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterScannerListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Number of clusters with installed scanners.
    shared_ptr<int32_t> installedCount_ {};
    // List of clusters.
    shared_ptr<vector<DescribeClusterScannerListResponseBody::List>> list_ {};
    // The ID of this request, generated by Alibaba Cloud as a unique identifier, which can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
