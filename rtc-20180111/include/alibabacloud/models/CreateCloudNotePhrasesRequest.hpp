// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDNOTEPHRASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDNOTEPHRASESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateCloudNotePhrasesRequestPhrase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class CreateCloudNotePhrasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudNotePhrasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Phrase, phrase_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudNotePhrasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Phrase, phrase_);
    };
    CreateCloudNotePhrasesRequest() = default ;
    CreateCloudNotePhrasesRequest(const CreateCloudNotePhrasesRequest &) = default ;
    CreateCloudNotePhrasesRequest(CreateCloudNotePhrasesRequest &&) = default ;
    CreateCloudNotePhrasesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudNotePhrasesRequest() = default ;
    CreateCloudNotePhrasesRequest& operator=(const CreateCloudNotePhrasesRequest &) = default ;
    CreateCloudNotePhrasesRequest& operator=(CreateCloudNotePhrasesRequest &&) = default ;
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
    inline CreateCloudNotePhrasesRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // phrase Field Functions 
    bool hasPhrase() const { return this->phrase_ != nullptr;};
    void deletePhrase() { this->phrase_ = nullptr;};
    inline const CreateCloudNotePhrasesRequestPhrase & phrase() const { DARABONBA_PTR_GET_CONST(phrase_, CreateCloudNotePhrasesRequestPhrase) };
    inline CreateCloudNotePhrasesRequestPhrase phrase() { DARABONBA_PTR_GET(phrase_, CreateCloudNotePhrasesRequestPhrase) };
    inline CreateCloudNotePhrasesRequest& setPhrase(const CreateCloudNotePhrasesRequestPhrase & phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };
    inline CreateCloudNotePhrasesRequest& setPhrase(CreateCloudNotePhrasesRequestPhrase && phrase) { DARABONBA_PTR_SET_RVALUE(phrase_, phrase) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateCloudNotePhrasesRequestPhrase> phrase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
