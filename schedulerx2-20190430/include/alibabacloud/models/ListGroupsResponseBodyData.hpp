// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGroupsResponseBodyDataAppGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ListGroupsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppGroups, appGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppGroups, appGroups_);
    };
    ListGroupsResponseBodyData() = default ;
    ListGroupsResponseBodyData(const ListGroupsResponseBodyData &) = default ;
    ListGroupsResponseBodyData(ListGroupsResponseBodyData &&) = default ;
    ListGroupsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupsResponseBodyData() = default ;
    ListGroupsResponseBodyData& operator=(const ListGroupsResponseBodyData &) = default ;
    ListGroupsResponseBodyData& operator=(ListGroupsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appGroups_ == nullptr; };
    // appGroups Field Functions 
    bool hasAppGroups() const { return this->appGroups_ != nullptr;};
    void deleteAppGroups() { this->appGroups_ = nullptr;};
    inline const vector<Models::ListGroupsResponseBodyDataAppGroups> & appGroups() const { DARABONBA_PTR_GET_CONST(appGroups_, vector<Models::ListGroupsResponseBodyDataAppGroups>) };
    inline vector<Models::ListGroupsResponseBodyDataAppGroups> appGroups() { DARABONBA_PTR_GET(appGroups_, vector<Models::ListGroupsResponseBodyDataAppGroups>) };
    inline ListGroupsResponseBodyData& setAppGroups(const vector<Models::ListGroupsResponseBodyDataAppGroups> & appGroups) { DARABONBA_PTR_SET_VALUE(appGroups_, appGroups) };
    inline ListGroupsResponseBodyData& setAppGroups(vector<Models::ListGroupsResponseBodyDataAppGroups> && appGroups) { DARABONBA_PTR_SET_RVALUE(appGroups_, appGroups) };


  protected:
    // The applications and their details.
    std::shared_ptr<vector<Models::ListGroupsResponseBodyDataAppGroups>> appGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
