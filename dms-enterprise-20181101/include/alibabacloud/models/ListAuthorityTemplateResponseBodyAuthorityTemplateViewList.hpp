// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORITYTEMPLATERESPONSEBODYAUTHORITYTEMPLATEVIEWLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORITYTEMPLATERESPONSEBODYAUTHORITYTEMPLATEVIEWLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAuthorityTemplateResponseBodyAuthorityTemplateViewListAuthorityTemplateView.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListAuthorityTemplateResponseBodyAuthorityTemplateViewList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorityTemplateResponseBodyAuthorityTemplateViewList& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorityTemplateView, authorityTemplateView_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorityTemplateResponseBodyAuthorityTemplateViewList& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorityTemplateView, authorityTemplateView_);
    };
    ListAuthorityTemplateResponseBodyAuthorityTemplateViewList() = default ;
    ListAuthorityTemplateResponseBodyAuthorityTemplateViewList(const ListAuthorityTemplateResponseBodyAuthorityTemplateViewList &) = default ;
    ListAuthorityTemplateResponseBodyAuthorityTemplateViewList(ListAuthorityTemplateResponseBodyAuthorityTemplateViewList &&) = default ;
    ListAuthorityTemplateResponseBodyAuthorityTemplateViewList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorityTemplateResponseBodyAuthorityTemplateViewList() = default ;
    ListAuthorityTemplateResponseBodyAuthorityTemplateViewList& operator=(const ListAuthorityTemplateResponseBodyAuthorityTemplateViewList &) = default ;
    ListAuthorityTemplateResponseBodyAuthorityTemplateViewList& operator=(ListAuthorityTemplateResponseBodyAuthorityTemplateViewList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorityTemplateView_ != nullptr; };
    // authorityTemplateView Field Functions 
    bool hasAuthorityTemplateView() const { return this->authorityTemplateView_ != nullptr;};
    void deleteAuthorityTemplateView() { this->authorityTemplateView_ = nullptr;};
    inline const vector<Models::ListAuthorityTemplateResponseBodyAuthorityTemplateViewListAuthorityTemplateView> & authorityTemplateView() const { DARABONBA_PTR_GET_CONST(authorityTemplateView_, vector<Models::ListAuthorityTemplateResponseBodyAuthorityTemplateViewListAuthorityTemplateView>) };
    inline vector<Models::ListAuthorityTemplateResponseBodyAuthorityTemplateViewListAuthorityTemplateView> authorityTemplateView() { DARABONBA_PTR_GET(authorityTemplateView_, vector<Models::ListAuthorityTemplateResponseBodyAuthorityTemplateViewListAuthorityTemplateView>) };
    inline ListAuthorityTemplateResponseBodyAuthorityTemplateViewList& setAuthorityTemplateView(const vector<Models::ListAuthorityTemplateResponseBodyAuthorityTemplateViewListAuthorityTemplateView> & authorityTemplateView) { DARABONBA_PTR_SET_VALUE(authorityTemplateView_, authorityTemplateView) };
    inline ListAuthorityTemplateResponseBodyAuthorityTemplateViewList& setAuthorityTemplateView(vector<Models::ListAuthorityTemplateResponseBodyAuthorityTemplateViewListAuthorityTemplateView> && authorityTemplateView) { DARABONBA_PTR_SET_RVALUE(authorityTemplateView_, authorityTemplateView) };


  protected:
    std::shared_ptr<vector<Models::ListAuthorityTemplateResponseBodyAuthorityTemplateViewListAuthorityTemplateView>> authorityTemplateView_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
