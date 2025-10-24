// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCESRESPONSEBODYINSTANCEMODELAPPMANAGEPOLICY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCESRESPONSEBODYINSTANCEMODELAPPMANAGEPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy& obj) { 
      DARABONBA_PTR_TO_JSON(AppManagePolicyId, appManagePolicyId_);
      DARABONBA_PTR_TO_JSON(AppManagePolicyName, appManagePolicyName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(AppManagePolicyId, appManagePolicyId_);
      DARABONBA_PTR_FROM_JSON(AppManagePolicyName, appManagePolicyName_);
    };
    DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy() = default ;
    DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy(const DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy &) = default ;
    DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy(DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy &&) = default ;
    DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy() = default ;
    DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy& operator=(const DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy &) = default ;
    DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy& operator=(DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appManagePolicyId_ == nullptr
        && return this->appManagePolicyName_ == nullptr; };
    // appManagePolicyId Field Functions 
    bool hasAppManagePolicyId() const { return this->appManagePolicyId_ != nullptr;};
    void deleteAppManagePolicyId() { this->appManagePolicyId_ = nullptr;};
    inline string appManagePolicyId() const { DARABONBA_PTR_GET_DEFAULT(appManagePolicyId_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy& setAppManagePolicyId(string appManagePolicyId) { DARABONBA_PTR_SET_VALUE(appManagePolicyId_, appManagePolicyId) };


    // appManagePolicyName Field Functions 
    bool hasAppManagePolicyName() const { return this->appManagePolicyName_ != nullptr;};
    void deleteAppManagePolicyName() { this->appManagePolicyName_ = nullptr;};
    inline string appManagePolicyName() const { DARABONBA_PTR_GET_DEFAULT(appManagePolicyName_, "") };
    inline DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy& setAppManagePolicyName(string appManagePolicyName) { DARABONBA_PTR_SET_VALUE(appManagePolicyName_, appManagePolicyName) };


  protected:
    std::shared_ptr<string> appManagePolicyId_ = nullptr;
    std::shared_ptr<string> appManagePolicyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
