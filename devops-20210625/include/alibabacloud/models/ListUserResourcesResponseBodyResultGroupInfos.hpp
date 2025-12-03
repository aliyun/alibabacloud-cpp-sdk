// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERRESOURCESRESPONSEBODYRESULTGROUPINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERRESOURCESRESPONSEBODYRESULTGROUPINFOS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListUserResourcesResponseBodyResultGroupInfosGroupInfo.hpp>
#include <alibabacloud/models/ListUserResourcesResponseBodyResultGroupInfosGroupRole.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListUserResourcesResponseBodyResultGroupInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserResourcesResponseBodyResultGroupInfos& obj) { 
      DARABONBA_PTR_TO_JSON(groupInfo, groupInfo_);
      DARABONBA_PTR_TO_JSON(groupRole, groupRole_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserResourcesResponseBodyResultGroupInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(groupInfo, groupInfo_);
      DARABONBA_PTR_FROM_JSON(groupRole, groupRole_);
    };
    ListUserResourcesResponseBodyResultGroupInfos() = default ;
    ListUserResourcesResponseBodyResultGroupInfos(const ListUserResourcesResponseBodyResultGroupInfos &) = default ;
    ListUserResourcesResponseBodyResultGroupInfos(ListUserResourcesResponseBodyResultGroupInfos &&) = default ;
    ListUserResourcesResponseBodyResultGroupInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserResourcesResponseBodyResultGroupInfos() = default ;
    ListUserResourcesResponseBodyResultGroupInfos& operator=(const ListUserResourcesResponseBodyResultGroupInfos &) = default ;
    ListUserResourcesResponseBodyResultGroupInfos& operator=(ListUserResourcesResponseBodyResultGroupInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupInfo_ == nullptr
        && return this->groupRole_ == nullptr; };
    // groupInfo Field Functions 
    bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
    void deleteGroupInfo() { this->groupInfo_ = nullptr;};
    inline const Models::ListUserResourcesResponseBodyResultGroupInfosGroupInfo & groupInfo() const { DARABONBA_PTR_GET_CONST(groupInfo_, Models::ListUserResourcesResponseBodyResultGroupInfosGroupInfo) };
    inline Models::ListUserResourcesResponseBodyResultGroupInfosGroupInfo groupInfo() { DARABONBA_PTR_GET(groupInfo_, Models::ListUserResourcesResponseBodyResultGroupInfosGroupInfo) };
    inline ListUserResourcesResponseBodyResultGroupInfos& setGroupInfo(const Models::ListUserResourcesResponseBodyResultGroupInfosGroupInfo & groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };
    inline ListUserResourcesResponseBodyResultGroupInfos& setGroupInfo(Models::ListUserResourcesResponseBodyResultGroupInfosGroupInfo && groupInfo) { DARABONBA_PTR_SET_RVALUE(groupInfo_, groupInfo) };


    // groupRole Field Functions 
    bool hasGroupRole() const { return this->groupRole_ != nullptr;};
    void deleteGroupRole() { this->groupRole_ = nullptr;};
    inline const Models::ListUserResourcesResponseBodyResultGroupInfosGroupRole & groupRole() const { DARABONBA_PTR_GET_CONST(groupRole_, Models::ListUserResourcesResponseBodyResultGroupInfosGroupRole) };
    inline Models::ListUserResourcesResponseBodyResultGroupInfosGroupRole groupRole() { DARABONBA_PTR_GET(groupRole_, Models::ListUserResourcesResponseBodyResultGroupInfosGroupRole) };
    inline ListUserResourcesResponseBodyResultGroupInfos& setGroupRole(const Models::ListUserResourcesResponseBodyResultGroupInfosGroupRole & groupRole) { DARABONBA_PTR_SET_VALUE(groupRole_, groupRole) };
    inline ListUserResourcesResponseBodyResultGroupInfos& setGroupRole(Models::ListUserResourcesResponseBodyResultGroupInfosGroupRole && groupRole) { DARABONBA_PTR_SET_RVALUE(groupRole_, groupRole) };


  protected:
    std::shared_ptr<Models::ListUserResourcesResponseBodyResultGroupInfosGroupInfo> groupInfo_ = nullptr;
    std::shared_ptr<Models::ListUserResourcesResponseBodyResultGroupInfosGroupRole> groupRole_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
