// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetTopicListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TopicList, topicList_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TopicList, topicList_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetTopicListResponseBody() = default ;
    GetTopicListResponseBody(const GetTopicListResponseBody &) = default ;
    GetTopicListResponseBody(GetTopicListResponseBody &&) = default ;
    GetTopicListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicListResponseBody() = default ;
    GetTopicListResponseBody& operator=(const GetTopicListResponseBody &) = default ;
    GetTopicListResponseBody& operator=(GetTopicListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TopicList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TopicList& obj) { 
        DARABONBA_PTR_TO_JSON(TopicVO, topicVO_);
      };
      friend void from_json(const Darabonba::Json& j, TopicList& obj) { 
        DARABONBA_PTR_FROM_JSON(TopicVO, topicVO_);
      };
      TopicList() = default ;
      TopicList(const TopicList &) = default ;
      TopicList(TopicList &&) = default ;
      TopicList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TopicList() = default ;
      TopicList& operator=(const TopicList &) = default ;
      TopicList& operator=(TopicList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TopicVO : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TopicVO& obj) { 
          DARABONBA_PTR_TO_JSON(AutoCreate, autoCreate_);
          DARABONBA_PTR_TO_JSON(CompactTopic, compactTopic_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(LocalTopic, localTopic_);
          DARABONBA_PTR_TO_JSON(PartitionNum, partitionNum_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusName, statusName_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Topic, topic_);
          DARABONBA_PTR_TO_JSON(TopicConfig, topicConfig_);
        };
        friend void from_json(const Darabonba::Json& j, TopicVO& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoCreate, autoCreate_);
          DARABONBA_PTR_FROM_JSON(CompactTopic, compactTopic_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(LocalTopic, localTopic_);
          DARABONBA_PTR_FROM_JSON(PartitionNum, partitionNum_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusName, statusName_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Topic, topic_);
          DARABONBA_PTR_FROM_JSON(TopicConfig, topicConfig_);
        };
        TopicVO() = default ;
        TopicVO(const TopicVO &) = default ;
        TopicVO(TopicVO &&) = default ;
        TopicVO(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TopicVO() = default ;
        TopicVO& operator=(const TopicVO &) = default ;
        TopicVO& operator=(TopicVO &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(TagVO, tagVO_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(TagVO, tagVO_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TagVO : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TagVO& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, TagVO& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            TagVO() = default ;
            TagVO(const TagVO &) = default ;
            TagVO(TagVO &&) = default ;
            TagVO(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TagVO() = default ;
            TagVO& operator=(const TagVO &) = default ;
            TagVO& operator=(TagVO &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline TagVO& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline TagVO& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> key_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tagVO_ == nullptr; };
          // tagVO Field Functions 
          bool hasTagVO() const { return this->tagVO_ != nullptr;};
          void deleteTagVO() { this->tagVO_ = nullptr;};
          inline const vector<Tags::TagVO> & getTagVO() const { DARABONBA_PTR_GET_CONST(tagVO_, vector<Tags::TagVO>) };
          inline vector<Tags::TagVO> getTagVO() { DARABONBA_PTR_GET(tagVO_, vector<Tags::TagVO>) };
          inline Tags& setTagVO(const vector<Tags::TagVO> & tagVO) { DARABONBA_PTR_SET_VALUE(tagVO_, tagVO) };
          inline Tags& setTagVO(vector<Tags::TagVO> && tagVO) { DARABONBA_PTR_SET_RVALUE(tagVO_, tagVO) };


        protected:
          shared_ptr<vector<Tags::TagVO>> tagVO_ {};
        };

        virtual bool empty() const override { return this->autoCreate_ == nullptr
        && this->compactTopic_ == nullptr && this->createTime_ == nullptr && this->instanceId_ == nullptr && this->localTopic_ == nullptr && this->partitionNum_ == nullptr
        && this->regionId_ == nullptr && this->remark_ == nullptr && this->status_ == nullptr && this->statusName_ == nullptr && this->tags_ == nullptr
        && this->topic_ == nullptr && this->topicConfig_ == nullptr; };
        // autoCreate Field Functions 
        bool hasAutoCreate() const { return this->autoCreate_ != nullptr;};
        void deleteAutoCreate() { this->autoCreate_ = nullptr;};
        inline bool getAutoCreate() const { DARABONBA_PTR_GET_DEFAULT(autoCreate_, false) };
        inline TopicVO& setAutoCreate(bool autoCreate) { DARABONBA_PTR_SET_VALUE(autoCreate_, autoCreate) };


        // compactTopic Field Functions 
        bool hasCompactTopic() const { return this->compactTopic_ != nullptr;};
        void deleteCompactTopic() { this->compactTopic_ = nullptr;};
        inline bool getCompactTopic() const { DARABONBA_PTR_GET_DEFAULT(compactTopic_, false) };
        inline TopicVO& setCompactTopic(bool compactTopic) { DARABONBA_PTR_SET_VALUE(compactTopic_, compactTopic) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline TopicVO& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline TopicVO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // localTopic Field Functions 
        bool hasLocalTopic() const { return this->localTopic_ != nullptr;};
        void deleteLocalTopic() { this->localTopic_ = nullptr;};
        inline bool getLocalTopic() const { DARABONBA_PTR_GET_DEFAULT(localTopic_, false) };
        inline TopicVO& setLocalTopic(bool localTopic) { DARABONBA_PTR_SET_VALUE(localTopic_, localTopic) };


        // partitionNum Field Functions 
        bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
        void deletePartitionNum() { this->partitionNum_ = nullptr;};
        inline int32_t getPartitionNum() const { DARABONBA_PTR_GET_DEFAULT(partitionNum_, 0) };
        inline TopicVO& setPartitionNum(int32_t partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline TopicVO& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline TopicVO& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline TopicVO& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusName Field Functions 
        bool hasStatusName() const { return this->statusName_ != nullptr;};
        void deleteStatusName() { this->statusName_ = nullptr;};
        inline string getStatusName() const { DARABONBA_PTR_GET_DEFAULT(statusName_, "") };
        inline TopicVO& setStatusName(string statusName) { DARABONBA_PTR_SET_VALUE(statusName_, statusName) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const TopicVO::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, TopicVO::Tags) };
        inline TopicVO::Tags getTags() { DARABONBA_PTR_GET(tags_, TopicVO::Tags) };
        inline TopicVO& setTags(const TopicVO::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline TopicVO& setTags(TopicVO::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // topic Field Functions 
        bool hasTopic() const { return this->topic_ != nullptr;};
        void deleteTopic() { this->topic_ = nullptr;};
        inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
        inline TopicVO& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


        // topicConfig Field Functions 
        bool hasTopicConfig() const { return this->topicConfig_ != nullptr;};
        void deleteTopicConfig() { this->topicConfig_ = nullptr;};
        inline string getTopicConfig() const { DARABONBA_PTR_GET_DEFAULT(topicConfig_, "") };
        inline TopicVO& setTopicConfig(string topicConfig) { DARABONBA_PTR_SET_VALUE(topicConfig_, topicConfig) };


      protected:
        shared_ptr<bool> autoCreate_ {};
        shared_ptr<bool> compactTopic_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<bool> localTopic_ {};
        shared_ptr<int32_t> partitionNum_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> remark_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> statusName_ {};
        shared_ptr<TopicVO::Tags> tags_ {};
        shared_ptr<string> topic_ {};
        shared_ptr<string> topicConfig_ {};
      };

      virtual bool empty() const override { return this->topicVO_ == nullptr; };
      // topicVO Field Functions 
      bool hasTopicVO() const { return this->topicVO_ != nullptr;};
      void deleteTopicVO() { this->topicVO_ = nullptr;};
      inline const vector<TopicList::TopicVO> & getTopicVO() const { DARABONBA_PTR_GET_CONST(topicVO_, vector<TopicList::TopicVO>) };
      inline vector<TopicList::TopicVO> getTopicVO() { DARABONBA_PTR_GET(topicVO_, vector<TopicList::TopicVO>) };
      inline TopicList& setTopicVO(const vector<TopicList::TopicVO> & topicVO) { DARABONBA_PTR_SET_VALUE(topicVO_, topicVO) };
      inline TopicList& setTopicVO(vector<TopicList::TopicVO> && topicVO) { DARABONBA_PTR_SET_RVALUE(topicVO_, topicVO) };


    protected:
      shared_ptr<vector<TopicList::TopicVO>> topicVO_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->currentPage_ == nullptr && this->message_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->topicList_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetTopicListResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetTopicListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTopicListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetTopicListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTopicListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTopicListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // topicList Field Functions 
    bool hasTopicList() const { return this->topicList_ != nullptr;};
    void deleteTopicList() { this->topicList_ = nullptr;};
    inline const GetTopicListResponseBody::TopicList & getTopicList() const { DARABONBA_PTR_GET_CONST(topicList_, GetTopicListResponseBody::TopicList) };
    inline GetTopicListResponseBody::TopicList getTopicList() { DARABONBA_PTR_GET(topicList_, GetTopicListResponseBody::TopicList) };
    inline GetTopicListResponseBody& setTopicList(const GetTopicListResponseBody::TopicList & topicList) { DARABONBA_PTR_SET_VALUE(topicList_, topicList) };
    inline GetTopicListResponseBody& setTopicList(GetTopicListResponseBody::TopicList && topicList) { DARABONBA_PTR_SET_RVALUE(topicList_, topicList) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetTopicListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The HTTP status code returned. The HTTP status code 200 indicates that the request is successful.
    shared_ptr<int32_t> code_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    shared_ptr<GetTopicListResponseBody::TopicList> topicList_ {};
    // The number of topics.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
