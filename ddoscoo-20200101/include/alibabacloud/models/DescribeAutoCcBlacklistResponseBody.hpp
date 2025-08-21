// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOCCBLACKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOCCBLACKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAutoCcBlacklistResponseBodyAutoCcBlacklist.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeAutoCcBlacklistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoCcBlacklistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCcBlacklist, autoCcBlacklist_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoCcBlacklistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCcBlacklist, autoCcBlacklist_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAutoCcBlacklistResponseBody() = default ;
    DescribeAutoCcBlacklistResponseBody(const DescribeAutoCcBlacklistResponseBody &) = default ;
    DescribeAutoCcBlacklistResponseBody(DescribeAutoCcBlacklistResponseBody &&) = default ;
    DescribeAutoCcBlacklistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoCcBlacklistResponseBody() = default ;
    DescribeAutoCcBlacklistResponseBody& operator=(const DescribeAutoCcBlacklistResponseBody &) = default ;
    DescribeAutoCcBlacklistResponseBody& operator=(DescribeAutoCcBlacklistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoCcBlacklist_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // autoCcBlacklist Field Functions 
    bool hasAutoCcBlacklist() const { return this->autoCcBlacklist_ != nullptr;};
    void deleteAutoCcBlacklist() { this->autoCcBlacklist_ = nullptr;};
    inline const vector<DescribeAutoCcBlacklistResponseBodyAutoCcBlacklist> & autoCcBlacklist() const { DARABONBA_PTR_GET_CONST(autoCcBlacklist_, vector<DescribeAutoCcBlacklistResponseBodyAutoCcBlacklist>) };
    inline vector<DescribeAutoCcBlacklistResponseBodyAutoCcBlacklist> autoCcBlacklist() { DARABONBA_PTR_GET(autoCcBlacklist_, vector<DescribeAutoCcBlacklistResponseBodyAutoCcBlacklist>) };
    inline DescribeAutoCcBlacklistResponseBody& setAutoCcBlacklist(const vector<DescribeAutoCcBlacklistResponseBodyAutoCcBlacklist> & autoCcBlacklist) { DARABONBA_PTR_SET_VALUE(autoCcBlacklist_, autoCcBlacklist) };
    inline DescribeAutoCcBlacklistResponseBody& setAutoCcBlacklist(vector<DescribeAutoCcBlacklistResponseBodyAutoCcBlacklist> && autoCcBlacklist) { DARABONBA_PTR_SET_RVALUE(autoCcBlacklist_, autoCcBlacklist) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoCcBlacklistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeAutoCcBlacklistResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the details of the IP addresses in the blacklist of the instance.
    std::shared_ptr<vector<DescribeAutoCcBlacklistResponseBodyAutoCcBlacklist>> autoCcBlacklist_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned IP addresses in the blacklist.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
