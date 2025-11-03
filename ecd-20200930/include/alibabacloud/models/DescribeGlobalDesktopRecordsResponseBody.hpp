// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGlobalDesktopRecordsResponseBodySessions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeGlobalDesktopRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDesktopRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sessions, sessions_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDesktopRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeGlobalDesktopRecordsResponseBody() = default ;
    DescribeGlobalDesktopRecordsResponseBody(const DescribeGlobalDesktopRecordsResponseBody &) = default ;
    DescribeGlobalDesktopRecordsResponseBody(DescribeGlobalDesktopRecordsResponseBody &&) = default ;
    DescribeGlobalDesktopRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDesktopRecordsResponseBody() = default ;
    DescribeGlobalDesktopRecordsResponseBody& operator=(const DescribeGlobalDesktopRecordsResponseBody &) = default ;
    DescribeGlobalDesktopRecordsResponseBody& operator=(DescribeGlobalDesktopRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->sessions_ == nullptr && return this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGlobalDesktopRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const vector<DescribeGlobalDesktopRecordsResponseBodySessions> & sessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<DescribeGlobalDesktopRecordsResponseBodySessions>) };
    inline vector<DescribeGlobalDesktopRecordsResponseBodySessions> sessions() { DARABONBA_PTR_GET(sessions_, vector<DescribeGlobalDesktopRecordsResponseBodySessions>) };
    inline DescribeGlobalDesktopRecordsResponseBody& setSessions(const vector<DescribeGlobalDesktopRecordsResponseBodySessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline DescribeGlobalDesktopRecordsResponseBody& setSessions(vector<DescribeGlobalDesktopRecordsResponseBodySessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeGlobalDesktopRecordsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The session details.
    std::shared_ptr<vector<DescribeGlobalDesktopRecordsResponseBodySessions>> sessions_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
