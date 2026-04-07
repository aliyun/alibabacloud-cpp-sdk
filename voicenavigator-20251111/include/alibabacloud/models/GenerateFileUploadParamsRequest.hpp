// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEFILEUPLOADPARAMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEFILEUPLOADPARAMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class GenerateFileUploadParamsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateFileUploadParamsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateFileUploadParamsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
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
        && this->fileName_ == nullptr && this->instanceId_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline GenerateFileUploadParamsRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GenerateFileUploadParamsRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GenerateFileUploadParamsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    shared_ptr<string> businessType_ {};
    shared_ptr<string> fileName_ {};
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
