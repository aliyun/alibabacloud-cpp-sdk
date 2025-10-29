// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINREALTIMELOGDELIVERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINREALTIMELOGDELIVERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainRealtimeLogDeliveryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainRealtimeLogDeliveryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Logstore, logstore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainRealtimeLogDeliveryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Logstore, logstore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeLiveDomainRealtimeLogDeliveryResponseBody() = default ;
    DescribeLiveDomainRealtimeLogDeliveryResponseBody(const DescribeLiveDomainRealtimeLogDeliveryResponseBody &) = default ;
    DescribeLiveDomainRealtimeLogDeliveryResponseBody(DescribeLiveDomainRealtimeLogDeliveryResponseBody &&) = default ;
    DescribeLiveDomainRealtimeLogDeliveryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainRealtimeLogDeliveryResponseBody() = default ;
    DescribeLiveDomainRealtimeLogDeliveryResponseBody& operator=(const DescribeLiveDomainRealtimeLogDeliveryResponseBody &) = default ;
    DescribeLiveDomainRealtimeLogDeliveryResponseBody& operator=(DescribeLiveDomainRealtimeLogDeliveryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logstore_ == nullptr
        && return this->project_ == nullptr && return this->region_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr; };
    // logstore Field Functions 
    bool hasLogstore() const { return this->logstore_ != nullptr;};
    void deleteLogstore() { this->logstore_ = nullptr;};
    inline string logstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
    inline DescribeLiveDomainRealtimeLogDeliveryResponseBody& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline DescribeLiveDomainRealtimeLogDeliveryResponseBody& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLiveDomainRealtimeLogDeliveryResponseBody& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainRealtimeLogDeliveryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeLiveDomainRealtimeLogDeliveryResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The name of the Logstore to which log entries are delivered.
    std::shared_ptr<string> logstore_ = nullptr;
    // The name of the Log Service project that is used for real-time log delivery.
    std::shared_ptr<string> project_ = nullptr;
    // The ID of the region where the Log Service project is deployed.
    std::shared_ptr<string> region_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of real-time log delivery. Valid values:
    // 
    // *   online: Real-time log delivery is enabled.
    // *   offline: Real-time log delivery is disabled.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
