// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSCRIPTREFINERESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNSCRIPTREFINERESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunScriptRefineResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunScriptRefineResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(outline, outline_);
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
      DARABONBA_PTR_TO_JSON(text, text_);
    };
    friend void from_json(const Darabonba::Json& j, RunScriptRefineResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(outline, outline_);
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
      DARABONBA_PTR_FROM_JSON(text, text_);
    };
    RunScriptRefineResponseBodyPayloadOutput() = default ;
    RunScriptRefineResponseBodyPayloadOutput(const RunScriptRefineResponseBodyPayloadOutput &) = default ;
    RunScriptRefineResponseBodyPayloadOutput(RunScriptRefineResponseBodyPayloadOutput &&) = default ;
    RunScriptRefineResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunScriptRefineResponseBodyPayloadOutput() = default ;
    RunScriptRefineResponseBodyPayloadOutput& operator=(const RunScriptRefineResponseBodyPayloadOutput &) = default ;
    RunScriptRefineResponseBodyPayloadOutput& operator=(RunScriptRefineResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->outline_ != nullptr && this->role_ != nullptr && this->scene_ != nullptr && this->summary_ != nullptr && this->text_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<map<string, string>> & content() const { DARABONBA_PTR_GET_CONST(content_, vector<map<string, string>>) };
    inline vector<map<string, string>> content() { DARABONBA_PTR_GET(content_, vector<map<string, string>>) };
    inline RunScriptRefineResponseBodyPayloadOutput& setContent(const vector<map<string, string>> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline RunScriptRefineResponseBodyPayloadOutput& setContent(vector<map<string, string>> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // outline Field Functions 
    bool hasOutline() const { return this->outline_ != nullptr;};
    void deleteOutline() { this->outline_ = nullptr;};
    inline string outline() const { DARABONBA_PTR_GET_DEFAULT(outline_, "") };
    inline RunScriptRefineResponseBodyPayloadOutput& setOutline(string outline) { DARABONBA_PTR_SET_VALUE(outline_, outline) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline RunScriptRefineResponseBodyPayloadOutput& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline RunScriptRefineResponseBodyPayloadOutput& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline RunScriptRefineResponseBodyPayloadOutput& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunScriptRefineResponseBodyPayloadOutput& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<vector<map<string, string>>> content_ = nullptr;
    std::shared_ptr<string> outline_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<string> scene_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
