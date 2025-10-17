// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDNOTEPHRASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDNOTEPHRASESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyCloudNotePhrasesRequestPhrase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyCloudNotePhrasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudNotePhrasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Phrase, phrase_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudNotePhrasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Phrase, phrase_);
    };
    ModifyCloudNotePhrasesRequest() = default ;
    ModifyCloudNotePhrasesRequest(const ModifyCloudNotePhrasesRequest &) = default ;
    ModifyCloudNotePhrasesRequest(ModifyCloudNotePhrasesRequest &&) = default ;
    ModifyCloudNotePhrasesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudNotePhrasesRequest() = default ;
    ModifyCloudNotePhrasesRequest& operator=(const ModifyCloudNotePhrasesRequest &) = default ;
    ModifyCloudNotePhrasesRequest& operator=(ModifyCloudNotePhrasesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->phrase_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyCloudNotePhrasesRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // phrase Field Functions 
    bool hasPhrase() const { return this->phrase_ != nullptr;};
    void deletePhrase() { this->phrase_ = nullptr;};
    inline const ModifyCloudNotePhrasesRequestPhrase & phrase() const { DARABONBA_PTR_GET_CONST(phrase_, ModifyCloudNotePhrasesRequestPhrase) };
    inline ModifyCloudNotePhrasesRequestPhrase phrase() { DARABONBA_PTR_GET(phrase_, ModifyCloudNotePhrasesRequestPhrase) };
    inline ModifyCloudNotePhrasesRequest& setPhrase(const ModifyCloudNotePhrasesRequestPhrase & phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };
    inline ModifyCloudNotePhrasesRequest& setPhrase(ModifyCloudNotePhrasesRequestPhrase && phrase) { DARABONBA_PTR_SET_RVALUE(phrase_, phrase) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ModifyCloudNotePhrasesRequestPhrase> phrase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
