// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYROBOTUNSUBSCRIPTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYROBOTUNSUBSCRIPTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryRobotUnsubscriptionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRobotUnsubscriptionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(pageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(unsubscribedStaffIds, unsubscribedStaffIds_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRobotUnsubscriptionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(pageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(unsubscribedStaffIds, unsubscribedStaffIds_);
    };
    QueryRobotUnsubscriptionResponseBody() = default ;
    QueryRobotUnsubscriptionResponseBody(const QueryRobotUnsubscriptionResponseBody &) = default ;
    QueryRobotUnsubscriptionResponseBody(QueryRobotUnsubscriptionResponseBody &&) = default ;
    QueryRobotUnsubscriptionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRobotUnsubscriptionResponseBody() = default ;
    QueryRobotUnsubscriptionResponseBody& operator=(const QueryRobotUnsubscriptionResponseBody &) = default ;
    QueryRobotUnsubscriptionResponseBody& operator=(QueryRobotUnsubscriptionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->unsubscribedStaffIds_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline QueryRobotUnsubscriptionResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryRobotUnsubscriptionResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRobotUnsubscriptionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryRobotUnsubscriptionResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // unsubscribedStaffIds Field Functions 
    bool hasUnsubscribedStaffIds() const { return this->unsubscribedStaffIds_ != nullptr;};
    void deleteUnsubscribedStaffIds() { this->unsubscribedStaffIds_ = nullptr;};
    inline const vector<string> & getUnsubscribedStaffIds() const { DARABONBA_PTR_GET_CONST(unsubscribedStaffIds_, vector<string>) };
    inline vector<string> getUnsubscribedStaffIds() { DARABONBA_PTR_GET(unsubscribedStaffIds_, vector<string>) };
    inline QueryRobotUnsubscriptionResponseBody& setUnsubscribedStaffIds(const vector<string> & unsubscribedStaffIds) { DARABONBA_PTR_SET_VALUE(unsubscribedStaffIds_, unsubscribedStaffIds) };
    inline QueryRobotUnsubscriptionResponseBody& setUnsubscribedStaffIds(vector<string> && unsubscribedStaffIds) { DARABONBA_PTR_SET_RVALUE(unsubscribedStaffIds_, unsubscribedStaffIds) };


  protected:
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<vector<string>> unsubscribedStaffIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
