// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERMEMBERSRESPONSEBODYCLUSTERMEMBERPAGECLUSTERMEMBERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERMEMBERSRESPONSEBODYCLUSTERMEMBERPAGECLUSTERMEMBERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListClusterMembersResponseBodyClusterMemberPageClusterMemberList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterMembersResponseBodyClusterMemberPageClusterMemberList& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterMember, clusterMember_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterMembersResponseBodyClusterMemberPageClusterMemberList& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterMember, clusterMember_);
    };
    ListClusterMembersResponseBodyClusterMemberPageClusterMemberList() = default ;
    ListClusterMembersResponseBodyClusterMemberPageClusterMemberList(const ListClusterMembersResponseBodyClusterMemberPageClusterMemberList &) = default ;
    ListClusterMembersResponseBodyClusterMemberPageClusterMemberList(ListClusterMembersResponseBodyClusterMemberPageClusterMemberList &&) = default ;
    ListClusterMembersResponseBodyClusterMemberPageClusterMemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterMembersResponseBodyClusterMemberPageClusterMemberList() = default ;
    ListClusterMembersResponseBodyClusterMemberPageClusterMemberList& operator=(const ListClusterMembersResponseBodyClusterMemberPageClusterMemberList &) = default ;
    ListClusterMembersResponseBodyClusterMemberPageClusterMemberList& operator=(ListClusterMembersResponseBodyClusterMemberPageClusterMemberList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterMember_ == nullptr; };
    // clusterMember Field Functions 
    bool hasClusterMember() const { return this->clusterMember_ != nullptr;};
    void deleteClusterMember() { this->clusterMember_ = nullptr;};
    inline const vector<Models::ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember> & clusterMember() const { DARABONBA_PTR_GET_CONST(clusterMember_, vector<Models::ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember>) };
    inline vector<Models::ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember> clusterMember() { DARABONBA_PTR_GET(clusterMember_, vector<Models::ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember>) };
    inline ListClusterMembersResponseBodyClusterMemberPageClusterMemberList& setClusterMember(const vector<Models::ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember> & clusterMember) { DARABONBA_PTR_SET_VALUE(clusterMember_, clusterMember) };
    inline ListClusterMembersResponseBodyClusterMemberPageClusterMemberList& setClusterMember(vector<Models::ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember> && clusterMember) { DARABONBA_PTR_SET_RVALUE(clusterMember_, clusterMember) };


  protected:
    std::shared_ptr<vector<Models::ListClusterMembersResponseBodyClusterMemberPageClusterMemberListClusterMember>> clusterMember_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
