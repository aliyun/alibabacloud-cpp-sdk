// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSCHEDULECONFERENCEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSCHEDULECONFERENCEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryScheduleConferenceInfoResponseBodyConferenceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryScheduleConferenceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryScheduleConferenceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(conferenceList, conferenceList_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryScheduleConferenceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(conferenceList, conferenceList_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    QueryScheduleConferenceInfoResponseBody() = default ;
    QueryScheduleConferenceInfoResponseBody(const QueryScheduleConferenceInfoResponseBody &) = default ;
    QueryScheduleConferenceInfoResponseBody(QueryScheduleConferenceInfoResponseBody &&) = default ;
    QueryScheduleConferenceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryScheduleConferenceInfoResponseBody() = default ;
    QueryScheduleConferenceInfoResponseBody& operator=(const QueryScheduleConferenceInfoResponseBody &) = default ;
    QueryScheduleConferenceInfoResponseBody& operator=(QueryScheduleConferenceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conferenceList_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->vendorRequestId_ == nullptr && return this->vendorType_ == nullptr; };
    // conferenceList Field Functions 
    bool hasConferenceList() const { return this->conferenceList_ != nullptr;};
    void deleteConferenceList() { this->conferenceList_ = nullptr;};
    inline const vector<QueryScheduleConferenceInfoResponseBodyConferenceList> & conferenceList() const { DARABONBA_PTR_GET_CONST(conferenceList_, vector<QueryScheduleConferenceInfoResponseBodyConferenceList>) };
    inline vector<QueryScheduleConferenceInfoResponseBodyConferenceList> conferenceList() { DARABONBA_PTR_GET(conferenceList_, vector<QueryScheduleConferenceInfoResponseBodyConferenceList>) };
    inline QueryScheduleConferenceInfoResponseBody& setConferenceList(const vector<QueryScheduleConferenceInfoResponseBodyConferenceList> & conferenceList) { DARABONBA_PTR_SET_VALUE(conferenceList_, conferenceList) };
    inline QueryScheduleConferenceInfoResponseBody& setConferenceList(vector<QueryScheduleConferenceInfoResponseBodyConferenceList> && conferenceList) { DARABONBA_PTR_SET_RVALUE(conferenceList_, conferenceList) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryScheduleConferenceInfoResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryScheduleConferenceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryScheduleConferenceInfoResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline QueryScheduleConferenceInfoResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline QueryScheduleConferenceInfoResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<vector<QueryScheduleConferenceInfoResponseBodyConferenceList>> conferenceList_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
