// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETHREADRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETETHREADRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteThreadResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteThreadResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(deleted, deleted_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteThreadResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    DeleteThreadResponseBody() = default ;
    DeleteThreadResponseBody(const DeleteThreadResponseBody &) = default ;
    DeleteThreadResponseBody(DeleteThreadResponseBody &&) = default ;
    DeleteThreadResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteThreadResponseBody() = default ;
    DeleteThreadResponseBody& operator=(const DeleteThreadResponseBody &) = default ;
    DeleteThreadResponseBody& operator=(DeleteThreadResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleted_ == nullptr
        && return this->requestId_ == nullptr; };
    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline bool deleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, false) };
    inline DeleteThreadResponseBody& setDeleted(bool deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteThreadResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> deleted_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
