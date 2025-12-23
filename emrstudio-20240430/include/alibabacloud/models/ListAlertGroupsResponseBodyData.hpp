// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTGROUPSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTGROUPSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class ListAlertGroupsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertGroupsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(alertGroupId, alertGroupId_);
      DARABONBA_PTR_TO_JSON(alertInstanceIds, alertInstanceIds_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(groupName, groupName_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertGroupsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(alertGroupId, alertGroupId_);
      DARABONBA_PTR_FROM_JSON(alertInstanceIds, alertInstanceIds_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(groupName, groupName_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    ListAlertGroupsResponseBodyData() = default ;
    ListAlertGroupsResponseBodyData(const ListAlertGroupsResponseBodyData &) = default ;
    ListAlertGroupsResponseBodyData(ListAlertGroupsResponseBodyData &&) = default ;
    ListAlertGroupsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertGroupsResponseBodyData() = default ;
    ListAlertGroupsResponseBodyData& operator=(const ListAlertGroupsResponseBodyData &) = default ;
    ListAlertGroupsResponseBodyData& operator=(ListAlertGroupsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertGroupId_ == nullptr
        && return this->alertInstanceIds_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->groupName_ == nullptr && return this->updateTime_ == nullptr; };
    // alertGroupId Field Functions 
    bool hasAlertGroupId() const { return this->alertGroupId_ != nullptr;};
    void deleteAlertGroupId() { this->alertGroupId_ = nullptr;};
    inline string alertGroupId() const { DARABONBA_PTR_GET_DEFAULT(alertGroupId_, "") };
    inline ListAlertGroupsResponseBodyData& setAlertGroupId(string alertGroupId) { DARABONBA_PTR_SET_VALUE(alertGroupId_, alertGroupId) };


    // alertInstanceIds Field Functions 
    bool hasAlertInstanceIds() const { return this->alertInstanceIds_ != nullptr;};
    void deleteAlertInstanceIds() { this->alertInstanceIds_ = nullptr;};
    inline string alertInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(alertInstanceIds_, "") };
    inline ListAlertGroupsResponseBodyData& setAlertInstanceIds(string alertInstanceIds) { DARABONBA_PTR_SET_VALUE(alertInstanceIds_, alertInstanceIds) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListAlertGroupsResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAlertGroupsResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListAlertGroupsResponseBodyData& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListAlertGroupsResponseBodyData& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> alertGroupId_ = nullptr;
    std::shared_ptr<string> alertInstanceIds_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
