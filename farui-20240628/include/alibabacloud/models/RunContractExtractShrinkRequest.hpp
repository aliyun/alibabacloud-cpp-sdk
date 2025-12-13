// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTEXTRACTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTEXTRACTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractExtractShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractExtractShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(fieldsToExtract, fieldsToExtractShrink_);
      DARABONBA_PTR_TO_JSON(fileOssUrl, fileOssUrl_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractExtractShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(fieldsToExtract, fieldsToExtractShrink_);
      DARABONBA_PTR_FROM_JSON(fileOssUrl, fileOssUrl_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    RunContractExtractShrinkRequest() = default ;
    RunContractExtractShrinkRequest(const RunContractExtractShrinkRequest &) = default ;
    RunContractExtractShrinkRequest(RunContractExtractShrinkRequest &&) = default ;
    RunContractExtractShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractExtractShrinkRequest() = default ;
    RunContractExtractShrinkRequest& operator=(const RunContractExtractShrinkRequest &) = default ;
    RunContractExtractShrinkRequest& operator=(RunContractExtractShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->fieldsToExtractShrink_ == nullptr && return this->fileOssUrl_ == nullptr && return this->regionId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RunContractExtractShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // fieldsToExtractShrink Field Functions 
    bool hasFieldsToExtractShrink() const { return this->fieldsToExtractShrink_ != nullptr;};
    void deleteFieldsToExtractShrink() { this->fieldsToExtractShrink_ = nullptr;};
    inline string fieldsToExtractShrink() const { DARABONBA_PTR_GET_DEFAULT(fieldsToExtractShrink_, "") };
    inline RunContractExtractShrinkRequest& setFieldsToExtractShrink(string fieldsToExtractShrink) { DARABONBA_PTR_SET_VALUE(fieldsToExtractShrink_, fieldsToExtractShrink) };


    // fileOssUrl Field Functions 
    bool hasFileOssUrl() const { return this->fileOssUrl_ != nullptr;};
    void deleteFileOssUrl() { this->fileOssUrl_ = nullptr;};
    inline string fileOssUrl() const { DARABONBA_PTR_GET_DEFAULT(fileOssUrl_, "") };
    inline RunContractExtractShrinkRequest& setFileOssUrl(string fileOssUrl) { DARABONBA_PTR_SET_VALUE(fileOssUrl_, fileOssUrl) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RunContractExtractShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> fieldsToExtractShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileOssUrl_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
