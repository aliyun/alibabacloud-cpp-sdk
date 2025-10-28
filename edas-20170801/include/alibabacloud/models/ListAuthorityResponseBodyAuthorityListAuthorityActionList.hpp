// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORITYRESPONSEBODYAUTHORITYLISTAUTHORITYACTIONLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORITYRESPONSEBODYAUTHORITYLISTAUTHORITYACTIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAuthorityResponseBodyAuthorityListAuthorityActionListAction.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListAuthorityResponseBodyAuthorityListAuthorityActionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorityResponseBodyAuthorityListAuthorityActionList& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorityResponseBodyAuthorityListAuthorityActionList& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
    };
    ListAuthorityResponseBodyAuthorityListAuthorityActionList() = default ;
    ListAuthorityResponseBodyAuthorityListAuthorityActionList(const ListAuthorityResponseBodyAuthorityListAuthorityActionList &) = default ;
    ListAuthorityResponseBodyAuthorityListAuthorityActionList(ListAuthorityResponseBodyAuthorityListAuthorityActionList &&) = default ;
    ListAuthorityResponseBodyAuthorityListAuthorityActionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorityResponseBodyAuthorityListAuthorityActionList() = default ;
    ListAuthorityResponseBodyAuthorityListAuthorityActionList& operator=(const ListAuthorityResponseBodyAuthorityListAuthorityActionList &) = default ;
    ListAuthorityResponseBodyAuthorityListAuthorityActionList& operator=(ListAuthorityResponseBodyAuthorityListAuthorityActionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline const vector<Models::ListAuthorityResponseBodyAuthorityListAuthorityActionListAction> & action() const { DARABONBA_PTR_GET_CONST(action_, vector<Models::ListAuthorityResponseBodyAuthorityListAuthorityActionListAction>) };
    inline vector<Models::ListAuthorityResponseBodyAuthorityListAuthorityActionListAction> action() { DARABONBA_PTR_GET(action_, vector<Models::ListAuthorityResponseBodyAuthorityListAuthorityActionListAction>) };
    inline ListAuthorityResponseBodyAuthorityListAuthorityActionList& setAction(const vector<Models::ListAuthorityResponseBodyAuthorityListAuthorityActionListAction> & action) { DARABONBA_PTR_SET_VALUE(action_, action) };
    inline ListAuthorityResponseBodyAuthorityListAuthorityActionList& setAction(vector<Models::ListAuthorityResponseBodyAuthorityListAuthorityActionListAction> && action) { DARABONBA_PTR_SET_RVALUE(action_, action) };


  protected:
    std::shared_ptr<vector<Models::ListAuthorityResponseBodyAuthorityListAuthorityActionListAction>> action_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
