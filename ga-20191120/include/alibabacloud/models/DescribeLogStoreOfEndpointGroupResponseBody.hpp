// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGSTOREOFENDPOINTGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGSTOREOFENDPOINTGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class DescribeLogStoreOfEndpointGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogStoreOfEndpointGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(AccessLogRecordCustomizedHeaderList, accessLogRecordCustomizedHeaderList_);
      DARABONBA_PTR_TO_JSON(AccessLogRecordCustomizedHeadersEnabled, accessLogRecordCustomizedHeadersEnabled_);
      DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlsLogStoreName, slsLogStoreName_);
      DARABONBA_PTR_TO_JSON(SlsProjectName, slsProjectName_);
      DARABONBA_PTR_TO_JSON(SlsRegionId, slsRegionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogStoreOfEndpointGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(AccessLogRecordCustomizedHeaderList, accessLogRecordCustomizedHeaderList_);
      DARABONBA_PTR_FROM_JSON(AccessLogRecordCustomizedHeadersEnabled, accessLogRecordCustomizedHeadersEnabled_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlsLogStoreName, slsLogStoreName_);
      DARABONBA_PTR_FROM_JSON(SlsProjectName, slsProjectName_);
      DARABONBA_PTR_FROM_JSON(SlsRegionId, slsRegionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeLogStoreOfEndpointGroupResponseBody() = default ;
    DescribeLogStoreOfEndpointGroupResponseBody(const DescribeLogStoreOfEndpointGroupResponseBody &) = default ;
    DescribeLogStoreOfEndpointGroupResponseBody(DescribeLogStoreOfEndpointGroupResponseBody &&) = default ;
    DescribeLogStoreOfEndpointGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogStoreOfEndpointGroupResponseBody() = default ;
    DescribeLogStoreOfEndpointGroupResponseBody& operator=(const DescribeLogStoreOfEndpointGroupResponseBody &) = default ;
    DescribeLogStoreOfEndpointGroupResponseBody& operator=(DescribeLogStoreOfEndpointGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->accessLogRecordCustomizedHeaderList_ == nullptr && this->accessLogRecordCustomizedHeadersEnabled_ == nullptr && this->endpointGroupId_ == nullptr && this->listenerId_ == nullptr && this->requestId_ == nullptr
        && this->slsLogStoreName_ == nullptr && this->slsProjectName_ == nullptr && this->slsRegionId_ == nullptr && this->status_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline DescribeLogStoreOfEndpointGroupResponseBody& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // accessLogRecordCustomizedHeaderList Field Functions 
    bool hasAccessLogRecordCustomizedHeaderList() const { return this->accessLogRecordCustomizedHeaderList_ != nullptr;};
    void deleteAccessLogRecordCustomizedHeaderList() { this->accessLogRecordCustomizedHeaderList_ = nullptr;};
    inline const vector<string> & getAccessLogRecordCustomizedHeaderList() const { DARABONBA_PTR_GET_CONST(accessLogRecordCustomizedHeaderList_, vector<string>) };
    inline vector<string> getAccessLogRecordCustomizedHeaderList() { DARABONBA_PTR_GET(accessLogRecordCustomizedHeaderList_, vector<string>) };
    inline DescribeLogStoreOfEndpointGroupResponseBody& setAccessLogRecordCustomizedHeaderList(const vector<string> & accessLogRecordCustomizedHeaderList) { DARABONBA_PTR_SET_VALUE(accessLogRecordCustomizedHeaderList_, accessLogRecordCustomizedHeaderList) };
    inline DescribeLogStoreOfEndpointGroupResponseBody& setAccessLogRecordCustomizedHeaderList(vector<string> && accessLogRecordCustomizedHeaderList) { DARABONBA_PTR_SET_RVALUE(accessLogRecordCustomizedHeaderList_, accessLogRecordCustomizedHeaderList) };


    // accessLogRecordCustomizedHeadersEnabled Field Functions 
    bool hasAccessLogRecordCustomizedHeadersEnabled() const { return this->accessLogRecordCustomizedHeadersEnabled_ != nullptr;};
    void deleteAccessLogRecordCustomizedHeadersEnabled() { this->accessLogRecordCustomizedHeadersEnabled_ = nullptr;};
    inline bool getAccessLogRecordCustomizedHeadersEnabled() const { DARABONBA_PTR_GET_DEFAULT(accessLogRecordCustomizedHeadersEnabled_, false) };
    inline DescribeLogStoreOfEndpointGroupResponseBody& setAccessLogRecordCustomizedHeadersEnabled(bool accessLogRecordCustomizedHeadersEnabled) { DARABONBA_PTR_SET_VALUE(accessLogRecordCustomizedHeadersEnabled_, accessLogRecordCustomizedHeadersEnabled) };


    // endpointGroupId Field Functions 
    bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
    void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
    inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
    inline DescribeLogStoreOfEndpointGroupResponseBody& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline DescribeLogStoreOfEndpointGroupResponseBody& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogStoreOfEndpointGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsLogStoreName Field Functions 
    bool hasSlsLogStoreName() const { return this->slsLogStoreName_ != nullptr;};
    void deleteSlsLogStoreName() { this->slsLogStoreName_ = nullptr;};
    inline string getSlsLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(slsLogStoreName_, "") };
    inline DescribeLogStoreOfEndpointGroupResponseBody& setSlsLogStoreName(string slsLogStoreName) { DARABONBA_PTR_SET_VALUE(slsLogStoreName_, slsLogStoreName) };


    // slsProjectName Field Functions 
    bool hasSlsProjectName() const { return this->slsProjectName_ != nullptr;};
    void deleteSlsProjectName() { this->slsProjectName_ = nullptr;};
    inline string getSlsProjectName() const { DARABONBA_PTR_GET_DEFAULT(slsProjectName_, "") };
    inline DescribeLogStoreOfEndpointGroupResponseBody& setSlsProjectName(string slsProjectName) { DARABONBA_PTR_SET_VALUE(slsProjectName_, slsProjectName) };


    // slsRegionId Field Functions 
    bool hasSlsRegionId() const { return this->slsRegionId_ != nullptr;};
    void deleteSlsRegionId() { this->slsRegionId_ = nullptr;};
    inline string getSlsRegionId() const { DARABONBA_PTR_GET_DEFAULT(slsRegionId_, "") };
    inline DescribeLogStoreOfEndpointGroupResponseBody& setSlsRegionId(string slsRegionId) { DARABONBA_PTR_SET_VALUE(slsRegionId_, slsRegionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeLogStoreOfEndpointGroupResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the GA instance.
    shared_ptr<string> acceleratorId_ {};
    shared_ptr<vector<string>> accessLogRecordCustomizedHeaderList_ {};
    shared_ptr<bool> accessLogRecordCustomizedHeadersEnabled_ {};
    // The ID of the endpoint group.
    shared_ptr<string> endpointGroupId_ {};
    // The ID of the listener.
    shared_ptr<string> listenerId_ {};
    // The response parameters.
    shared_ptr<string> requestId_ {};
    // The name of the Logstore.
    shared_ptr<string> slsLogStoreName_ {};
    // The name of the Simple Log Service project.
    shared_ptr<string> slsProjectName_ {};
    // The region ID of the Simple Log Service project.
    shared_ptr<string> slsRegionId_ {};
    // Indicates whether the endpoint group is bound to the Simple Log Service project.
    // 
    // *   **on:** The endpoint group is bound to the Simple Log Service project.
    // *   **off:** The endpoint group is not bound to the Simple Log Service project.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
