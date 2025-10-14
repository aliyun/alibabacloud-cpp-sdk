// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFTEMPLATERULESREQUESTQUERYARGS_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFTEMPLATERULESREQUESTQUERYARGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafTemplateRulesRequestQueryArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafTemplateRulesRequestQueryArgs& obj) { 
      DARABONBA_PTR_TO_JSON(Kinds, kinds_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafTemplateRulesRequestQueryArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(Kinds, kinds_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListWafTemplateRulesRequestQueryArgs() = default ;
    ListWafTemplateRulesRequestQueryArgs(const ListWafTemplateRulesRequestQueryArgs &) = default ;
    ListWafTemplateRulesRequestQueryArgs(ListWafTemplateRulesRequestQueryArgs &&) = default ;
    ListWafTemplateRulesRequestQueryArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafTemplateRulesRequestQueryArgs() = default ;
    ListWafTemplateRulesRequestQueryArgs& operator=(const ListWafTemplateRulesRequestQueryArgs &) = default ;
    ListWafTemplateRulesRequestQueryArgs& operator=(ListWafTemplateRulesRequestQueryArgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kinds_ == nullptr
        && return this->type_ == nullptr; };
    // kinds Field Functions 
    bool hasKinds() const { return this->kinds_ != nullptr;};
    void deleteKinds() { this->kinds_ = nullptr;};
    inline const vector<string> & kinds() const { DARABONBA_PTR_GET_CONST(kinds_, vector<string>) };
    inline vector<string> kinds() { DARABONBA_PTR_GET(kinds_, vector<string>) };
    inline ListWafTemplateRulesRequestQueryArgs& setKinds(const vector<string> & kinds) { DARABONBA_PTR_SET_VALUE(kinds_, kinds) };
    inline ListWafTemplateRulesRequestQueryArgs& setKinds(vector<string> && kinds) { DARABONBA_PTR_SET_RVALUE(kinds_, kinds) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListWafTemplateRulesRequestQueryArgs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<string>> kinds_ = nullptr;
    // Rule type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
