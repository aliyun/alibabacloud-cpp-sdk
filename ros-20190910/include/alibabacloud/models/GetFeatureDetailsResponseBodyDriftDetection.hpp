// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYDRIFTDETECTION_HPP_
#define ALIBABACLOUD_MODELS_GETFEATUREDETAILSRESPONSEBODYDRIFTDETECTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetFeatureDetailsResponseBodyDriftDetection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureDetailsResponseBodyDriftDetection& obj) { 
      DARABONBA_PTR_TO_JSON(SupportedResourceTypes, supportedResourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureDetailsResponseBodyDriftDetection& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportedResourceTypes, supportedResourceTypes_);
    };
    GetFeatureDetailsResponseBodyDriftDetection() = default ;
    GetFeatureDetailsResponseBodyDriftDetection(const GetFeatureDetailsResponseBodyDriftDetection &) = default ;
    GetFeatureDetailsResponseBodyDriftDetection(GetFeatureDetailsResponseBodyDriftDetection &&) = default ;
    GetFeatureDetailsResponseBodyDriftDetection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureDetailsResponseBodyDriftDetection() = default ;
    GetFeatureDetailsResponseBodyDriftDetection& operator=(const GetFeatureDetailsResponseBodyDriftDetection &) = default ;
    GetFeatureDetailsResponseBodyDriftDetection& operator=(GetFeatureDetailsResponseBodyDriftDetection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportedResourceTypes_ != nullptr; };
    // supportedResourceTypes Field Functions 
    bool hasSupportedResourceTypes() const { return this->supportedResourceTypes_ != nullptr;};
    void deleteSupportedResourceTypes() { this->supportedResourceTypes_ = nullptr;};
    inline const vector<string> & supportedResourceTypes() const { DARABONBA_PTR_GET_CONST(supportedResourceTypes_, vector<string>) };
    inline vector<string> supportedResourceTypes() { DARABONBA_PTR_GET(supportedResourceTypes_, vector<string>) };
    inline GetFeatureDetailsResponseBodyDriftDetection& setSupportedResourceTypes(const vector<string> & supportedResourceTypes) { DARABONBA_PTR_SET_VALUE(supportedResourceTypes_, supportedResourceTypes) };
    inline GetFeatureDetailsResponseBodyDriftDetection& setSupportedResourceTypes(vector<string> && supportedResourceTypes) { DARABONBA_PTR_SET_RVALUE(supportedResourceTypes_, supportedResourceTypes) };


  protected:
    // The resource types that are supported by the drift detection feature.
    std::shared_ptr<vector<string>> supportedResourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
