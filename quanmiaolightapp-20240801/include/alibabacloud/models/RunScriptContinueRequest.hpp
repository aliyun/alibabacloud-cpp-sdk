// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSCRIPTCONTINUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSCRIPTCONTINUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunScriptContinueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunScriptContinueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(scriptSummary, scriptSummary_);
      DARABONBA_PTR_TO_JSON(scriptTypeKeyword, scriptTypeKeyword_);
      DARABONBA_PTR_TO_JSON(userProvidedContent, userProvidedContent_);
    };
    friend void from_json(const Darabonba::Json& j, RunScriptContinueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(scriptSummary, scriptSummary_);
      DARABONBA_PTR_FROM_JSON(scriptTypeKeyword, scriptTypeKeyword_);
      DARABONBA_PTR_FROM_JSON(userProvidedContent, userProvidedContent_);
    };
    RunScriptContinueRequest() = default ;
    RunScriptContinueRequest(const RunScriptContinueRequest &) = default ;
    RunScriptContinueRequest(RunScriptContinueRequest &&) = default ;
    RunScriptContinueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunScriptContinueRequest() = default ;
    RunScriptContinueRequest& operator=(const RunScriptContinueRequest &) = default ;
    RunScriptContinueRequest& operator=(RunScriptContinueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scriptSummary_ == nullptr
        && this->scriptTypeKeyword_ == nullptr && this->userProvidedContent_ == nullptr; };
    // scriptSummary Field Functions 
    bool hasScriptSummary() const { return this->scriptSummary_ != nullptr;};
    void deleteScriptSummary() { this->scriptSummary_ = nullptr;};
    inline string getScriptSummary() const { DARABONBA_PTR_GET_DEFAULT(scriptSummary_, "") };
    inline RunScriptContinueRequest& setScriptSummary(string scriptSummary) { DARABONBA_PTR_SET_VALUE(scriptSummary_, scriptSummary) };


    // scriptTypeKeyword Field Functions 
    bool hasScriptTypeKeyword() const { return this->scriptTypeKeyword_ != nullptr;};
    void deleteScriptTypeKeyword() { this->scriptTypeKeyword_ = nullptr;};
    inline string getScriptTypeKeyword() const { DARABONBA_PTR_GET_DEFAULT(scriptTypeKeyword_, "") };
    inline RunScriptContinueRequest& setScriptTypeKeyword(string scriptTypeKeyword) { DARABONBA_PTR_SET_VALUE(scriptTypeKeyword_, scriptTypeKeyword) };


    // userProvidedContent Field Functions 
    bool hasUserProvidedContent() const { return this->userProvidedContent_ != nullptr;};
    void deleteUserProvidedContent() { this->userProvidedContent_ = nullptr;};
    inline string getUserProvidedContent() const { DARABONBA_PTR_GET_DEFAULT(userProvidedContent_, "") };
    inline RunScriptContinueRequest& setUserProvidedContent(string userProvidedContent) { DARABONBA_PTR_SET_VALUE(userProvidedContent_, userProvidedContent) };


  protected:
    shared_ptr<string> scriptSummary_ {};
    shared_ptr<string> scriptTypeKeyword_ {};
    // This parameter is required.
    shared_ptr<string> userProvidedContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
