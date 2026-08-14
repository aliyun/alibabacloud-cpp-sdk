// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OssAgent20260622
{
namespace Models
{
  class ConfirmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(confirmed, confirmed_);
      DARABONBA_PTR_TO_JSON(phase, phase_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(toolCalls, toolCalls_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(confirmed, confirmed_);
      DARABONBA_PTR_FROM_JSON(phase, phase_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(toolCalls, toolCalls_);
    };
    ConfirmRequest() = default ;
    ConfirmRequest(const ConfirmRequest &) = default ;
    ConfirmRequest(ConfirmRequest &&) = default ;
    ConfirmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmRequest() = default ;
    ConfirmRequest& operator=(const ConfirmRequest &) = default ;
    ConfirmRequest& operator=(ConfirmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ToolCalls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ToolCalls& obj) { 
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_ANY_TO_JSON(modifiedInput, modifiedInput_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, ToolCalls& obj) { 
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_ANY_FROM_JSON(modifiedInput, modifiedInput_);
        DARABONBA_PTR_FROM_JSON(name, name_);
      };
      ToolCalls() = default ;
      ToolCalls(const ToolCalls &) = default ;
      ToolCalls(ToolCalls &&) = default ;
      ToolCalls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ToolCalls() = default ;
      ToolCalls& operator=(const ToolCalls &) = default ;
      ToolCalls& operator=(ToolCalls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->modifiedInput_ == nullptr && this->name_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline ToolCalls& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modifiedInput Field Functions 
      bool hasModifiedInput() const { return this->modifiedInput_ != nullptr;};
      void deleteModifiedInput() { this->modifiedInput_ = nullptr;};
      inline       const Darabonba::Json & getModifiedInput() const { DARABONBA_GET(modifiedInput_) };
      Darabonba::Json & getModifiedInput() { DARABONBA_GET(modifiedInput_) };
      inline ToolCalls& setModifiedInput(const Darabonba::Json & modifiedInput) { DARABONBA_SET_VALUE(modifiedInput_, modifiedInput) };
      inline ToolCalls& setModifiedInput(Darabonba::Json && modifiedInput) { DARABONBA_SET_RVALUE(modifiedInput_, modifiedInput) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ToolCalls& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The tool ID, returned by the Chat operation.
      shared_ptr<string> id_ {};
      // The command to execute for the tool calling operation, returned by the Chat operation.
      Darabonba::Json modifiedInput_ {};
      // The consumer name.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->confirmed_ == nullptr
        && this->phase_ == nullptr && this->reason_ == nullptr && this->sessionId_ == nullptr && this->toolCalls_ == nullptr; };
    // confirmed Field Functions 
    bool hasConfirmed() const { return this->confirmed_ != nullptr;};
    void deleteConfirmed() { this->confirmed_ = nullptr;};
    inline bool getConfirmed() const { DARABONBA_PTR_GET_DEFAULT(confirmed_, false) };
    inline ConfirmRequest& setConfirmed(bool confirmed) { DARABONBA_PTR_SET_VALUE(confirmed_, confirmed) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline ConfirmRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ConfirmRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ConfirmRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // toolCalls Field Functions 
    bool hasToolCalls() const { return this->toolCalls_ != nullptr;};
    void deleteToolCalls() { this->toolCalls_ = nullptr;};
    inline const vector<ConfirmRequest::ToolCalls> & getToolCalls() const { DARABONBA_PTR_GET_CONST(toolCalls_, vector<ConfirmRequest::ToolCalls>) };
    inline vector<ConfirmRequest::ToolCalls> getToolCalls() { DARABONBA_PTR_GET(toolCalls_, vector<ConfirmRequest::ToolCalls>) };
    inline ConfirmRequest& setToolCalls(const vector<ConfirmRequest::ToolCalls> & toolCalls) { DARABONBA_PTR_SET_VALUE(toolCalls_, toolCalls) };
    inline ConfirmRequest& setToolCalls(vector<ConfirmRequest::ToolCalls> && toolCalls) { DARABONBA_PTR_SET_RVALUE(toolCalls_, toolCalls) };


  protected:
    // Specifies whether to approve the tool execution.
    shared_ptr<bool> confirmed_ {};
    // The current execution phase.
    shared_ptr<string> phase_ {};
    // The reason for whether to call the tool.
    shared_ptr<string> reason_ {};
    // The Q&A session ID.
    shared_ptr<string> sessionId_ {};
    // The tool invocations.
    shared_ptr<vector<ConfirmRequest::ToolCalls>> toolCalls_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OssAgent20260622
#endif
