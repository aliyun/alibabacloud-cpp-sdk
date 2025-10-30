// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAL7CONFIGBYPASSCONFIGURLBYPASSRULES_HPP_
#define ALIBABACLOUD_MODELS_PAL7CONFIGBYPASSCONFIGURLBYPASSRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class PAL7ConfigBypassConfigUrlBypassRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PAL7ConfigBypassConfigUrlBypassRules& obj) { 
      DARABONBA_PTR_TO_JSON(Froms, froms_);
      DARABONBA_PTR_TO_JSON(Paths, paths_);
    };
    friend void from_json(const Darabonba::Json& j, PAL7ConfigBypassConfigUrlBypassRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Froms, froms_);
      DARABONBA_PTR_FROM_JSON(Paths, paths_);
    };
    PAL7ConfigBypassConfigUrlBypassRules() = default ;
    PAL7ConfigBypassConfigUrlBypassRules(const PAL7ConfigBypassConfigUrlBypassRules &) = default ;
    PAL7ConfigBypassConfigUrlBypassRules(PAL7ConfigBypassConfigUrlBypassRules &&) = default ;
    PAL7ConfigBypassConfigUrlBypassRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PAL7ConfigBypassConfigUrlBypassRules() = default ;
    PAL7ConfigBypassConfigUrlBypassRules& operator=(const PAL7ConfigBypassConfigUrlBypassRules &) = default ;
    PAL7ConfigBypassConfigUrlBypassRules& operator=(PAL7ConfigBypassConfigUrlBypassRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->froms_ == nullptr
        && return this->paths_ == nullptr; };
    // froms Field Functions 
    bool hasFroms() const { return this->froms_ != nullptr;};
    void deleteFroms() { this->froms_ = nullptr;};
    inline const vector<string> & froms() const { DARABONBA_PTR_GET_CONST(froms_, vector<string>) };
    inline vector<string> froms() { DARABONBA_PTR_GET(froms_, vector<string>) };
    inline PAL7ConfigBypassConfigUrlBypassRules& setFroms(const vector<string> & froms) { DARABONBA_PTR_SET_VALUE(froms_, froms) };
    inline PAL7ConfigBypassConfigUrlBypassRules& setFroms(vector<string> && froms) { DARABONBA_PTR_SET_RVALUE(froms_, froms) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline const vector<string> & paths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
    inline vector<string> paths() { DARABONBA_PTR_GET(paths_, vector<string>) };
    inline PAL7ConfigBypassConfigUrlBypassRules& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
    inline PAL7ConfigBypassConfigUrlBypassRules& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


  protected:
    std::shared_ptr<vector<string>> froms_ = nullptr;
    std::shared_ptr<vector<string>> paths_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
