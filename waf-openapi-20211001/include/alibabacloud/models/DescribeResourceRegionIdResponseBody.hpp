// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEREGIONIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEREGIONIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeResourceRegionIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceRegionIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceRegionIds, resourceRegionIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceRegionIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionIds, resourceRegionIds_);
    };
    DescribeResourceRegionIdResponseBody() = default ;
    DescribeResourceRegionIdResponseBody(const DescribeResourceRegionIdResponseBody &) = default ;
    DescribeResourceRegionIdResponseBody(DescribeResourceRegionIdResponseBody &&) = default ;
    DescribeResourceRegionIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceRegionIdResponseBody() = default ;
    DescribeResourceRegionIdResponseBody& operator=(const DescribeResourceRegionIdResponseBody &) = default ;
    DescribeResourceRegionIdResponseBody& operator=(DescribeResourceRegionIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceRegionIds_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceRegionIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceRegionIds Field Functions 
    bool hasResourceRegionIds() const { return this->resourceRegionIds_ != nullptr;};
    void deleteResourceRegionIds() { this->resourceRegionIds_ = nullptr;};
    inline const vector<string> & getResourceRegionIds() const { DARABONBA_PTR_GET_CONST(resourceRegionIds_, vector<string>) };
    inline vector<string> getResourceRegionIds() { DARABONBA_PTR_GET(resourceRegionIds_, vector<string>) };
    inline DescribeResourceRegionIdResponseBody& setResourceRegionIds(const vector<string> & resourceRegionIds) { DARABONBA_PTR_SET_VALUE(resourceRegionIds_, resourceRegionIds) };
    inline DescribeResourceRegionIdResponseBody& setResourceRegionIds(vector<string> && resourceRegionIds) { DARABONBA_PTR_SET_RVALUE(resourceRegionIds_, resourceRegionIds) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The region IDs of the resources that are added to Web Application Firewall (WAF) by using the SDK integration mode.
    shared_ptr<vector<string>> resourceRegionIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
