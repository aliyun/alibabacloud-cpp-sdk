// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTEXTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTEXTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteContextsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContextsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(deletedCount, deletedCount_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteContextsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(deletedCount, deletedCount_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    DeleteContextsResponseBody() = default ;
    DeleteContextsResponseBody(const DeleteContextsResponseBody &) = default ;
    DeleteContextsResponseBody(DeleteContextsResponseBody &&) = default ;
    DeleteContextsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteContextsResponseBody() = default ;
    DeleteContextsResponseBody& operator=(const DeleteContextsResponseBody &) = default ;
    DeleteContextsResponseBody& operator=(DeleteContextsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deletedCount_ == nullptr
        && this->requestId_ == nullptr; };
    // deletedCount Field Functions 
    bool hasDeletedCount() const { return this->deletedCount_ != nullptr;};
    void deleteDeletedCount() { this->deletedCount_ = nullptr;};
    inline int32_t getDeletedCount() const { DARABONBA_PTR_GET_DEFAULT(deletedCount_, 0) };
    inline DeleteContextsResponseBody& setDeletedCount(int32_t deletedCount) { DARABONBA_PTR_SET_VALUE(deletedCount_, deletedCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteContextsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> deletedCount_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
