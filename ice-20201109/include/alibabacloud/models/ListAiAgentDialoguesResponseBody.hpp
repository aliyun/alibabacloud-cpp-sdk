// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIAGENTDIALOGUESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIAGENTDIALOGUESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAIAgentDialoguesResponseBodyDialogues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAIAgentDialoguesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIAgentDialoguesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Dialogues, dialogues_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIAgentDialoguesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Dialogues, dialogues_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAIAgentDialoguesResponseBody() = default ;
    ListAIAgentDialoguesResponseBody(const ListAIAgentDialoguesResponseBody &) = default ;
    ListAIAgentDialoguesResponseBody(ListAIAgentDialoguesResponseBody &&) = default ;
    ListAIAgentDialoguesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIAgentDialoguesResponseBody() = default ;
    ListAIAgentDialoguesResponseBody& operator=(const ListAIAgentDialoguesResponseBody &) = default ;
    ListAIAgentDialoguesResponseBody& operator=(ListAIAgentDialoguesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dialogues_ == nullptr
        && return this->requestId_ == nullptr; };
    // dialogues Field Functions 
    bool hasDialogues() const { return this->dialogues_ != nullptr;};
    void deleteDialogues() { this->dialogues_ = nullptr;};
    inline const vector<ListAIAgentDialoguesResponseBodyDialogues> & dialogues() const { DARABONBA_PTR_GET_CONST(dialogues_, vector<ListAIAgentDialoguesResponseBodyDialogues>) };
    inline vector<ListAIAgentDialoguesResponseBodyDialogues> dialogues() { DARABONBA_PTR_GET(dialogues_, vector<ListAIAgentDialoguesResponseBodyDialogues>) };
    inline ListAIAgentDialoguesResponseBody& setDialogues(const vector<ListAIAgentDialoguesResponseBodyDialogues> & dialogues) { DARABONBA_PTR_SET_VALUE(dialogues_, dialogues) };
    inline ListAIAgentDialoguesResponseBody& setDialogues(vector<ListAIAgentDialoguesResponseBodyDialogues> && dialogues) { DARABONBA_PTR_SET_RVALUE(dialogues_, dialogues) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIAgentDialoguesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The dialog records.
    std::shared_ptr<vector<ListAIAgentDialoguesResponseBodyDialogues>> dialogues_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
