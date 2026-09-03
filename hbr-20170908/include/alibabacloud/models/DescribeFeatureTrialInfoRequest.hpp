// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFEATURETRIALINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFEATURETRIALINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeFeatureTrialInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFeatureTrialInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFeatureTrialInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
    };
    DescribeFeatureTrialInfoRequest() = default ;
    DescribeFeatureTrialInfoRequest(const DescribeFeatureTrialInfoRequest &) = default ;
    DescribeFeatureTrialInfoRequest(DescribeFeatureTrialInfoRequest &&) = default ;
    DescribeFeatureTrialInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFeatureTrialInfoRequest() = default ;
    DescribeFeatureTrialInfoRequest& operator=(const DescribeFeatureTrialInfoRequest &) = default ;
    DescribeFeatureTrialInfoRequest& operator=(DescribeFeatureTrialInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureType_ == nullptr; };
    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline string getFeatureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, "") };
    inline DescribeFeatureTrialInfoRequest& setFeatureType(string featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


  protected:
    // The feature type. Currently, only the free trial information of Tablestore backup can be queried.
    // 
    // This parameter is required.
    shared_ptr<string> featureType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
