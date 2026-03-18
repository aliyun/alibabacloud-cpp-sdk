// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPENEDACCESSLOGINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPENEDACCESSLOGINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class ListOpenedAccessLogInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOpenedAccessLogInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlsConfigStatus, slsConfigStatus_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOpenedAccessLogInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlsConfigStatus, slsConfigStatus_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListOpenedAccessLogInstancesResponseBody() = default ;
    ListOpenedAccessLogInstancesResponseBody(const ListOpenedAccessLogInstancesResponseBody &) = default ;
    ListOpenedAccessLogInstancesResponseBody(ListOpenedAccessLogInstancesResponseBody &&) = default ;
    ListOpenedAccessLogInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOpenedAccessLogInstancesResponseBody() = default ;
    ListOpenedAccessLogInstancesResponseBody& operator=(const ListOpenedAccessLogInstancesResponseBody &) = default ;
    ListOpenedAccessLogInstancesResponseBody& operator=(ListOpenedAccessLogInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SlsConfigStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlsConfigStatus& obj) { 
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, SlsConfigStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      SlsConfigStatus() = default ;
      SlsConfigStatus(const SlsConfigStatus &) = default ;
      SlsConfigStatus(SlsConfigStatus &&) = default ;
      SlsConfigStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlsConfigStatus() = default ;
      SlsConfigStatus& operator=(const SlsConfigStatus &) = default ;
      SlsConfigStatus& operator=(SlsConfigStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enable_ == nullptr
        && this->instanceId_ == nullptr; };
      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline SlsConfigStatus& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline SlsConfigStatus& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // Indicates whether log analysis was enabled for the Anti-DDoS Origin instance. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> enable_ {};
      // The ID of the Anti-DDoS Origin instance.
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->slsConfigStatus_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOpenedAccessLogInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsConfigStatus Field Functions 
    bool hasSlsConfigStatus() const { return this->slsConfigStatus_ != nullptr;};
    void deleteSlsConfigStatus() { this->slsConfigStatus_ = nullptr;};
    inline const vector<ListOpenedAccessLogInstancesResponseBody::SlsConfigStatus> & getSlsConfigStatus() const { DARABONBA_PTR_GET_CONST(slsConfigStatus_, vector<ListOpenedAccessLogInstancesResponseBody::SlsConfigStatus>) };
    inline vector<ListOpenedAccessLogInstancesResponseBody::SlsConfigStatus> getSlsConfigStatus() { DARABONBA_PTR_GET(slsConfigStatus_, vector<ListOpenedAccessLogInstancesResponseBody::SlsConfigStatus>) };
    inline ListOpenedAccessLogInstancesResponseBody& setSlsConfigStatus(const vector<ListOpenedAccessLogInstancesResponseBody::SlsConfigStatus> & slsConfigStatus) { DARABONBA_PTR_SET_VALUE(slsConfigStatus_, slsConfigStatus) };
    inline ListOpenedAccessLogInstancesResponseBody& setSlsConfigStatus(vector<ListOpenedAccessLogInstancesResponseBody::SlsConfigStatus> && slsConfigStatus) { DARABONBA_PTR_SET_RVALUE(slsConfigStatus_, slsConfigStatus) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListOpenedAccessLogInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The configuration of log analysis for the Anti-DDoS Origin instances.
    shared_ptr<vector<ListOpenedAccessLogInstancesResponseBody::SlsConfigStatus>> slsConfigStatus_ {};
    // The number of the Anti-DDoS Origin instances for which log analysis was enabled.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
