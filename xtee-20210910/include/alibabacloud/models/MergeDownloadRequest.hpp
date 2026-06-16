// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERGEDOWNLOADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MERGEDOWNLOADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class MergeDownloadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MergeDownloadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
      DARABONBA_PTR_TO_JSON(SubTaskIds, subTaskIds_);
    };
    friend void from_json(const Darabonba::Json& j, MergeDownloadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
      DARABONBA_PTR_FROM_JSON(SubTaskIds, subTaskIds_);
    };
    MergeDownloadRequest() = default ;
    MergeDownloadRequest(const MergeDownloadRequest &) = default ;
    MergeDownloadRequest(MergeDownloadRequest &&) = default ;
    MergeDownloadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MergeDownloadRequest() = default ;
    MergeDownloadRequest& operator=(const MergeDownloadRequest &) = default ;
    MergeDownloadRequest& operator=(MergeDownloadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->regId_ == nullptr && this->subTaskIds_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline MergeDownloadRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline MergeDownloadRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // subTaskIds Field Functions 
    bool hasSubTaskIds() const { return this->subTaskIds_ != nullptr;};
    void deleteSubTaskIds() { this->subTaskIds_ = nullptr;};
    inline string getSubTaskIds() const { DARABONBA_PTR_GET_DEFAULT(subTaskIds_, "") };
    inline MergeDownloadRequest& setSubTaskIds(string subTaskIds) { DARABONBA_PTR_SET_VALUE(subTaskIds_, subTaskIds) };


  protected:
    // Language of error messages returned by the API. Valid values: zh: Chinese. en: English. Default value: en.
    shared_ptr<string> lang_ {};
    // Area encoding.
    shared_ptr<string> regId_ {};
    // Job IDs.
    shared_ptr<string> subTaskIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
