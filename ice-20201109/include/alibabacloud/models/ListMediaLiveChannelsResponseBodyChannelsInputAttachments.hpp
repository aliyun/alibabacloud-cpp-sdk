// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIALIVECHANNELSRESPONSEBODYCHANNELSINPUTATTACHMENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIALIVECHANNELSRESPONSEBODYCHANNELSINPUTATTACHMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaLiveChannelsResponseBodyChannelsInputAttachments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaLiveChannelsResponseBodyChannelsInputAttachments& obj) { 
      DARABONBA_PTR_TO_JSON(AudioSelectors, audioSelectors_);
      DARABONBA_PTR_TO_JSON(InputId, inputId_);
      DARABONBA_PTR_TO_JSON(InputName, inputName_);
      DARABONBA_PTR_TO_JSON(LanguageName, languageName_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaLiveChannelsResponseBodyChannelsInputAttachments& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioSelectors, audioSelectors_);
      DARABONBA_PTR_FROM_JSON(InputId, inputId_);
      DARABONBA_PTR_FROM_JSON(InputName, inputName_);
      DARABONBA_PTR_FROM_JSON(LanguageName, languageName_);
    };
    ListMediaLiveChannelsResponseBodyChannelsInputAttachments() = default ;
    ListMediaLiveChannelsResponseBodyChannelsInputAttachments(const ListMediaLiveChannelsResponseBodyChannelsInputAttachments &) = default ;
    ListMediaLiveChannelsResponseBodyChannelsInputAttachments(ListMediaLiveChannelsResponseBodyChannelsInputAttachments &&) = default ;
    ListMediaLiveChannelsResponseBodyChannelsInputAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaLiveChannelsResponseBodyChannelsInputAttachments() = default ;
    ListMediaLiveChannelsResponseBodyChannelsInputAttachments& operator=(const ListMediaLiveChannelsResponseBodyChannelsInputAttachments &) = default ;
    ListMediaLiveChannelsResponseBodyChannelsInputAttachments& operator=(ListMediaLiveChannelsResponseBodyChannelsInputAttachments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioSelectors_ == nullptr
        && return this->inputId_ == nullptr && return this->inputName_ == nullptr && return this->languageName_ == nullptr; };
    // audioSelectors Field Functions 
    bool hasAudioSelectors() const { return this->audioSelectors_ != nullptr;};
    void deleteAudioSelectors() { this->audioSelectors_ = nullptr;};
    inline const vector<Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors> & audioSelectors() const { DARABONBA_PTR_GET_CONST(audioSelectors_, vector<Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors>) };
    inline vector<Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors> audioSelectors() { DARABONBA_PTR_GET(audioSelectors_, vector<Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors>) };
    inline ListMediaLiveChannelsResponseBodyChannelsInputAttachments& setAudioSelectors(const vector<Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors> & audioSelectors) { DARABONBA_PTR_SET_VALUE(audioSelectors_, audioSelectors) };
    inline ListMediaLiveChannelsResponseBodyChannelsInputAttachments& setAudioSelectors(vector<Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors> && audioSelectors) { DARABONBA_PTR_SET_RVALUE(audioSelectors_, audioSelectors) };


    // inputId Field Functions 
    bool hasInputId() const { return this->inputId_ != nullptr;};
    void deleteInputId() { this->inputId_ = nullptr;};
    inline string inputId() const { DARABONBA_PTR_GET_DEFAULT(inputId_, "") };
    inline ListMediaLiveChannelsResponseBodyChannelsInputAttachments& setInputId(string inputId) { DARABONBA_PTR_SET_VALUE(inputId_, inputId) };


    // inputName Field Functions 
    bool hasInputName() const { return this->inputName_ != nullptr;};
    void deleteInputName() { this->inputName_ = nullptr;};
    inline string inputName() const { DARABONBA_PTR_GET_DEFAULT(inputName_, "") };
    inline ListMediaLiveChannelsResponseBodyChannelsInputAttachments& setInputName(string inputName) { DARABONBA_PTR_SET_VALUE(inputName_, inputName) };


    // languageName Field Functions 
    bool hasLanguageName() const { return this->languageName_ != nullptr;};
    void deleteLanguageName() { this->languageName_ = nullptr;};
    inline string languageName() const { DARABONBA_PTR_GET_DEFAULT(languageName_, "") };
    inline ListMediaLiveChannelsResponseBodyChannelsInputAttachments& setLanguageName(string languageName) { DARABONBA_PTR_SET_VALUE(languageName_, languageName) };


  protected:
    // The audio selectors.
    std::shared_ptr<vector<Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors>> audioSelectors_ = nullptr;
    // The ID of the input.
    // 
    // This parameter is required.
    std::shared_ptr<string> inputId_ = nullptr;
    // The name of the input.
    std::shared_ptr<string> inputName_ = nullptr;
    // The name of the language.
    std::shared_ptr<string> languageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
