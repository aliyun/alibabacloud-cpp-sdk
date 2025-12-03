// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTOASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMPORTOASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImportOASResponseBodyErrorMessages.hpp>
#include <alibabacloud/models/ImportOASResponseBodyFailedApis.hpp>
#include <alibabacloud/models/ImportOASResponseBodyFailedModels.hpp>
#include <alibabacloud/models/ImportOASResponseBodySuccessApis.hpp>
#include <alibabacloud/models/ImportOASResponseBodySuccessModels.hpp>
#include <alibabacloud/models/ImportOASResponseBodyWarningMessages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ImportOASResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportOASResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessages, errorMessages_);
      DARABONBA_PTR_TO_JSON(FailedApis, failedApis_);
      DARABONBA_PTR_TO_JSON(FailedModels, failedModels_);
      DARABONBA_PTR_TO_JSON(OperationId, operationId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessApis, successApis_);
      DARABONBA_PTR_TO_JSON(SuccessModels, successModels_);
      DARABONBA_PTR_TO_JSON(WarningMessages, warningMessages_);
    };
    friend void from_json(const Darabonba::Json& j, ImportOASResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessages, errorMessages_);
      DARABONBA_PTR_FROM_JSON(FailedApis, failedApis_);
      DARABONBA_PTR_FROM_JSON(FailedModels, failedModels_);
      DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessApis, successApis_);
      DARABONBA_PTR_FROM_JSON(SuccessModels, successModels_);
      DARABONBA_PTR_FROM_JSON(WarningMessages, warningMessages_);
    };
    ImportOASResponseBody() = default ;
    ImportOASResponseBody(const ImportOASResponseBody &) = default ;
    ImportOASResponseBody(ImportOASResponseBody &&) = default ;
    ImportOASResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportOASResponseBody() = default ;
    ImportOASResponseBody& operator=(const ImportOASResponseBody &) = default ;
    ImportOASResponseBody& operator=(ImportOASResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessages_ == nullptr
        && return this->failedApis_ == nullptr && return this->failedModels_ == nullptr && return this->operationId_ == nullptr && return this->requestId_ == nullptr && return this->successApis_ == nullptr
        && return this->successModels_ == nullptr && return this->warningMessages_ == nullptr; };
    // errorMessages Field Functions 
    bool hasErrorMessages() const { return this->errorMessages_ != nullptr;};
    void deleteErrorMessages() { this->errorMessages_ = nullptr;};
    inline const ImportOASResponseBodyErrorMessages & errorMessages() const { DARABONBA_PTR_GET_CONST(errorMessages_, ImportOASResponseBodyErrorMessages) };
    inline ImportOASResponseBodyErrorMessages errorMessages() { DARABONBA_PTR_GET(errorMessages_, ImportOASResponseBodyErrorMessages) };
    inline ImportOASResponseBody& setErrorMessages(const ImportOASResponseBodyErrorMessages & errorMessages) { DARABONBA_PTR_SET_VALUE(errorMessages_, errorMessages) };
    inline ImportOASResponseBody& setErrorMessages(ImportOASResponseBodyErrorMessages && errorMessages) { DARABONBA_PTR_SET_RVALUE(errorMessages_, errorMessages) };


    // failedApis Field Functions 
    bool hasFailedApis() const { return this->failedApis_ != nullptr;};
    void deleteFailedApis() { this->failedApis_ = nullptr;};
    inline const ImportOASResponseBodyFailedApis & failedApis() const { DARABONBA_PTR_GET_CONST(failedApis_, ImportOASResponseBodyFailedApis) };
    inline ImportOASResponseBodyFailedApis failedApis() { DARABONBA_PTR_GET(failedApis_, ImportOASResponseBodyFailedApis) };
    inline ImportOASResponseBody& setFailedApis(const ImportOASResponseBodyFailedApis & failedApis) { DARABONBA_PTR_SET_VALUE(failedApis_, failedApis) };
    inline ImportOASResponseBody& setFailedApis(ImportOASResponseBodyFailedApis && failedApis) { DARABONBA_PTR_SET_RVALUE(failedApis_, failedApis) };


    // failedModels Field Functions 
    bool hasFailedModels() const { return this->failedModels_ != nullptr;};
    void deleteFailedModels() { this->failedModels_ = nullptr;};
    inline const ImportOASResponseBodyFailedModels & failedModels() const { DARABONBA_PTR_GET_CONST(failedModels_, ImportOASResponseBodyFailedModels) };
    inline ImportOASResponseBodyFailedModels failedModels() { DARABONBA_PTR_GET(failedModels_, ImportOASResponseBodyFailedModels) };
    inline ImportOASResponseBody& setFailedModels(const ImportOASResponseBodyFailedModels & failedModels) { DARABONBA_PTR_SET_VALUE(failedModels_, failedModels) };
    inline ImportOASResponseBody& setFailedModels(ImportOASResponseBodyFailedModels && failedModels) { DARABONBA_PTR_SET_RVALUE(failedModels_, failedModels) };


    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string operationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline ImportOASResponseBody& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImportOASResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successApis Field Functions 
    bool hasSuccessApis() const { return this->successApis_ != nullptr;};
    void deleteSuccessApis() { this->successApis_ = nullptr;};
    inline const ImportOASResponseBodySuccessApis & successApis() const { DARABONBA_PTR_GET_CONST(successApis_, ImportOASResponseBodySuccessApis) };
    inline ImportOASResponseBodySuccessApis successApis() { DARABONBA_PTR_GET(successApis_, ImportOASResponseBodySuccessApis) };
    inline ImportOASResponseBody& setSuccessApis(const ImportOASResponseBodySuccessApis & successApis) { DARABONBA_PTR_SET_VALUE(successApis_, successApis) };
    inline ImportOASResponseBody& setSuccessApis(ImportOASResponseBodySuccessApis && successApis) { DARABONBA_PTR_SET_RVALUE(successApis_, successApis) };


    // successModels Field Functions 
    bool hasSuccessModels() const { return this->successModels_ != nullptr;};
    void deleteSuccessModels() { this->successModels_ = nullptr;};
    inline const ImportOASResponseBodySuccessModels & successModels() const { DARABONBA_PTR_GET_CONST(successModels_, ImportOASResponseBodySuccessModels) };
    inline ImportOASResponseBodySuccessModels successModels() { DARABONBA_PTR_GET(successModels_, ImportOASResponseBodySuccessModels) };
    inline ImportOASResponseBody& setSuccessModels(const ImportOASResponseBodySuccessModels & successModels) { DARABONBA_PTR_SET_VALUE(successModels_, successModels) };
    inline ImportOASResponseBody& setSuccessModels(ImportOASResponseBodySuccessModels && successModels) { DARABONBA_PTR_SET_RVALUE(successModels_, successModels) };


    // warningMessages Field Functions 
    bool hasWarningMessages() const { return this->warningMessages_ != nullptr;};
    void deleteWarningMessages() { this->warningMessages_ = nullptr;};
    inline const ImportOASResponseBodyWarningMessages & warningMessages() const { DARABONBA_PTR_GET_CONST(warningMessages_, ImportOASResponseBodyWarningMessages) };
    inline ImportOASResponseBodyWarningMessages warningMessages() { DARABONBA_PTR_GET(warningMessages_, ImportOASResponseBodyWarningMessages) };
    inline ImportOASResponseBody& setWarningMessages(const ImportOASResponseBodyWarningMessages & warningMessages) { DARABONBA_PTR_SET_VALUE(warningMessages_, warningMessages) };
    inline ImportOASResponseBody& setWarningMessages(ImportOASResponseBodyWarningMessages && warningMessages) { DARABONBA_PTR_SET_RVALUE(warningMessages_, warningMessages) };


  protected:
    // The error messages that appear due to the invalid data in the imported file.
    std::shared_ptr<ImportOASResponseBodyErrorMessages> errorMessages_ = nullptr;
    // The APIs that failed to pass the precheck.
    std::shared_ptr<ImportOASResponseBodyFailedApis> failedApis_ = nullptr;
    // The information about the models that failed to pass the precheck.
    std::shared_ptr<ImportOASResponseBodyFailedModels> failedModels_ = nullptr;
    // The ID of the asynchronous API import task that was generated during the import operation. This ID is used to query the execution status of the API import task.
    std::shared_ptr<string> operationId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the APIs that have passed the precheck.
    std::shared_ptr<ImportOASResponseBodySuccessApis> successApis_ = nullptr;
    // The information about the models that have passed the precheck.
    std::shared_ptr<ImportOASResponseBodySuccessModels> successModels_ = nullptr;
    // The warning messages that appear due to the invalid data in the imported file.
    std::shared_ptr<ImportOASResponseBodyWarningMessages> warningMessages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
