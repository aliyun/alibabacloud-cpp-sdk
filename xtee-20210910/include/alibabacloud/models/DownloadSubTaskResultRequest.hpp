// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADSUBTASKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADSUBTASKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DownloadSubTaskResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadSubTaskResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
      DARABONBA_PTR_TO_JSON(SubTaskId, subTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadSubTaskResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
      DARABONBA_PTR_FROM_JSON(SubTaskId, subTaskId_);
    };
    DownloadSubTaskResultRequest() = default ;
    DownloadSubTaskResultRequest(const DownloadSubTaskResultRequest &) = default ;
    DownloadSubTaskResultRequest(DownloadSubTaskResultRequest &&) = default ;
    DownloadSubTaskResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadSubTaskResultRequest() = default ;
    DownloadSubTaskResultRequest& operator=(const DownloadSubTaskResultRequest &) = default ;
    DownloadSubTaskResultRequest& operator=(DownloadSubTaskResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->regId_ == nullptr && this->subTaskId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DownloadSubTaskResultRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DownloadSubTaskResultRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // subTaskId Field Functions 
    bool hasSubTaskId() const { return this->subTaskId_ != nullptr;};
    void deleteSubTaskId() { this->subTaskId_ = nullptr;};
    inline int32_t getSubTaskId() const { DARABONBA_PTR_GET_DEFAULT(subTaskId_, 0) };
    inline DownloadSubTaskResultRequest& setSubTaskId(int32_t subTaskId) { DARABONBA_PTR_SET_VALUE(subTaskId_, subTaskId) };


  protected:
    shared_ptr<string> lang_ {};
    shared_ptr<string> regId_ {};
    shared_ptr<int32_t> subTaskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
