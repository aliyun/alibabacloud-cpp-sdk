// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTEXTRACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTEXTRACTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunContractExtractRequestFieldsToExtract.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractExtractRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractExtractRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(fieldsToExtract, fieldsToExtract_);
      DARABONBA_PTR_TO_JSON(fileOssUrl, fileOssUrl_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractExtractRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(fieldsToExtract, fieldsToExtract_);
      DARABONBA_PTR_FROM_JSON(fileOssUrl, fileOssUrl_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    RunContractExtractRequest() = default ;
    RunContractExtractRequest(const RunContractExtractRequest &) = default ;
    RunContractExtractRequest(RunContractExtractRequest &&) = default ;
    RunContractExtractRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractExtractRequest() = default ;
    RunContractExtractRequest& operator=(const RunContractExtractRequest &) = default ;
    RunContractExtractRequest& operator=(RunContractExtractRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->fieldsToExtract_ == nullptr && return this->fileOssUrl_ == nullptr && return this->regionId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RunContractExtractRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // fieldsToExtract Field Functions 
    bool hasFieldsToExtract() const { return this->fieldsToExtract_ != nullptr;};
    void deleteFieldsToExtract() { this->fieldsToExtract_ = nullptr;};
    inline const vector<RunContractExtractRequestFieldsToExtract> & fieldsToExtract() const { DARABONBA_PTR_GET_CONST(fieldsToExtract_, vector<RunContractExtractRequestFieldsToExtract>) };
    inline vector<RunContractExtractRequestFieldsToExtract> fieldsToExtract() { DARABONBA_PTR_GET(fieldsToExtract_, vector<RunContractExtractRequestFieldsToExtract>) };
    inline RunContractExtractRequest& setFieldsToExtract(const vector<RunContractExtractRequestFieldsToExtract> & fieldsToExtract) { DARABONBA_PTR_SET_VALUE(fieldsToExtract_, fieldsToExtract) };
    inline RunContractExtractRequest& setFieldsToExtract(vector<RunContractExtractRequestFieldsToExtract> && fieldsToExtract) { DARABONBA_PTR_SET_RVALUE(fieldsToExtract_, fieldsToExtract) };


    // fileOssUrl Field Functions 
    bool hasFileOssUrl() const { return this->fileOssUrl_ != nullptr;};
    void deleteFileOssUrl() { this->fileOssUrl_ = nullptr;};
    inline string fileOssUrl() const { DARABONBA_PTR_GET_DEFAULT(fileOssUrl_, "") };
    inline RunContractExtractRequest& setFileOssUrl(string fileOssUrl) { DARABONBA_PTR_SET_VALUE(fileOssUrl_, fileOssUrl) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RunContractExtractRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<vector<RunContractExtractRequestFieldsToExtract>> fieldsToExtract_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileOssUrl_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
