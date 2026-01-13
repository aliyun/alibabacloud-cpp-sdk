// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECOLLECTIONDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETECOLLECTIONDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DeleteCollectionDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCollectionDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppliedRows, appliedRows_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCollectionDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppliedRows, appliedRows_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DeleteCollectionDataResponseBody() = default ;
    DeleteCollectionDataResponseBody(const DeleteCollectionDataResponseBody &) = default ;
    DeleteCollectionDataResponseBody(DeleteCollectionDataResponseBody &&) = default ;
    DeleteCollectionDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCollectionDataResponseBody() = default ;
    DeleteCollectionDataResponseBody& operator=(const DeleteCollectionDataResponseBody &) = default ;
    DeleteCollectionDataResponseBody& operator=(DeleteCollectionDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appliedRows_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // appliedRows Field Functions 
    bool hasAppliedRows() const { return this->appliedRows_ != nullptr;};
    void deleteAppliedRows() { this->appliedRows_ = nullptr;};
    inline int64_t getAppliedRows() const { DARABONBA_PTR_GET_DEFAULT(appliedRows_, 0L) };
    inline DeleteCollectionDataResponseBody& setAppliedRows(int64_t appliedRows) { DARABONBA_PTR_SET_VALUE(appliedRows_, appliedRows) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteCollectionDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteCollectionDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DeleteCollectionDataResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The number of rows that are affected by the request.
    shared_ptr<int64_t> appliedRows_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **success**
    // *   **fail**
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
