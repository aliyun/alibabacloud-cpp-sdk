// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONVERSATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONVERSATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class ListConversationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConversationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTimeLeftRange, beginTimeLeftRange_);
      DARABONBA_PTR_TO_JSON(BeginTimeRightRange, beginTimeRightRange_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(DebugConversation, debugConversation_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsSandBox, isSandBox_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(RoundsLeftRange, roundsLeftRange_);
      DARABONBA_PTR_TO_JSON(RoundsRightRange, roundsRightRange_);
    };
    friend void from_json(const Darabonba::Json& j, ListConversationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTimeLeftRange, beginTimeLeftRange_);
      DARABONBA_PTR_FROM_JSON(BeginTimeRightRange, beginTimeRightRange_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(DebugConversation, debugConversation_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsSandBox, isSandBox_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(RoundsLeftRange, roundsLeftRange_);
      DARABONBA_PTR_FROM_JSON(RoundsRightRange, roundsRightRange_);
    };
    ListConversationsRequest() = default ;
    ListConversationsRequest(const ListConversationsRequest &) = default ;
    ListConversationsRequest(ListConversationsRequest &&) = default ;
    ListConversationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConversationsRequest() = default ;
    ListConversationsRequest& operator=(const ListConversationsRequest &) = default ;
    ListConversationsRequest& operator=(ListConversationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTimeLeftRange_ == nullptr
        && this->beginTimeRightRange_ == nullptr && this->callingNumber_ == nullptr && this->debugConversation_ == nullptr && this->instanceId_ == nullptr && this->isSandBox_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->query_ == nullptr && this->result_ == nullptr && this->roundsLeftRange_ == nullptr
        && this->roundsRightRange_ == nullptr; };
    // beginTimeLeftRange Field Functions 
    bool hasBeginTimeLeftRange() const { return this->beginTimeLeftRange_ != nullptr;};
    void deleteBeginTimeLeftRange() { this->beginTimeLeftRange_ = nullptr;};
    inline int64_t getBeginTimeLeftRange() const { DARABONBA_PTR_GET_DEFAULT(beginTimeLeftRange_, 0L) };
    inline ListConversationsRequest& setBeginTimeLeftRange(int64_t beginTimeLeftRange) { DARABONBA_PTR_SET_VALUE(beginTimeLeftRange_, beginTimeLeftRange) };


    // beginTimeRightRange Field Functions 
    bool hasBeginTimeRightRange() const { return this->beginTimeRightRange_ != nullptr;};
    void deleteBeginTimeRightRange() { this->beginTimeRightRange_ = nullptr;};
    inline int64_t getBeginTimeRightRange() const { DARABONBA_PTR_GET_DEFAULT(beginTimeRightRange_, 0L) };
    inline ListConversationsRequest& setBeginTimeRightRange(int64_t beginTimeRightRange) { DARABONBA_PTR_SET_VALUE(beginTimeRightRange_, beginTimeRightRange) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string getCallingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline ListConversationsRequest& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // debugConversation Field Functions 
    bool hasDebugConversation() const { return this->debugConversation_ != nullptr;};
    void deleteDebugConversation() { this->debugConversation_ = nullptr;};
    inline int32_t getDebugConversation() const { DARABONBA_PTR_GET_DEFAULT(debugConversation_, 0) };
    inline ListConversationsRequest& setDebugConversation(int32_t debugConversation) { DARABONBA_PTR_SET_VALUE(debugConversation_, debugConversation) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListConversationsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isSandBox Field Functions 
    bool hasIsSandBox() const { return this->isSandBox_ != nullptr;};
    void deleteIsSandBox() { this->isSandBox_ = nullptr;};
    inline string getIsSandBox() const { DARABONBA_PTR_GET_DEFAULT(isSandBox_, "") };
    inline ListConversationsRequest& setIsSandBox(string isSandBox) { DARABONBA_PTR_SET_VALUE(isSandBox_, isSandBox) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListConversationsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListConversationsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListConversationsRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline int64_t getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, 0L) };
    inline ListConversationsRequest& setResult(int64_t result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // roundsLeftRange Field Functions 
    bool hasRoundsLeftRange() const { return this->roundsLeftRange_ != nullptr;};
    void deleteRoundsLeftRange() { this->roundsLeftRange_ = nullptr;};
    inline int32_t getRoundsLeftRange() const { DARABONBA_PTR_GET_DEFAULT(roundsLeftRange_, 0) };
    inline ListConversationsRequest& setRoundsLeftRange(int32_t roundsLeftRange) { DARABONBA_PTR_SET_VALUE(roundsLeftRange_, roundsLeftRange) };


    // roundsRightRange Field Functions 
    bool hasRoundsRightRange() const { return this->roundsRightRange_ != nullptr;};
    void deleteRoundsRightRange() { this->roundsRightRange_ = nullptr;};
    inline int32_t getRoundsRightRange() const { DARABONBA_PTR_GET_DEFAULT(roundsRightRange_, 0) };
    inline ListConversationsRequest& setRoundsRightRange(int32_t roundsRightRange) { DARABONBA_PTR_SET_VALUE(roundsRightRange_, roundsRightRange) };


  protected:
    shared_ptr<int64_t> beginTimeLeftRange_ {};
    shared_ptr<int64_t> beginTimeRightRange_ {};
    shared_ptr<string> callingNumber_ {};
    shared_ptr<int32_t> debugConversation_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> isSandBox_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> query_ {};
    shared_ptr<int64_t> result_ {};
    shared_ptr<int32_t> roundsLeftRange_ {};
    shared_ptr<int32_t> roundsRightRange_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
