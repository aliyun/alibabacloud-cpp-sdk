// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKINVENTORYJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKINVENTORYJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/KnowledgeJobInfoVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CheckInventoryJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckInventoryJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CheckInventoryJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CheckInventoryJobResponseBody() = default ;
    CheckInventoryJobResponseBody(const CheckInventoryJobResponseBody &) = default ;
    CheckInventoryJobResponseBody(CheckInventoryJobResponseBody &&) = default ;
    CheckInventoryJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckInventoryJobResponseBody() = default ;
    CheckInventoryJobResponseBody& operator=(const CheckInventoryJobResponseBody &) = default ;
    CheckInventoryJobResponseBody& operator=(CheckInventoryJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const KnowledgeJobInfoVO & getData() const { DARABONBA_PTR_GET_CONST(data_, KnowledgeJobInfoVO) };
    inline KnowledgeJobInfoVO getData() { DARABONBA_PTR_GET(data_, KnowledgeJobInfoVO) };
    inline CheckInventoryJobResponseBody& setData(const KnowledgeJobInfoVO & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CheckInventoryJobResponseBody& setData(KnowledgeJobInfoVO && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CheckInventoryJobResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline CheckInventoryJobResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckInventoryJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CheckInventoryJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // This parameter is required.
    shared_ptr<KnowledgeJobInfoVO> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
