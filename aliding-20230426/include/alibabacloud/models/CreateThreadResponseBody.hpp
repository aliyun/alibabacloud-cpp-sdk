// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETHREADRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETHREADRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class Thread : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Thread& obj) { 
        DARABONBA_PTR_TO_JSON(createAt, createAt_);
        DARABONBA_PTR_TO_JSON(id, id_);
      };
      friend void from_json(const Darabonba::Json& j, Thread& obj) { 
        DARABONBA_PTR_FROM_JSON(createAt, createAt_);
        DARABONBA_PTR_FROM_JSON(id, id_);
      };
      Thread() = default ;
      Thread(const Thread &) = default ;
      Thread(Thread &&) = default ;
      Thread(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Thread() = default ;
      Thread& operator=(const Thread &) = default ;
      Thread& operator=(Thread &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createAt_ == nullptr
        && this->id_ == nullptr; };
      // createAt Field Functions 
      bool hasCreateAt() const { return this->createAt_ != nullptr;};
      void deleteCreateAt() { this->createAt_ = nullptr;};
      inline int64_t getCreateAt() const { DARABONBA_PTR_GET_DEFAULT(createAt_, 0L) };
      inline Thread& setCreateAt(int64_t createAt) { DARABONBA_PTR_SET_VALUE(createAt_, createAt) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Thread& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    protected:
      shared_ptr<int64_t> createAt_ {};
      shared_ptr<string> id_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->thread_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateThreadResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // thread Field Functions 
    bool hasThread() const { return this->thread_ != nullptr;};
    void deleteThread() { this->thread_ = nullptr;};
    inline const CreateThreadResponseBody::Thread & getThread() const { DARABONBA_PTR_GET_CONST(thread_, CreateThreadResponseBody::Thread) };
    inline CreateThreadResponseBody::Thread getThread() { DARABONBA_PTR_GET(thread_, CreateThreadResponseBody::Thread) };
    inline CreateThreadResponseBody& setThread(const CreateThreadResponseBody::Thread & thread) { DARABONBA_PTR_SET_VALUE(thread_, thread) };
    inline CreateThreadResponseBody& setThread(CreateThreadResponseBody::Thread && thread) { DARABONBA_PTR_SET_RVALUE(thread_, thread) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<CreateThreadResponseBody::Thread> thread_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
