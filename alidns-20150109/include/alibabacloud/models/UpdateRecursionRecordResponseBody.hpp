// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERECURSIONRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATERECURSIONRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateRecursionRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRecursionRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRecursionRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateRecursionRecordResponseBody() = default ;
    UpdateRecursionRecordResponseBody(const UpdateRecursionRecordResponseBody &) = default ;
    UpdateRecursionRecordResponseBody(UpdateRecursionRecordResponseBody &&) = default ;
    UpdateRecursionRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRecursionRecordResponseBody() = default ;
    UpdateRecursionRecordResponseBody& operator=(const UpdateRecursionRecordResponseBody &) = default ;
    UpdateRecursionRecordResponseBody& operator=(UpdateRecursionRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordId_ == nullptr
        && this->requestId_ == nullptr; };
    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline UpdateRecursionRecordResponseBody& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateRecursionRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> recordId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
