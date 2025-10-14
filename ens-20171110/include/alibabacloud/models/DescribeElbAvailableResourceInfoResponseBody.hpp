// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELBAVAILABLERESOURCEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELBAVAILABLERESOURCEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeElbAvailableResourceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElbAvailableResourceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElbAvailableResourceInfo, elbAvailableResourceInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElbAvailableResourceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElbAvailableResourceInfo, elbAvailableResourceInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeElbAvailableResourceInfoResponseBody() = default ;
    DescribeElbAvailableResourceInfoResponseBody(const DescribeElbAvailableResourceInfoResponseBody &) = default ;
    DescribeElbAvailableResourceInfoResponseBody(DescribeElbAvailableResourceInfoResponseBody &&) = default ;
    DescribeElbAvailableResourceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElbAvailableResourceInfoResponseBody() = default ;
    DescribeElbAvailableResourceInfoResponseBody& operator=(const DescribeElbAvailableResourceInfoResponseBody &) = default ;
    DescribeElbAvailableResourceInfoResponseBody& operator=(DescribeElbAvailableResourceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elbAvailableResourceInfo_ == nullptr
        && return this->requestId_ == nullptr; };
    // elbAvailableResourceInfo Field Functions 
    bool hasElbAvailableResourceInfo() const { return this->elbAvailableResourceInfo_ != nullptr;};
    void deleteElbAvailableResourceInfo() { this->elbAvailableResourceInfo_ = nullptr;};
    inline const vector<DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo> & elbAvailableResourceInfo() const { DARABONBA_PTR_GET_CONST(elbAvailableResourceInfo_, vector<DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo>) };
    inline vector<DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo> elbAvailableResourceInfo() { DARABONBA_PTR_GET(elbAvailableResourceInfo_, vector<DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo>) };
    inline DescribeElbAvailableResourceInfoResponseBody& setElbAvailableResourceInfo(const vector<DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo> & elbAvailableResourceInfo) { DARABONBA_PTR_SET_VALUE(elbAvailableResourceInfo_, elbAvailableResourceInfo) };
    inline DescribeElbAvailableResourceInfoResponseBody& setElbAvailableResourceInfo(vector<DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo> && elbAvailableResourceInfo) { DARABONBA_PTR_SET_RVALUE(elbAvailableResourceInfo_, elbAvailableResourceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElbAvailableResourceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about resources.
    std::shared_ptr<vector<DescribeElbAvailableResourceInfoResponseBodyElbAvailableResourceInfo>> elbAvailableResourceInfo_ = nullptr;
    // The ID of the request. This parameter is a common parameter. Each request has a unique ID. You can use the ID to troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
