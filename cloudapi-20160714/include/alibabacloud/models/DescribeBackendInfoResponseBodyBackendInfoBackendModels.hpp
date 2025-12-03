// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODYBACKENDINFOBACKENDMODELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODYBACKENDINFOBACKENDMODELS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeBackendInfoResponseBodyBackendInfoBackendModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackendInfoResponseBodyBackendInfoBackendModels& obj) { 
      DARABONBA_PTR_TO_JSON(BackendConfig, backendConfig_);
      DARABONBA_PTR_TO_JSON(BackendModelId, backendModelId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(StageModeId, stageModeId_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackendInfoResponseBodyBackendInfoBackendModels& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendConfig, backendConfig_);
      DARABONBA_PTR_FROM_JSON(BackendModelId, backendModelId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(StageModeId, stageModeId_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    DescribeBackendInfoResponseBodyBackendInfoBackendModels() = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModels(const DescribeBackendInfoResponseBodyBackendInfoBackendModels &) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModels(DescribeBackendInfoResponseBodyBackendInfoBackendModels &&) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackendInfoResponseBodyBackendInfoBackendModels() = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModels& operator=(const DescribeBackendInfoResponseBodyBackendInfoBackendModels &) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModels& operator=(DescribeBackendInfoResponseBodyBackendInfoBackendModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendConfig_ == nullptr
        && return this->backendModelId_ == nullptr && return this->description_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->stageModeId_ == nullptr
        && return this->stageName_ == nullptr; };
    // backendConfig Field Functions 
    bool hasBackendConfig() const { return this->backendConfig_ != nullptr;};
    void deleteBackendConfig() { this->backendConfig_ = nullptr;};
    inline const Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig & backendConfig() const { DARABONBA_PTR_GET_CONST(backendConfig_, Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig) };
    inline Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig backendConfig() { DARABONBA_PTR_GET(backendConfig_, Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModels& setBackendConfig(const Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig & backendConfig) { DARABONBA_PTR_SET_VALUE(backendConfig_, backendConfig) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModels& setBackendConfig(Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig && backendConfig) { DARABONBA_PTR_SET_RVALUE(backendConfig_, backendConfig) };


    // backendModelId Field Functions 
    bool hasBackendModelId() const { return this->backendModelId_ != nullptr;};
    void deleteBackendModelId() { this->backendModelId_ = nullptr;};
    inline string backendModelId() const { DARABONBA_PTR_GET_DEFAULT(backendModelId_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModels& setBackendModelId(string backendModelId) { DARABONBA_PTR_SET_VALUE(backendModelId_, backendModelId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModels& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModels& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModels& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // stageModeId Field Functions 
    bool hasStageModeId() const { return this->stageModeId_ != nullptr;};
    void deleteStageModeId() { this->stageModeId_ = nullptr;};
    inline string stageModeId() const { DARABONBA_PTR_GET_DEFAULT(stageModeId_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModels& setStageModeId(string stageModeId) { DARABONBA_PTR_SET_VALUE(stageModeId_, stageModeId) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModels& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // The backend service configurations.
    std::shared_ptr<Models::DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfig> backendConfig_ = nullptr;
    // The ID of the backend service in the environment.
    std::shared_ptr<string> backendModelId_ = nullptr;
    // The description of the backend service.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the backend service was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the backend service was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the environment.
    std::shared_ptr<string> stageModeId_ = nullptr;
    // The environment name.
    std::shared_ptr<string> stageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
