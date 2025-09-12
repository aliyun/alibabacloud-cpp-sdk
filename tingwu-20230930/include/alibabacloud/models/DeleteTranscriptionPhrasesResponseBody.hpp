// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETRANSCRIPTIONPHRASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETETRANSCRIPTIONPHRASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteTranscriptionPhrasesResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class DeleteTranscriptionPhrasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTranscriptionPhrasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTranscriptionPhrasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DeleteTranscriptionPhrasesResponseBody() = default ;
    DeleteTranscriptionPhrasesResponseBody(const DeleteTranscriptionPhrasesResponseBody &) = default ;
    DeleteTranscriptionPhrasesResponseBody(DeleteTranscriptionPhrasesResponseBody &&) = default ;
    DeleteTranscriptionPhrasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTranscriptionPhrasesResponseBody() = default ;
    DeleteTranscriptionPhrasesResponseBody& operator=(const DeleteTranscriptionPhrasesResponseBody &) = default ;
    DeleteTranscriptionPhrasesResponseBody& operator=(DeleteTranscriptionPhrasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->status_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteTranscriptionPhrasesResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DeleteTranscriptionPhrasesResponseBodyData) };
    inline DeleteTranscriptionPhrasesResponseBodyData data() { DARABONBA_PTR_GET(data_, DeleteTranscriptionPhrasesResponseBodyData) };
    inline DeleteTranscriptionPhrasesResponseBody& setData(const DeleteTranscriptionPhrasesResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteTranscriptionPhrasesResponseBody& setData(DeleteTranscriptionPhrasesResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DeleteTranscriptionPhrasesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DeleteTranscriptionPhrasesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DeleteTranscriptionPhrasesResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<DeleteTranscriptionPhrasesResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
