// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPARAMETERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPARAMETERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationParametersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationParametersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ComponentIdList, componentIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationParametersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ComponentIdList, componentIdListShrink_);
    };
    DescribeApplicationParametersShrinkRequest() = default ;
    DescribeApplicationParametersShrinkRequest(const DescribeApplicationParametersShrinkRequest &) = default ;
    DescribeApplicationParametersShrinkRequest(DescribeApplicationParametersShrinkRequest &&) = default ;
    DescribeApplicationParametersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationParametersShrinkRequest() = default ;
    DescribeApplicationParametersShrinkRequest& operator=(const DescribeApplicationParametersShrinkRequest &) = default ;
    DescribeApplicationParametersShrinkRequest& operator=(DescribeApplicationParametersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->componentIdListShrink_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeApplicationParametersShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // componentIdListShrink Field Functions 
    bool hasComponentIdListShrink() const { return this->componentIdListShrink_ != nullptr;};
    void deleteComponentIdListShrink() { this->componentIdListShrink_ = nullptr;};
    inline string componentIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(componentIdListShrink_, "") };
    inline DescribeApplicationParametersShrinkRequest& setComponentIdListShrink(string componentIdListShrink) { DARABONBA_PTR_SET_VALUE(componentIdListShrink_, componentIdListShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    std::shared_ptr<string> componentIdListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
