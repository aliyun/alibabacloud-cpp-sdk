// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READMESSAGECONTENTRESPONSEBODYDATADATASLASTITEM_HPP_
#define ALIBABACLOUD_MODELS_READMESSAGECONTENTRESPONSEBODYDATADATASLASTITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Notifications20241225
{
namespace Models
{
  class ReadMessageContentResponseBodyDataDatasLastItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadMessageContentResponseBodyDataDatasLastItem& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ReadMessageContentResponseBodyDataDatasLastItem& obj) { 
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
    ReadMessageContentResponseBodyDataDatasLastItem() = default ;
    ReadMessageContentResponseBodyDataDatasLastItem(const ReadMessageContentResponseBodyDataDatasLastItem &) = default ;
    ReadMessageContentResponseBodyDataDatasLastItem(ReadMessageContentResponseBodyDataDatasLastItem &&) = default ;
    ReadMessageContentResponseBodyDataDatasLastItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadMessageContentResponseBodyDataDatasLastItem() = default ;
    ReadMessageContentResponseBodyDataDatasLastItem& operator=(const ReadMessageContentResponseBodyDataDatasLastItem &) = default ;
    ReadMessageContentResponseBodyDataDatasLastItem& operator=(ReadMessageContentResponseBodyDataDatasLastItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryName_ != nullptr
        && this->classId_ != nullptr && this->content_ != nullptr && this->deleted_ != nullptr && this->gmtCreated_ != nullptr && this->gmtUpdate_ != nullptr
        && this->massId_ != nullptr && this->memo_ != nullptr && this->msgId_ != nullptr && this->status_ != nullptr && this->title_ != nullptr; };
    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline ReadMessageContentResponseBodyDataDatasLastItem& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // classId Field Functions 
    bool hasClassId() const { return this->classId_ != nullptr;};
    void deleteClassId() { this->classId_ = nullptr;};
    inline int64_t classId() const { DARABONBA_PTR_GET_DEFAULT(classId_, 0L) };
    inline ReadMessageContentResponseBodyDataDatasLastItem& setClassId(int64_t classId) { DARABONBA_PTR_SET_VALUE(classId_, classId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ReadMessageContentResponseBodyDataDatasLastItem& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline int32_t deleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, 0) };
    inline ReadMessageContentResponseBodyDataDatasLastItem& setDeleted(int32_t deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline int64_t gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, 0L) };
    inline ReadMessageContentResponseBodyDataDatasLastItem& setGmtCreated(int64_t gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtUpdate Field Functions 
    bool hasGmtUpdate() const { return this->gmtUpdate_ != nullptr;};
    void deleteGmtUpdate() { this->gmtUpdate_ = nullptr;};
    inline int64_t gmtUpdate() const { DARABONBA_PTR_GET_DEFAULT(gmtUpdate_, 0L) };
    inline ReadMessageContentResponseBodyDataDatasLastItem& setGmtUpdate(int64_t gmtUpdate) { DARABONBA_PTR_SET_VALUE(gmtUpdate_, gmtUpdate) };


    // massId Field Functions 
    bool hasMassId() const { return this->massId_ != nullptr;};
    void deleteMassId() { this->massId_ = nullptr;};
    inline int64_t massId() const { DARABONBA_PTR_GET_DEFAULT(massId_, 0L) };
    inline ReadMessageContentResponseBodyDataDatasLastItem& setMassId(int64_t massId) { DARABONBA_PTR_SET_VALUE(massId_, massId) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline ReadMessageContentResponseBodyDataDatasLastItem& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // msgId Field Functions 
    bool hasMsgId() const { return this->msgId_ != nullptr;};
    void deleteMsgId() { this->msgId_ = nullptr;};
    inline int64_t msgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, 0L) };
    inline ReadMessageContentResponseBodyDataDatasLastItem& setMsgId(int64_t msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline ReadMessageContentResponseBodyDataDatasLastItem& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ReadMessageContentResponseBodyDataDatasLastItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> categoryName_ = nullptr;
    std::shared_ptr<int64_t> classId_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<int32_t> deleted_ = nullptr;
    std::shared_ptr<int64_t> gmtCreated_ = nullptr;
    std::shared_ptr<int64_t> gmtUpdate_ = nullptr;
    std::shared_ptr<int64_t> massId_ = nullptr;
    std::shared_ptr<string> memo_ = nullptr;
    std::shared_ptr<int64_t> msgId_ = nullptr;
    std::shared_ptr<int64_t> status_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Notifications20241225
#endif
