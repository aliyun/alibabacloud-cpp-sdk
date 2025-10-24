// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDSDKSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDSDKSERVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridCloudSdkServersResponseBodySdkServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudSdkServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudSdkServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SdkServers, sdkServers_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudSdkServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SdkServers, sdkServers_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHybridCloudSdkServersResponseBody() = default ;
    DescribeHybridCloudSdkServersResponseBody(const DescribeHybridCloudSdkServersResponseBody &) = default ;
    DescribeHybridCloudSdkServersResponseBody(DescribeHybridCloudSdkServersResponseBody &&) = default ;
    DescribeHybridCloudSdkServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudSdkServersResponseBody() = default ;
    DescribeHybridCloudSdkServersResponseBody& operator=(const DescribeHybridCloudSdkServersResponseBody &) = default ;
    DescribeHybridCloudSdkServersResponseBody& operator=(DescribeHybridCloudSdkServersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->sdkServers_ == nullptr && return this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudSdkServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sdkServers Field Functions 
    bool hasSdkServers() const { return this->sdkServers_ != nullptr;};
    void deleteSdkServers() { this->sdkServers_ = nullptr;};
    inline const vector<DescribeHybridCloudSdkServersResponseBodySdkServers> & sdkServers() const { DARABONBA_PTR_GET_CONST(sdkServers_, vector<DescribeHybridCloudSdkServersResponseBodySdkServers>) };
    inline vector<DescribeHybridCloudSdkServersResponseBodySdkServers> sdkServers() { DARABONBA_PTR_GET(sdkServers_, vector<DescribeHybridCloudSdkServersResponseBodySdkServers>) };
    inline DescribeHybridCloudSdkServersResponseBody& setSdkServers(const vector<DescribeHybridCloudSdkServersResponseBodySdkServers> & sdkServers) { DARABONBA_PTR_SET_VALUE(sdkServers_, sdkServers) };
    inline DescribeHybridCloudSdkServersResponseBody& setSdkServers(vector<DescribeHybridCloudSdkServersResponseBodySdkServers> && sdkServers) { DARABONBA_PTR_SET_RVALUE(sdkServers_, sdkServers) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHybridCloudSdkServersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeHybridCloudSdkServersResponseBodySdkServers>> sdkServers_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
