// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEFILEUPLOADPARAMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEFILEUPLOADPARAMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{
namespace Models
{
  class GenerateFileUploadParamsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateFileUploadParamsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateFileUploadParamsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
    };
    GenerateFileUploadParamsRequest() = default ;
    GenerateFileUploadParamsRequest(const GenerateFileUploadParamsRequest &) = default ;
    GenerateFileUploadParamsRequest(GenerateFileUploadParamsRequest &&) = default ;
    GenerateFileUploadParamsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateFileUploadParamsRequest() = default ;
    GenerateFileUploadParamsRequest& operator=(const GenerateFileUploadParamsRequest &) = default ;
    GenerateFileUploadParamsRequest& operator=(GenerateFileUploadParamsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessType_ == nullptr
        && this->businessUnitId_ == nullptr && this->fileName_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline GenerateFileUploadParamsRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // businessUnitId Field Functions 
    bool hasBusinessUnitId() const { return this->businessUnitId_ != nullptr;};
    void deleteBusinessUnitId() { this->businessUnitId_ = nullptr;};
    inline string getBusinessUnitId() const { DARABONBA_PTR_GET_DEFAULT(businessUnitId_, "") };
    inline GenerateFileUploadParamsRequest& setBusinessUnitId(string businessUnitId) { DARABONBA_PTR_SET_VALUE(businessUnitId_, businessUnitId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GenerateFileUploadParamsRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


  protected:
    shared_ptr<string> businessType_ {};
    shared_ptr<string> businessUnitId_ {};
    shared_ptr<string> fileName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
