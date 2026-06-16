// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFOREIGNPOCSAMPLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFOREIGNPOCSAMPLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreateForeignPocSampleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateForeignPocSampleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(File, file_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SampleName, sampleName_);
      DARABONBA_PTR_TO_JSON(Tab, tab_);
    };
    friend void from_json(const Darabonba::Json& j, CreateForeignPocSampleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(File, file_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SampleName, sampleName_);
      DARABONBA_PTR_FROM_JSON(Tab, tab_);
    };
    CreateForeignPocSampleRequest() = default ;
    CreateForeignPocSampleRequest(const CreateForeignPocSampleRequest &) = default ;
    CreateForeignPocSampleRequest(CreateForeignPocSampleRequest &&) = default ;
    CreateForeignPocSampleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateForeignPocSampleRequest() = default ;
    CreateForeignPocSampleRequest& operator=(const CreateForeignPocSampleRequest &) = default ;
    CreateForeignPocSampleRequest& operator=(CreateForeignPocSampleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->file_ == nullptr
        && this->lang_ == nullptr && this->regId_ == nullptr && this->remark_ == nullptr && this->sampleName_ == nullptr && this->tab_ == nullptr; };
    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline string getFile() const { DARABONBA_PTR_GET_DEFAULT(file_, "") };
    inline CreateForeignPocSampleRequest& setFile(string file) { DARABONBA_PTR_SET_VALUE(file_, file) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateForeignPocSampleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CreateForeignPocSampleRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateForeignPocSampleRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sampleName Field Functions 
    bool hasSampleName() const { return this->sampleName_ != nullptr;};
    void deleteSampleName() { this->sampleName_ = nullptr;};
    inline string getSampleName() const { DARABONBA_PTR_GET_DEFAULT(sampleName_, "") };
    inline CreateForeignPocSampleRequest& setSampleName(string sampleName) { DARABONBA_PTR_SET_VALUE(sampleName_, sampleName) };


    // tab Field Functions 
    bool hasTab() const { return this->tab_ != nullptr;};
    void deleteTab() { this->tab_ = nullptr;};
    inline string getTab() const { DARABONBA_PTR_GET_DEFAULT(tab_, "") };
    inline CreateForeignPocSampleRequest& setTab(string tab) { DARABONBA_PTR_SET_VALUE(tab_, tab) };


  protected:
    // OSS path of the file.
    shared_ptr<string> file_ {};
    // Set the language type for requests and received messages. Default value is **zh**. Valid values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Area encoding.
    shared_ptr<string> regId_ {};
    // Remarks.
    shared_ptr<string> remark_ {};
    // Sample Name.
    shared_ptr<string> sampleName_ {};
    // Scenario.
    shared_ptr<string> tab_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
