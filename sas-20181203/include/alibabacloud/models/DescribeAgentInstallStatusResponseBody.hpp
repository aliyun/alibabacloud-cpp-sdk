// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGENTINSTALLSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGENTINSTALLSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAgentInstallStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgentInstallStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AegisClientInvokeStatusResponseList, aegisClientInvokeStatusResponseList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgentInstallStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AegisClientInvokeStatusResponseList, aegisClientInvokeStatusResponseList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAgentInstallStatusResponseBody() = default ;
    DescribeAgentInstallStatusResponseBody(const DescribeAgentInstallStatusResponseBody &) = default ;
    DescribeAgentInstallStatusResponseBody(DescribeAgentInstallStatusResponseBody &&) = default ;
    DescribeAgentInstallStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgentInstallStatusResponseBody() = default ;
    DescribeAgentInstallStatusResponseBody& operator=(const DescribeAgentInstallStatusResponseBody &) = default ;
    DescribeAgentInstallStatusResponseBody& operator=(DescribeAgentInstallStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aegisClientInvokeStatusResponseList_ != nullptr
        && this->requestId_ != nullptr; };
    // aegisClientInvokeStatusResponseList Field Functions 
    bool hasAegisClientInvokeStatusResponseList() const { return this->aegisClientInvokeStatusResponseList_ != nullptr;};
    void deleteAegisClientInvokeStatusResponseList() { this->aegisClientInvokeStatusResponseList_ = nullptr;};
    inline const vector<DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList> & aegisClientInvokeStatusResponseList() const { DARABONBA_PTR_GET_CONST(aegisClientInvokeStatusResponseList_, vector<DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList>) };
    inline vector<DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList> aegisClientInvokeStatusResponseList() { DARABONBA_PTR_GET(aegisClientInvokeStatusResponseList_, vector<DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList>) };
    inline DescribeAgentInstallStatusResponseBody& setAegisClientInvokeStatusResponseList(const vector<DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList> & aegisClientInvokeStatusResponseList) { DARABONBA_PTR_SET_VALUE(aegisClientInvokeStatusResponseList_, aegisClientInvokeStatusResponseList) };
    inline DescribeAgentInstallStatusResponseBody& setAegisClientInvokeStatusResponseList(vector<DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList> && aegisClientInvokeStatusResponseList) { DARABONBA_PTR_SET_RVALUE(aegisClientInvokeStatusResponseList_, aegisClientInvokeStatusResponseList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAgentInstallStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status of servers.
    std::shared_ptr<vector<DescribeAgentInstallStatusResponseBodyAegisClientInvokeStatusResponseList>> aegisClientInvokeStatusResponseList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
