// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMPORTOASTASKRESPONSEBODYAPIRESULTSAPIRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMPORTOASTASKRESPONSEBODYAPIRESULTSAPIRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeImportOASTaskResponseBodyApiResultsApiResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImportOASTaskResponseBodyApiResultsApiResult& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(UpdateStatus, updateStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImportOASTaskResponseBodyApiResultsApiResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(UpdateStatus, updateStatus_);
    };
    DescribeImportOASTaskResponseBodyApiResultsApiResult() = default ;
    DescribeImportOASTaskResponseBodyApiResultsApiResult(const DescribeImportOASTaskResponseBodyApiResultsApiResult &) = default ;
    DescribeImportOASTaskResponseBodyApiResultsApiResult(DescribeImportOASTaskResponseBodyApiResultsApiResult &&) = default ;
    DescribeImportOASTaskResponseBodyApiResultsApiResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImportOASTaskResponseBodyApiResultsApiResult() = default ;
    DescribeImportOASTaskResponseBodyApiResultsApiResult& operator=(const DescribeImportOASTaskResponseBodyApiResultsApiResult &) = default ;
    DescribeImportOASTaskResponseBodyApiResultsApiResult& operator=(DescribeImportOASTaskResponseBodyApiResultsApiResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiName_ == nullptr && return this->description_ == nullptr && return this->errorMessage_ == nullptr && return this->groupId_ == nullptr && return this->method_ == nullptr
        && return this->path_ == nullptr && return this->updateStatus_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeImportOASTaskResponseBodyApiResultsApiResult& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeImportOASTaskResponseBodyApiResultsApiResult& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeImportOASTaskResponseBodyApiResultsApiResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeImportOASTaskResponseBodyApiResultsApiResult& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeImportOASTaskResponseBodyApiResultsApiResult& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline DescribeImportOASTaskResponseBodyApiResultsApiResult& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeImportOASTaskResponseBodyApiResultsApiResult& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // updateStatus Field Functions 
    bool hasUpdateStatus() const { return this->updateStatus_ != nullptr;};
    void deleteUpdateStatus() { this->updateStatus_ = nullptr;};
    inline string updateStatus() const { DARABONBA_PTR_GET_DEFAULT(updateStatus_, "") };
    inline DescribeImportOASTaskResponseBodyApiResultsApiResult& setUpdateStatus(string updateStatus) { DARABONBA_PTR_SET_VALUE(updateStatus_, updateStatus) };


  protected:
    // The API ID.
    std::shared_ptr<string> apiId_ = nullptr;
    // The API name.
    std::shared_ptr<string> apiName_ = nullptr;
    // The API description.
    std::shared_ptr<string> description_ = nullptr;
    // The cause of the failure if the API fails to be imported.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The API group ID.
    std::shared_ptr<string> groupId_ = nullptr;
    // The HTTP request HTTP method of the API.
    std::shared_ptr<string> method_ = nullptr;
    // The request path of the API.
    std::shared_ptr<string> path_ = nullptr;
    // The execution status of the subtask. Valid values:
    // 
    // *   RUNNING
    // *   WAIT
    // *   OVER
    // *   FAIL
    // *   CANCEL
    std::shared_ptr<string> updateStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
