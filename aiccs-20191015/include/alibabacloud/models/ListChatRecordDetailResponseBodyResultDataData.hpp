// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHATRECORDDETAILRESPONSEBODYRESULTDATADATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCHATRECORDDETAILRESPONSEBODYRESULTDATADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListChatRecordDetailResponseBodyResultDataDataMessageList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class ListChatRecordDetailResponseBodyResultDataData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChatRecordDetailResponseBodyResultDataData& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MessageList, messageList_);
      DARABONBA_PTR_TO_JSON(ServicerName, servicerName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListChatRecordDetailResponseBodyResultDataData& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MessageList, messageList_);
      DARABONBA_PTR_FROM_JSON(ServicerName, servicerName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListChatRecordDetailResponseBodyResultDataData() = default ;
    ListChatRecordDetailResponseBodyResultDataData(const ListChatRecordDetailResponseBodyResultDataData &) = default ;
    ListChatRecordDetailResponseBodyResultDataData(ListChatRecordDetailResponseBodyResultDataData &&) = default ;
    ListChatRecordDetailResponseBodyResultDataData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChatRecordDetailResponseBodyResultDataData() = default ;
    ListChatRecordDetailResponseBodyResultDataData& operator=(const ListChatRecordDetailResponseBodyResultDataData &) = default ;
    ListChatRecordDetailResponseBodyResultDataData& operator=(ListChatRecordDetailResponseBodyResultDataData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->messageList_ == nullptr && return this->servicerName_ == nullptr && return this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListChatRecordDetailResponseBodyResultDataData& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // messageList Field Functions 
    bool hasMessageList() const { return this->messageList_ != nullptr;};
    void deleteMessageList() { this->messageList_ = nullptr;};
    inline const vector<Models::ListChatRecordDetailResponseBodyResultDataDataMessageList> & messageList() const { DARABONBA_PTR_GET_CONST(messageList_, vector<Models::ListChatRecordDetailResponseBodyResultDataDataMessageList>) };
    inline vector<Models::ListChatRecordDetailResponseBodyResultDataDataMessageList> messageList() { DARABONBA_PTR_GET(messageList_, vector<Models::ListChatRecordDetailResponseBodyResultDataDataMessageList>) };
    inline ListChatRecordDetailResponseBodyResultDataData& setMessageList(const vector<Models::ListChatRecordDetailResponseBodyResultDataDataMessageList> & messageList) { DARABONBA_PTR_SET_VALUE(messageList_, messageList) };
    inline ListChatRecordDetailResponseBodyResultDataData& setMessageList(vector<Models::ListChatRecordDetailResponseBodyResultDataDataMessageList> && messageList) { DARABONBA_PTR_SET_RVALUE(messageList_, messageList) };


    // servicerName Field Functions 
    bool hasServicerName() const { return this->servicerName_ != nullptr;};
    void deleteServicerName() { this->servicerName_ = nullptr;};
    inline string servicerName() const { DARABONBA_PTR_GET_DEFAULT(servicerName_, "") };
    inline ListChatRecordDetailResponseBodyResultDataData& setServicerName(string servicerName) { DARABONBA_PTR_SET_VALUE(servicerName_, servicerName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListChatRecordDetailResponseBodyResultDataData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<vector<Models::ListChatRecordDetailResponseBodyResultDataDataMessageList>> messageList_ = nullptr;
    std::shared_ptr<string> servicerName_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
