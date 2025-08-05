// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTHTTPAPIRESPONSEBODYDATADRYRUNINFO_HPP_
#define ALIBABACLOUD_MODELS_IMPORTHTTPAPIRESPONSEBODYDATADRYRUNINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImportHttpApiResponseBodyDataDryRunInfoFailureComponents.hpp>
#include <alibabacloud/models/ImportHttpApiResponseBodyDataDryRunInfoFailureOperations.hpp>
#include <alibabacloud/models/ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents.hpp>
#include <alibabacloud/models/ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ImportHttpApiResponseBodyDataDryRunInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportHttpApiResponseBodyDataDryRunInfo& obj) { 
      DARABONBA_PTR_TO_JSON(errorMessages, errorMessages_);
      DARABONBA_PTR_TO_JSON(existHttpApiInfo, existHttpApiInfo_);
      DARABONBA_PTR_TO_JSON(failureComponents, failureComponents_);
      DARABONBA_PTR_TO_JSON(failureOperations, failureOperations_);
      DARABONBA_PTR_TO_JSON(successComponents, successComponents_);
      DARABONBA_PTR_TO_JSON(successOperations, successOperations_);
      DARABONBA_PTR_TO_JSON(warningMessages, warningMessages_);
    };
    friend void from_json(const Darabonba::Json& j, ImportHttpApiResponseBodyDataDryRunInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(errorMessages, errorMessages_);
      DARABONBA_PTR_FROM_JSON(existHttpApiInfo, existHttpApiInfo_);
      DARABONBA_PTR_FROM_JSON(failureComponents, failureComponents_);
      DARABONBA_PTR_FROM_JSON(failureOperations, failureOperations_);
      DARABONBA_PTR_FROM_JSON(successComponents, successComponents_);
      DARABONBA_PTR_FROM_JSON(successOperations, successOperations_);
      DARABONBA_PTR_FROM_JSON(warningMessages, warningMessages_);
    };
    ImportHttpApiResponseBodyDataDryRunInfo() = default ;
    ImportHttpApiResponseBodyDataDryRunInfo(const ImportHttpApiResponseBodyDataDryRunInfo &) = default ;
    ImportHttpApiResponseBodyDataDryRunInfo(ImportHttpApiResponseBodyDataDryRunInfo &&) = default ;
    ImportHttpApiResponseBodyDataDryRunInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportHttpApiResponseBodyDataDryRunInfo() = default ;
    ImportHttpApiResponseBodyDataDryRunInfo& operator=(const ImportHttpApiResponseBodyDataDryRunInfo &) = default ;
    ImportHttpApiResponseBodyDataDryRunInfo& operator=(ImportHttpApiResponseBodyDataDryRunInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorMessages_ != nullptr
        && this->existHttpApiInfo_ != nullptr && this->failureComponents_ != nullptr && this->failureOperations_ != nullptr && this->successComponents_ != nullptr && this->successOperations_ != nullptr
        && this->warningMessages_ != nullptr; };
    // errorMessages Field Functions 
    bool hasErrorMessages() const { return this->errorMessages_ != nullptr;};
    void deleteErrorMessages() { this->errorMessages_ = nullptr;};
    inline const vector<string> & errorMessages() const { DARABONBA_PTR_GET_CONST(errorMessages_, vector<string>) };
    inline vector<string> errorMessages() { DARABONBA_PTR_GET(errorMessages_, vector<string>) };
    inline ImportHttpApiResponseBodyDataDryRunInfo& setErrorMessages(const vector<string> & errorMessages) { DARABONBA_PTR_SET_VALUE(errorMessages_, errorMessages) };
    inline ImportHttpApiResponseBodyDataDryRunInfo& setErrorMessages(vector<string> && errorMessages) { DARABONBA_PTR_SET_RVALUE(errorMessages_, errorMessages) };


    // existHttpApiInfo Field Functions 
    bool hasExistHttpApiInfo() const { return this->existHttpApiInfo_ != nullptr;};
    void deleteExistHttpApiInfo() { this->existHttpApiInfo_ = nullptr;};
    inline const Models::HttpApiApiInfo & existHttpApiInfo() const { DARABONBA_PTR_GET_CONST(existHttpApiInfo_, Models::HttpApiApiInfo) };
    inline Models::HttpApiApiInfo existHttpApiInfo() { DARABONBA_PTR_GET(existHttpApiInfo_, Models::HttpApiApiInfo) };
    inline ImportHttpApiResponseBodyDataDryRunInfo& setExistHttpApiInfo(const Models::HttpApiApiInfo & existHttpApiInfo) { DARABONBA_PTR_SET_VALUE(existHttpApiInfo_, existHttpApiInfo) };
    inline ImportHttpApiResponseBodyDataDryRunInfo& setExistHttpApiInfo(Models::HttpApiApiInfo && existHttpApiInfo) { DARABONBA_PTR_SET_RVALUE(existHttpApiInfo_, existHttpApiInfo) };


    // failureComponents Field Functions 
    bool hasFailureComponents() const { return this->failureComponents_ != nullptr;};
    void deleteFailureComponents() { this->failureComponents_ = nullptr;};
    inline const vector<Models::ImportHttpApiResponseBodyDataDryRunInfoFailureComponents> & failureComponents() const { DARABONBA_PTR_GET_CONST(failureComponents_, vector<Models::ImportHttpApiResponseBodyDataDryRunInfoFailureComponents>) };
    inline vector<Models::ImportHttpApiResponseBodyDataDryRunInfoFailureComponents> failureComponents() { DARABONBA_PTR_GET(failureComponents_, vector<Models::ImportHttpApiResponseBodyDataDryRunInfoFailureComponents>) };
    inline ImportHttpApiResponseBodyDataDryRunInfo& setFailureComponents(const vector<Models::ImportHttpApiResponseBodyDataDryRunInfoFailureComponents> & failureComponents) { DARABONBA_PTR_SET_VALUE(failureComponents_, failureComponents) };
    inline ImportHttpApiResponseBodyDataDryRunInfo& setFailureComponents(vector<Models::ImportHttpApiResponseBodyDataDryRunInfoFailureComponents> && failureComponents) { DARABONBA_PTR_SET_RVALUE(failureComponents_, failureComponents) };


    // failureOperations Field Functions 
    bool hasFailureOperations() const { return this->failureOperations_ != nullptr;};
    void deleteFailureOperations() { this->failureOperations_ = nullptr;};
    inline const vector<Models::ImportHttpApiResponseBodyDataDryRunInfoFailureOperations> & failureOperations() const { DARABONBA_PTR_GET_CONST(failureOperations_, vector<Models::ImportHttpApiResponseBodyDataDryRunInfoFailureOperations>) };
    inline vector<Models::ImportHttpApiResponseBodyDataDryRunInfoFailureOperations> failureOperations() { DARABONBA_PTR_GET(failureOperations_, vector<Models::ImportHttpApiResponseBodyDataDryRunInfoFailureOperations>) };
    inline ImportHttpApiResponseBodyDataDryRunInfo& setFailureOperations(const vector<Models::ImportHttpApiResponseBodyDataDryRunInfoFailureOperations> & failureOperations) { DARABONBA_PTR_SET_VALUE(failureOperations_, failureOperations) };
    inline ImportHttpApiResponseBodyDataDryRunInfo& setFailureOperations(vector<Models::ImportHttpApiResponseBodyDataDryRunInfoFailureOperations> && failureOperations) { DARABONBA_PTR_SET_RVALUE(failureOperations_, failureOperations) };


    // successComponents Field Functions 
    bool hasSuccessComponents() const { return this->successComponents_ != nullptr;};
    void deleteSuccessComponents() { this->successComponents_ = nullptr;};
    inline const vector<Models::ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents> & successComponents() const { DARABONBA_PTR_GET_CONST(successComponents_, vector<Models::ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents>) };
    inline vector<Models::ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents> successComponents() { DARABONBA_PTR_GET(successComponents_, vector<Models::ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents>) };
    inline ImportHttpApiResponseBodyDataDryRunInfo& setSuccessComponents(const vector<Models::ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents> & successComponents) { DARABONBA_PTR_SET_VALUE(successComponents_, successComponents) };
    inline ImportHttpApiResponseBodyDataDryRunInfo& setSuccessComponents(vector<Models::ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents> && successComponents) { DARABONBA_PTR_SET_RVALUE(successComponents_, successComponents) };


    // successOperations Field Functions 
    bool hasSuccessOperations() const { return this->successOperations_ != nullptr;};
    void deleteSuccessOperations() { this->successOperations_ = nullptr;};
    inline const vector<Models::ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations> & successOperations() const { DARABONBA_PTR_GET_CONST(successOperations_, vector<Models::ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations>) };
    inline vector<Models::ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations> successOperations() { DARABONBA_PTR_GET(successOperations_, vector<Models::ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations>) };
    inline ImportHttpApiResponseBodyDataDryRunInfo& setSuccessOperations(const vector<Models::ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations> & successOperations) { DARABONBA_PTR_SET_VALUE(successOperations_, successOperations) };
    inline ImportHttpApiResponseBodyDataDryRunInfo& setSuccessOperations(vector<Models::ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations> && successOperations) { DARABONBA_PTR_SET_RVALUE(successOperations_, successOperations) };


    // warningMessages Field Functions 
    bool hasWarningMessages() const { return this->warningMessages_ != nullptr;};
    void deleteWarningMessages() { this->warningMessages_ = nullptr;};
    inline const vector<string> & warningMessages() const { DARABONBA_PTR_GET_CONST(warningMessages_, vector<string>) };
    inline vector<string> warningMessages() { DARABONBA_PTR_GET(warningMessages_, vector<string>) };
    inline ImportHttpApiResponseBodyDataDryRunInfo& setWarningMessages(const vector<string> & warningMessages) { DARABONBA_PTR_SET_VALUE(warningMessages_, warningMessages) };
    inline ImportHttpApiResponseBodyDataDryRunInfo& setWarningMessages(vector<string> && warningMessages) { DARABONBA_PTR_SET_RVALUE(warningMessages_, warningMessages) };


  protected:
    // The error messages. If an error message is returned, the API fails to be imported.
    std::shared_ptr<vector<string>> errorMessages_ = nullptr;
    // The existing APIs. If an existing API is returned, the import updates the existing API.
    std::shared_ptr<Models::HttpApiApiInfo> existHttpApiInfo_ = nullptr;
    // The data structs that fail the dry run.
    std::shared_ptr<vector<Models::ImportHttpApiResponseBodyDataDryRunInfoFailureComponents>> failureComponents_ = nullptr;
    // The operations that fail the dry run.
    std::shared_ptr<vector<Models::ImportHttpApiResponseBodyDataDryRunInfoFailureOperations>> failureOperations_ = nullptr;
    // The data structs that pass the dry run.
    std::shared_ptr<vector<Models::ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents>> successComponents_ = nullptr;
    // The operations that pass the dry run.
    std::shared_ptr<vector<Models::ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations>> successOperations_ = nullptr;
    // The alerts. If an alert is returned, specific operations or structs may fail to be imported.
    std::shared_ptr<vector<string>> warningMessages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
