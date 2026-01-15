// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFEATUREOPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFEATUREOPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class DescribeFeatureOptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFeatureOptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureTemplate, featureTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFeatureOptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureTemplate, featureTemplate_);
    };
    DescribeFeatureOptionRequest() = default ;
    DescribeFeatureOptionRequest(const DescribeFeatureOptionRequest &) = default ;
    DescribeFeatureOptionRequest(DescribeFeatureOptionRequest &&) = default ;
    DescribeFeatureOptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFeatureOptionRequest() = default ;
    DescribeFeatureOptionRequest& operator=(const DescribeFeatureOptionRequest &) = default ;
    DescribeFeatureOptionRequest& operator=(DescribeFeatureOptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureTemplate_ == nullptr; };
    // featureTemplate Field Functions 
    bool hasFeatureTemplate() const { return this->featureTemplate_ != nullptr;};
    void deleteFeatureTemplate() { this->featureTemplate_ = nullptr;};
    inline string getFeatureTemplate() const { DARABONBA_PTR_GET_DEFAULT(featureTemplate_, "") };
    inline DescribeFeatureOptionRequest& setFeatureTemplate(string featureTemplate) { DARABONBA_PTR_SET_VALUE(featureTemplate_, featureTemplate) };


  protected:
    // This parameter is required.
    shared_ptr<string> featureTemplate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
