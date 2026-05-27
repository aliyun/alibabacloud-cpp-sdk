// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADFOREIGNSAMPLEFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADFOREIGNSAMPLEFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class UploadForeignSampleFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadForeignSampleFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(File, file_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
      DARABONBA_PTR_TO_JSON(Tab, tab_);
    };
    friend void from_json(const Darabonba::Json& j, UploadForeignSampleFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(File, file_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
      DARABONBA_PTR_FROM_JSON(Tab, tab_);
    };
    UploadForeignSampleFileRequest() = default ;
    UploadForeignSampleFileRequest(const UploadForeignSampleFileRequest &) = default ;
    UploadForeignSampleFileRequest(UploadForeignSampleFileRequest &&) = default ;
    UploadForeignSampleFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadForeignSampleFileRequest() = default ;
    UploadForeignSampleFileRequest& operator=(const UploadForeignSampleFileRequest &) = default ;
    UploadForeignSampleFileRequest& operator=(UploadForeignSampleFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->file_ == nullptr
        && this->lang_ == nullptr && this->regId_ == nullptr && this->tab_ == nullptr; };
    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline string getFile() const { DARABONBA_PTR_GET_DEFAULT(file_, "") };
    inline UploadForeignSampleFileRequest& setFile(string file) { DARABONBA_PTR_SET_VALUE(file_, file) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UploadForeignSampleFileRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline UploadForeignSampleFileRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // tab Field Functions 
    bool hasTab() const { return this->tab_ != nullptr;};
    void deleteTab() { this->tab_ = nullptr;};
    inline string getTab() const { DARABONBA_PTR_GET_DEFAULT(tab_, "") };
    inline UploadForeignSampleFileRequest& setTab(string tab) { DARABONBA_PTR_SET_VALUE(tab_, tab) };


  protected:
    shared_ptr<string> file_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> regId_ {};
    shared_ptr<string> tab_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
