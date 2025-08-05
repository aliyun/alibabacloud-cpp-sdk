// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVERECEIVERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SAVERECEIVERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SaveReceiverDetailResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SaveReceiverDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveReceiverDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCount, errorCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
    };
    friend void from_json(const Darabonba::Json& j, SaveReceiverDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCount, errorCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
    };
    SaveReceiverDetailResponseBody() = default ;
    SaveReceiverDetailResponseBody(const SaveReceiverDetailResponseBody &) = default ;
    SaveReceiverDetailResponseBody(SaveReceiverDetailResponseBody &&) = default ;
    SaveReceiverDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveReceiverDetailResponseBody() = default ;
    SaveReceiverDetailResponseBody& operator=(const SaveReceiverDetailResponseBody &) = default ;
    SaveReceiverDetailResponseBody& operator=(SaveReceiverDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->errorCount_ != nullptr && this->requestId_ != nullptr && this->successCount_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SaveReceiverDetailResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, SaveReceiverDetailResponseBodyData) };
    inline SaveReceiverDetailResponseBodyData data() { DARABONBA_PTR_GET(data_, SaveReceiverDetailResponseBodyData) };
    inline SaveReceiverDetailResponseBody& setData(const SaveReceiverDetailResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SaveReceiverDetailResponseBody& setData(SaveReceiverDetailResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCount Field Functions 
    bool hasErrorCount() const { return this->errorCount_ != nullptr;};
    void deleteErrorCount() { this->errorCount_ = nullptr;};
    inline int32_t errorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0) };
    inline SaveReceiverDetailResponseBody& setErrorCount(int32_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SaveReceiverDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline SaveReceiverDetailResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


  protected:
    // List of recipient addresses that failed to upload.
    std::shared_ptr<SaveReceiverDetailResponseBodyData> data_ = nullptr;
    // Number of errors.
    std::shared_ptr<int32_t> errorCount_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // Number of successes.
    std::shared_ptr<int32_t> successCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
