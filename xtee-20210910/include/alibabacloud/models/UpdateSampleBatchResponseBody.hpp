// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESAMPLEBATCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESAMPLEBATCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class UpdateSampleBatchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSampleBatchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSampleBatchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    UpdateSampleBatchResponseBody() = default ;
    UpdateSampleBatchResponseBody(const UpdateSampleBatchResponseBody &) = default ;
    UpdateSampleBatchResponseBody(UpdateSampleBatchResponseBody &&) = default ;
    UpdateSampleBatchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSampleBatchResponseBody() = default ;
    UpdateSampleBatchResponseBody& operator=(const UpdateSampleBatchResponseBody &) = default ;
    UpdateSampleBatchResponseBody& operator=(UpdateSampleBatchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->data_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateSampleBatchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline bool data() const { DARABONBA_PTR_GET_DEFAULT(data_, false) };
    inline UpdateSampleBatchResponseBody& setData(bool data) { DARABONBA_PTR_SET_VALUE(data_, data) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Returned data.
    std::shared_ptr<bool> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
