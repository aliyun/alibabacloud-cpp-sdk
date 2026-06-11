// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTEXTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTEXTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteContextResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContextResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(contextId, contextId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteContextResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(contextId, contextId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    DeleteContextResponseBody() = default ;
    DeleteContextResponseBody(const DeleteContextResponseBody &) = default ;
    DeleteContextResponseBody(DeleteContextResponseBody &&) = default ;
    DeleteContextResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteContextResponseBody() = default ;
    DeleteContextResponseBody& operator=(const DeleteContextResponseBody &) = default ;
    DeleteContextResponseBody& operator=(DeleteContextResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contextId_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr; };
    // contextId Field Functions 
    bool hasContextId() const { return this->contextId_ != nullptr;};
    void deleteContextId() { this->contextId_ = nullptr;};
    inline string getContextId() const { DARABONBA_PTR_GET_DEFAULT(contextId_, "") };
    inline DeleteContextResponseBody& setContextId(string contextId) { DARABONBA_PTR_SET_VALUE(contextId_, contextId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteContextResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DeleteContextResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The unique identifier of the deleted context.
    shared_ptr<string> contextId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The deletion status. For example, deleted.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
