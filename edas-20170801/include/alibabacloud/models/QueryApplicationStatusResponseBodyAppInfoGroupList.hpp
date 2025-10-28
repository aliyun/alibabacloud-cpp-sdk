// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPLICATIONSTATUSRESPONSEBODYAPPINFOGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPLICATIONSTATUSRESPONSEBODYAPPINFOGROUPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryApplicationStatusResponseBodyAppInfoGroupListGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryApplicationStatusResponseBodyAppInfoGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryApplicationStatusResponseBodyAppInfoGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(Group, group_);
    };
    friend void from_json(const Darabonba::Json& j, QueryApplicationStatusResponseBodyAppInfoGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(Group, group_);
    };
    QueryApplicationStatusResponseBodyAppInfoGroupList() = default ;
    QueryApplicationStatusResponseBodyAppInfoGroupList(const QueryApplicationStatusResponseBodyAppInfoGroupList &) = default ;
    QueryApplicationStatusResponseBodyAppInfoGroupList(QueryApplicationStatusResponseBodyAppInfoGroupList &&) = default ;
    QueryApplicationStatusResponseBodyAppInfoGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryApplicationStatusResponseBodyAppInfoGroupList() = default ;
    QueryApplicationStatusResponseBodyAppInfoGroupList& operator=(const QueryApplicationStatusResponseBodyAppInfoGroupList &) = default ;
    QueryApplicationStatusResponseBodyAppInfoGroupList& operator=(QueryApplicationStatusResponseBodyAppInfoGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->group_ == nullptr; };
    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline const vector<Models::QueryApplicationStatusResponseBodyAppInfoGroupListGroup> & group() const { DARABONBA_PTR_GET_CONST(group_, vector<Models::QueryApplicationStatusResponseBodyAppInfoGroupListGroup>) };
    inline vector<Models::QueryApplicationStatusResponseBodyAppInfoGroupListGroup> group() { DARABONBA_PTR_GET(group_, vector<Models::QueryApplicationStatusResponseBodyAppInfoGroupListGroup>) };
    inline QueryApplicationStatusResponseBodyAppInfoGroupList& setGroup(const vector<Models::QueryApplicationStatusResponseBodyAppInfoGroupListGroup> & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
    inline QueryApplicationStatusResponseBodyAppInfoGroupList& setGroup(vector<Models::QueryApplicationStatusResponseBodyAppInfoGroupListGroup> && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


  protected:
    std::shared_ptr<vector<Models::QueryApplicationStatusResponseBodyAppInfoGroupListGroup>> group_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
