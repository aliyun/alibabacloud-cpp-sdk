// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOCCWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOCCWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeAutoCcWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoCcWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCcWhitelist, autoCcWhitelist_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoCcWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCcWhitelist, autoCcWhitelist_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAutoCcWhitelistResponseBody() = default ;
    DescribeAutoCcWhitelistResponseBody(const DescribeAutoCcWhitelistResponseBody &) = default ;
    DescribeAutoCcWhitelistResponseBody(DescribeAutoCcWhitelistResponseBody &&) = default ;
    DescribeAutoCcWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoCcWhitelistResponseBody() = default ;
    DescribeAutoCcWhitelistResponseBody& operator=(const DescribeAutoCcWhitelistResponseBody &) = default ;
    DescribeAutoCcWhitelistResponseBody& operator=(DescribeAutoCcWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoCcWhitelist_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // autoCcWhitelist Field Functions 
    bool hasAutoCcWhitelist() const { return this->autoCcWhitelist_ != nullptr;};
    void deleteAutoCcWhitelist() { this->autoCcWhitelist_ = nullptr;};
    inline const vector<DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist> & autoCcWhitelist() const { DARABONBA_PTR_GET_CONST(autoCcWhitelist_, vector<DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist>) };
    inline vector<DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist> autoCcWhitelist() { DARABONBA_PTR_GET(autoCcWhitelist_, vector<DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist>) };
    inline DescribeAutoCcWhitelistResponseBody& setAutoCcWhitelist(const vector<DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist> & autoCcWhitelist) { DARABONBA_PTR_SET_VALUE(autoCcWhitelist_, autoCcWhitelist) };
    inline DescribeAutoCcWhitelistResponseBody& setAutoCcWhitelist(vector<DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist> && autoCcWhitelist) { DARABONBA_PTR_SET_RVALUE(autoCcWhitelist_, autoCcWhitelist) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoCcWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeAutoCcWhitelistResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of details of the IP address in the whitelist of the instance.
    std::shared_ptr<vector<DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist>> autoCcWhitelist_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned IP addresses in the whitelist.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
