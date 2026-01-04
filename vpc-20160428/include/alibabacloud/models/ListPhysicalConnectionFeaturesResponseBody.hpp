// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPHYSICALCONNECTIONFEATURESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPHYSICALCONNECTIONFEATURESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListPhysicalConnectionFeaturesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPhysicalConnectionFeaturesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PhysicalConnectionFeatures, physicalConnectionFeatures_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPhysicalConnectionFeaturesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionFeatures, physicalConnectionFeatures_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPhysicalConnectionFeaturesResponseBody() = default ;
    ListPhysicalConnectionFeaturesResponseBody(const ListPhysicalConnectionFeaturesResponseBody &) = default ;
    ListPhysicalConnectionFeaturesResponseBody(ListPhysicalConnectionFeaturesResponseBody &&) = default ;
    ListPhysicalConnectionFeaturesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPhysicalConnectionFeaturesResponseBody() = default ;
    ListPhysicalConnectionFeaturesResponseBody& operator=(const ListPhysicalConnectionFeaturesResponseBody &) = default ;
    ListPhysicalConnectionFeaturesResponseBody& operator=(ListPhysicalConnectionFeaturesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PhysicalConnectionFeatures : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PhysicalConnectionFeatures& obj) { 
        DARABONBA_PTR_TO_JSON(FeatureKey, featureKey_);
        DARABONBA_PTR_TO_JSON(FeatureValue, featureValue_);
      };
      friend void from_json(const Darabonba::Json& j, PhysicalConnectionFeatures& obj) { 
        DARABONBA_PTR_FROM_JSON(FeatureKey, featureKey_);
        DARABONBA_PTR_FROM_JSON(FeatureValue, featureValue_);
      };
      PhysicalConnectionFeatures() = default ;
      PhysicalConnectionFeatures(const PhysicalConnectionFeatures &) = default ;
      PhysicalConnectionFeatures(PhysicalConnectionFeatures &&) = default ;
      PhysicalConnectionFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PhysicalConnectionFeatures() = default ;
      PhysicalConnectionFeatures& operator=(const PhysicalConnectionFeatures &) = default ;
      PhysicalConnectionFeatures& operator=(PhysicalConnectionFeatures &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->featureKey_ == nullptr
        && this->featureValue_ == nullptr; };
      // featureKey Field Functions 
      bool hasFeatureKey() const { return this->featureKey_ != nullptr;};
      void deleteFeatureKey() { this->featureKey_ = nullptr;};
      inline string getFeatureKey() const { DARABONBA_PTR_GET_DEFAULT(featureKey_, "") };
      inline PhysicalConnectionFeatures& setFeatureKey(string featureKey) { DARABONBA_PTR_SET_VALUE(featureKey_, featureKey) };


      // featureValue Field Functions 
      bool hasFeatureValue() const { return this->featureValue_ != nullptr;};
      void deleteFeatureValue() { this->featureValue_ = nullptr;};
      inline string getFeatureValue() const { DARABONBA_PTR_GET_DEFAULT(featureValue_, "") };
      inline PhysicalConnectionFeatures& setFeatureValue(string featureValue) { DARABONBA_PTR_SET_VALUE(featureValue_, featureValue) };


    protected:
      // The feature key of the Express Connect circuit. Valid values:
      // 
      // *   **SubifRateLimit**: subinterface throttling
      // *   **BFD Capability**: Bidirectional Forwarding Detection (BFD)
      // *   **DualStack**: Dual stack
      // *   **CEN**: When a virtual border router (VBR) is attached to a Cloud Enterprise Network (CEN) instance and BGP routes are advertised on the user side, attributes such as **as-path** and **community** are carried.
      // *   **CENv6**: When a VBR is attached to an IPv6 CEN instance and BGP routes are advertised on the user side, attributes such as **as-path** and **community** are carried.
      // *   **QOS**: The device supports configuring QOS policies on physical ports.
      // *   **MSHA**: The device supports fast switching groups between two VBRs.
      // *   **MULTI_MS_HA**: The device supports a maximum of eight VBRs that can be added to the same ECR.
      shared_ptr<string> featureKey_ {};
      // The feature value of the Express Connect circuit. Valid values:
      // 
      // *   **OK**: Supported
      // *   **NOK**: Not supported
      shared_ptr<string> featureValue_ {};
    };

    virtual bool empty() const override { return this->physicalConnectionFeatures_ == nullptr
        && this->requestId_ == nullptr; };
    // physicalConnectionFeatures Field Functions 
    bool hasPhysicalConnectionFeatures() const { return this->physicalConnectionFeatures_ != nullptr;};
    void deletePhysicalConnectionFeatures() { this->physicalConnectionFeatures_ = nullptr;};
    inline const vector<ListPhysicalConnectionFeaturesResponseBody::PhysicalConnectionFeatures> & getPhysicalConnectionFeatures() const { DARABONBA_PTR_GET_CONST(physicalConnectionFeatures_, vector<ListPhysicalConnectionFeaturesResponseBody::PhysicalConnectionFeatures>) };
    inline vector<ListPhysicalConnectionFeaturesResponseBody::PhysicalConnectionFeatures> getPhysicalConnectionFeatures() { DARABONBA_PTR_GET(physicalConnectionFeatures_, vector<ListPhysicalConnectionFeaturesResponseBody::PhysicalConnectionFeatures>) };
    inline ListPhysicalConnectionFeaturesResponseBody& setPhysicalConnectionFeatures(const vector<ListPhysicalConnectionFeaturesResponseBody::PhysicalConnectionFeatures> & physicalConnectionFeatures) { DARABONBA_PTR_SET_VALUE(physicalConnectionFeatures_, physicalConnectionFeatures) };
    inline ListPhysicalConnectionFeaturesResponseBody& setPhysicalConnectionFeatures(vector<ListPhysicalConnectionFeaturesResponseBody::PhysicalConnectionFeatures> && physicalConnectionFeatures) { DARABONBA_PTR_SET_RVALUE(physicalConnectionFeatures_, physicalConnectionFeatures) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPhysicalConnectionFeaturesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of Express Connect circuit features.
    shared_ptr<vector<ListPhysicalConnectionFeaturesResponseBody::PhysicalConnectionFeatures>> physicalConnectionFeatures_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
