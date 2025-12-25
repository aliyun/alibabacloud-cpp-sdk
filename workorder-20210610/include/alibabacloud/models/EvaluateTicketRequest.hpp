// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATETICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EVALUATETICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class EvaluateTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluateTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Solved, solved_);
      DARABONBA_PTR_TO_JSON(TicketId, ticketId_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluateTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Solved, solved_);
      DARABONBA_PTR_FROM_JSON(TicketId, ticketId_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    EvaluateTicketRequest() = default ;
    EvaluateTicketRequest(const EvaluateTicketRequest &) = default ;
    EvaluateTicketRequest(EvaluateTicketRequest &&) = default ;
    EvaluateTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluateTicketRequest() = default ;
    EvaluateTicketRequest& operator=(const EvaluateTicketRequest &) = default ;
    EvaluateTicketRequest& operator=(EvaluateTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->score_ == nullptr && return this->solved_ == nullptr && return this->ticketId_ == nullptr && return this->uid_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline EvaluateTicketRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline string score() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
    inline EvaluateTicketRequest& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // solved Field Functions 
    bool hasSolved() const { return this->solved_ != nullptr;};
    void deleteSolved() { this->solved_ = nullptr;};
    inline bool solved() const { DARABONBA_PTR_GET_DEFAULT(solved_, false) };
    inline EvaluateTicketRequest& setSolved(bool solved) { DARABONBA_PTR_SET_VALUE(solved_, solved) };


    // ticketId Field Functions 
    bool hasTicketId() const { return this->ticketId_ != nullptr;};
    void deleteTicketId() { this->ticketId_ = nullptr;};
    inline string ticketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
    inline EvaluateTicketRequest& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline EvaluateTicketRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // Comment
    std::shared_ptr<string> content_ = nullptr;
    // Rating star 1-5 stars
    // 
    // This parameter is required.
    std::shared_ptr<string> score_ = nullptr;
    // Whether to resolve
    // 
    // This parameter is required.
    std::shared_ptr<bool> solved_ = nullptr;
    // The ID of the ticket.
    // 
    // This parameter is required.
    std::shared_ptr<string> ticketId_ = nullptr;
    // UID
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif
