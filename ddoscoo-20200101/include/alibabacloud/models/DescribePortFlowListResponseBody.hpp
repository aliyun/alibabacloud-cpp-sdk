// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTFLOWLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTFLOWLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePortFlowListResponseBodyPortFlowList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortFlowListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortFlowListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PortFlowList, portFlowList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortFlowListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PortFlowList, portFlowList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePortFlowListResponseBody() = default ;
    DescribePortFlowListResponseBody(const DescribePortFlowListResponseBody &) = default ;
    DescribePortFlowListResponseBody(DescribePortFlowListResponseBody &&) = default ;
    DescribePortFlowListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortFlowListResponseBody() = default ;
    DescribePortFlowListResponseBody& operator=(const DescribePortFlowListResponseBody &) = default ;
    DescribePortFlowListResponseBody& operator=(DescribePortFlowListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->portFlowList_ != nullptr
        && this->requestId_ != nullptr; };
    // portFlowList Field Functions 
    bool hasPortFlowList() const { return this->portFlowList_ != nullptr;};
    void deletePortFlowList() { this->portFlowList_ = nullptr;};
    inline const vector<DescribePortFlowListResponseBodyPortFlowList> & portFlowList() const { DARABONBA_PTR_GET_CONST(portFlowList_, vector<DescribePortFlowListResponseBodyPortFlowList>) };
    inline vector<DescribePortFlowListResponseBodyPortFlowList> portFlowList() { DARABONBA_PTR_GET(portFlowList_, vector<DescribePortFlowListResponseBodyPortFlowList>) };
    inline DescribePortFlowListResponseBody& setPortFlowList(const vector<DescribePortFlowListResponseBodyPortFlowList> & portFlowList) { DARABONBA_PTR_SET_VALUE(portFlowList_, portFlowList) };
    inline DescribePortFlowListResponseBody& setPortFlowList(vector<DescribePortFlowListResponseBodyPortFlowList> && portFlowList) { DARABONBA_PTR_SET_RVALUE(portFlowList_, portFlowList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePortFlowListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned traffic data.
    std::shared_ptr<vector<DescribePortFlowListResponseBodyPortFlowList>> portFlowList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
