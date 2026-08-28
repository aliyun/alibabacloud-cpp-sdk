// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTSPECRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTSPECRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetAgentSpecResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentSpecResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentSpecResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetAgentSpecResponseBody() = default ;
    GetAgentSpecResponseBody(const GetAgentSpecResponseBody &) = default ;
    GetAgentSpecResponseBody(GetAgentSpecResponseBody &&) = default ;
    GetAgentSpecResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentSpecResponseBody() = default ;
    GetAgentSpecResponseBody& operator=(const GetAgentSpecResponseBody &) = default ;
    GetAgentSpecResponseBody& operator=(GetAgentSpecResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(bizTags, bizTags_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(downloadCount, downloadCount_);
        DARABONBA_PTR_TO_JSON(editingVersion, editingVersion_);
        DARABONBA_PTR_TO_JSON(enable, enable_);
        DARABONBA_PTR_TO_JSON(from, from_);
        DARABONBA_PTR_TO_JSON(labels, labels_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(onlineCnt, onlineCnt_);
        DARABONBA_PTR_TO_JSON(reviewingVersion, reviewingVersion_);
        DARABONBA_PTR_TO_JSON(scope, scope_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(versions, versions_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(bizTags, bizTags_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(downloadCount, downloadCount_);
        DARABONBA_PTR_FROM_JSON(editingVersion, editingVersion_);
        DARABONBA_PTR_FROM_JSON(enable, enable_);
        DARABONBA_PTR_FROM_JSON(from, from_);
        DARABONBA_PTR_FROM_JSON(labels, labels_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(onlineCnt, onlineCnt_);
        DARABONBA_PTR_FROM_JSON(reviewingVersion, reviewingVersion_);
        DARABONBA_PTR_FROM_JSON(scope, scope_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(versions, versions_);
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
      class Versions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Versions& obj) { 
          DARABONBA_PTR_TO_JSON(author, author_);
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(downloadCount, downloadCount_);
          DARABONBA_PTR_TO_JSON(publishPipelineInfo, publishPipelineInfo_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Versions& obj) { 
          DARABONBA_PTR_FROM_JSON(author, author_);
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(downloadCount, downloadCount_);
          DARABONBA_PTR_FROM_JSON(publishPipelineInfo, publishPipelineInfo_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(version, version_);
        };
        Versions() = default ;
        Versions(const Versions &) = default ;
        Versions(Versions &&) = default ;
        Versions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Versions() = default ;
        Versions& operator=(const Versions &) = default ;
        Versions& operator=(Versions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->author_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->downloadCount_ == nullptr && this->publishPipelineInfo_ == nullptr && this->status_ == nullptr
        && this->updateTime_ == nullptr && this->version_ == nullptr; };
        // author Field Functions 
        bool hasAuthor() const { return this->author_ != nullptr;};
        void deleteAuthor() { this->author_ = nullptr;};
        inline string getAuthor() const { DARABONBA_PTR_GET_DEFAULT(author_, "") };
        inline Versions& setAuthor(string author) { DARABONBA_PTR_SET_VALUE(author_, author) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Versions& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Versions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // downloadCount Field Functions 
        bool hasDownloadCount() const { return this->downloadCount_ != nullptr;};
        void deleteDownloadCount() { this->downloadCount_ = nullptr;};
        inline int64_t getDownloadCount() const { DARABONBA_PTR_GET_DEFAULT(downloadCount_, 0L) };
        inline Versions& setDownloadCount(int64_t downloadCount) { DARABONBA_PTR_SET_VALUE(downloadCount_, downloadCount) };


        // publishPipelineInfo Field Functions 
        bool hasPublishPipelineInfo() const { return this->publishPipelineInfo_ != nullptr;};
        void deletePublishPipelineInfo() { this->publishPipelineInfo_ = nullptr;};
        inline string getPublishPipelineInfo() const { DARABONBA_PTR_GET_DEFAULT(publishPipelineInfo_, "") };
        inline Versions& setPublishPipelineInfo(string publishPipelineInfo) { DARABONBA_PTR_SET_VALUE(publishPipelineInfo_, publishPipelineInfo) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Versions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline Versions& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Versions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The version author.
        shared_ptr<string> author_ {};
        // The creation time. This value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> createTime_ {};
        // The description.
        shared_ptr<string> description_ {};
        // The number of downloads.
        shared_ptr<int64_t> downloadCount_ {};
        // The publish pipeline information.
        shared_ptr<string> publishPipelineInfo_ {};
        // The status.
        shared_ptr<string> status_ {};
        // The update time. This value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> updateTime_ {};
        // The version number.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->bizTags_ == nullptr
        && this->description_ == nullptr && this->downloadCount_ == nullptr && this->editingVersion_ == nullptr && this->enable_ == nullptr && this->from_ == nullptr
        && this->labels_ == nullptr && this->name_ == nullptr && this->onlineCnt_ == nullptr && this->reviewingVersion_ == nullptr && this->scope_ == nullptr
        && this->updateTime_ == nullptr && this->versions_ == nullptr; };
      // bizTags Field Functions 
      bool hasBizTags() const { return this->bizTags_ != nullptr;};
      void deleteBizTags() { this->bizTags_ = nullptr;};
      inline string getBizTags() const { DARABONBA_PTR_GET_DEFAULT(bizTags_, "") };
      inline Data& setBizTags(string bizTags) { DARABONBA_PTR_SET_VALUE(bizTags_, bizTags) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // downloadCount Field Functions 
      bool hasDownloadCount() const { return this->downloadCount_ != nullptr;};
      void deleteDownloadCount() { this->downloadCount_ = nullptr;};
      inline int64_t getDownloadCount() const { DARABONBA_PTR_GET_DEFAULT(downloadCount_, 0L) };
      inline Data& setDownloadCount(int64_t downloadCount) { DARABONBA_PTR_SET_VALUE(downloadCount_, downloadCount) };


      // editingVersion Field Functions 
      bool hasEditingVersion() const { return this->editingVersion_ != nullptr;};
      void deleteEditingVersion() { this->editingVersion_ = nullptr;};
      inline string getEditingVersion() const { DARABONBA_PTR_GET_DEFAULT(editingVersion_, "") };
      inline Data& setEditingVersion(string editingVersion) { DARABONBA_PTR_SET_VALUE(editingVersion_, editingVersion) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Data& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // from Field Functions 
      bool hasFrom() const { return this->from_ != nullptr;};
      void deleteFrom() { this->from_ = nullptr;};
      inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
      inline Data& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const map<string, string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
      inline map<string, string> getLabels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
      inline Data& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline Data& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // onlineCnt Field Functions 
      bool hasOnlineCnt() const { return this->onlineCnt_ != nullptr;};
      void deleteOnlineCnt() { this->onlineCnt_ = nullptr;};
      inline int32_t getOnlineCnt() const { DARABONBA_PTR_GET_DEFAULT(onlineCnt_, 0) };
      inline Data& setOnlineCnt(int32_t onlineCnt) { DARABONBA_PTR_SET_VALUE(onlineCnt_, onlineCnt) };


      // reviewingVersion Field Functions 
      bool hasReviewingVersion() const { return this->reviewingVersion_ != nullptr;};
      void deleteReviewingVersion() { this->reviewingVersion_ = nullptr;};
      inline string getReviewingVersion() const { DARABONBA_PTR_GET_DEFAULT(reviewingVersion_, "") };
      inline Data& setReviewingVersion(string reviewingVersion) { DARABONBA_PTR_SET_VALUE(reviewingVersion_, reviewingVersion) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline Data& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Data& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // versions Field Functions 
      bool hasVersions() const { return this->versions_ != nullptr;};
      void deleteVersions() { this->versions_ = nullptr;};
      inline const vector<Data::Versions> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<Data::Versions>) };
      inline vector<Data::Versions> getVersions() { DARABONBA_PTR_GET(versions_, vector<Data::Versions>) };
      inline Data& setVersions(const vector<Data::Versions> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
      inline Data& setVersions(vector<Data::Versions> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


    protected:
      // The business tags.
      shared_ptr<string> bizTags_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The number of downloads.
      shared_ptr<int64_t> downloadCount_ {};
      // The version that is currently being edited.
      shared_ptr<string> editingVersion_ {};
      // Indicates whether the AgentSpec is enabled.
      shared_ptr<bool> enable_ {};
      // The source.
      shared_ptr<string> from_ {};
      // The version labels.
      shared_ptr<map<string, string>> labels_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The number of online versions.
      shared_ptr<int32_t> onlineCnt_ {};
      // The version that is currently under review.
      shared_ptr<string> reviewingVersion_ {};
      // The visibility scope.
      shared_ptr<string> scope_ {};
      // The update time. This value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> updateTime_ {};
      // The list of version summaries.
      shared_ptr<vector<Data::Versions>> versions_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAgentSpecResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAgentSpecResponseBody::Data) };
    inline GetAgentSpecResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAgentSpecResponseBody::Data) };
    inline GetAgentSpecResponseBody& setData(const GetAgentSpecResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAgentSpecResponseBody& setData(GetAgentSpecResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentSpecResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GetAgentSpecResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
