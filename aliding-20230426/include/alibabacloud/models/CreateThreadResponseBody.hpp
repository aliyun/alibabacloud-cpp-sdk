// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETHREADRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETHREADRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateThreadResponseBodyThread.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateThreadResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateThreadResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(thread, thread_);
    };
    friend void from_json(const Darabonba::Json& j, CreateThreadResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(thread, thread_);
    };
    CreateThreadResponseBody() = default ;
    CreateThreadResponseBody(const CreateThreadResponseBody &) = default ;
    CreateThreadResponseBody(CreateThreadResponseBody &&) = default ;
    CreateThreadResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateThreadResponseBody() = default ;
    CreateThreadResponseBody& operator=(const CreateThreadResponseBody &) = default ;
    CreateThreadResponseBody& operator=(CreateThreadResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->thread_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateThreadResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // thread Field Functions 
    bool hasThread() const { return this->thread_ != nullptr;};
    void deleteThread() { this->thread_ = nullptr;};
    inline const CreateThreadResponseBodyThread & thread() const { DARABONBA_PTR_GET_CONST(thread_, CreateThreadResponseBodyThread) };
    inline CreateThreadResponseBodyThread thread() { DARABONBA_PTR_GET(thread_, CreateThreadResponseBodyThread) };
    inline CreateThreadResponseBody& setThread(const CreateThreadResponseBodyThread & thread) { DARABONBA_PTR_SET_VALUE(thread_, thread) };
    inline CreateThreadResponseBody& setThread(CreateThreadResponseBodyThread && thread) { DARABONBA_PTR_SET_RVALUE(thread_, thread) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<CreateThreadResponseBodyThread> thread_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
