// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPCATEGORIESRESPONSEBODYMONITORGROUPCATEGORIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPCATEGORIESRESPONSEBODYMONITORGROUPCATEGORIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MonitorGroupCategory, monitorGroupCategory_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MonitorGroupCategory, monitorGroupCategory_);
    };
    DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories() = default ;
    DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories(const DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories &) = default ;
    DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories(DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories &&) = default ;
    DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories() = default ;
    DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories& operator=(const DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories &) = default ;
    DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories& operator=(DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->monitorGroupCategory_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // monitorGroupCategory Field Functions 
    bool hasMonitorGroupCategory() const { return this->monitorGroupCategory_ != nullptr;};
    void deleteMonitorGroupCategory() { this->monitorGroupCategory_ = nullptr;};
    inline const Models::DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory & monitorGroupCategory() const { DARABONBA_PTR_GET_CONST(monitorGroupCategory_, Models::DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory) };
    inline Models::DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory monitorGroupCategory() { DARABONBA_PTR_GET(monitorGroupCategory_, Models::DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory) };
    inline DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories& setMonitorGroupCategory(const Models::DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory & monitorGroupCategory) { DARABONBA_PTR_SET_VALUE(monitorGroupCategory_, monitorGroupCategory) };
    inline DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories& setMonitorGroupCategory(Models::DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory && monitorGroupCategory) { DARABONBA_PTR_SET_RVALUE(monitorGroupCategory_, monitorGroupCategory) };


  protected:
    // The ID of the application group.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The cloud services to which the resources in the application group belong and the number of resources that belong to the cloud service.
    std::shared_ptr<Models::DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategoriesMonitorGroupCategory> monitorGroupCategory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
