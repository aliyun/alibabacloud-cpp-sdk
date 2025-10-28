// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGEXRULE_HPP_
#define ALIBABACLOUD_MODELS_REGEXRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class RegexRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegexRule& obj) { 
      DARABONBA_PTR_TO_JSON(match, match_);
      DARABONBA_PTR_TO_JSON(replacement, replacement_);
    };
    friend void from_json(const Darabonba::Json& j, RegexRule& obj) { 
      DARABONBA_PTR_FROM_JSON(match, match_);
      DARABONBA_PTR_FROM_JSON(replacement, replacement_);
    };
    RegexRule() = default ;
    RegexRule(const RegexRule &) = default ;
    RegexRule(RegexRule &&) = default ;
    RegexRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegexRule() = default ;
    RegexRule& operator=(const RegexRule &) = default ;
    RegexRule& operator=(RegexRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->match_ == nullptr
        && return this->replacement_ == nullptr; };
    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline string match() const { DARABONBA_PTR_GET_DEFAULT(match_, "") };
    inline RegexRule& setMatch(string match) { DARABONBA_PTR_SET_VALUE(match_, match) };


    // replacement Field Functions 
    bool hasReplacement() const { return this->replacement_ != nullptr;};
    void deleteReplacement() { this->replacement_ = nullptr;};
    inline string replacement() const { DARABONBA_PTR_GET_DEFAULT(replacement_, "") };
    inline RegexRule& setReplacement(string replacement) { DARABONBA_PTR_SET_VALUE(replacement_, replacement) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> match_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> replacement_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
