// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANYCASTSERVERREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANYCASTSERVERREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class DescribeAnycastServerRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAnycastServerRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AnycastServerRegionList, anycastServerRegionList_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAnycastServerRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AnycastServerRegionList, anycastServerRegionList_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAnycastServerRegionsResponseBody() = default ;
    DescribeAnycastServerRegionsResponseBody(const DescribeAnycastServerRegionsResponseBody &) = default ;
    DescribeAnycastServerRegionsResponseBody(DescribeAnycastServerRegionsResponseBody &&) = default ;
    DescribeAnycastServerRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAnycastServerRegionsResponseBody() = default ;
    DescribeAnycastServerRegionsResponseBody& operator=(const DescribeAnycastServerRegionsResponseBody &) = default ;
    DescribeAnycastServerRegionsResponseBody& operator=(DescribeAnycastServerRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->anycastServerRegionList_ != nullptr
        && this->count_ != nullptr && this->requestId_ != nullptr; };
    // anycastServerRegionList Field Functions 
    bool hasAnycastServerRegionList() const { return this->anycastServerRegionList_ != nullptr;};
    void deleteAnycastServerRegionList() { this->anycastServerRegionList_ = nullptr;};
    inline const vector<DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList> & anycastServerRegionList() const { DARABONBA_PTR_GET_CONST(anycastServerRegionList_, vector<DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList>) };
    inline vector<DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList> anycastServerRegionList() { DARABONBA_PTR_GET(anycastServerRegionList_, vector<DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList>) };
    inline DescribeAnycastServerRegionsResponseBody& setAnycastServerRegionList(const vector<DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList> & anycastServerRegionList) { DARABONBA_PTR_SET_VALUE(anycastServerRegionList_, anycastServerRegionList) };
    inline DescribeAnycastServerRegionsResponseBody& setAnycastServerRegionList(vector<DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList> && anycastServerRegionList) { DARABONBA_PTR_SET_RVALUE(anycastServerRegionList_, anycastServerRegionList) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline DescribeAnycastServerRegionsResponseBody& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAnycastServerRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of regions where you can associate Anycast EIPs with endpoints.
    std::shared_ptr<vector<DescribeAnycastServerRegionsResponseBodyAnycastServerRegionList>> anycastServerRegionList_ = nullptr;
    // The number of returned entries.
    std::shared_ptr<string> count_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
