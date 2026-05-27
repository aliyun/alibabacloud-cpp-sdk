// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFOREIGNPOCSAMPLEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFOREIGNPOCSAMPLEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreateForeignPocSampleAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateForeignPocSampleAdvanceRequest& obj) { 
      // fileObject_ is stream
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SampleName, sampleName_);
      DARABONBA_PTR_TO_JSON(Tab, tab_);
    };
    friend void from_json(const Darabonba::Json& j, CreateForeignPocSampleAdvanceRequest& obj) { 
      // fileObject_ is stream
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SampleName, sampleName_);
      DARABONBA_PTR_FROM_JSON(Tab, tab_);
    };
    CreateForeignPocSampleAdvanceRequest() = default ;
    CreateForeignPocSampleAdvanceRequest(const CreateForeignPocSampleAdvanceRequest &) = default ;
    CreateForeignPocSampleAdvanceRequest(CreateForeignPocSampleAdvanceRequest &&) = default ;
    CreateForeignPocSampleAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateForeignPocSampleAdvanceRequest() = default ;
    CreateForeignPocSampleAdvanceRequest& operator=(const CreateForeignPocSampleAdvanceRequest &) = default ;
    CreateForeignPocSampleAdvanceRequest& operator=(CreateForeignPocSampleAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileObject_ == nullptr
        && this->lang_ == nullptr && this->regId_ == nullptr && this->remark_ == nullptr && this->sampleName_ == nullptr && this->tab_ == nullptr; };
    // fileObject Field Functions 
    bool hasFileObject() const { return this->fileObject_ != nullptr;};
    void deleteFileObject() { this->fileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getFileObject() const { DARABONBA_GET(fileObject_) };
    inline CreateForeignPocSampleAdvanceRequest& setFileObject(shared_ptr<Darabonba::IStream> fileObject) { DARABONBA_SET_VALUE(fileObject_, fileObject) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateForeignPocSampleAdvanceRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CreateForeignPocSampleAdvanceRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateForeignPocSampleAdvanceRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sampleName Field Functions 
    bool hasSampleName() const { return this->sampleName_ != nullptr;};
    void deleteSampleName() { this->sampleName_ = nullptr;};
    inline string getSampleName() const { DARABONBA_PTR_GET_DEFAULT(sampleName_, "") };
    inline CreateForeignPocSampleAdvanceRequest& setSampleName(string sampleName) { DARABONBA_PTR_SET_VALUE(sampleName_, sampleName) };


    // tab Field Functions 
    bool hasTab() const { return this->tab_ != nullptr;};
    void deleteTab() { this->tab_ = nullptr;};
    inline string getTab() const { DARABONBA_PTR_GET_DEFAULT(tab_, "") };
    inline CreateForeignPocSampleAdvanceRequest& setTab(string tab) { DARABONBA_PTR_SET_VALUE(tab_, tab) };


  protected:
    shared_ptr<Darabonba::IStream> fileObject_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> regId_ {};
    shared_ptr<string> remark_ {};
    shared_ptr<string> sampleName_ {};
    shared_ptr<string> tab_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
