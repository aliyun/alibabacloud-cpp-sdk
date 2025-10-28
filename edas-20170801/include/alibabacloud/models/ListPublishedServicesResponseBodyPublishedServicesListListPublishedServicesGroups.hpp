// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHEDSERVICESRESPONSEBODYPUBLISHEDSERVICESLISTLISTPUBLISHEDSERVICESGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHEDSERVICESRESPONSEBODYPUBLISHEDSERVICESLISTLISTPUBLISHEDSERVICESGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups& obj) { 
      DARABONBA_PTR_TO_JSON(group, group_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(group, group_);
    };
    ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups() = default ;
    ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups(const ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups &) = default ;
    ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups(ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups &&) = default ;
    ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups() = default ;
    ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups& operator=(const ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups &) = default ;
    ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups& operator=(ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->group_ == nullptr; };
    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline const vector<string> & group() const { DARABONBA_PTR_GET_CONST(group_, vector<string>) };
    inline vector<string> group() { DARABONBA_PTR_GET(group_, vector<string>) };
    inline ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups& setGroup(const vector<string> & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
    inline ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesGroups& setGroup(vector<string> && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


  protected:
    std::shared_ptr<vector<string>> group_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
