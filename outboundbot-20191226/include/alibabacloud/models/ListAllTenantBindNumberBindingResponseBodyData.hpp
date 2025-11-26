// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLTENANTBINDNUMBERBINDINGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTALLTENANTBINDNUMBERBINDINGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAllTenantBindNumberBindingResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListAllTenantBindNumberBindingResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllTenantBindNumberBindingResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllTenantBindNumberBindingResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
    };
    ListAllTenantBindNumberBindingResponseBodyData() = default ;
    ListAllTenantBindNumberBindingResponseBodyData(const ListAllTenantBindNumberBindingResponseBodyData &) = default ;
    ListAllTenantBindNumberBindingResponseBodyData(ListAllTenantBindNumberBindingResponseBodyData &&) = default ;
    ListAllTenantBindNumberBindingResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllTenantBindNumberBindingResponseBodyData() = default ;
    ListAllTenantBindNumberBindingResponseBodyData& operator=(const ListAllTenantBindNumberBindingResponseBodyData &) = default ;
    ListAllTenantBindNumberBindingResponseBodyData& operator=(ListAllTenantBindNumberBindingResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::ListAllTenantBindNumberBindingResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::ListAllTenantBindNumberBindingResponseBodyDataList>) };
    inline vector<Models::ListAllTenantBindNumberBindingResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::ListAllTenantBindNumberBindingResponseBodyDataList>) };
    inline ListAllTenantBindNumberBindingResponseBodyData& setList(const vector<Models::ListAllTenantBindNumberBindingResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListAllTenantBindNumberBindingResponseBodyData& setList(vector<Models::ListAllTenantBindNumberBindingResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


  protected:
    std::shared_ptr<vector<Models::ListAllTenantBindNumberBindingResponseBodyDataList>> list_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
