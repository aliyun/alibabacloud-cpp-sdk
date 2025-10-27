// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKCONFIGLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKCONFIGLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebLockConfigListResponseBodyConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWebLockConfigListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebLockConfigListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigList, configList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebLockConfigListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeWebLockConfigListResponseBody() = default ;
    DescribeWebLockConfigListResponseBody(const DescribeWebLockConfigListResponseBody &) = default ;
    DescribeWebLockConfigListResponseBody(DescribeWebLockConfigListResponseBody &&) = default ;
    DescribeWebLockConfigListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebLockConfigListResponseBody() = default ;
    DescribeWebLockConfigListResponseBody& operator=(const DescribeWebLockConfigListResponseBody &) = default ;
    DescribeWebLockConfigListResponseBody& operator=(DescribeWebLockConfigListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configList_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline const vector<DescribeWebLockConfigListResponseBodyConfigList> & configList() const { DARABONBA_PTR_GET_CONST(configList_, vector<DescribeWebLockConfigListResponseBodyConfigList>) };
    inline vector<DescribeWebLockConfigListResponseBodyConfigList> configList() { DARABONBA_PTR_GET(configList_, vector<DescribeWebLockConfigListResponseBodyConfigList>) };
    inline DescribeWebLockConfigListResponseBody& setConfigList(const vector<DescribeWebLockConfigListResponseBodyConfigList> & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
    inline DescribeWebLockConfigListResponseBody& setConfigList(vector<DescribeWebLockConfigListResponseBodyConfigList> && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebLockConfigListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeWebLockConfigListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The configurations of web tamper proofing.
    std::shared_ptr<vector<DescribeWebLockConfigListResponseBodyConfigList>> configList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of directories that have web tamper proofing enabled on the server.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
