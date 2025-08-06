// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITMULTIPARTFILEUPLOADREQUESTOPTION_HPP_
#define ALIBABACLOUD_MODELS_INITMULTIPARTFILEUPLOADREQUESTOPTION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InitMultipartFileUploadRequestOptionPreCheckParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InitMultipartFileUploadRequestOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitMultipartFileUploadRequestOption& obj) { 
      DARABONBA_PTR_TO_JSON(PreCheckParam, preCheckParam_);
      DARABONBA_PTR_TO_JSON(PreferRegion, preferRegion_);
      DARABONBA_PTR_TO_JSON(StorageDriver, storageDriver_);
    };
    friend void from_json(const Darabonba::Json& j, InitMultipartFileUploadRequestOption& obj) { 
      DARABONBA_PTR_FROM_JSON(PreCheckParam, preCheckParam_);
      DARABONBA_PTR_FROM_JSON(PreferRegion, preferRegion_);
      DARABONBA_PTR_FROM_JSON(StorageDriver, storageDriver_);
    };
    InitMultipartFileUploadRequestOption() = default ;
    InitMultipartFileUploadRequestOption(const InitMultipartFileUploadRequestOption &) = default ;
    InitMultipartFileUploadRequestOption(InitMultipartFileUploadRequestOption &&) = default ;
    InitMultipartFileUploadRequestOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitMultipartFileUploadRequestOption() = default ;
    InitMultipartFileUploadRequestOption& operator=(const InitMultipartFileUploadRequestOption &) = default ;
    InitMultipartFileUploadRequestOption& operator=(InitMultipartFileUploadRequestOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->preCheckParam_ != nullptr
        && this->preferRegion_ != nullptr && this->storageDriver_ != nullptr; };
    // preCheckParam Field Functions 
    bool hasPreCheckParam() const { return this->preCheckParam_ != nullptr;};
    void deletePreCheckParam() { this->preCheckParam_ = nullptr;};
    inline const Models::InitMultipartFileUploadRequestOptionPreCheckParam & preCheckParam() const { DARABONBA_PTR_GET_CONST(preCheckParam_, Models::InitMultipartFileUploadRequestOptionPreCheckParam) };
    inline Models::InitMultipartFileUploadRequestOptionPreCheckParam preCheckParam() { DARABONBA_PTR_GET(preCheckParam_, Models::InitMultipartFileUploadRequestOptionPreCheckParam) };
    inline InitMultipartFileUploadRequestOption& setPreCheckParam(const Models::InitMultipartFileUploadRequestOptionPreCheckParam & preCheckParam) { DARABONBA_PTR_SET_VALUE(preCheckParam_, preCheckParam) };
    inline InitMultipartFileUploadRequestOption& setPreCheckParam(Models::InitMultipartFileUploadRequestOptionPreCheckParam && preCheckParam) { DARABONBA_PTR_SET_RVALUE(preCheckParam_, preCheckParam) };


    // preferRegion Field Functions 
    bool hasPreferRegion() const { return this->preferRegion_ != nullptr;};
    void deletePreferRegion() { this->preferRegion_ = nullptr;};
    inline string preferRegion() const { DARABONBA_PTR_GET_DEFAULT(preferRegion_, "") };
    inline InitMultipartFileUploadRequestOption& setPreferRegion(string preferRegion) { DARABONBA_PTR_SET_VALUE(preferRegion_, preferRegion) };


    // storageDriver Field Functions 
    bool hasStorageDriver() const { return this->storageDriver_ != nullptr;};
    void deleteStorageDriver() { this->storageDriver_ = nullptr;};
    inline string storageDriver() const { DARABONBA_PTR_GET_DEFAULT(storageDriver_, "") };
    inline InitMultipartFileUploadRequestOption& setStorageDriver(string storageDriver) { DARABONBA_PTR_SET_VALUE(storageDriver_, storageDriver) };


  protected:
    std::shared_ptr<Models::InitMultipartFileUploadRequestOptionPreCheckParam> preCheckParam_ = nullptr;
    std::shared_ptr<string> preferRegion_ = nullptr;
    std::shared_ptr<string> storageDriver_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
