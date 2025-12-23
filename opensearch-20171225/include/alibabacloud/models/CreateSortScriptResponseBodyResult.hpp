// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESORTSCRIPTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATESORTSCRIPTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateSortScriptResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSortScriptResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(scriptName, scriptName_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSortScriptResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(scriptName, scriptName_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateSortScriptResponseBodyResult() = default ;
    CreateSortScriptResponseBodyResult(const CreateSortScriptResponseBodyResult &) = default ;
    CreateSortScriptResponseBodyResult(CreateSortScriptResponseBodyResult &&) = default ;
    CreateSortScriptResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSortScriptResponseBodyResult() = default ;
    CreateSortScriptResponseBodyResult& operator=(const CreateSortScriptResponseBodyResult &) = default ;
    CreateSortScriptResponseBodyResult& operator=(CreateSortScriptResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scope_ == nullptr
        && return this->scriptName_ == nullptr && return this->type_ == nullptr; };
    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline CreateSortScriptResponseBodyResult& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string scriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline CreateSortScriptResponseBodyResult& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateSortScriptResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The sort phase to which the script applies.
    std::shared_ptr<string> scope_ = nullptr;
    // The script name.
    std::shared_ptr<string> scriptName_ = nullptr;
    // The script type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
