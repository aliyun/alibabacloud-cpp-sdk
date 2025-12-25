// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATRESPONSEBODYMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATRESPONSEBODYMESSAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateChatResponseBodyMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatResponseBodyMessages& obj) { 
      DARABONBA_PTR_TO_JSON(agents, agents_);
      DARABONBA_PTR_TO_JSON(callId, callId_);
      DARABONBA_PTR_TO_JSON(contents, contents_);
      DARABONBA_PTR_TO_JSON(detail, detail_);
      DARABONBA_PTR_TO_JSON(parentCallId, parentCallId_);
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(seq, seq_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(tools, tools_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatResponseBodyMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(agents, agents_);
      DARABONBA_PTR_FROM_JSON(callId, callId_);
      DARABONBA_PTR_FROM_JSON(contents, contents_);
      DARABONBA_PTR_FROM_JSON(detail, detail_);
      DARABONBA_PTR_FROM_JSON(parentCallId, parentCallId_);
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(seq, seq_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(tools, tools_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateChatResponseBodyMessages() = default ;
    CreateChatResponseBodyMessages(const CreateChatResponseBodyMessages &) = default ;
    CreateChatResponseBodyMessages(CreateChatResponseBodyMessages &&) = default ;
    CreateChatResponseBodyMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatResponseBodyMessages() = default ;
    CreateChatResponseBodyMessages& operator=(const CreateChatResponseBodyMessages &) = default ;
    CreateChatResponseBodyMessages& operator=(CreateChatResponseBodyMessages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agents_ == nullptr
        && return this->callId_ == nullptr && return this->contents_ == nullptr && return this->detail_ == nullptr && return this->parentCallId_ == nullptr && return this->role_ == nullptr
        && return this->seq_ == nullptr && return this->timestamp_ == nullptr && return this->tools_ == nullptr && return this->type_ == nullptr; };
    // agents Field Functions 
    bool hasAgents() const { return this->agents_ != nullptr;};
    void deleteAgents() { this->agents_ = nullptr;};
    inline const vector<Darabonba::Json> & agents() const { DARABONBA_PTR_GET_CONST(agents_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> agents() { DARABONBA_PTR_GET(agents_, vector<Darabonba::Json>) };
    inline CreateChatResponseBodyMessages& setAgents(const vector<Darabonba::Json> & agents) { DARABONBA_PTR_SET_VALUE(agents_, agents) };
    inline CreateChatResponseBodyMessages& setAgents(vector<Darabonba::Json> && agents) { DARABONBA_PTR_SET_RVALUE(agents_, agents) };


    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string callId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline CreateChatResponseBodyMessages& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<Darabonba::Json> & contents() const { DARABONBA_PTR_GET_CONST(contents_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> contents() { DARABONBA_PTR_GET(contents_, vector<Darabonba::Json>) };
    inline CreateChatResponseBodyMessages& setContents(const vector<Darabonba::Json> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline CreateChatResponseBodyMessages& setContents(vector<Darabonba::Json> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline CreateChatResponseBodyMessages& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // parentCallId Field Functions 
    bool hasParentCallId() const { return this->parentCallId_ != nullptr;};
    void deleteParentCallId() { this->parentCallId_ = nullptr;};
    inline string parentCallId() const { DARABONBA_PTR_GET_DEFAULT(parentCallId_, "") };
    inline CreateChatResponseBodyMessages& setParentCallId(string parentCallId) { DARABONBA_PTR_SET_VALUE(parentCallId_, parentCallId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline CreateChatResponseBodyMessages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // seq Field Functions 
    bool hasSeq() const { return this->seq_ != nullptr;};
    void deleteSeq() { this->seq_ = nullptr;};
    inline int32_t seq() const { DARABONBA_PTR_GET_DEFAULT(seq_, 0) };
    inline CreateChatResponseBodyMessages& setSeq(int32_t seq) { DARABONBA_PTR_SET_VALUE(seq_, seq) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline CreateChatResponseBodyMessages& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<Darabonba::Json> & tools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> tools() { DARABONBA_PTR_GET(tools_, vector<Darabonba::Json>) };
    inline CreateChatResponseBodyMessages& setTools(const vector<Darabonba::Json> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline CreateChatResponseBodyMessages& setTools(vector<Darabonba::Json> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateChatResponseBodyMessages& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Darabonba::Json>> agents_ = nullptr;
    std::shared_ptr<string> callId_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> contents_ = nullptr;
    std::shared_ptr<string> detail_ = nullptr;
    std::shared_ptr<string> parentCallId_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<int32_t> seq_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> tools_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
