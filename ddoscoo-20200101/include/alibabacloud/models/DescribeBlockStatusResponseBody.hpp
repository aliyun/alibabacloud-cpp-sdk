// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBLOCKSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBLOCKSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBlockStatusResponseBodyStatusList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeBlockStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBlockStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBlockStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
    };
    DescribeBlockStatusResponseBody() = default ;
    DescribeBlockStatusResponseBody(const DescribeBlockStatusResponseBody &) = default ;
    DescribeBlockStatusResponseBody(DescribeBlockStatusResponseBody &&) = default ;
    DescribeBlockStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBlockStatusResponseBody() = default ;
    DescribeBlockStatusResponseBody& operator=(const DescribeBlockStatusResponseBody &) = default ;
    DescribeBlockStatusResponseBody& operator=(DescribeBlockStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->statusList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBlockStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<DescribeBlockStatusResponseBodyStatusList> & statusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<DescribeBlockStatusResponseBodyStatusList>) };
    inline vector<DescribeBlockStatusResponseBodyStatusList> statusList() { DARABONBA_PTR_GET(statusList_, vector<DescribeBlockStatusResponseBodyStatusList>) };
    inline DescribeBlockStatusResponseBody& setStatusList(const vector<DescribeBlockStatusResponseBodyStatusList> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline DescribeBlockStatusResponseBody& setStatusList(vector<DescribeBlockStatusResponseBodyStatusList> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of details of the Diversion from Origin Server configurations of the instance.
    std::shared_ptr<vector<DescribeBlockStatusResponseBodyStatusList>> statusList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
