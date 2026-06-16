// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOCSAMPLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOCSAMPLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreatePocSampleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePocSampleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SampleName, sampleName_);
      DARABONBA_PTR_TO_JSON(Tab, tab_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePocSampleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SampleName, sampleName_);
      DARABONBA_PTR_FROM_JSON(Tab, tab_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreatePocSampleRequest() = default ;
    CreatePocSampleRequest(const CreatePocSampleRequest &) = default ;
    CreatePocSampleRequest(CreatePocSampleRequest &&) = default ;
    CreatePocSampleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePocSampleRequest() = default ;
    CreatePocSampleRequest& operator=(const CreatePocSampleRequest &) = default ;
    CreatePocSampleRequest& operator=(CreatePocSampleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && this->fileUrl_ == nullptr && this->lang_ == nullptr && this->regId_ == nullptr && this->remark_ == nullptr && this->sampleName_ == nullptr
        && this->tab_ == nullptr && this->type_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreatePocSampleRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline CreatePocSampleRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreatePocSampleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CreatePocSampleRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreatePocSampleRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sampleName Field Functions 
    bool hasSampleName() const { return this->sampleName_ != nullptr;};
    void deleteSampleName() { this->sampleName_ = nullptr;};
    inline string getSampleName() const { DARABONBA_PTR_GET_DEFAULT(sampleName_, "") };
    inline CreatePocSampleRequest& setSampleName(string sampleName) { DARABONBA_PTR_SET_VALUE(sampleName_, sampleName) };


    // tab Field Functions 
    bool hasTab() const { return this->tab_ != nullptr;};
    void deleteTab() { this->tab_ = nullptr;};
    inline string getTab() const { DARABONBA_PTR_GET_DEFAULT(tab_, "") };
    inline CreatePocSampleRequest& setTab(string tab) { DARABONBA_PTR_SET_VALUE(tab_, tab) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreatePocSampleRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // File Name.
    shared_ptr<string> fileName_ {};
    // File URL.
    shared_ptr<string> fileUrl_ {};
    // The language of the error message returned by the API. Valid values: zh: Chinese. en: English. The default value is en.
    shared_ptr<string> lang_ {};
    // The area encoding.
    shared_ptr<string> regId_ {};
    // The remark for the topic. It can only contain letters, digits, underscores (_), and hyphens (-). The length must be 3 to 64 characters.
    shared_ptr<string> remark_ {};
    // Sample Name.
    shared_ptr<string> sampleName_ {};
    // Scenario.
    shared_ptr<string> tab_ {};
    // Access type.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
