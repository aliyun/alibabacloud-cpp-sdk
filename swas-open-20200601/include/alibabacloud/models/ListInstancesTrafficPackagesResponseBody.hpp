// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESTRAFFICPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESTRAFFICPACKAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class ListInstancesTrafficPackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesTrafficPackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceTrafficPackageUsages, instanceTrafficPackageUsages_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesTrafficPackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceTrafficPackageUsages, instanceTrafficPackageUsages_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInstancesTrafficPackagesResponseBody() = default ;
    ListInstancesTrafficPackagesResponseBody(const ListInstancesTrafficPackagesResponseBody &) = default ;
    ListInstancesTrafficPackagesResponseBody(ListInstancesTrafficPackagesResponseBody &&) = default ;
    ListInstancesTrafficPackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesTrafficPackagesResponseBody() = default ;
    ListInstancesTrafficPackagesResponseBody& operator=(const ListInstancesTrafficPackagesResponseBody &) = default ;
    ListInstancesTrafficPackagesResponseBody& operator=(ListInstancesTrafficPackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceTrafficPackageUsages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceTrafficPackageUsages& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(TrafficOverflow, trafficOverflow_);
        DARABONBA_PTR_TO_JSON(TrafficPackageRemaining, trafficPackageRemaining_);
        DARABONBA_PTR_TO_JSON(TrafficPackageTotal, trafficPackageTotal_);
        DARABONBA_PTR_TO_JSON(TrafficUsed, trafficUsed_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceTrafficPackageUsages& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(TrafficOverflow, trafficOverflow_);
        DARABONBA_PTR_FROM_JSON(TrafficPackageRemaining, trafficPackageRemaining_);
        DARABONBA_PTR_FROM_JSON(TrafficPackageTotal, trafficPackageTotal_);
        DARABONBA_PTR_FROM_JSON(TrafficUsed, trafficUsed_);
      };
      InstanceTrafficPackageUsages() = default ;
      InstanceTrafficPackageUsages(const InstanceTrafficPackageUsages &) = default ;
      InstanceTrafficPackageUsages(InstanceTrafficPackageUsages &&) = default ;
      InstanceTrafficPackageUsages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceTrafficPackageUsages() = default ;
      InstanceTrafficPackageUsages& operator=(const InstanceTrafficPackageUsages &) = default ;
      InstanceTrafficPackageUsages& operator=(InstanceTrafficPackageUsages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->trafficOverflow_ == nullptr && this->trafficPackageRemaining_ == nullptr && this->trafficPackageTotal_ == nullptr && this->trafficUsed_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceTrafficPackageUsages& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // trafficOverflow Field Functions 
      bool hasTrafficOverflow() const { return this->trafficOverflow_ != nullptr;};
      void deleteTrafficOverflow() { this->trafficOverflow_ = nullptr;};
      inline int64_t getTrafficOverflow() const { DARABONBA_PTR_GET_DEFAULT(trafficOverflow_, 0L) };
      inline InstanceTrafficPackageUsages& setTrafficOverflow(int64_t trafficOverflow) { DARABONBA_PTR_SET_VALUE(trafficOverflow_, trafficOverflow) };


      // trafficPackageRemaining Field Functions 
      bool hasTrafficPackageRemaining() const { return this->trafficPackageRemaining_ != nullptr;};
      void deleteTrafficPackageRemaining() { this->trafficPackageRemaining_ = nullptr;};
      inline int64_t getTrafficPackageRemaining() const { DARABONBA_PTR_GET_DEFAULT(trafficPackageRemaining_, 0L) };
      inline InstanceTrafficPackageUsages& setTrafficPackageRemaining(int64_t trafficPackageRemaining) { DARABONBA_PTR_SET_VALUE(trafficPackageRemaining_, trafficPackageRemaining) };


      // trafficPackageTotal Field Functions 
      bool hasTrafficPackageTotal() const { return this->trafficPackageTotal_ != nullptr;};
      void deleteTrafficPackageTotal() { this->trafficPackageTotal_ = nullptr;};
      inline int64_t getTrafficPackageTotal() const { DARABONBA_PTR_GET_DEFAULT(trafficPackageTotal_, 0L) };
      inline InstanceTrafficPackageUsages& setTrafficPackageTotal(int64_t trafficPackageTotal) { DARABONBA_PTR_SET_VALUE(trafficPackageTotal_, trafficPackageTotal) };


      // trafficUsed Field Functions 
      bool hasTrafficUsed() const { return this->trafficUsed_ != nullptr;};
      void deleteTrafficUsed() { this->trafficUsed_ = nullptr;};
      inline int64_t getTrafficUsed() const { DARABONBA_PTR_GET_DEFAULT(trafficUsed_, 0L) };
      inline InstanceTrafficPackageUsages& setTrafficUsed(int64_t trafficUsed) { DARABONBA_PTR_SET_VALUE(trafficUsed_, trafficUsed) };


    protected:
      // The ID of the simple application server.
      shared_ptr<string> instanceId_ {};
      // The data transfers that exceeds the quota of the data transfer plan in the current month. Unit: Byte.
      shared_ptr<int64_t> trafficOverflow_ {};
      // The unused quota of the data transfer plan in the current month. Unit: Byte.
      shared_ptr<int64_t> trafficPackageRemaining_ {};
      // The quota of the data transfer plan in the current month. Unit: Byte.
      // 
      // > TrafficPackageTotal = TrafficUsed + TrafficPackageRemaining
      shared_ptr<int64_t> trafficPackageTotal_ {};
      // The used quota of the data transfer plan in the current month. Unit: Byte.
      shared_ptr<int64_t> trafficUsed_ {};
    };

    virtual bool empty() const override { return this->instanceTrafficPackageUsages_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceTrafficPackageUsages Field Functions 
    bool hasInstanceTrafficPackageUsages() const { return this->instanceTrafficPackageUsages_ != nullptr;};
    void deleteInstanceTrafficPackageUsages() { this->instanceTrafficPackageUsages_ = nullptr;};
    inline const vector<ListInstancesTrafficPackagesResponseBody::InstanceTrafficPackageUsages> & getInstanceTrafficPackageUsages() const { DARABONBA_PTR_GET_CONST(instanceTrafficPackageUsages_, vector<ListInstancesTrafficPackagesResponseBody::InstanceTrafficPackageUsages>) };
    inline vector<ListInstancesTrafficPackagesResponseBody::InstanceTrafficPackageUsages> getInstanceTrafficPackageUsages() { DARABONBA_PTR_GET(instanceTrafficPackageUsages_, vector<ListInstancesTrafficPackagesResponseBody::InstanceTrafficPackageUsages>) };
    inline ListInstancesTrafficPackagesResponseBody& setInstanceTrafficPackageUsages(const vector<ListInstancesTrafficPackagesResponseBody::InstanceTrafficPackageUsages> & instanceTrafficPackageUsages) { DARABONBA_PTR_SET_VALUE(instanceTrafficPackageUsages_, instanceTrafficPackageUsages) };
    inline ListInstancesTrafficPackagesResponseBody& setInstanceTrafficPackageUsages(vector<ListInstancesTrafficPackagesResponseBody::InstanceTrafficPackageUsages> && instanceTrafficPackageUsages) { DARABONBA_PTR_SET_RVALUE(instanceTrafficPackageUsages_, instanceTrafficPackageUsages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancesTrafficPackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data transfers that exceed the quota of the data transfer plan in the current month. Unit: bytes.
    shared_ptr<vector<ListInstancesTrafficPackagesResponseBody::InstanceTrafficPackageUsages>> instanceTrafficPackageUsages_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
