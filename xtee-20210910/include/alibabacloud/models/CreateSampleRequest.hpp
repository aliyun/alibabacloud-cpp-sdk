// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESAMPLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESAMPLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreateSampleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSampleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(clientFileName, clientFileName_);
      DARABONBA_PTR_TO_JSON(clientPath, clientPath_);
      DARABONBA_PTR_TO_JSON(fileType, fileType_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(sampleTag, sampleTag_);
      DARABONBA_PTR_TO_JSON(sampleType, sampleType_);
      DARABONBA_PTR_TO_JSON(sampleValues, sampleValues_);
      DARABONBA_PTR_TO_JSON(uploadType, uploadType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSampleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(clientFileName, clientFileName_);
      DARABONBA_PTR_FROM_JSON(clientPath, clientPath_);
      DARABONBA_PTR_FROM_JSON(fileType, fileType_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(sampleTag, sampleTag_);
      DARABONBA_PTR_FROM_JSON(sampleType, sampleType_);
      DARABONBA_PTR_FROM_JSON(sampleValues, sampleValues_);
      DARABONBA_PTR_FROM_JSON(uploadType, uploadType_);
    };
    CreateSampleRequest() = default ;
    CreateSampleRequest(const CreateSampleRequest &) = default ;
    CreateSampleRequest(CreateSampleRequest &&) = default ;
    CreateSampleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSampleRequest() = default ;
    CreateSampleRequest& operator=(const CreateSampleRequest &) = default ;
    CreateSampleRequest& operator=(CreateSampleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->clientFileName_ != nullptr && this->clientPath_ != nullptr && this->fileType_ != nullptr && this->regId_ != nullptr && this->sampleTag_ != nullptr
        && this->sampleType_ != nullptr && this->sampleValues_ != nullptr && this->uploadType_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateSampleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // clientFileName Field Functions 
    bool hasClientFileName() const { return this->clientFileName_ != nullptr;};
    void deleteClientFileName() { this->clientFileName_ = nullptr;};
    inline string clientFileName() const { DARABONBA_PTR_GET_DEFAULT(clientFileName_, "") };
    inline CreateSampleRequest& setClientFileName(string clientFileName) { DARABONBA_PTR_SET_VALUE(clientFileName_, clientFileName) };


    // clientPath Field Functions 
    bool hasClientPath() const { return this->clientPath_ != nullptr;};
    void deleteClientPath() { this->clientPath_ = nullptr;};
    inline string clientPath() const { DARABONBA_PTR_GET_DEFAULT(clientPath_, "") };
    inline CreateSampleRequest& setClientPath(string clientPath) { DARABONBA_PTR_SET_VALUE(clientPath_, clientPath) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline CreateSampleRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CreateSampleRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // sampleTag Field Functions 
    bool hasSampleTag() const { return this->sampleTag_ != nullptr;};
    void deleteSampleTag() { this->sampleTag_ = nullptr;};
    inline string sampleTag() const { DARABONBA_PTR_GET_DEFAULT(sampleTag_, "") };
    inline CreateSampleRequest& setSampleTag(string sampleTag) { DARABONBA_PTR_SET_VALUE(sampleTag_, sampleTag) };


    // sampleType Field Functions 
    bool hasSampleType() const { return this->sampleType_ != nullptr;};
    void deleteSampleType() { this->sampleType_ = nullptr;};
    inline string sampleType() const { DARABONBA_PTR_GET_DEFAULT(sampleType_, "") };
    inline CreateSampleRequest& setSampleType(string sampleType) { DARABONBA_PTR_SET_VALUE(sampleType_, sampleType) };


    // sampleValues Field Functions 
    bool hasSampleValues() const { return this->sampleValues_ != nullptr;};
    void deleteSampleValues() { this->sampleValues_ = nullptr;};
    inline string sampleValues() const { DARABONBA_PTR_GET_DEFAULT(sampleValues_, "") };
    inline CreateSampleRequest& setSampleValues(string sampleValues) { DARABONBA_PTR_SET_VALUE(sampleValues_, sampleValues) };


    // uploadType Field Functions 
    bool hasUploadType() const { return this->uploadType_ != nullptr;};
    void deleteUploadType() { this->uploadType_ = nullptr;};
    inline string uploadType() const { DARABONBA_PTR_GET_DEFAULT(uploadType_, "") };
    inline CreateSampleRequest& setUploadType(string uploadType) { DARABONBA_PTR_SET_VALUE(uploadType_, uploadType) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // OSS client uploaded file name
    std::shared_ptr<string> clientFileName_ = nullptr;
    // OSS client address
    std::shared_ptr<string> clientPath_ = nullptr;
    // File type
    std::shared_ptr<string> fileType_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Sample tag
    std::shared_ptr<string> sampleTag_ = nullptr;
    // Sample type
    std::shared_ptr<string> sampleType_ = nullptr;
    // Sample values
    std::shared_ptr<string> sampleValues_ = nullptr;
    // Upload type
    std::shared_ptr<string> uploadType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
