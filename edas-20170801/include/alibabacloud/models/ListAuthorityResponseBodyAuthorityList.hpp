// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORITYRESPONSEBODYAUTHORITYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORITYRESPONSEBODYAUTHORITYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAuthorityResponseBodyAuthorityListAuthority.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListAuthorityResponseBodyAuthorityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorityResponseBodyAuthorityList& obj) { 
      DARABONBA_PTR_TO_JSON(Authority, authority_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorityResponseBodyAuthorityList& obj) { 
      DARABONBA_PTR_FROM_JSON(Authority, authority_);
    };
    ListAuthorityResponseBodyAuthorityList() = default ;
    ListAuthorityResponseBodyAuthorityList(const ListAuthorityResponseBodyAuthorityList &) = default ;
    ListAuthorityResponseBodyAuthorityList(ListAuthorityResponseBodyAuthorityList &&) = default ;
    ListAuthorityResponseBodyAuthorityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorityResponseBodyAuthorityList() = default ;
    ListAuthorityResponseBodyAuthorityList& operator=(const ListAuthorityResponseBodyAuthorityList &) = default ;
    ListAuthorityResponseBodyAuthorityList& operator=(ListAuthorityResponseBodyAuthorityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authority_ == nullptr; };
    // authority Field Functions 
    bool hasAuthority() const { return this->authority_ != nullptr;};
    void deleteAuthority() { this->authority_ = nullptr;};
    inline const vector<Models::ListAuthorityResponseBodyAuthorityListAuthority> & authority() const { DARABONBA_PTR_GET_CONST(authority_, vector<Models::ListAuthorityResponseBodyAuthorityListAuthority>) };
    inline vector<Models::ListAuthorityResponseBodyAuthorityListAuthority> authority() { DARABONBA_PTR_GET(authority_, vector<Models::ListAuthorityResponseBodyAuthorityListAuthority>) };
    inline ListAuthorityResponseBodyAuthorityList& setAuthority(const vector<Models::ListAuthorityResponseBodyAuthorityListAuthority> & authority) { DARABONBA_PTR_SET_VALUE(authority_, authority) };
    inline ListAuthorityResponseBodyAuthorityList& setAuthority(vector<Models::ListAuthorityResponseBodyAuthorityListAuthority> && authority) { DARABONBA_PTR_SET_RVALUE(authority_, authority) };


  protected:
    std::shared_ptr<vector<Models::ListAuthorityResponseBodyAuthorityListAuthority>> authority_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
