// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERSAVEFLOWCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERSAVEFLOWCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterSaveFlowConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterSaveFlowConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterSaveFlowConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ModelRouterSaveFlowConfigResponseBody() = default ;
    ModelRouterSaveFlowConfigResponseBody(const ModelRouterSaveFlowConfigResponseBody &) = default ;
    ModelRouterSaveFlowConfigResponseBody(ModelRouterSaveFlowConfigResponseBody &&) = default ;
    ModelRouterSaveFlowConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterSaveFlowConfigResponseBody() = default ;
    ModelRouterSaveFlowConfigResponseBody& operator=(const ModelRouterSaveFlowConfigResponseBody &) = default ;
    ModelRouterSaveFlowConfigResponseBody& operator=(ModelRouterSaveFlowConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(modelId, modelId_);
        DARABONBA_PTR_TO_JSON(rpm, rpm_);
        DARABONBA_PTR_TO_JSON(smoothFlowEnabled, smoothFlowEnabled_);
        DARABONBA_PTR_TO_JSON(tpm, tpm_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(modelId, modelId_);
        DARABONBA_PTR_FROM_JSON(rpm, rpm_);
        DARABONBA_PTR_FROM_JSON(smoothFlowEnabled, smoothFlowEnabled_);
        DARABONBA_PTR_FROM_JSON(tpm, tpm_);
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
      virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->modelId_ == nullptr && this->rpm_ == nullptr && this->smoothFlowEnabled_ == nullptr
        && this->tpm_ == nullptr; };
      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modelId Field Functions 
      bool hasModelId() const { return this->modelId_ != nullptr;};
      void deleteModelId() { this->modelId_ = nullptr;};
      inline int32_t getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0) };
      inline Data& setModelId(int32_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


      // rpm Field Functions 
      bool hasRpm() const { return this->rpm_ != nullptr;};
      void deleteRpm() { this->rpm_ = nullptr;};
      inline int32_t getRpm() const { DARABONBA_PTR_GET_DEFAULT(rpm_, 0) };
      inline Data& setRpm(int32_t rpm) { DARABONBA_PTR_SET_VALUE(rpm_, rpm) };


      // smoothFlowEnabled Field Functions 
      bool hasSmoothFlowEnabled() const { return this->smoothFlowEnabled_ != nullptr;};
      void deleteSmoothFlowEnabled() { this->smoothFlowEnabled_ = nullptr;};
      inline bool getSmoothFlowEnabled() const { DARABONBA_PTR_GET_DEFAULT(smoothFlowEnabled_, false) };
      inline Data& setSmoothFlowEnabled(bool smoothFlowEnabled) { DARABONBA_PTR_SET_VALUE(smoothFlowEnabled_, smoothFlowEnabled) };


      // tpm Field Functions 
      bool hasTpm() const { return this->tpm_ != nullptr;};
      void deleteTpm() { this->tpm_ = nullptr;};
      inline int32_t getTpm() const { DARABONBA_PTR_GET_DEFAULT(tpm_, 0) };
      inline Data& setTpm(int32_t tpm) { DARABONBA_PTR_SET_VALUE(tpm_, tpm) };


    protected:
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<int32_t> modelId_ {};
      shared_ptr<int32_t> rpm_ {};
      shared_ptr<bool> smoothFlowEnabled_ {};
      shared_ptr<int32_t> tpm_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModelRouterSaveFlowConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ModelRouterSaveFlowConfigResponseBody::Data) };
    inline ModelRouterSaveFlowConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ModelRouterSaveFlowConfigResponseBody::Data) };
    inline ModelRouterSaveFlowConfigResponseBody& setData(const ModelRouterSaveFlowConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModelRouterSaveFlowConfigResponseBody& setData(ModelRouterSaveFlowConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ModelRouterSaveFlowConfigResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ModelRouterSaveFlowConfigResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ModelRouterSaveFlowConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModelRouterSaveFlowConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModelRouterSaveFlowConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<ModelRouterSaveFlowConfigResponseBody::Data> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
