// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetUploadTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetUploadTaskResponseBody() = default ;
    GetUploadTaskResponseBody(const GetUploadTaskResponseBody &) = default ;
    GetUploadTaskResponseBody(GetUploadTaskResponseBody &&) = default ;
    GetUploadTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadTaskResponseBody() = default ;
    GetUploadTaskResponseBody& operator=(const GetUploadTaskResponseBody &) = default ;
    GetUploadTaskResponseBody& operator=(GetUploadTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->requestId_ != nullptr && this->status_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetUploadTaskResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUploadTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetUploadTaskResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The error message returned when the file upload task failed.
    std::shared_ptr<string> description_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The task status.
    // 
    // *   **INIT**: The task is being initialized.
    // *   **activacted**: The task is activated.
    // *   **running**: The task is running.
    // *   **success**: The task is successful.
    // *   **partial**: The task is partially successful.
    // *   **fail**: The task failed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
