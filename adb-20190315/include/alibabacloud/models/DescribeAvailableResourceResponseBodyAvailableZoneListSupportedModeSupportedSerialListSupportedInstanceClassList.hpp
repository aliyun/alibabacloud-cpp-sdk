// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLEZONELISTSUPPORTEDMODESUPPORTEDSERIALLISTSUPPORTEDINSTANCECLASSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLEZONELISTSUPPORTEDMODESUPPORTEDSERIALLISTSUPPORTEDINSTANCECLASSLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorList.hpp>
#include <alibabacloud/models/DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_TO_JSON(SupportedExecutorList, supportedExecutorList_);
      DARABONBA_PTR_TO_JSON(SupportedNodeCountList, supportedNodeCountList_);
      DARABONBA_PTR_TO_JSON(Tips, tips_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_FROM_JSON(SupportedExecutorList, supportedExecutorList_);
      DARABONBA_PTR_FROM_JSON(SupportedNodeCountList, supportedNodeCountList_);
      DARABONBA_PTR_FROM_JSON(Tips, tips_);
    };
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList() = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList(const DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList &) = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList(DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList &&) = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList() = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList& operator=(const DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList &) = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList& operator=(DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceClass_ == nullptr
        && return this->supportedExecutorList_ == nullptr && return this->supportedNodeCountList_ == nullptr && return this->tips_ == nullptr; };
    // instanceClass Field Functions 
    bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
    void deleteInstanceClass() { this->instanceClass_ = nullptr;};
    inline string instanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
    inline DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


    // supportedExecutorList Field Functions 
    bool hasSupportedExecutorList() const { return this->supportedExecutorList_ != nullptr;};
    void deleteSupportedExecutorList() { this->supportedExecutorList_ = nullptr;};
    inline const vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorList> & supportedExecutorList() const { DARABONBA_PTR_GET_CONST(supportedExecutorList_, vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorList>) };
    inline vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorList> supportedExecutorList() { DARABONBA_PTR_GET(supportedExecutorList_, vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorList>) };
    inline DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList& setSupportedExecutorList(const vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorList> & supportedExecutorList) { DARABONBA_PTR_SET_VALUE(supportedExecutorList_, supportedExecutorList) };
    inline DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList& setSupportedExecutorList(vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorList> && supportedExecutorList) { DARABONBA_PTR_SET_RVALUE(supportedExecutorList_, supportedExecutorList) };


    // supportedNodeCountList Field Functions 
    bool hasSupportedNodeCountList() const { return this->supportedNodeCountList_ != nullptr;};
    void deleteSupportedNodeCountList() { this->supportedNodeCountList_ = nullptr;};
    inline const vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountList> & supportedNodeCountList() const { DARABONBA_PTR_GET_CONST(supportedNodeCountList_, vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountList>) };
    inline vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountList> supportedNodeCountList() { DARABONBA_PTR_GET(supportedNodeCountList_, vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountList>) };
    inline DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList& setSupportedNodeCountList(const vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountList> & supportedNodeCountList) { DARABONBA_PTR_SET_VALUE(supportedNodeCountList_, supportedNodeCountList) };
    inline DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList& setSupportedNodeCountList(vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountList> && supportedNodeCountList) { DARABONBA_PTR_SET_RVALUE(supportedNodeCountList_, supportedNodeCountList) };


    // tips Field Functions 
    bool hasTips() const { return this->tips_ != nullptr;};
    void deleteTips() { this->tips_ = nullptr;};
    inline string tips() const { DARABONBA_PTR_GET_DEFAULT(tips_, "") };
    inline DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList& setTips(string tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };


  protected:
    // The supported instance type.
    std::shared_ptr<string> instanceClass_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorList>> supportedExecutorList_ = nullptr;
    // The supported compute nodes.
    std::shared_ptr<vector<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountList>> supportedNodeCountList_ = nullptr;
    // The description of the instance type.
    std::shared_ptr<string> tips_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
