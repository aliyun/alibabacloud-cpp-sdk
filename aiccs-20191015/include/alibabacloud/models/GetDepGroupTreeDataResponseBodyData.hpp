// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPGROUPTREEDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDEPGROUPTREEDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDepGroupTreeDataResponseBodyDataGroupDTOS.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetDepGroupTreeDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDepGroupTreeDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DepGroupId, depGroupId_);
      DARABONBA_PTR_TO_JSON(DepGroupName, depGroupName_);
      DARABONBA_PTR_TO_JSON(GroupDTOS, groupDTOS_);
    };
    friend void from_json(const Darabonba::Json& j, GetDepGroupTreeDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DepGroupId, depGroupId_);
      DARABONBA_PTR_FROM_JSON(DepGroupName, depGroupName_);
      DARABONBA_PTR_FROM_JSON(GroupDTOS, groupDTOS_);
    };
    GetDepGroupTreeDataResponseBodyData() = default ;
    GetDepGroupTreeDataResponseBodyData(const GetDepGroupTreeDataResponseBodyData &) = default ;
    GetDepGroupTreeDataResponseBodyData(GetDepGroupTreeDataResponseBodyData &&) = default ;
    GetDepGroupTreeDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDepGroupTreeDataResponseBodyData() = default ;
    GetDepGroupTreeDataResponseBodyData& operator=(const GetDepGroupTreeDataResponseBodyData &) = default ;
    GetDepGroupTreeDataResponseBodyData& operator=(GetDepGroupTreeDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->depGroupId_ != nullptr
        && this->depGroupName_ != nullptr && this->groupDTOS_ != nullptr; };
    // depGroupId Field Functions 
    bool hasDepGroupId() const { return this->depGroupId_ != nullptr;};
    void deleteDepGroupId() { this->depGroupId_ = nullptr;};
    inline string depGroupId() const { DARABONBA_PTR_GET_DEFAULT(depGroupId_, "") };
    inline GetDepGroupTreeDataResponseBodyData& setDepGroupId(string depGroupId) { DARABONBA_PTR_SET_VALUE(depGroupId_, depGroupId) };


    // depGroupName Field Functions 
    bool hasDepGroupName() const { return this->depGroupName_ != nullptr;};
    void deleteDepGroupName() { this->depGroupName_ = nullptr;};
    inline string depGroupName() const { DARABONBA_PTR_GET_DEFAULT(depGroupName_, "") };
    inline GetDepGroupTreeDataResponseBodyData& setDepGroupName(string depGroupName) { DARABONBA_PTR_SET_VALUE(depGroupName_, depGroupName) };


    // groupDTOS Field Functions 
    bool hasGroupDTOS() const { return this->groupDTOS_ != nullptr;};
    void deleteGroupDTOS() { this->groupDTOS_ = nullptr;};
    inline const vector<Models::GetDepGroupTreeDataResponseBodyDataGroupDTOS> & groupDTOS() const { DARABONBA_PTR_GET_CONST(groupDTOS_, vector<Models::GetDepGroupTreeDataResponseBodyDataGroupDTOS>) };
    inline vector<Models::GetDepGroupTreeDataResponseBodyDataGroupDTOS> groupDTOS() { DARABONBA_PTR_GET(groupDTOS_, vector<Models::GetDepGroupTreeDataResponseBodyDataGroupDTOS>) };
    inline GetDepGroupTreeDataResponseBodyData& setGroupDTOS(const vector<Models::GetDepGroupTreeDataResponseBodyDataGroupDTOS> & groupDTOS) { DARABONBA_PTR_SET_VALUE(groupDTOS_, groupDTOS) };
    inline GetDepGroupTreeDataResponseBodyData& setGroupDTOS(vector<Models::GetDepGroupTreeDataResponseBodyDataGroupDTOS> && groupDTOS) { DARABONBA_PTR_SET_RVALUE(groupDTOS_, groupDTOS) };


  protected:
    std::shared_ptr<string> depGroupId_ = nullptr;
    std::shared_ptr<string> depGroupName_ = nullptr;
    std::shared_ptr<vector<Models::GetDepGroupTreeDataResponseBodyDataGroupDTOS>> groupDTOS_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
