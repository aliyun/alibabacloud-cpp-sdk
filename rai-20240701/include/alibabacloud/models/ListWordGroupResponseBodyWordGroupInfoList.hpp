// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORDGROUPRESPONSEBODYWORDGROUPINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTWORDGROUPRESPONSEBODYWORDGROUPINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ListWordGroupResponseBodyWordGroupInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWordGroupResponseBodyWordGroupInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(PolicyInfoList, policyInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, ListWordGroupResponseBodyWordGroupInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(PolicyInfoList, policyInfoList_);
    };
    ListWordGroupResponseBodyWordGroupInfoList() = default ;
    ListWordGroupResponseBodyWordGroupInfoList(const ListWordGroupResponseBodyWordGroupInfoList &) = default ;
    ListWordGroupResponseBodyWordGroupInfoList(ListWordGroupResponseBodyWordGroupInfoList &&) = default ;
    ListWordGroupResponseBodyWordGroupInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWordGroupResponseBodyWordGroupInfoList() = default ;
    ListWordGroupResponseBodyWordGroupInfoList& operator=(const ListWordGroupResponseBodyWordGroupInfoList &) = default ;
    ListWordGroupResponseBodyWordGroupInfoList& operator=(ListWordGroupResponseBodyWordGroupInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtModified_ == nullptr
        && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->policyInfoList_ == nullptr; };
    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline ListWordGroupResponseBodyWordGroupInfoList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ListWordGroupResponseBodyWordGroupInfoList& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListWordGroupResponseBodyWordGroupInfoList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // policyInfoList Field Functions 
    bool hasPolicyInfoList() const { return this->policyInfoList_ != nullptr;};
    void deletePolicyInfoList() { this->policyInfoList_ = nullptr;};
    inline const vector<Models::ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList> & policyInfoList() const { DARABONBA_PTR_GET_CONST(policyInfoList_, vector<Models::ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList>) };
    inline vector<Models::ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList> policyInfoList() { DARABONBA_PTR_GET(policyInfoList_, vector<Models::ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList>) };
    inline ListWordGroupResponseBodyWordGroupInfoList& setPolicyInfoList(const vector<Models::ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList> & policyInfoList) { DARABONBA_PTR_SET_VALUE(policyInfoList_, policyInfoList) };
    inline ListWordGroupResponseBodyWordGroupInfoList& setPolicyInfoList(vector<Models::ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList> && policyInfoList) { DARABONBA_PTR_SET_RVALUE(policyInfoList_, policyInfoList) };


  protected:
    // Policy modification time.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Keyword group ID.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // Keyword group name.
    std::shared_ptr<string> groupName_ = nullptr;
    // List of associated policy objects.
    std::shared_ptr<vector<Models::ListWordGroupResponseBodyWordGroupInfoListPolicyInfoList>> policyInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
