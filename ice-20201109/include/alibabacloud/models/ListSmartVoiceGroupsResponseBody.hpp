// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMARTVOICEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSMARTVOICEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSmartVoiceGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmartVoiceGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VoiceGroups, voiceGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmartVoiceGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VoiceGroups, voiceGroups_);
    };
    ListSmartVoiceGroupsResponseBody() = default ;
    ListSmartVoiceGroupsResponseBody(const ListSmartVoiceGroupsResponseBody &) = default ;
    ListSmartVoiceGroupsResponseBody(ListSmartVoiceGroupsResponseBody &&) = default ;
    ListSmartVoiceGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmartVoiceGroupsResponseBody() = default ;
    ListSmartVoiceGroupsResponseBody& operator=(const ListSmartVoiceGroupsResponseBody &) = default ;
    ListSmartVoiceGroupsResponseBody& operator=(ListSmartVoiceGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VoiceGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VoiceGroups& obj) { 
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(VoiceList, voiceList_);
      };
      friend void from_json(const Darabonba::Json& j, VoiceGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(VoiceList, voiceList_);
      };
      VoiceGroups() = default ;
      VoiceGroups(const VoiceGroups &) = default ;
      VoiceGroups(VoiceGroups &&) = default ;
      VoiceGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VoiceGroups() = default ;
      VoiceGroups& operator=(const VoiceGroups &) = default ;
      VoiceGroups& operator=(VoiceGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VoiceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VoiceList& obj) { 
          DARABONBA_PTR_TO_JSON(Desc, desc_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(SupportSampleRate, supportSampleRate_);
          DARABONBA_PTR_TO_JSON(Tag, tag_);
          DARABONBA_PTR_TO_JSON(Voice, voice_);
          DARABONBA_PTR_TO_JSON(VoiceSource, voiceSource_);
          DARABONBA_PTR_TO_JSON(VoiceType, voiceType_);
          DARABONBA_PTR_TO_JSON(VoiceUrl, voiceUrl_);
        };
        friend void from_json(const Darabonba::Json& j, VoiceList& obj) { 
          DARABONBA_PTR_FROM_JSON(Desc, desc_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(SupportSampleRate, supportSampleRate_);
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
          DARABONBA_PTR_FROM_JSON(Voice, voice_);
          DARABONBA_PTR_FROM_JSON(VoiceSource, voiceSource_);
          DARABONBA_PTR_FROM_JSON(VoiceType, voiceType_);
          DARABONBA_PTR_FROM_JSON(VoiceUrl, voiceUrl_);
        };
        VoiceList() = default ;
        VoiceList(const VoiceList &) = default ;
        VoiceList(VoiceList &&) = default ;
        VoiceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VoiceList() = default ;
        VoiceList& operator=(const VoiceList &) = default ;
        VoiceList& operator=(VoiceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->desc_ == nullptr
        && this->name_ == nullptr && this->remark_ == nullptr && this->supportSampleRate_ == nullptr && this->tag_ == nullptr && this->voice_ == nullptr
        && this->voiceSource_ == nullptr && this->voiceType_ == nullptr && this->voiceUrl_ == nullptr; };
        // desc Field Functions 
        bool hasDesc() const { return this->desc_ != nullptr;};
        void deleteDesc() { this->desc_ = nullptr;};
        inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
        inline VoiceList& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline VoiceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline VoiceList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // supportSampleRate Field Functions 
        bool hasSupportSampleRate() const { return this->supportSampleRate_ != nullptr;};
        void deleteSupportSampleRate() { this->supportSampleRate_ = nullptr;};
        inline string getSupportSampleRate() const { DARABONBA_PTR_GET_DEFAULT(supportSampleRate_, "") };
        inline VoiceList& setSupportSampleRate(string supportSampleRate) { DARABONBA_PTR_SET_VALUE(supportSampleRate_, supportSampleRate) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline VoiceList& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        // voice Field Functions 
        bool hasVoice() const { return this->voice_ != nullptr;};
        void deleteVoice() { this->voice_ = nullptr;};
        inline string getVoice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
        inline VoiceList& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


        // voiceSource Field Functions 
        bool hasVoiceSource() const { return this->voiceSource_ != nullptr;};
        void deleteVoiceSource() { this->voiceSource_ = nullptr;};
        inline string getVoiceSource() const { DARABONBA_PTR_GET_DEFAULT(voiceSource_, "") };
        inline VoiceList& setVoiceSource(string voiceSource) { DARABONBA_PTR_SET_VALUE(voiceSource_, voiceSource) };


        // voiceType Field Functions 
        bool hasVoiceType() const { return this->voiceType_ != nullptr;};
        void deleteVoiceType() { this->voiceType_ = nullptr;};
        inline string getVoiceType() const { DARABONBA_PTR_GET_DEFAULT(voiceType_, "") };
        inline VoiceList& setVoiceType(string voiceType) { DARABONBA_PTR_SET_VALUE(voiceType_, voiceType) };


        // voiceUrl Field Functions 
        bool hasVoiceUrl() const { return this->voiceUrl_ != nullptr;};
        void deleteVoiceUrl() { this->voiceUrl_ = nullptr;};
        inline string getVoiceUrl() const { DARABONBA_PTR_GET_DEFAULT(voiceUrl_, "") };
        inline VoiceList& setVoiceUrl(string voiceUrl) { DARABONBA_PTR_SET_VALUE(voiceUrl_, voiceUrl) };


      protected:
        // The speaker description.
        shared_ptr<string> desc_ {};
        // The speaker name.
        shared_ptr<string> name_ {};
        // The remarks of the speaker.
        shared_ptr<string> remark_ {};
        shared_ptr<string> supportSampleRate_ {};
        // The tag of the speaker type.
        shared_ptr<string> tag_ {};
        // The speaker ID.
        shared_ptr<string> voice_ {};
        shared_ptr<string> voiceSource_ {};
        // The speaker type.
        // 
        // Valid values:
        // 
        // *   Male
        // *   Female
        // *   Boy
        // *   Girl
        shared_ptr<string> voiceType_ {};
        // The URL of the sample audio file.
        shared_ptr<string> voiceUrl_ {};
      };

      virtual bool empty() const override { return this->type_ == nullptr
        && this->voiceList_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline VoiceGroups& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // voiceList Field Functions 
      bool hasVoiceList() const { return this->voiceList_ != nullptr;};
      void deleteVoiceList() { this->voiceList_ = nullptr;};
      inline const vector<VoiceGroups::VoiceList> & getVoiceList() const { DARABONBA_PTR_GET_CONST(voiceList_, vector<VoiceGroups::VoiceList>) };
      inline vector<VoiceGroups::VoiceList> getVoiceList() { DARABONBA_PTR_GET(voiceList_, vector<VoiceGroups::VoiceList>) };
      inline VoiceGroups& setVoiceList(const vector<VoiceGroups::VoiceList> & voiceList) { DARABONBA_PTR_SET_VALUE(voiceList_, voiceList) };
      inline VoiceGroups& setVoiceList(vector<VoiceGroups::VoiceList> && voiceList) { DARABONBA_PTR_SET_RVALUE(voiceList_, voiceList) };


    protected:
      // The name of the speaker group.
      shared_ptr<string> type_ {};
      // The speakers.
      shared_ptr<vector<VoiceGroups::VoiceList>> voiceList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->voiceGroups_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSmartVoiceGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // voiceGroups Field Functions 
    bool hasVoiceGroups() const { return this->voiceGroups_ != nullptr;};
    void deleteVoiceGroups() { this->voiceGroups_ = nullptr;};
    inline const vector<ListSmartVoiceGroupsResponseBody::VoiceGroups> & getVoiceGroups() const { DARABONBA_PTR_GET_CONST(voiceGroups_, vector<ListSmartVoiceGroupsResponseBody::VoiceGroups>) };
    inline vector<ListSmartVoiceGroupsResponseBody::VoiceGroups> getVoiceGroups() { DARABONBA_PTR_GET(voiceGroups_, vector<ListSmartVoiceGroupsResponseBody::VoiceGroups>) };
    inline ListSmartVoiceGroupsResponseBody& setVoiceGroups(const vector<ListSmartVoiceGroupsResponseBody::VoiceGroups> & voiceGroups) { DARABONBA_PTR_SET_VALUE(voiceGroups_, voiceGroups) };
    inline ListSmartVoiceGroupsResponseBody& setVoiceGroups(vector<ListSmartVoiceGroupsResponseBody::VoiceGroups> && voiceGroups) { DARABONBA_PTR_SET_RVALUE(voiceGroups_, voiceGroups) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried speaker groups.
    shared_ptr<vector<ListSmartVoiceGroupsResponseBody::VoiceGroups>> voiceGroups_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
