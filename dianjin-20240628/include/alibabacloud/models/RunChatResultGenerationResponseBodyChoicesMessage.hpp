// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCHATRESULTGENERATIONRESPONSEBODYCHOICESMESSAGE_HPP_
#define ALIBABACLOUD_MODELS_RUNCHATRESULTGENERATIONRESPONSEBODYCHOICESMESSAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunChatResultGenerationResponseBodyChoicesMessage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunChatResultGenerationResponseBodyChoicesMessage& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(toolCalls, toolCalls_);
    };
    friend void from_json(const Darabonba::Json& j, RunChatResultGenerationResponseBodyChoicesMessage& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(toolCalls, toolCalls_);
    };
    RunChatResultGenerationResponseBodyChoicesMessage() = default ;
    RunChatResultGenerationResponseBodyChoicesMessage(const RunChatResultGenerationResponseBodyChoicesMessage &) = default ;
    RunChatResultGenerationResponseBodyChoicesMessage(RunChatResultGenerationResponseBodyChoicesMessage &&) = default ;
    RunChatResultGenerationResponseBodyChoicesMessage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunChatResultGenerationResponseBodyChoicesMessage() = default ;
    RunChatResultGenerationResponseBodyChoicesMessage& operator=(const RunChatResultGenerationResponseBodyChoicesMessage &) = default ;
    RunChatResultGenerationResponseBodyChoicesMessage& operator=(RunChatResultGenerationResponseBodyChoicesMessage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->role_ != nullptr && this->toolCalls_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunChatResultGenerationResponseBodyChoicesMessage& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline RunChatResultGenerationResponseBodyChoicesMessage& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // toolCalls Field Functions 
    bool hasToolCalls() const { return this->toolCalls_ != nullptr;};
    void deleteToolCalls() { this->toolCalls_ = nullptr;};
    inline const vector<Darabonba::Json> & toolCalls() const { DARABONBA_PTR_GET_CONST(toolCalls_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> toolCalls() { DARABONBA_PTR_GET(toolCalls_, vector<Darabonba::Json>) };
    inline RunChatResultGenerationResponseBodyChoicesMessage& setToolCalls(const vector<Darabonba::Json> & toolCalls) { DARABONBA_PTR_SET_VALUE(toolCalls_, toolCalls) };
    inline RunChatResultGenerationResponseBodyChoicesMessage& setToolCalls(vector<Darabonba::Json> && toolCalls) { DARABONBA_PTR_SET_RVALUE(toolCalls_, toolCalls) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> toolCalls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
