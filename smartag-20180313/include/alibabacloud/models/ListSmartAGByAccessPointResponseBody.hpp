// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMARTAGBYACCESSPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSMARTAGBYACCESSPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ListSmartAGByAccessPointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmartAGByAccessPointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SmartAccessGateways, smartAccessGateways_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmartAGByAccessPointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SmartAccessGateways, smartAccessGateways_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSmartAGByAccessPointResponseBody() = default ;
    ListSmartAGByAccessPointResponseBody(const ListSmartAGByAccessPointResponseBody &) = default ;
    ListSmartAGByAccessPointResponseBody(ListSmartAGByAccessPointResponseBody &&) = default ;
    ListSmartAGByAccessPointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmartAGByAccessPointResponseBody() = default ;
    ListSmartAGByAccessPointResponseBody& operator=(const ListSmartAGByAccessPointResponseBody &) = default ;
    ListSmartAGByAccessPointResponseBody& operator=(ListSmartAGByAccessPointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SmartAccessGateways : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SmartAccessGateways& obj) { 
        DARABONBA_PTR_TO_JSON(AssociatedCcnId, associatedCcnId_);
        DARABONBA_PTR_TO_JSON(HardwareVersion, hardwareVersion_);
        DARABONBA_PTR_TO_JSON(RoutingStrategy, routingStrategy_);
        DARABONBA_PTR_TO_JSON(SmartAGDescription, smartAGDescription_);
        DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
        DARABONBA_PTR_TO_JSON(SmartAGName, smartAGName_);
        DARABONBA_PTR_TO_JSON(SmartAGStatus, smartAGStatus_);
      };
      friend void from_json(const Darabonba::Json& j, SmartAccessGateways& obj) { 
        DARABONBA_PTR_FROM_JSON(AssociatedCcnId, associatedCcnId_);
        DARABONBA_PTR_FROM_JSON(HardwareVersion, hardwareVersion_);
        DARABONBA_PTR_FROM_JSON(RoutingStrategy, routingStrategy_);
        DARABONBA_PTR_FROM_JSON(SmartAGDescription, smartAGDescription_);
        DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
        DARABONBA_PTR_FROM_JSON(SmartAGName, smartAGName_);
        DARABONBA_PTR_FROM_JSON(SmartAGStatus, smartAGStatus_);
      };
      SmartAccessGateways() = default ;
      SmartAccessGateways(const SmartAccessGateways &) = default ;
      SmartAccessGateways(SmartAccessGateways &&) = default ;
      SmartAccessGateways(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SmartAccessGateways() = default ;
      SmartAccessGateways& operator=(const SmartAccessGateways &) = default ;
      SmartAccessGateways& operator=(SmartAccessGateways &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->associatedCcnId_ == nullptr
        && this->hardwareVersion_ == nullptr && this->routingStrategy_ == nullptr && this->smartAGDescription_ == nullptr && this->smartAGId_ == nullptr && this->smartAGName_ == nullptr
        && this->smartAGStatus_ == nullptr; };
      // associatedCcnId Field Functions 
      bool hasAssociatedCcnId() const { return this->associatedCcnId_ != nullptr;};
      void deleteAssociatedCcnId() { this->associatedCcnId_ = nullptr;};
      inline string getAssociatedCcnId() const { DARABONBA_PTR_GET_DEFAULT(associatedCcnId_, "") };
      inline SmartAccessGateways& setAssociatedCcnId(string associatedCcnId) { DARABONBA_PTR_SET_VALUE(associatedCcnId_, associatedCcnId) };


      // hardwareVersion Field Functions 
      bool hasHardwareVersion() const { return this->hardwareVersion_ != nullptr;};
      void deleteHardwareVersion() { this->hardwareVersion_ = nullptr;};
      inline string getHardwareVersion() const { DARABONBA_PTR_GET_DEFAULT(hardwareVersion_, "") };
      inline SmartAccessGateways& setHardwareVersion(string hardwareVersion) { DARABONBA_PTR_SET_VALUE(hardwareVersion_, hardwareVersion) };


      // routingStrategy Field Functions 
      bool hasRoutingStrategy() const { return this->routingStrategy_ != nullptr;};
      void deleteRoutingStrategy() { this->routingStrategy_ = nullptr;};
      inline string getRoutingStrategy() const { DARABONBA_PTR_GET_DEFAULT(routingStrategy_, "") };
      inline SmartAccessGateways& setRoutingStrategy(string routingStrategy) { DARABONBA_PTR_SET_VALUE(routingStrategy_, routingStrategy) };


      // smartAGDescription Field Functions 
      bool hasSmartAGDescription() const { return this->smartAGDescription_ != nullptr;};
      void deleteSmartAGDescription() { this->smartAGDescription_ = nullptr;};
      inline string getSmartAGDescription() const { DARABONBA_PTR_GET_DEFAULT(smartAGDescription_, "") };
      inline SmartAccessGateways& setSmartAGDescription(string smartAGDescription) { DARABONBA_PTR_SET_VALUE(smartAGDescription_, smartAGDescription) };


      // smartAGId Field Functions 
      bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
      void deleteSmartAGId() { this->smartAGId_ = nullptr;};
      inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
      inline SmartAccessGateways& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


      // smartAGName Field Functions 
      bool hasSmartAGName() const { return this->smartAGName_ != nullptr;};
      void deleteSmartAGName() { this->smartAGName_ = nullptr;};
      inline string getSmartAGName() const { DARABONBA_PTR_GET_DEFAULT(smartAGName_, "") };
      inline SmartAccessGateways& setSmartAGName(string smartAGName) { DARABONBA_PTR_SET_VALUE(smartAGName_, smartAGName) };


      // smartAGStatus Field Functions 
      bool hasSmartAGStatus() const { return this->smartAGStatus_ != nullptr;};
      void deleteSmartAGStatus() { this->smartAGStatus_ = nullptr;};
      inline string getSmartAGStatus() const { DARABONBA_PTR_GET_DEFAULT(smartAGStatus_, "") };
      inline SmartAccessGateways& setSmartAGStatus(string smartAGStatus) { DARABONBA_PTR_SET_VALUE(smartAGStatus_, smartAGStatus) };


    protected:
      // The ID of the Cloud Connect Network (CCN) instance with which the SAG instance is associated.
      shared_ptr<string> associatedCcnId_ {};
      // The model of the SAG device with which the SAG instance is associated. Valid values:
      // 
      // *   **sag-1000**.
      // *   **sag-100WM**.
      shared_ptr<string> hardwareVersion_ {};
      // The method that the SAG instance uses to synchronize Alibaba Cloud-facing routes. Valid values:
      // 
      // *   **static**: static routing.
      // *   **dynamic**: dynamic routing.
      shared_ptr<string> routingStrategy_ {};
      // The description of the SAG instance.
      shared_ptr<string> smartAGDescription_ {};
      // The ID of the SAG instance.
      shared_ptr<string> smartAGId_ {};
      // The name of the SAG instance.
      shared_ptr<string> smartAGName_ {};
      // The status of the SAG instance. Valid values:
      // 
      // *   **Active**: The SAG device is connected to Alibaba Cloud.
      // *   **offline**: The SAG device is disconnected from Alibaba Cloud.
      shared_ptr<string> smartAGStatus_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->smartAccessGateways_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSmartAGByAccessPointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // smartAccessGateways Field Functions 
    bool hasSmartAccessGateways() const { return this->smartAccessGateways_ != nullptr;};
    void deleteSmartAccessGateways() { this->smartAccessGateways_ = nullptr;};
    inline const vector<ListSmartAGByAccessPointResponseBody::SmartAccessGateways> & getSmartAccessGateways() const { DARABONBA_PTR_GET_CONST(smartAccessGateways_, vector<ListSmartAGByAccessPointResponseBody::SmartAccessGateways>) };
    inline vector<ListSmartAGByAccessPointResponseBody::SmartAccessGateways> getSmartAccessGateways() { DARABONBA_PTR_GET(smartAccessGateways_, vector<ListSmartAGByAccessPointResponseBody::SmartAccessGateways>) };
    inline ListSmartAGByAccessPointResponseBody& setSmartAccessGateways(const vector<ListSmartAGByAccessPointResponseBody::SmartAccessGateways> & smartAccessGateways) { DARABONBA_PTR_SET_VALUE(smartAccessGateways_, smartAccessGateways) };
    inline ListSmartAGByAccessPointResponseBody& setSmartAccessGateways(vector<ListSmartAGByAccessPointResponseBody::SmartAccessGateways> && smartAccessGateways) { DARABONBA_PTR_SET_RVALUE(smartAccessGateways_, smartAccessGateways) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSmartAGByAccessPointResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the SAG instance.
    shared_ptr<vector<ListSmartAGByAccessPointResponseBody::SmartAccessGateways>> smartAccessGateways_ {};
    // The number of SAG instances within the access point.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
