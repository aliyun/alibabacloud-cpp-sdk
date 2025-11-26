// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTENTIONSRESPONSEBODYDATAINTENTLISTRULECHECK_HPP_
#define ALIBABACLOUD_MODELS_LISTINTENTIONSRESPONSEBODYDATAINTENTLISTRULECHECK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListIntentionsResponseBodyDataIntentListRuleCheck : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntentionsResponseBodyDataIntentListRuleCheck& obj) { 
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(Strict, strict_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(Warning, warning_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntentionsResponseBodyDataIntentListRuleCheck& obj) { 
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(Strict, strict_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(Warning, warning_);
    };
    ListIntentionsResponseBodyDataIntentListRuleCheck() = default ;
    ListIntentionsResponseBodyDataIntentListRuleCheck(const ListIntentionsResponseBodyDataIntentListRuleCheck &) = default ;
    ListIntentionsResponseBodyDataIntentListRuleCheck(ListIntentionsResponseBodyDataIntentListRuleCheck &&) = default ;
    ListIntentionsResponseBodyDataIntentListRuleCheck(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntentionsResponseBodyDataIntentListRuleCheck() = default ;
    ListIntentionsResponseBodyDataIntentListRuleCheck& operator=(const ListIntentionsResponseBodyDataIntentListRuleCheck &) = default ;
    ListIntentionsResponseBodyDataIntentListRuleCheck& operator=(ListIntentionsResponseBodyDataIntentListRuleCheck &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->error_ == nullptr
        && return this->strict_ == nullptr && return this->text_ == nullptr && return this->warning_ == nullptr; };
    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline const vector<string> & error() const { DARABONBA_PTR_GET_CONST(error_, vector<string>) };
    inline vector<string> error() { DARABONBA_PTR_GET(error_, vector<string>) };
    inline ListIntentionsResponseBodyDataIntentListRuleCheck& setError(const vector<string> & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
    inline ListIntentionsResponseBodyDataIntentListRuleCheck& setError(vector<string> && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


    // strict Field Functions 
    bool hasStrict() const { return this->strict_ != nullptr;};
    void deleteStrict() { this->strict_ = nullptr;};
    inline bool strict() const { DARABONBA_PTR_GET_DEFAULT(strict_, false) };
    inline ListIntentionsResponseBodyDataIntentListRuleCheck& setStrict(bool strict) { DARABONBA_PTR_SET_VALUE(strict_, strict) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline ListIntentionsResponseBodyDataIntentListRuleCheck& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // warning Field Functions 
    bool hasWarning() const { return this->warning_ != nullptr;};
    void deleteWarning() { this->warning_ = nullptr;};
    inline const vector<string> & warning() const { DARABONBA_PTR_GET_CONST(warning_, vector<string>) };
    inline vector<string> warning() { DARABONBA_PTR_GET(warning_, vector<string>) };
    inline ListIntentionsResponseBodyDataIntentListRuleCheck& setWarning(const vector<string> & warning) { DARABONBA_PTR_SET_VALUE(warning_, warning) };
    inline ListIntentionsResponseBodyDataIntentListRuleCheck& setWarning(vector<string> && warning) { DARABONBA_PTR_SET_RVALUE(warning_, warning) };


  protected:
    std::shared_ptr<vector<string>> error_ = nullptr;
    std::shared_ptr<bool> strict_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<vector<string>> warning_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
