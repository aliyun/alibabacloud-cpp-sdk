// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROMPTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROMPTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class GetPromptResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPromptResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPromptResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPromptResponseBody() = default ;
    GetPromptResponseBody(const GetPromptResponseBody &) = default ;
    GetPromptResponseBody(GetPromptResponseBody &&) = default ;
    GetPromptResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPromptResponseBody() = default ;
    GetPromptResponseBody& operator=(const GetPromptResponseBody &) = default ;
    GetPromptResponseBody& operator=(GetPromptResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BizTags, bizTags_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EditingVersion, editingVersion_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
        DARABONBA_PTR_TO_JSON(OnlineCnt, onlineCnt_);
        DARABONBA_PTR_TO_JSON(PromptKey, promptKey_);
        DARABONBA_PTR_TO_JSON(ReviewingVersion, reviewingVersion_);
        DARABONBA_PTR_TO_JSON(SchemaVersion, schemaVersion_);
        DARABONBA_PTR_TO_JSON(VersionDetails, versionDetails_);
        DARABONBA_PTR_TO_JSON(Versions, versions_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BizTags, bizTags_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EditingVersion, editingVersion_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
        DARABONBA_PTR_FROM_JSON(OnlineCnt, onlineCnt_);
        DARABONBA_PTR_FROM_JSON(PromptKey, promptKey_);
        DARABONBA_PTR_FROM_JSON(ReviewingVersion, reviewingVersion_);
        DARABONBA_PTR_FROM_JSON(SchemaVersion, schemaVersion_);
        DARABONBA_PTR_FROM_JSON(VersionDetails, versionDetails_);
        DARABONBA_PTR_FROM_JSON(Versions, versions_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VersionDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VersionDetails& obj) { 
          DARABONBA_PTR_TO_JSON(CommitMsg, commitMsg_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(PromptKey, promptKey_);
          DARABONBA_PTR_TO_JSON(SrcUser, srcUser_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, VersionDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(CommitMsg, commitMsg_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(PromptKey, promptKey_);
          DARABONBA_PTR_FROM_JSON(SrcUser, srcUser_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        VersionDetails() = default ;
        VersionDetails(const VersionDetails &) = default ;
        VersionDetails(VersionDetails &&) = default ;
        VersionDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VersionDetails() = default ;
        VersionDetails& operator=(const VersionDetails &) = default ;
        VersionDetails& operator=(VersionDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->commitMsg_ == nullptr
        && this->gmtModified_ == nullptr && this->promptKey_ == nullptr && this->srcUser_ == nullptr && this->status_ == nullptr && this->version_ == nullptr; };
        // commitMsg Field Functions 
        bool hasCommitMsg() const { return this->commitMsg_ != nullptr;};
        void deleteCommitMsg() { this->commitMsg_ = nullptr;};
        inline string getCommitMsg() const { DARABONBA_PTR_GET_DEFAULT(commitMsg_, "") };
        inline VersionDetails& setCommitMsg(string commitMsg) { DARABONBA_PTR_SET_VALUE(commitMsg_, commitMsg) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
        inline VersionDetails& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // promptKey Field Functions 
        bool hasPromptKey() const { return this->promptKey_ != nullptr;};
        void deletePromptKey() { this->promptKey_ = nullptr;};
        inline string getPromptKey() const { DARABONBA_PTR_GET_DEFAULT(promptKey_, "") };
        inline VersionDetails& setPromptKey(string promptKey) { DARABONBA_PTR_SET_VALUE(promptKey_, promptKey) };


        // srcUser Field Functions 
        bool hasSrcUser() const { return this->srcUser_ != nullptr;};
        void deleteSrcUser() { this->srcUser_ = nullptr;};
        inline string getSrcUser() const { DARABONBA_PTR_GET_DEFAULT(srcUser_, "") };
        inline VersionDetails& setSrcUser(string srcUser) { DARABONBA_PTR_SET_VALUE(srcUser_, srcUser) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline VersionDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline VersionDetails& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> commitMsg_ {};
        shared_ptr<int64_t> gmtModified_ {};
        shared_ptr<string> promptKey_ {};
        shared_ptr<string> srcUser_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->bizTags_ == nullptr
        && this->description_ == nullptr && this->editingVersion_ == nullptr && this->gmtModified_ == nullptr && this->labels_ == nullptr && this->latestVersion_ == nullptr
        && this->onlineCnt_ == nullptr && this->promptKey_ == nullptr && this->reviewingVersion_ == nullptr && this->schemaVersion_ == nullptr && this->versionDetails_ == nullptr
        && this->versions_ == nullptr; };
      // bizTags Field Functions 
      bool hasBizTags() const { return this->bizTags_ != nullptr;};
      void deleteBizTags() { this->bizTags_ = nullptr;};
      inline const vector<string> & getBizTags() const { DARABONBA_PTR_GET_CONST(bizTags_, vector<string>) };
      inline vector<string> getBizTags() { DARABONBA_PTR_GET(bizTags_, vector<string>) };
      inline Data& setBizTags(const vector<string> & bizTags) { DARABONBA_PTR_SET_VALUE(bizTags_, bizTags) };
      inline Data& setBizTags(vector<string> && bizTags) { DARABONBA_PTR_SET_RVALUE(bizTags_, bizTags) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // editingVersion Field Functions 
      bool hasEditingVersion() const { return this->editingVersion_ != nullptr;};
      void deleteEditingVersion() { this->editingVersion_ = nullptr;};
      inline string getEditingVersion() const { DARABONBA_PTR_GET_DEFAULT(editingVersion_, "") };
      inline Data& setEditingVersion(string editingVersion) { DARABONBA_PTR_SET_VALUE(editingVersion_, editingVersion) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Data& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const map<string, string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
      inline map<string, string> getLabels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
      inline Data& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline Data& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // latestVersion Field Functions 
      bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
      void deleteLatestVersion() { this->latestVersion_ = nullptr;};
      inline string getLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
      inline Data& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


      // onlineCnt Field Functions 
      bool hasOnlineCnt() const { return this->onlineCnt_ != nullptr;};
      void deleteOnlineCnt() { this->onlineCnt_ = nullptr;};
      inline int32_t getOnlineCnt() const { DARABONBA_PTR_GET_DEFAULT(onlineCnt_, 0) };
      inline Data& setOnlineCnt(int32_t onlineCnt) { DARABONBA_PTR_SET_VALUE(onlineCnt_, onlineCnt) };


      // promptKey Field Functions 
      bool hasPromptKey() const { return this->promptKey_ != nullptr;};
      void deletePromptKey() { this->promptKey_ = nullptr;};
      inline string getPromptKey() const { DARABONBA_PTR_GET_DEFAULT(promptKey_, "") };
      inline Data& setPromptKey(string promptKey) { DARABONBA_PTR_SET_VALUE(promptKey_, promptKey) };


      // reviewingVersion Field Functions 
      bool hasReviewingVersion() const { return this->reviewingVersion_ != nullptr;};
      void deleteReviewingVersion() { this->reviewingVersion_ = nullptr;};
      inline string getReviewingVersion() const { DARABONBA_PTR_GET_DEFAULT(reviewingVersion_, "") };
      inline Data& setReviewingVersion(string reviewingVersion) { DARABONBA_PTR_SET_VALUE(reviewingVersion_, reviewingVersion) };


      // schemaVersion Field Functions 
      bool hasSchemaVersion() const { return this->schemaVersion_ != nullptr;};
      void deleteSchemaVersion() { this->schemaVersion_ = nullptr;};
      inline int32_t getSchemaVersion() const { DARABONBA_PTR_GET_DEFAULT(schemaVersion_, 0) };
      inline Data& setSchemaVersion(int32_t schemaVersion) { DARABONBA_PTR_SET_VALUE(schemaVersion_, schemaVersion) };


      // versionDetails Field Functions 
      bool hasVersionDetails() const { return this->versionDetails_ != nullptr;};
      void deleteVersionDetails() { this->versionDetails_ = nullptr;};
      inline const vector<Data::VersionDetails> & getVersionDetails() const { DARABONBA_PTR_GET_CONST(versionDetails_, vector<Data::VersionDetails>) };
      inline vector<Data::VersionDetails> getVersionDetails() { DARABONBA_PTR_GET(versionDetails_, vector<Data::VersionDetails>) };
      inline Data& setVersionDetails(const vector<Data::VersionDetails> & versionDetails) { DARABONBA_PTR_SET_VALUE(versionDetails_, versionDetails) };
      inline Data& setVersionDetails(vector<Data::VersionDetails> && versionDetails) { DARABONBA_PTR_SET_RVALUE(versionDetails_, versionDetails) };


      // versions Field Functions 
      bool hasVersions() const { return this->versions_ != nullptr;};
      void deleteVersions() { this->versions_ = nullptr;};
      inline const vector<string> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<string>) };
      inline vector<string> getVersions() { DARABONBA_PTR_GET(versions_, vector<string>) };
      inline Data& setVersions(const vector<string> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
      inline Data& setVersions(vector<string> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


    protected:
      shared_ptr<vector<string>> bizTags_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> editingVersion_ {};
      shared_ptr<int64_t> gmtModified_ {};
      shared_ptr<map<string, string>> labels_ {};
      shared_ptr<string> latestVersion_ {};
      shared_ptr<int32_t> onlineCnt_ {};
      shared_ptr<string> promptKey_ {};
      shared_ptr<string> reviewingVersion_ {};
      shared_ptr<int32_t> schemaVersion_ {};
      shared_ptr<vector<Data::VersionDetails>> versionDetails_ {};
      shared_ptr<vector<string>> versions_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPromptResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPromptResponseBody::Data) };
    inline GetPromptResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPromptResponseBody::Data) };
    inline GetPromptResponseBody& setData(const GetPromptResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPromptResponseBody& setData(GetPromptResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPromptResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetPromptResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
