// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHATRECORDDETAILRESPONSEBODYRESULTDATADATAMESSAGELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHATRECORDDETAILRESPONSEBODYRESULTDATADATAMESSAGELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class ListChatRecordDetailResponseBodyResultDataDataMessageList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChatRecordDetailResponseBodyResultDataDataMessageList& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(MsgType, msgType_);
      DARABONBA_PTR_TO_JSON(SenderName, senderName_);
      DARABONBA_PTR_TO_JSON(SenderType, senderType_);
    };
    friend void from_json(const Darabonba::Json& j, ListChatRecordDetailResponseBodyResultDataDataMessageList& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(MsgType, msgType_);
      DARABONBA_PTR_FROM_JSON(SenderName, senderName_);
      DARABONBA_PTR_FROM_JSON(SenderType, senderType_);
    };
    ListChatRecordDetailResponseBodyResultDataDataMessageList() = default ;
    ListChatRecordDetailResponseBodyResultDataDataMessageList(const ListChatRecordDetailResponseBodyResultDataDataMessageList &) = default ;
    ListChatRecordDetailResponseBodyResultDataDataMessageList(ListChatRecordDetailResponseBodyResultDataDataMessageList &&) = default ;
    ListChatRecordDetailResponseBodyResultDataDataMessageList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChatRecordDetailResponseBodyResultDataDataMessageList() = default ;
    ListChatRecordDetailResponseBodyResultDataDataMessageList& operator=(const ListChatRecordDetailResponseBodyResultDataDataMessageList &) = default ;
    ListChatRecordDetailResponseBodyResultDataDataMessageList& operator=(ListChatRecordDetailResponseBodyResultDataDataMessageList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->createTime_ == nullptr && return this->msgType_ == nullptr && return this->senderName_ == nullptr && return this->senderType_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListChatRecordDetailResponseBodyResultDataDataMessageList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListChatRecordDetailResponseBodyResultDataDataMessageList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // msgType Field Functions 
    bool hasMsgType() const { return this->msgType_ != nullptr;};
    void deleteMsgType() { this->msgType_ = nullptr;};
    inline string msgType() const { DARABONBA_PTR_GET_DEFAULT(msgType_, "") };
    inline ListChatRecordDetailResponseBodyResultDataDataMessageList& setMsgType(string msgType) { DARABONBA_PTR_SET_VALUE(msgType_, msgType) };


    // senderName Field Functions 
    bool hasSenderName() const { return this->senderName_ != nullptr;};
    void deleteSenderName() { this->senderName_ = nullptr;};
    inline string senderName() const { DARABONBA_PTR_GET_DEFAULT(senderName_, "") };
    inline ListChatRecordDetailResponseBodyResultDataDataMessageList& setSenderName(string senderName) { DARABONBA_PTR_SET_VALUE(senderName_, senderName) };


    // senderType Field Functions 
    bool hasSenderType() const { return this->senderType_ != nullptr;};
    void deleteSenderType() { this->senderType_ = nullptr;};
    inline int64_t senderType() const { DARABONBA_PTR_GET_DEFAULT(senderType_, 0L) };
    inline ListChatRecordDetailResponseBodyResultDataDataMessageList& setSenderType(int64_t senderType) { DARABONBA_PTR_SET_VALUE(senderType_, senderType) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> msgType_ = nullptr;
    std::shared_ptr<string> senderName_ = nullptr;
    std::shared_ptr<int64_t> senderType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
