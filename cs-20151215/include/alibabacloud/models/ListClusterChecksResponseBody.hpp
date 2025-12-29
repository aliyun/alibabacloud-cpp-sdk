// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERCHECKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERCHECKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListClusterChecksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterChecksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(checks, checks_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterChecksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(checks, checks_);
    };
    ListClusterChecksResponseBody() = default ;
    ListClusterChecksResponseBody(const ListClusterChecksResponseBody &) = default ;
    ListClusterChecksResponseBody(ListClusterChecksResponseBody &&) = default ;
    ListClusterChecksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterChecksResponseBody() = default ;
    ListClusterChecksResponseBody& operator=(const ListClusterChecksResponseBody &) = default ;
    ListClusterChecksResponseBody& operator=(ListClusterChecksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Checks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Checks& obj) { 
        DARABONBA_PTR_TO_JSON(check_id, checkId_);
        DARABONBA_PTR_TO_JSON(created_at, createdAt_);
        DARABONBA_PTR_TO_JSON(finished_at, finishedAt_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Checks& obj) { 
        DARABONBA_PTR_FROM_JSON(check_id, checkId_);
        DARABONBA_PTR_FROM_JSON(created_at, createdAt_);
        DARABONBA_PTR_FROM_JSON(finished_at, finishedAt_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Checks() = default ;
      Checks(const Checks &) = default ;
      Checks(Checks &&) = default ;
      Checks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Checks() = default ;
      Checks& operator=(const Checks &) = default ;
      Checks& operator=(Checks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkId_ == nullptr
        && this->createdAt_ == nullptr && this->finishedAt_ == nullptr && this->message_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // checkId Field Functions 
      bool hasCheckId() const { return this->checkId_ != nullptr;};
      void deleteCheckId() { this->checkId_ = nullptr;};
      inline string getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
      inline Checks& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Checks& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // finishedAt Field Functions 
      bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
      void deleteFinishedAt() { this->finishedAt_ = nullptr;};
      inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
      inline Checks& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Checks& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Checks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Checks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the cluster check task.
      shared_ptr<string> checkId_ {};
      // The time when the cluster check task was created.
      shared_ptr<string> createdAt_ {};
      // The time when the cluster check task was completed.
      shared_ptr<string> finishedAt_ {};
      // The message that indicates the status of the cluster check task.
      shared_ptr<string> message_ {};
      // The status of the cluster check.
      shared_ptr<string> status_ {};
      // The check method.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->checks_ == nullptr; };
    // checks Field Functions 
    bool hasChecks() const { return this->checks_ != nullptr;};
    void deleteChecks() { this->checks_ = nullptr;};
    inline const vector<ListClusterChecksResponseBody::Checks> & getChecks() const { DARABONBA_PTR_GET_CONST(checks_, vector<ListClusterChecksResponseBody::Checks>) };
    inline vector<ListClusterChecksResponseBody::Checks> getChecks() { DARABONBA_PTR_GET(checks_, vector<ListClusterChecksResponseBody::Checks>) };
    inline ListClusterChecksResponseBody& setChecks(const vector<ListClusterChecksResponseBody::Checks> & checks) { DARABONBA_PTR_SET_VALUE(checks_, checks) };
    inline ListClusterChecksResponseBody& setChecks(vector<ListClusterChecksResponseBody::Checks> && checks) { DARABONBA_PTR_SET_RVALUE(checks_, checks) };


  protected:
    // The list of check items.
    shared_ptr<vector<ListClusterChecksResponseBody::Checks>> checks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
