// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHBINDPURCHASEDDEVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHBINDPURCHASEDDEVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchBindPurchasedDevicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchBindPurchasedDevicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, BatchBindPurchasedDevicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    BatchBindPurchasedDevicesResponseBody() = default ;
    BatchBindPurchasedDevicesResponseBody(const BatchBindPurchasedDevicesResponseBody &) = default ;
    BatchBindPurchasedDevicesResponseBody(BatchBindPurchasedDevicesResponseBody &&) = default ;
    BatchBindPurchasedDevicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchBindPurchasedDevicesResponseBody() = default ;
    BatchBindPurchasedDevicesResponseBody& operator=(const BatchBindPurchasedDevicesResponseBody &) = default ;
    BatchBindPurchasedDevicesResponseBody& operator=(BatchBindPurchasedDevicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(Error, error_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(Region, region_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(Error, error_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deviceId_ == nullptr
        && this->error_ == nullptr && this->groupId_ == nullptr && this->region_ == nullptr; };
      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline Results& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
      inline Results& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Results& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Results& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    protected:
      shared_ptr<string> deviceId_ {};
      shared_ptr<string> error_ {};
      shared_ptr<string> groupId_ {};
      shared_ptr<string> region_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchBindPurchasedDevicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<BatchBindPurchasedDevicesResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<BatchBindPurchasedDevicesResponseBody::Results>) };
    inline vector<BatchBindPurchasedDevicesResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<BatchBindPurchasedDevicesResponseBody::Results>) };
    inline BatchBindPurchasedDevicesResponseBody& setResults(const vector<BatchBindPurchasedDevicesResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline BatchBindPurchasedDevicesResponseBody& setResults(vector<BatchBindPurchasedDevicesResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<BatchBindPurchasedDevicesResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
