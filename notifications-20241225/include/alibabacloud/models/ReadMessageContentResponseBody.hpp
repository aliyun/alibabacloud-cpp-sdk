// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READMESSAGECONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_READMESSAGECONTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Notifications20241225
{
namespace Models
{
  class ReadMessageContentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadMessageContentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ReadMessageContentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ReadMessageContentResponseBody() = default ;
    ReadMessageContentResponseBody(const ReadMessageContentResponseBody &) = default ;
    ReadMessageContentResponseBody(ReadMessageContentResponseBody &&) = default ;
    ReadMessageContentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadMessageContentResponseBody() = default ;
    ReadMessageContentResponseBody& operator=(const ReadMessageContentResponseBody &) = default ;
    ReadMessageContentResponseBody& operator=(ReadMessageContentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Datas, datas_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Datas, datas_);
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
      class Datas : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Datas& obj) { 
          DARABONBA_PTR_TO_JSON(Item, item_);
          DARABONBA_PTR_TO_JSON(LastItem, lastItem_);
          DARABONBA_PTR_TO_JSON(NextItem, nextItem_);
        };
        friend void from_json(const Darabonba::Json& j, Datas& obj) { 
          DARABONBA_PTR_FROM_JSON(Item, item_);
          DARABONBA_PTR_FROM_JSON(LastItem, lastItem_);
          DARABONBA_PTR_FROM_JSON(NextItem, nextItem_);
        };
        Datas() = default ;
        Datas(const Datas &) = default ;
        Datas(Datas &&) = default ;
        Datas(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Datas() = default ;
        Datas& operator=(const Datas &) = default ;
        Datas& operator=(Datas &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NextItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NextItem& obj) { 
            DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
            DARABONBA_PTR_TO_JSON(ClassId, classId_);
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(Deleted, deleted_);
            DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
            DARABONBA_PTR_TO_JSON(GmtUpdate, gmtUpdate_);
            DARABONBA_PTR_TO_JSON(MassId, massId_);
            DARABONBA_PTR_TO_JSON(Memo, memo_);
            DARABONBA_PTR_TO_JSON(MsgId, msgId_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Title, title_);
          };
          friend void from_json(const Darabonba::Json& j, NextItem& obj) { 
            DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
            DARABONBA_PTR_FROM_JSON(ClassId, classId_);
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
            DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
            DARABONBA_PTR_FROM_JSON(GmtUpdate, gmtUpdate_);
            DARABONBA_PTR_FROM_JSON(MassId, massId_);
            DARABONBA_PTR_FROM_JSON(Memo, memo_);
            DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
          };
          NextItem() = default ;
          NextItem(const NextItem &) = default ;
          NextItem(NextItem &&) = default ;
          NextItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NextItem() = default ;
          NextItem& operator=(const NextItem &) = default ;
          NextItem& operator=(NextItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->categoryName_ == nullptr
        && this->classId_ == nullptr && this->content_ == nullptr && this->deleted_ == nullptr && this->gmtCreated_ == nullptr && this->gmtUpdate_ == nullptr
        && this->massId_ == nullptr && this->memo_ == nullptr && this->msgId_ == nullptr && this->status_ == nullptr && this->title_ == nullptr; };
          // categoryName Field Functions 
          bool hasCategoryName() const { return this->categoryName_ != nullptr;};
          void deleteCategoryName() { this->categoryName_ = nullptr;};
          inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
          inline NextItem& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


          // classId Field Functions 
          bool hasClassId() const { return this->classId_ != nullptr;};
          void deleteClassId() { this->classId_ = nullptr;};
          inline int64_t getClassId() const { DARABONBA_PTR_GET_DEFAULT(classId_, 0L) };
          inline NextItem& setClassId(int64_t classId) { DARABONBA_PTR_SET_VALUE(classId_, classId) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline NextItem& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // deleted Field Functions 
          bool hasDeleted() const { return this->deleted_ != nullptr;};
          void deleteDeleted() { this->deleted_ = nullptr;};
          inline int32_t getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, 0) };
          inline NextItem& setDeleted(int32_t deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


          // gmtCreated Field Functions 
          bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
          void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
          inline int64_t getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, 0L) };
          inline NextItem& setGmtCreated(int64_t gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


          // gmtUpdate Field Functions 
          bool hasGmtUpdate() const { return this->gmtUpdate_ != nullptr;};
          void deleteGmtUpdate() { this->gmtUpdate_ = nullptr;};
          inline int64_t getGmtUpdate() const { DARABONBA_PTR_GET_DEFAULT(gmtUpdate_, 0L) };
          inline NextItem& setGmtUpdate(int64_t gmtUpdate) { DARABONBA_PTR_SET_VALUE(gmtUpdate_, gmtUpdate) };


          // massId Field Functions 
          bool hasMassId() const { return this->massId_ != nullptr;};
          void deleteMassId() { this->massId_ = nullptr;};
          inline int64_t getMassId() const { DARABONBA_PTR_GET_DEFAULT(massId_, 0L) };
          inline NextItem& setMassId(int64_t massId) { DARABONBA_PTR_SET_VALUE(massId_, massId) };


          // memo Field Functions 
          bool hasMemo() const { return this->memo_ != nullptr;};
          void deleteMemo() { this->memo_ = nullptr;};
          inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
          inline NextItem& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


          // msgId Field Functions 
          bool hasMsgId() const { return this->msgId_ != nullptr;};
          void deleteMsgId() { this->msgId_ = nullptr;};
          inline int64_t getMsgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, 0L) };
          inline NextItem& setMsgId(int64_t msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
          inline NextItem& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline NextItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          // The message category name.
          shared_ptr<string> categoryName_ {};
          // The message class ID.
          shared_ptr<int64_t> classId_ {};
          // The message content.
          shared_ptr<string> content_ {};
          // The deletion flag.
          shared_ptr<int32_t> deleted_ {};
          // The time when the message was created.
          shared_ptr<int64_t> gmtCreated_ {};
          // The time when the message was updated.
          shared_ptr<int64_t> gmtUpdate_ {};
          // A reserved field.
          shared_ptr<int64_t> massId_ {};
          // A reserved field.
          shared_ptr<string> memo_ {};
          // The message ID.
          shared_ptr<int64_t> msgId_ {};
          // The read status. Valid values:
          // - 0: unread
          // - 1: read.
          shared_ptr<int64_t> status_ {};
          // The message title.
          shared_ptr<string> title_ {};
        };

        class LastItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LastItem& obj) { 
            DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
            DARABONBA_PTR_TO_JSON(ClassId, classId_);
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(Deleted, deleted_);
            DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
            DARABONBA_PTR_TO_JSON(GmtUpdate, gmtUpdate_);
            DARABONBA_PTR_TO_JSON(MassId, massId_);
            DARABONBA_PTR_TO_JSON(Memo, memo_);
            DARABONBA_PTR_TO_JSON(MsgId, msgId_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Title, title_);
          };
          friend void from_json(const Darabonba::Json& j, LastItem& obj) { 
            DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
            DARABONBA_PTR_FROM_JSON(ClassId, classId_);
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
            DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
            DARABONBA_PTR_FROM_JSON(GmtUpdate, gmtUpdate_);
            DARABONBA_PTR_FROM_JSON(MassId, massId_);
            DARABONBA_PTR_FROM_JSON(Memo, memo_);
            DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
          };
          LastItem() = default ;
          LastItem(const LastItem &) = default ;
          LastItem(LastItem &&) = default ;
          LastItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LastItem() = default ;
          LastItem& operator=(const LastItem &) = default ;
          LastItem& operator=(LastItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->categoryName_ == nullptr
        && this->classId_ == nullptr && this->content_ == nullptr && this->deleted_ == nullptr && this->gmtCreated_ == nullptr && this->gmtUpdate_ == nullptr
        && this->massId_ == nullptr && this->memo_ == nullptr && this->msgId_ == nullptr && this->status_ == nullptr && this->title_ == nullptr; };
          // categoryName Field Functions 
          bool hasCategoryName() const { return this->categoryName_ != nullptr;};
          void deleteCategoryName() { this->categoryName_ = nullptr;};
          inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
          inline LastItem& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


          // classId Field Functions 
          bool hasClassId() const { return this->classId_ != nullptr;};
          void deleteClassId() { this->classId_ = nullptr;};
          inline int64_t getClassId() const { DARABONBA_PTR_GET_DEFAULT(classId_, 0L) };
          inline LastItem& setClassId(int64_t classId) { DARABONBA_PTR_SET_VALUE(classId_, classId) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline LastItem& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // deleted Field Functions 
          bool hasDeleted() const { return this->deleted_ != nullptr;};
          void deleteDeleted() { this->deleted_ = nullptr;};
          inline int32_t getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, 0) };
          inline LastItem& setDeleted(int32_t deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


          // gmtCreated Field Functions 
          bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
          void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
          inline int64_t getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, 0L) };
          inline LastItem& setGmtCreated(int64_t gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


          // gmtUpdate Field Functions 
          bool hasGmtUpdate() const { return this->gmtUpdate_ != nullptr;};
          void deleteGmtUpdate() { this->gmtUpdate_ = nullptr;};
          inline int64_t getGmtUpdate() const { DARABONBA_PTR_GET_DEFAULT(gmtUpdate_, 0L) };
          inline LastItem& setGmtUpdate(int64_t gmtUpdate) { DARABONBA_PTR_SET_VALUE(gmtUpdate_, gmtUpdate) };


          // massId Field Functions 
          bool hasMassId() const { return this->massId_ != nullptr;};
          void deleteMassId() { this->massId_ = nullptr;};
          inline int64_t getMassId() const { DARABONBA_PTR_GET_DEFAULT(massId_, 0L) };
          inline LastItem& setMassId(int64_t massId) { DARABONBA_PTR_SET_VALUE(massId_, massId) };


          // memo Field Functions 
          bool hasMemo() const { return this->memo_ != nullptr;};
          void deleteMemo() { this->memo_ = nullptr;};
          inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
          inline LastItem& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


          // msgId Field Functions 
          bool hasMsgId() const { return this->msgId_ != nullptr;};
          void deleteMsgId() { this->msgId_ = nullptr;};
          inline int64_t getMsgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, 0L) };
          inline LastItem& setMsgId(int64_t msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
          inline LastItem& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline LastItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          // The message category name.
          shared_ptr<string> categoryName_ {};
          // The message class ID.
          shared_ptr<int64_t> classId_ {};
          // The message content.
          shared_ptr<string> content_ {};
          // The deletion flag.
          shared_ptr<int32_t> deleted_ {};
          // The time when the message was created.
          shared_ptr<int64_t> gmtCreated_ {};
          // The time when the message was updated.
          shared_ptr<int64_t> gmtUpdate_ {};
          // A reserved field.
          shared_ptr<int64_t> massId_ {};
          // A reserved field.
          shared_ptr<string> memo_ {};
          // The message ID.
          shared_ptr<int64_t> msgId_ {};
          // The read status. Valid values:
          // - 0: unread
          // - 1: read.
          shared_ptr<int64_t> status_ {};
          // The message title.
          shared_ptr<string> title_ {};
        };

        class Item : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Item& obj) { 
            DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
            DARABONBA_PTR_TO_JSON(ClassId, classId_);
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(Deleted, deleted_);
            DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
            DARABONBA_PTR_TO_JSON(GmtUpdate, gmtUpdate_);
            DARABONBA_PTR_TO_JSON(MassId, massId_);
            DARABONBA_PTR_TO_JSON(Memo, memo_);
            DARABONBA_PTR_TO_JSON(MsgId, msgId_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Title, title_);
          };
          friend void from_json(const Darabonba::Json& j, Item& obj) { 
            DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
            DARABONBA_PTR_FROM_JSON(ClassId, classId_);
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
            DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
            DARABONBA_PTR_FROM_JSON(GmtUpdate, gmtUpdate_);
            DARABONBA_PTR_FROM_JSON(MassId, massId_);
            DARABONBA_PTR_FROM_JSON(Memo, memo_);
            DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
          };
          Item() = default ;
          Item(const Item &) = default ;
          Item(Item &&) = default ;
          Item(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Item() = default ;
          Item& operator=(const Item &) = default ;
          Item& operator=(Item &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->categoryName_ == nullptr
        && this->classId_ == nullptr && this->content_ == nullptr && this->deleted_ == nullptr && this->gmtCreated_ == nullptr && this->gmtUpdate_ == nullptr
        && this->massId_ == nullptr && this->memo_ == nullptr && this->msgId_ == nullptr && this->status_ == nullptr && this->title_ == nullptr; };
          // categoryName Field Functions 
          bool hasCategoryName() const { return this->categoryName_ != nullptr;};
          void deleteCategoryName() { this->categoryName_ = nullptr;};
          inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
          inline Item& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


          // classId Field Functions 
          bool hasClassId() const { return this->classId_ != nullptr;};
          void deleteClassId() { this->classId_ = nullptr;};
          inline int64_t getClassId() const { DARABONBA_PTR_GET_DEFAULT(classId_, 0L) };
          inline Item& setClassId(int64_t classId) { DARABONBA_PTR_SET_VALUE(classId_, classId) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline Item& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // deleted Field Functions 
          bool hasDeleted() const { return this->deleted_ != nullptr;};
          void deleteDeleted() { this->deleted_ = nullptr;};
          inline int32_t getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, 0) };
          inline Item& setDeleted(int32_t deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


          // gmtCreated Field Functions 
          bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
          void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
          inline int64_t getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, 0L) };
          inline Item& setGmtCreated(int64_t gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


          // gmtUpdate Field Functions 
          bool hasGmtUpdate() const { return this->gmtUpdate_ != nullptr;};
          void deleteGmtUpdate() { this->gmtUpdate_ = nullptr;};
          inline int64_t getGmtUpdate() const { DARABONBA_PTR_GET_DEFAULT(gmtUpdate_, 0L) };
          inline Item& setGmtUpdate(int64_t gmtUpdate) { DARABONBA_PTR_SET_VALUE(gmtUpdate_, gmtUpdate) };


          // massId Field Functions 
          bool hasMassId() const { return this->massId_ != nullptr;};
          void deleteMassId() { this->massId_ = nullptr;};
          inline int64_t getMassId() const { DARABONBA_PTR_GET_DEFAULT(massId_, 0L) };
          inline Item& setMassId(int64_t massId) { DARABONBA_PTR_SET_VALUE(massId_, massId) };


          // memo Field Functions 
          bool hasMemo() const { return this->memo_ != nullptr;};
          void deleteMemo() { this->memo_ = nullptr;};
          inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
          inline Item& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


          // msgId Field Functions 
          bool hasMsgId() const { return this->msgId_ != nullptr;};
          void deleteMsgId() { this->msgId_ = nullptr;};
          inline int64_t getMsgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, 0L) };
          inline Item& setMsgId(int64_t msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
          inline Item& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline Item& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          // The message category name.
          shared_ptr<string> categoryName_ {};
          // The message class ID.
          shared_ptr<int64_t> classId_ {};
          // The message content.
          shared_ptr<string> content_ {};
          // The deletion flag.
          shared_ptr<int32_t> deleted_ {};
          // The time when the message was created.
          shared_ptr<int64_t> gmtCreated_ {};
          // The time when the message was updated.
          shared_ptr<int64_t> gmtUpdate_ {};
          // A reserved field.
          shared_ptr<int64_t> massId_ {};
          // A reserved field.
          shared_ptr<string> memo_ {};
          // The message ID.
          shared_ptr<int64_t> msgId_ {};
          // The read status. Valid values:
          // - 0: unread
          // - 1: read.
          shared_ptr<int64_t> status_ {};
          // The message title.
          shared_ptr<string> title_ {};
        };

        virtual bool empty() const override { return this->item_ == nullptr
        && this->lastItem_ == nullptr && this->nextItem_ == nullptr; };
        // item Field Functions 
        bool hasItem() const { return this->item_ != nullptr;};
        void deleteItem() { this->item_ = nullptr;};
        inline const vector<Datas::Item> & getItem() const { DARABONBA_PTR_GET_CONST(item_, vector<Datas::Item>) };
        inline vector<Datas::Item> getItem() { DARABONBA_PTR_GET(item_, vector<Datas::Item>) };
        inline Datas& setItem(const vector<Datas::Item> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
        inline Datas& setItem(vector<Datas::Item> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


        // lastItem Field Functions 
        bool hasLastItem() const { return this->lastItem_ != nullptr;};
        void deleteLastItem() { this->lastItem_ = nullptr;};
        inline const vector<Datas::LastItem> & getLastItem() const { DARABONBA_PTR_GET_CONST(lastItem_, vector<Datas::LastItem>) };
        inline vector<Datas::LastItem> getLastItem() { DARABONBA_PTR_GET(lastItem_, vector<Datas::LastItem>) };
        inline Datas& setLastItem(const vector<Datas::LastItem> & lastItem) { DARABONBA_PTR_SET_VALUE(lastItem_, lastItem) };
        inline Datas& setLastItem(vector<Datas::LastItem> && lastItem) { DARABONBA_PTR_SET_RVALUE(lastItem_, lastItem) };


        // nextItem Field Functions 
        bool hasNextItem() const { return this->nextItem_ != nullptr;};
        void deleteNextItem() { this->nextItem_ = nullptr;};
        inline const vector<Datas::NextItem> & getNextItem() const { DARABONBA_PTR_GET_CONST(nextItem_, vector<Datas::NextItem>) };
        inline vector<Datas::NextItem> getNextItem() { DARABONBA_PTR_GET(nextItem_, vector<Datas::NextItem>) };
        inline Datas& setNextItem(const vector<Datas::NextItem> & nextItem) { DARABONBA_PTR_SET_VALUE(nextItem_, nextItem) };
        inline Datas& setNextItem(vector<Datas::NextItem> && nextItem) { DARABONBA_PTR_SET_RVALUE(nextItem_, nextItem) };


      protected:
        // The data item.
        shared_ptr<vector<Datas::Item>> item_ {};
        // /
        shared_ptr<vector<Datas::LastItem>> lastItem_ {};
        // /
        shared_ptr<vector<Datas::NextItem>> nextItem_ {};
      };

      virtual bool empty() const override { return this->datas_ == nullptr; };
      // datas Field Functions 
      bool hasDatas() const { return this->datas_ != nullptr;};
      void deleteDatas() { this->datas_ = nullptr;};
      inline const Data::Datas & getDatas() const { DARABONBA_PTR_GET_CONST(datas_, Data::Datas) };
      inline Data::Datas getDatas() { DARABONBA_PTR_GET(datas_, Data::Datas) };
      inline Data& setDatas(const Data::Datas & datas) { DARABONBA_PTR_SET_VALUE(datas_, datas) };
      inline Data& setDatas(Data::Datas && datas) { DARABONBA_PTR_SET_RVALUE(datas_, datas) };


    protected:
      // The list of degradation rules.
      shared_ptr<Data::Datas> datas_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ReadMessageContentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ReadMessageContentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ReadMessageContentResponseBody::Data) };
    inline ReadMessageContentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ReadMessageContentResponseBody::Data) };
    inline ReadMessageContentResponseBody& setData(const ReadMessageContentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ReadMessageContentResponseBody& setData(ReadMessageContentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ReadMessageContentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReadMessageContentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ReadMessageContentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned when the call fails. For more information, refer to error codes.
    shared_ptr<string> code_ {};
    // The execution result.
    shared_ptr<ReadMessageContentResponseBody::Data> data_ {};
    // The error message returned when the call fails.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - true: The call was successful.
    // - false: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Notifications20241225
#endif
