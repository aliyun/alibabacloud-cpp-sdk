// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOGSTORECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOGSTORECONFIGREQUEST_HPP_
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
  class UpdateLogStoreConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLogStoreConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(AccessLogRecordCustomizedHeaderList, accessLogRecordCustomizedHeaderList_);
      DARABONBA_PTR_TO_JSON(AccessLogRecordCustomizedHeadersEnabled, accessLogRecordCustomizedHeadersEnabled_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SlsLogStoreName, slsLogStoreName_);
      DARABONBA_PTR_TO_JSON(SlsProjectName, slsProjectName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLogStoreConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(AccessLogRecordCustomizedHeaderList, accessLogRecordCustomizedHeaderList_);
      DARABONBA_PTR_FROM_JSON(AccessLogRecordCustomizedHeadersEnabled, accessLogRecordCustomizedHeadersEnabled_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SlsLogStoreName, slsLogStoreName_);
      DARABONBA_PTR_FROM_JSON(SlsProjectName, slsProjectName_);
    };
    UpdateLogStoreConfigRequest() = default ;
    UpdateLogStoreConfigRequest(const UpdateLogStoreConfigRequest &) = default ;
    UpdateLogStoreConfigRequest(UpdateLogStoreConfigRequest &&) = default ;
    UpdateLogStoreConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLogStoreConfigRequest() = default ;
    UpdateLogStoreConfigRequest& operator=(const UpdateLogStoreConfigRequest &) = default ;
    UpdateLogStoreConfigRequest& operator=(UpdateLogStoreConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->accessLogRecordCustomizedHeaderList_ == nullptr && this->accessLogRecordCustomizedHeadersEnabled_ == nullptr && this->clientToken_ == nullptr && this->endpointGroupId_ == nullptr && this->listenerId_ == nullptr
        && this->regionId_ == nullptr && this->slsLogStoreName_ == nullptr && this->slsProjectName_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline UpdateLogStoreConfigRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // accessLogRecordCustomizedHeaderList Field Functions 
    bool hasAccessLogRecordCustomizedHeaderList() const { return this->accessLogRecordCustomizedHeaderList_ != nullptr;};
    void deleteAccessLogRecordCustomizedHeaderList() { this->accessLogRecordCustomizedHeaderList_ = nullptr;};
    inline const vector<string> & getAccessLogRecordCustomizedHeaderList() const { DARABONBA_PTR_GET_CONST(accessLogRecordCustomizedHeaderList_, vector<string>) };
    inline vector<string> getAccessLogRecordCustomizedHeaderList() { DARABONBA_PTR_GET(accessLogRecordCustomizedHeaderList_, vector<string>) };
    inline UpdateLogStoreConfigRequest& setAccessLogRecordCustomizedHeaderList(const vector<string> & accessLogRecordCustomizedHeaderList) { DARABONBA_PTR_SET_VALUE(accessLogRecordCustomizedHeaderList_, accessLogRecordCustomizedHeaderList) };
    inline UpdateLogStoreConfigRequest& setAccessLogRecordCustomizedHeaderList(vector<string> && accessLogRecordCustomizedHeaderList) { DARABONBA_PTR_SET_RVALUE(accessLogRecordCustomizedHeaderList_, accessLogRecordCustomizedHeaderList) };


    // accessLogRecordCustomizedHeadersEnabled Field Functions 
    bool hasAccessLogRecordCustomizedHeadersEnabled() const { return this->accessLogRecordCustomizedHeadersEnabled_ != nullptr;};
    void deleteAccessLogRecordCustomizedHeadersEnabled() { this->accessLogRecordCustomizedHeadersEnabled_ = nullptr;};
    inline bool getAccessLogRecordCustomizedHeadersEnabled() const { DARABONBA_PTR_GET_DEFAULT(accessLogRecordCustomizedHeadersEnabled_, false) };
    inline UpdateLogStoreConfigRequest& setAccessLogRecordCustomizedHeadersEnabled(bool accessLogRecordCustomizedHeadersEnabled) { DARABONBA_PTR_SET_VALUE(accessLogRecordCustomizedHeadersEnabled_, accessLogRecordCustomizedHeadersEnabled) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateLogStoreConfigRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // endpointGroupId Field Functions 
    bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
    void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
    inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
    inline UpdateLogStoreConfigRequest& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline UpdateLogStoreConfigRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateLogStoreConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slsLogStoreName Field Functions 
    bool hasSlsLogStoreName() const { return this->slsLogStoreName_ != nullptr;};
    void deleteSlsLogStoreName() { this->slsLogStoreName_ = nullptr;};
    inline string getSlsLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(slsLogStoreName_, "") };
    inline UpdateLogStoreConfigRequest& setSlsLogStoreName(string slsLogStoreName) { DARABONBA_PTR_SET_VALUE(slsLogStoreName_, slsLogStoreName) };


    // slsProjectName Field Functions 
    bool hasSlsProjectName() const { return this->slsProjectName_ != nullptr;};
    void deleteSlsProjectName() { this->slsProjectName_ = nullptr;};
    inline string getSlsProjectName() const { DARABONBA_PTR_GET_DEFAULT(slsProjectName_, "") };
    inline UpdateLogStoreConfigRequest& setSlsProjectName(string slsProjectName) { DARABONBA_PTR_SET_VALUE(slsProjectName_, slsProjectName) };


  protected:
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    shared_ptr<vector<string>> accessLogRecordCustomizedHeaderList_ {};
    shared_ptr<bool> accessLogRecordCustomizedHeadersEnabled_ {};
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> endpointGroupId_ {};
    // This parameter is required.
    shared_ptr<string> listenerId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> slsLogStoreName_ {};
    // This parameter is required.
    shared_ptr<string> slsProjectName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
