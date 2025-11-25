// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBCCPROTECTSWITCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBCCPROTECTSWITCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebCcProtectSwitchResponseBodyProtectSwitchList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebCcProtectSwitchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebCcProtectSwitchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProtectSwitchList, protectSwitchList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebCcProtectSwitchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProtectSwitchList, protectSwitchList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeWebCcProtectSwitchResponseBody() = default ;
    DescribeWebCcProtectSwitchResponseBody(const DescribeWebCcProtectSwitchResponseBody &) = default ;
    DescribeWebCcProtectSwitchResponseBody(DescribeWebCcProtectSwitchResponseBody &&) = default ;
    DescribeWebCcProtectSwitchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebCcProtectSwitchResponseBody() = default ;
    DescribeWebCcProtectSwitchResponseBody& operator=(const DescribeWebCcProtectSwitchResponseBody &) = default ;
    DescribeWebCcProtectSwitchResponseBody& operator=(DescribeWebCcProtectSwitchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->protectSwitchList_ == nullptr
        && return this->requestId_ == nullptr; };
    // protectSwitchList Field Functions 
    bool hasProtectSwitchList() const { return this->protectSwitchList_ != nullptr;};
    void deleteProtectSwitchList() { this->protectSwitchList_ = nullptr;};
    inline const vector<DescribeWebCcProtectSwitchResponseBodyProtectSwitchList> & protectSwitchList() const { DARABONBA_PTR_GET_CONST(protectSwitchList_, vector<DescribeWebCcProtectSwitchResponseBodyProtectSwitchList>) };
    inline vector<DescribeWebCcProtectSwitchResponseBodyProtectSwitchList> protectSwitchList() { DARABONBA_PTR_GET(protectSwitchList_, vector<DescribeWebCcProtectSwitchResponseBodyProtectSwitchList>) };
    inline DescribeWebCcProtectSwitchResponseBody& setProtectSwitchList(const vector<DescribeWebCcProtectSwitchResponseBodyProtectSwitchList> & protectSwitchList) { DARABONBA_PTR_SET_VALUE(protectSwitchList_, protectSwitchList) };
    inline DescribeWebCcProtectSwitchResponseBody& setProtectSwitchList(vector<DescribeWebCcProtectSwitchResponseBodyProtectSwitchList> && protectSwitchList) { DARABONBA_PTR_SET_RVALUE(protectSwitchList_, protectSwitchList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebCcProtectSwitchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status of each mitigation policy for the website.
    std::shared_ptr<vector<DescribeWebCcProtectSwitchResponseBodyProtectSwitchList>> protectSwitchList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
