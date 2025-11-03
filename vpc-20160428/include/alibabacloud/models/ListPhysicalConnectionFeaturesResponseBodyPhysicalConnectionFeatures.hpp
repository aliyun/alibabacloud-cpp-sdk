// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPHYSICALCONNECTIONFEATURESRESPONSEBODYPHYSICALCONNECTIONFEATURES_HPP_
#define ALIBABACLOUD_MODELS_LISTPHYSICALCONNECTIONFEATURESRESPONSEBODYPHYSICALCONNECTIONFEATURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureKey, featureKey_);
      DARABONBA_PTR_TO_JSON(FeatureValue, featureValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureKey, featureKey_);
      DARABONBA_PTR_FROM_JSON(FeatureValue, featureValue_);
    };
    ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures() = default ;
    ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures(const ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures &) = default ;
    ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures(ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures &&) = default ;
    ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures() = default ;
    ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures& operator=(const ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures &) = default ;
    ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures& operator=(ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureKey_ == nullptr
        && return this->featureValue_ == nullptr; };
    // featureKey Field Functions 
    bool hasFeatureKey() const { return this->featureKey_ != nullptr;};
    void deleteFeatureKey() { this->featureKey_ = nullptr;};
    inline string featureKey() const { DARABONBA_PTR_GET_DEFAULT(featureKey_, "") };
    inline ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures& setFeatureKey(string featureKey) { DARABONBA_PTR_SET_VALUE(featureKey_, featureKey) };


    // featureValue Field Functions 
    bool hasFeatureValue() const { return this->featureValue_ != nullptr;};
    void deleteFeatureValue() { this->featureValue_ = nullptr;};
    inline string featureValue() const { DARABONBA_PTR_GET_DEFAULT(featureValue_, "") };
    inline ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures& setFeatureValue(string featureValue) { DARABONBA_PTR_SET_VALUE(featureValue_, featureValue) };


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
    std::shared_ptr<string> featureKey_ = nullptr;
    // The feature value of the Express Connect circuit. Valid values:
    // 
    // *   **OK**: Supported
    // *   **NOK**: Not supported
    std::shared_ptr<string> featureValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
