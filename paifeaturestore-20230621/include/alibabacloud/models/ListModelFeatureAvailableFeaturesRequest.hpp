// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELFEATUREAVAILABLEFEATURESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELFEATUREAVAILABLEFEATURESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListModelFeatureAvailableFeaturesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelFeatureAvailableFeaturesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureName, featureName_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelFeatureAvailableFeaturesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureName, featureName_);
    };
    ListModelFeatureAvailableFeaturesRequest() = default ;
    ListModelFeatureAvailableFeaturesRequest(const ListModelFeatureAvailableFeaturesRequest &) = default ;
    ListModelFeatureAvailableFeaturesRequest(ListModelFeatureAvailableFeaturesRequest &&) = default ;
    ListModelFeatureAvailableFeaturesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelFeatureAvailableFeaturesRequest() = default ;
    ListModelFeatureAvailableFeaturesRequest& operator=(const ListModelFeatureAvailableFeaturesRequest &) = default ;
    ListModelFeatureAvailableFeaturesRequest& operator=(ListModelFeatureAvailableFeaturesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureName_ == nullptr; };
    // featureName Field Functions 
    bool hasFeatureName() const { return this->featureName_ != nullptr;};
    void deleteFeatureName() { this->featureName_ = nullptr;};
    inline string getFeatureName() const { DARABONBA_PTR_GET_DEFAULT(featureName_, "") };
    inline ListModelFeatureAvailableFeaturesRequest& setFeatureName(string featureName) { DARABONBA_PTR_SET_VALUE(featureName_, featureName) };


  protected:
    shared_ptr<string> featureName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
