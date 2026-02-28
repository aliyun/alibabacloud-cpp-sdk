// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLOUDNOTEPHRASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLOUDNOTEPHRASESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DeleteCloudNotePhrasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCloudNotePhrasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Phrase, phrase_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCloudNotePhrasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Phrase, phrase_);
    };
    DeleteCloudNotePhrasesRequest() = default ;
    DeleteCloudNotePhrasesRequest(const DeleteCloudNotePhrasesRequest &) = default ;
    DeleteCloudNotePhrasesRequest(DeleteCloudNotePhrasesRequest &&) = default ;
    DeleteCloudNotePhrasesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCloudNotePhrasesRequest() = default ;
    DeleteCloudNotePhrasesRequest& operator=(const DeleteCloudNotePhrasesRequest &) = default ;
    DeleteCloudNotePhrasesRequest& operator=(DeleteCloudNotePhrasesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Phrase : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Phrase& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
      };
      friend void from_json(const Darabonba::Json& j, Phrase& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
      };
      Phrase() = default ;
      Phrase(const Phrase &) = default ;
      Phrase(Phrase &&) = default ;
      Phrase(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Phrase() = default ;
      Phrase& operator=(const Phrase &) = default ;
      Phrase& operator=(Phrase &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Phrase& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    protected:
      // This parameter is required.
      shared_ptr<string> id_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->phrase_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteCloudNotePhrasesRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // phrase Field Functions 
    bool hasPhrase() const { return this->phrase_ != nullptr;};
    void deletePhrase() { this->phrase_ = nullptr;};
    inline const DeleteCloudNotePhrasesRequest::Phrase & getPhrase() const { DARABONBA_PTR_GET_CONST(phrase_, DeleteCloudNotePhrasesRequest::Phrase) };
    inline DeleteCloudNotePhrasesRequest::Phrase getPhrase() { DARABONBA_PTR_GET(phrase_, DeleteCloudNotePhrasesRequest::Phrase) };
    inline DeleteCloudNotePhrasesRequest& setPhrase(const DeleteCloudNotePhrasesRequest::Phrase & phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };
    inline DeleteCloudNotePhrasesRequest& setPhrase(DeleteCloudNotePhrasesRequest::Phrase && phrase) { DARABONBA_PTR_SET_RVALUE(phrase_, phrase) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<DeleteCloudNotePhrasesRequest::Phrase> phrase_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
