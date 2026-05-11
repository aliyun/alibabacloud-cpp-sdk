// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONVERSATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONVERSATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class QueryConversationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConversationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTimeLeftRange, beginTimeLeftRange_);
      DARABONBA_PTR_TO_JSON(BeginTimeRightRange, beginTimeRightRange_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConversationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTimeLeftRange, beginTimeLeftRange_);
      DARABONBA_PTR_FROM_JSON(BeginTimeRightRange, beginTimeRightRange_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    QueryConversationsRequest() = default ;
    QueryConversationsRequest(const QueryConversationsRequest &) = default ;
    QueryConversationsRequest(QueryConversationsRequest &&) = default ;
    QueryConversationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConversationsRequest() = default ;
    QueryConversationsRequest& operator=(const QueryConversationsRequest &) = default ;
    QueryConversationsRequest& operator=(QueryConversationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTimeLeftRange_ == nullptr
        && this->beginTimeRightRange_ == nullptr && this->callingNumber_ == nullptr && this->instanceId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // beginTimeLeftRange Field Functions 
    bool hasBeginTimeLeftRange() const { return this->beginTimeLeftRange_ != nullptr;};
    void deleteBeginTimeLeftRange() { this->beginTimeLeftRange_ = nullptr;};
    inline int64_t getBeginTimeLeftRange() const { DARABONBA_PTR_GET_DEFAULT(beginTimeLeftRange_, 0L) };
    inline QueryConversationsRequest& setBeginTimeLeftRange(int64_t beginTimeLeftRange) { DARABONBA_PTR_SET_VALUE(beginTimeLeftRange_, beginTimeLeftRange) };


    // beginTimeRightRange Field Functions 
    bool hasBeginTimeRightRange() const { return this->beginTimeRightRange_ != nullptr;};
    void deleteBeginTimeRightRange() { this->beginTimeRightRange_ = nullptr;};
    inline int64_t getBeginTimeRightRange() const { DARABONBA_PTR_GET_DEFAULT(beginTimeRightRange_, 0L) };
    inline QueryConversationsRequest& setBeginTimeRightRange(int64_t beginTimeRightRange) { DARABONBA_PTR_SET_VALUE(beginTimeRightRange_, beginTimeRightRange) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string getCallingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline QueryConversationsRequest& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryConversationsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryConversationsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryConversationsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<int64_t> beginTimeLeftRange_ {};
    shared_ptr<int64_t> beginTimeRightRange_ {};
    shared_ptr<string> callingNumber_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
