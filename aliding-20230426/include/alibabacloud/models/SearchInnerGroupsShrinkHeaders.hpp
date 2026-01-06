// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHINNERGROUPSSHRINKHEADERS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHINNERGROUPSSHRINKHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SearchInnerGroupsShrinkHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchInnerGroupsShrinkHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(AccountContext, accountContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SearchInnerGroupsShrinkHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(AccountContext, accountContextShrink_);
    };
    SearchInnerGroupsShrinkHeaders() = default ;
    SearchInnerGroupsShrinkHeaders(const SearchInnerGroupsShrinkHeaders &) = default ;
    SearchInnerGroupsShrinkHeaders(SearchInnerGroupsShrinkHeaders &&) = default ;
    SearchInnerGroupsShrinkHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchInnerGroupsShrinkHeaders() = default ;
    SearchInnerGroupsShrinkHeaders& operator=(const SearchInnerGroupsShrinkHeaders &) = default ;
    SearchInnerGroupsShrinkHeaders& operator=(SearchInnerGroupsShrinkHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && this->accountContextShrink_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & getCommonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> getCommonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline SearchInnerGroupsShrinkHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline SearchInnerGroupsShrinkHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // accountContextShrink Field Functions 
    bool hasAccountContextShrink() const { return this->accountContextShrink_ != nullptr;};
    void deleteAccountContextShrink() { this->accountContextShrink_ = nullptr;};
    inline string getAccountContextShrink() const { DARABONBA_PTR_GET_DEFAULT(accountContextShrink_, "") };
    inline SearchInnerGroupsShrinkHeaders& setAccountContextShrink(string accountContextShrink) { DARABONBA_PTR_SET_VALUE(accountContextShrink_, accountContextShrink) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    shared_ptr<string> accountContextShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
