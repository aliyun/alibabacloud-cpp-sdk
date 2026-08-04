// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERBATCHCREATEMODELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERBATCHCREATEMODELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModelDTO.hpp>
#include <alibabacloud/models/BatchModelErrorDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterBatchCreateModelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterBatchCreateModelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterBatchCreateModelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ModelRouterBatchCreateModelResponseBody() = default ;
    ModelRouterBatchCreateModelResponseBody(const ModelRouterBatchCreateModelResponseBody &) = default ;
    ModelRouterBatchCreateModelResponseBody(ModelRouterBatchCreateModelResponseBody &&) = default ;
    ModelRouterBatchCreateModelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterBatchCreateModelResponseBody() = default ;
    ModelRouterBatchCreateModelResponseBody& operator=(const ModelRouterBatchCreateModelResponseBody &) = default ;
    ModelRouterBatchCreateModelResponseBody& operator=(ModelRouterBatchCreateModelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(failCount, failCount_);
        DARABONBA_PTR_TO_JSON(failures, failures_);
        DARABONBA_PTR_TO_JSON(successCount, successCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(failCount, failCount_);
        DARABONBA_PTR_FROM_JSON(failures, failures_);
        DARABONBA_PTR_FROM_JSON(successCount, successCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->created_ == nullptr
        && this->failCount_ == nullptr && this->failures_ == nullptr && this->successCount_ == nullptr; };
      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline const vector<ModelDTO> & getCreated() const { DARABONBA_PTR_GET_CONST(created_, vector<ModelDTO>) };
      inline vector<ModelDTO> getCreated() { DARABONBA_PTR_GET(created_, vector<ModelDTO>) };
      inline Data& setCreated(const vector<ModelDTO> & created) { DARABONBA_PTR_SET_VALUE(created_, created) };
      inline Data& setCreated(vector<ModelDTO> && created) { DARABONBA_PTR_SET_RVALUE(created_, created) };


      // failCount Field Functions 
      bool hasFailCount() const { return this->failCount_ != nullptr;};
      void deleteFailCount() { this->failCount_ = nullptr;};
      inline int32_t getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
      inline Data& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


      // failures Field Functions 
      bool hasFailures() const { return this->failures_ != nullptr;};
      void deleteFailures() { this->failures_ = nullptr;};
      inline const vector<BatchModelErrorDTO> & getFailures() const { DARABONBA_PTR_GET_CONST(failures_, vector<BatchModelErrorDTO>) };
      inline vector<BatchModelErrorDTO> getFailures() { DARABONBA_PTR_GET(failures_, vector<BatchModelErrorDTO>) };
      inline Data& setFailures(const vector<BatchModelErrorDTO> & failures) { DARABONBA_PTR_SET_VALUE(failures_, failures) };
      inline Data& setFailures(vector<BatchModelErrorDTO> && failures) { DARABONBA_PTR_SET_RVALUE(failures_, failures) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
      inline Data& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    protected:
      // The list of models that were successfully created.
      shared_ptr<vector<ModelDTO>> created_ {};
      // The number of models that failed or were skipped.
      shared_ptr<int32_t> failCount_ {};
      // The list of models that failed or were skipped.
      shared_ptr<vector<BatchModelErrorDTO>> failures_ {};
      // The number of models that were successfully created.
      shared_ptr<int32_t> successCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModelRouterBatchCreateModelResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ModelRouterBatchCreateModelResponseBody::Data) };
    inline ModelRouterBatchCreateModelResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ModelRouterBatchCreateModelResponseBody::Data) };
    inline ModelRouterBatchCreateModelResponseBody& setData(const ModelRouterBatchCreateModelResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModelRouterBatchCreateModelResponseBody& setData(ModelRouterBatchCreateModelResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ModelRouterBatchCreateModelResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ModelRouterBatchCreateModelResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ModelRouterBatchCreateModelResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModelRouterBatchCreateModelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModelRouterBatchCreateModelResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data object.
    shared_ptr<ModelRouterBatchCreateModelResponseBody::Data> data_ {};
    // The fault code.
    shared_ptr<string> errCode_ {};
    // The error message.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
