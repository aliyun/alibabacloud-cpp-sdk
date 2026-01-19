// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESAMPLEBATCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETESAMPLEBATCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DeleteSampleBatchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSampleBatchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSampleBatchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    DeleteSampleBatchResponseBody() = default ;
    DeleteSampleBatchResponseBody(const DeleteSampleBatchResponseBody &) = default ;
    DeleteSampleBatchResponseBody(DeleteSampleBatchResponseBody &&) = default ;
    DeleteSampleBatchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSampleBatchResponseBody() = default ;
    DeleteSampleBatchResponseBody& operator=(const DeleteSampleBatchResponseBody &) = default ;
    DeleteSampleBatchResponseBody& operator=(DeleteSampleBatchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->data_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteSampleBatchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline bool getData() const { DARABONBA_PTR_GET_DEFAULT(data_, false) };
    inline DeleteSampleBatchResponseBody& setData(bool data) { DARABONBA_PTR_SET_VALUE(data_, data) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned data object.
    shared_ptr<bool> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
