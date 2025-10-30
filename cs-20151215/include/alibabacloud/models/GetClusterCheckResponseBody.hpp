// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERCHECKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERCHECKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class GetClusterCheckResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterCheckResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(check_id, checkId_);
      DARABONBA_PTR_TO_JSON(check_items, checkItems_);
      DARABONBA_PTR_TO_JSON(created_at, createdAt_);
      DARABONBA_PTR_TO_JSON(finished_at, finishedAt_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterCheckResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(check_id, checkId_);
      DARABONBA_PTR_FROM_JSON(check_items, checkItems_);
      DARABONBA_PTR_FROM_JSON(created_at, createdAt_);
      DARABONBA_PTR_FROM_JSON(finished_at, finishedAt_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetClusterCheckResponseBody() = default ;
    GetClusterCheckResponseBody(const GetClusterCheckResponseBody &) = default ;
    GetClusterCheckResponseBody(GetClusterCheckResponseBody &&) = default ;
    GetClusterCheckResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterCheckResponseBody() = default ;
    GetClusterCheckResponseBody& operator=(const GetClusterCheckResponseBody &) = default ;
    GetClusterCheckResponseBody& operator=(GetClusterCheckResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && return this->checkItems_ == nullptr && return this->createdAt_ == nullptr && return this->finishedAt_ == nullptr && return this->message_ == nullptr && return this->status_ == nullptr
        && return this->type_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline string checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
    inline GetClusterCheckResponseBody& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkItems Field Functions 
    bool hasCheckItems() const { return this->checkItems_ != nullptr;};
    void deleteCheckItems() { this->checkItems_ = nullptr;};
    inline const map<string, vector<Darabonba::Json>> & checkItems() const { DARABONBA_PTR_GET_CONST(checkItems_, map<string, vector<Darabonba::Json>>) };
    inline map<string, vector<Darabonba::Json>> checkItems() { DARABONBA_PTR_GET(checkItems_, map<string, vector<Darabonba::Json>>) };
    inline GetClusterCheckResponseBody& setCheckItems(const map<string, vector<Darabonba::Json>> & checkItems) { DARABONBA_PTR_SET_VALUE(checkItems_, checkItems) };
    inline GetClusterCheckResponseBody& setCheckItems(map<string, vector<Darabonba::Json>> && checkItems) { DARABONBA_PTR_SET_RVALUE(checkItems_, checkItems) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline GetClusterCheckResponseBody& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // finishedAt Field Functions 
    bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
    void deleteFinishedAt() { this->finishedAt_ = nullptr;};
    inline string finishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
    inline GetClusterCheckResponseBody& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetClusterCheckResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetClusterCheckResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetClusterCheckResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the cluster check task.
    std::shared_ptr<string> checkId_ = nullptr;
    // A list of check items.
    std::shared_ptr<map<string, vector<Darabonba::Json>>> checkItems_ = nullptr;
    // The time when the cluster check task was created.
    std::shared_ptr<string> createdAt_ = nullptr;
    // The time when the cluster check task was completed.
    std::shared_ptr<string> finishedAt_ = nullptr;
    // The message that indicates the status of the cluster check task.
    std::shared_ptr<string> message_ = nullptr;
    // The status of the cluster check.
    std::shared_ptr<string> status_ = nullptr;
    // The check method.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
