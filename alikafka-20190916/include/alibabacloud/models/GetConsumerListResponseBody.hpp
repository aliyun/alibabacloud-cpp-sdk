// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERLISTRESPONSEBODY_HPP_
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
  class GetConsumerListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ConsumerList, consumerList_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ConsumerList, consumerList_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetConsumerListResponseBody() = default ;
    GetConsumerListResponseBody(const GetConsumerListResponseBody &) = default ;
    GetConsumerListResponseBody(GetConsumerListResponseBody &&) = default ;
    GetConsumerListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerListResponseBody() = default ;
    GetConsumerListResponseBody& operator=(const GetConsumerListResponseBody &) = default ;
    GetConsumerListResponseBody& operator=(GetConsumerListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConsumerList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConsumerList& obj) { 
        DARABONBA_PTR_TO_JSON(ConsumerVO, consumerVO_);
      };
      friend void from_json(const Darabonba::Json& j, ConsumerList& obj) { 
        DARABONBA_PTR_FROM_JSON(ConsumerVO, consumerVO_);
      };
      ConsumerList() = default ;
      ConsumerList(const ConsumerList &) = default ;
      ConsumerList(ConsumerList &&) = default ;
      ConsumerList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConsumerList() = default ;
      ConsumerList& operator=(const ConsumerList &) = default ;
      ConsumerList& operator=(ConsumerList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ConsumerVO : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConsumerVO& obj) { 
          DARABONBA_PTR_TO_JSON(AutomaticallyCreatedGroup, automaticallyCreatedGroup_);
          DARABONBA_PTR_TO_JSON(ConsumerId, consumerId_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, ConsumerVO& obj) { 
          DARABONBA_PTR_FROM_JSON(AutomaticallyCreatedGroup, automaticallyCreatedGroup_);
          DARABONBA_PTR_FROM_JSON(ConsumerId, consumerId_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        ConsumerVO() = default ;
        ConsumerVO(const ConsumerVO &) = default ;
        ConsumerVO(ConsumerVO &&) = default ;
        ConsumerVO(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConsumerVO() = default ;
        ConsumerVO& operator=(const ConsumerVO &) = default ;
        ConsumerVO& operator=(ConsumerVO &&) = default ;
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

        virtual bool empty() const override { return this->automaticallyCreatedGroup_ == nullptr
        && this->consumerId_ == nullptr && this->createTime_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->remark_ == nullptr
        && this->tags_ == nullptr; };
        // automaticallyCreatedGroup Field Functions 
        bool hasAutomaticallyCreatedGroup() const { return this->automaticallyCreatedGroup_ != nullptr;};
        void deleteAutomaticallyCreatedGroup() { this->automaticallyCreatedGroup_ = nullptr;};
        inline bool getAutomaticallyCreatedGroup() const { DARABONBA_PTR_GET_DEFAULT(automaticallyCreatedGroup_, false) };
        inline ConsumerVO& setAutomaticallyCreatedGroup(bool automaticallyCreatedGroup) { DARABONBA_PTR_SET_VALUE(automaticallyCreatedGroup_, automaticallyCreatedGroup) };


        // consumerId Field Functions 
        bool hasConsumerId() const { return this->consumerId_ != nullptr;};
        void deleteConsumerId() { this->consumerId_ = nullptr;};
        inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
        inline ConsumerVO& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline ConsumerVO& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline ConsumerVO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline ConsumerVO& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline ConsumerVO& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const ConsumerVO::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, ConsumerVO::Tags) };
        inline ConsumerVO::Tags getTags() { DARABONBA_PTR_GET(tags_, ConsumerVO::Tags) };
        inline ConsumerVO& setTags(const ConsumerVO::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline ConsumerVO& setTags(ConsumerVO::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        shared_ptr<bool> automaticallyCreatedGroup_ {};
        shared_ptr<string> consumerId_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> remark_ {};
        shared_ptr<ConsumerVO::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->consumerVO_ == nullptr; };
      // consumerVO Field Functions 
      bool hasConsumerVO() const { return this->consumerVO_ != nullptr;};
      void deleteConsumerVO() { this->consumerVO_ = nullptr;};
      inline const vector<ConsumerList::ConsumerVO> & getConsumerVO() const { DARABONBA_PTR_GET_CONST(consumerVO_, vector<ConsumerList::ConsumerVO>) };
      inline vector<ConsumerList::ConsumerVO> getConsumerVO() { DARABONBA_PTR_GET(consumerVO_, vector<ConsumerList::ConsumerVO>) };
      inline ConsumerList& setConsumerVO(const vector<ConsumerList::ConsumerVO> & consumerVO) { DARABONBA_PTR_SET_VALUE(consumerVO_, consumerVO) };
      inline ConsumerList& setConsumerVO(vector<ConsumerList::ConsumerVO> && consumerVO) { DARABONBA_PTR_SET_RVALUE(consumerVO_, consumerVO) };


    protected:
      shared_ptr<vector<ConsumerList::ConsumerVO>> consumerVO_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->consumerList_ == nullptr && this->currentPage_ == nullptr && this->message_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetConsumerListResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // consumerList Field Functions 
    bool hasConsumerList() const { return this->consumerList_ != nullptr;};
    void deleteConsumerList() { this->consumerList_ = nullptr;};
    inline const GetConsumerListResponseBody::ConsumerList & getConsumerList() const { DARABONBA_PTR_GET_CONST(consumerList_, GetConsumerListResponseBody::ConsumerList) };
    inline GetConsumerListResponseBody::ConsumerList getConsumerList() { DARABONBA_PTR_GET(consumerList_, GetConsumerListResponseBody::ConsumerList) };
    inline GetConsumerListResponseBody& setConsumerList(const GetConsumerListResponseBody::ConsumerList & consumerList) { DARABONBA_PTR_SET_VALUE(consumerList_, consumerList) };
    inline GetConsumerListResponseBody& setConsumerList(GetConsumerListResponseBody::ConsumerList && consumerList) { DARABONBA_PTR_SET_RVALUE(consumerList_, consumerList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetConsumerListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetConsumerListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetConsumerListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConsumerListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetConsumerListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetConsumerListResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The HTTP status code returned. The HTTP status code 200 indicates that the request is successful.
    shared_ptr<int32_t> code_ {};
    shared_ptr<GetConsumerListResponseBody::ConsumerList> consumerList_ {};
    // The number of the page to return. Pages start from page 1.
    shared_ptr<int32_t> currentPage_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
