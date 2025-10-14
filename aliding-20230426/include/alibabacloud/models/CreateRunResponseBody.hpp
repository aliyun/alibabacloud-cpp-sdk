// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRunResponseBodyMessages.hpp>
#include <alibabacloud/models/CreateRunResponseBodyRun.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(run, run_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(run, run_);
    };
    CreateRunResponseBody() = default ;
    CreateRunResponseBody(const CreateRunResponseBody &) = default ;
    CreateRunResponseBody(CreateRunResponseBody &&) = default ;
    CreateRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRunResponseBody() = default ;
    CreateRunResponseBody& operator=(const CreateRunResponseBody &) = default ;
    CreateRunResponseBody& operator=(CreateRunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messages_ == nullptr
        && return this->requestId_ == nullptr && return this->run_ == nullptr; };
    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<CreateRunResponseBodyMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<CreateRunResponseBodyMessages>) };
    inline vector<CreateRunResponseBodyMessages> messages() { DARABONBA_PTR_GET(messages_, vector<CreateRunResponseBodyMessages>) };
    inline CreateRunResponseBody& setMessages(const vector<CreateRunResponseBodyMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline CreateRunResponseBody& setMessages(vector<CreateRunResponseBodyMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // run Field Functions 
    bool hasRun() const { return this->run_ != nullptr;};
    void deleteRun() { this->run_ = nullptr;};
    inline const CreateRunResponseBodyRun & run() const { DARABONBA_PTR_GET_CONST(run_, CreateRunResponseBodyRun) };
    inline CreateRunResponseBodyRun run() { DARABONBA_PTR_GET(run_, CreateRunResponseBodyRun) };
    inline CreateRunResponseBody& setRun(const CreateRunResponseBodyRun & run) { DARABONBA_PTR_SET_VALUE(run_, run) };
    inline CreateRunResponseBody& setRun(CreateRunResponseBodyRun && run) { DARABONBA_PTR_SET_RVALUE(run_, run) };


  protected:
    std::shared_ptr<vector<CreateRunResponseBodyMessages>> messages_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<CreateRunResponseBodyRun> run_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
