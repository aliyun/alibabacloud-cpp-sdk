// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMEDSERVICESRESPONSEBODYCONSUMEDSERVICESLISTLISTCONSUMEDSERVICESGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMEDSERVICESRESPONSEBODYCONSUMEDSERVICESLISTLISTCONSUMEDSERVICESGROUPS_HPP_
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
  class ListConsumedServicesResponseBodyConsumedServicesListListConsumedServicesGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumedServicesResponseBodyConsumedServicesListListConsumedServicesGroups& obj) { 
      DARABONBA_PTR_TO_JSON(group, group_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumedServicesResponseBodyConsumedServicesListListConsumedServicesGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(group, group_);
    };
    ListConsumedServicesResponseBodyConsumedServicesListListConsumedServicesGroups() = default ;
    ListConsumedServicesResponseBodyConsumedServicesListListConsumedServicesGroups(const ListConsumedServicesResponseBodyConsumedServicesListListConsumedServicesGroups &) = default ;
    ListConsumedServicesResponseBodyConsumedServicesListListConsumedServicesGroups(ListConsumedServicesResponseBodyConsumedServicesListListConsumedServicesGroups &&) = default ;
    ListConsumedServicesResponseBodyConsumedServicesListListConsumedServicesGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumedServicesResponseBodyConsumedServicesListListConsumedServicesGroups() = default ;
    ListConsumedServicesResponseBodyConsumedServicesListListConsumedServicesGroups& operator=(const ListConsumedServicesResponseBodyConsumedServicesListListConsumedServicesGroups &) = default ;
    ListConsumedServicesResponseBodyConsumedServicesListListConsumedServicesGroups& operator=(ListConsumedServicesResponseBodyConsumedServicesListListConsumedServicesGroups &&) = default ;
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
    inline ListConsumedServicesResponseBodyConsumedServicesListListConsumedServicesGroups& setGroup(const vector<string> & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
    inline ListConsumedServicesResponseBodyConsumedServicesListListConsumedServicesGroups& setGroup(vector<string> && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


  protected:
    std::shared_ptr<vector<string>> group_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
