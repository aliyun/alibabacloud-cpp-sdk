// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTSWAGGERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMPORTSWAGGERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImportSwaggerResponseBodyFailed.hpp>
#include <alibabacloud/models/ImportSwaggerResponseBodyModelFailed.hpp>
#include <alibabacloud/models/ImportSwaggerResponseBodyModelSuccess.hpp>
#include <alibabacloud/models/ImportSwaggerResponseBodySuccess.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ImportSwaggerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportSwaggerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Failed, failed_);
      DARABONBA_PTR_TO_JSON(ModelFailed, modelFailed_);
      DARABONBA_PTR_TO_JSON(ModelSuccess, modelSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ImportSwaggerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Failed, failed_);
      DARABONBA_PTR_FROM_JSON(ModelFailed, modelFailed_);
      DARABONBA_PTR_FROM_JSON(ModelSuccess, modelSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ImportSwaggerResponseBody() = default ;
    ImportSwaggerResponseBody(const ImportSwaggerResponseBody &) = default ;
    ImportSwaggerResponseBody(ImportSwaggerResponseBody &&) = default ;
    ImportSwaggerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportSwaggerResponseBody() = default ;
    ImportSwaggerResponseBody& operator=(const ImportSwaggerResponseBody &) = default ;
    ImportSwaggerResponseBody& operator=(ImportSwaggerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failed_ == nullptr
        && return this->modelFailed_ == nullptr && return this->modelSuccess_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // failed Field Functions 
    bool hasFailed() const { return this->failed_ != nullptr;};
    void deleteFailed() { this->failed_ = nullptr;};
    inline const ImportSwaggerResponseBodyFailed & failed() const { DARABONBA_PTR_GET_CONST(failed_, ImportSwaggerResponseBodyFailed) };
    inline ImportSwaggerResponseBodyFailed failed() { DARABONBA_PTR_GET(failed_, ImportSwaggerResponseBodyFailed) };
    inline ImportSwaggerResponseBody& setFailed(const ImportSwaggerResponseBodyFailed & failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };
    inline ImportSwaggerResponseBody& setFailed(ImportSwaggerResponseBodyFailed && failed) { DARABONBA_PTR_SET_RVALUE(failed_, failed) };


    // modelFailed Field Functions 
    bool hasModelFailed() const { return this->modelFailed_ != nullptr;};
    void deleteModelFailed() { this->modelFailed_ = nullptr;};
    inline const ImportSwaggerResponseBodyModelFailed & modelFailed() const { DARABONBA_PTR_GET_CONST(modelFailed_, ImportSwaggerResponseBodyModelFailed) };
    inline ImportSwaggerResponseBodyModelFailed modelFailed() { DARABONBA_PTR_GET(modelFailed_, ImportSwaggerResponseBodyModelFailed) };
    inline ImportSwaggerResponseBody& setModelFailed(const ImportSwaggerResponseBodyModelFailed & modelFailed) { DARABONBA_PTR_SET_VALUE(modelFailed_, modelFailed) };
    inline ImportSwaggerResponseBody& setModelFailed(ImportSwaggerResponseBodyModelFailed && modelFailed) { DARABONBA_PTR_SET_RVALUE(modelFailed_, modelFailed) };


    // modelSuccess Field Functions 
    bool hasModelSuccess() const { return this->modelSuccess_ != nullptr;};
    void deleteModelSuccess() { this->modelSuccess_ = nullptr;};
    inline const ImportSwaggerResponseBodyModelSuccess & modelSuccess() const { DARABONBA_PTR_GET_CONST(modelSuccess_, ImportSwaggerResponseBodyModelSuccess) };
    inline ImportSwaggerResponseBodyModelSuccess modelSuccess() { DARABONBA_PTR_GET(modelSuccess_, ImportSwaggerResponseBodyModelSuccess) };
    inline ImportSwaggerResponseBody& setModelSuccess(const ImportSwaggerResponseBodyModelSuccess & modelSuccess) { DARABONBA_PTR_SET_VALUE(modelSuccess_, modelSuccess) };
    inline ImportSwaggerResponseBody& setModelSuccess(ImportSwaggerResponseBodyModelSuccess && modelSuccess) { DARABONBA_PTR_SET_RVALUE(modelSuccess_, modelSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImportSwaggerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline const ImportSwaggerResponseBodySuccess & success() const { DARABONBA_PTR_GET_CONST(success_, ImportSwaggerResponseBodySuccess) };
    inline ImportSwaggerResponseBodySuccess success() { DARABONBA_PTR_GET(success_, ImportSwaggerResponseBodySuccess) };
    inline ImportSwaggerResponseBody& setSuccess(const ImportSwaggerResponseBodySuccess & success) { DARABONBA_PTR_SET_VALUE(success_, success) };
    inline ImportSwaggerResponseBody& setSuccess(ImportSwaggerResponseBodySuccess && success) { DARABONBA_PTR_SET_RVALUE(success_, success) };


  protected:
    // The APIs that failed to be created based on the Swagger-compliant data imported this time.
    std::shared_ptr<ImportSwaggerResponseBodyFailed> failed_ = nullptr;
    // The models that failed to be imported through the Swagger-compliant data this time.
    std::shared_ptr<ImportSwaggerResponseBodyModelFailed> modelFailed_ = nullptr;
    // The models that were imported through the Swagger-compliant data this time.
    std::shared_ptr<ImportSwaggerResponseBodyModelSuccess> modelSuccess_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The APIs that are created based on the Swagger-compliant data imported this time.
    std::shared_ptr<ImportSwaggerResponseBodySuccess> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
