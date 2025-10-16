// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENASFILESYSTEMSRESPONSEBODYFILESYSTEMSAPPINSTANCEGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENASFILESYSTEMSRESPONSEBODYFILESYSTEMSAPPINSTANCEGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupName, appInstanceGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupName, appInstanceGroupName_);
    };
    DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups() = default ;
    DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups(const DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups &) = default ;
    DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups(DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups &&) = default ;
    DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups() = default ;
    DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups& operator=(const DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups &) = default ;
    DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups& operator=(DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && return this->appInstanceGroupName_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceGroupName Field Functions 
    bool hasAppInstanceGroupName() const { return this->appInstanceGroupName_ != nullptr;};
    void deleteAppInstanceGroupName() { this->appInstanceGroupName_ = nullptr;};
    inline string appInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupName_, "") };
    inline DescribeNASFileSystemsResponseBodyFileSystemsAppInstanceGroups& setAppInstanceGroupName(string appInstanceGroupName) { DARABONBA_PTR_SET_VALUE(appInstanceGroupName_, appInstanceGroupName) };


  protected:
    // The ID of the delivery group.
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    // The name of the delivery group.
    std::shared_ptr<string> appInstanceGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
