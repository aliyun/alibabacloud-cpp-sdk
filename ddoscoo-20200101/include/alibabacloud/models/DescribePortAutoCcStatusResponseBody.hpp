// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTAUTOCCSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTAUTOCCSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePortAutoCcStatusResponseBodyPortAutoCcStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortAutoCcStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortAutoCcStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PortAutoCcStatus, portAutoCcStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortAutoCcStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PortAutoCcStatus, portAutoCcStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePortAutoCcStatusResponseBody() = default ;
    DescribePortAutoCcStatusResponseBody(const DescribePortAutoCcStatusResponseBody &) = default ;
    DescribePortAutoCcStatusResponseBody(DescribePortAutoCcStatusResponseBody &&) = default ;
    DescribePortAutoCcStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortAutoCcStatusResponseBody() = default ;
    DescribePortAutoCcStatusResponseBody& operator=(const DescribePortAutoCcStatusResponseBody &) = default ;
    DescribePortAutoCcStatusResponseBody& operator=(DescribePortAutoCcStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->portAutoCcStatus_ == nullptr
        && return this->requestId_ == nullptr; };
    // portAutoCcStatus Field Functions 
    bool hasPortAutoCcStatus() const { return this->portAutoCcStatus_ != nullptr;};
    void deletePortAutoCcStatus() { this->portAutoCcStatus_ = nullptr;};
    inline const vector<DescribePortAutoCcStatusResponseBodyPortAutoCcStatus> & portAutoCcStatus() const { DARABONBA_PTR_GET_CONST(portAutoCcStatus_, vector<DescribePortAutoCcStatusResponseBodyPortAutoCcStatus>) };
    inline vector<DescribePortAutoCcStatusResponseBodyPortAutoCcStatus> portAutoCcStatus() { DARABONBA_PTR_GET(portAutoCcStatus_, vector<DescribePortAutoCcStatusResponseBodyPortAutoCcStatus>) };
    inline DescribePortAutoCcStatusResponseBody& setPortAutoCcStatus(const vector<DescribePortAutoCcStatusResponseBodyPortAutoCcStatus> & portAutoCcStatus) { DARABONBA_PTR_SET_VALUE(portAutoCcStatus_, portAutoCcStatus) };
    inline DescribePortAutoCcStatusResponseBody& setPortAutoCcStatus(vector<DescribePortAutoCcStatusResponseBodyPortAutoCcStatus> && portAutoCcStatus) { DARABONBA_PTR_SET_RVALUE(portAutoCcStatus_, portAutoCcStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePortAutoCcStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the configurations of the Intelligent Protection policy.
    std::shared_ptr<vector<DescribePortAutoCcStatusResponseBodyPortAutoCcStatus>> portAutoCcStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
