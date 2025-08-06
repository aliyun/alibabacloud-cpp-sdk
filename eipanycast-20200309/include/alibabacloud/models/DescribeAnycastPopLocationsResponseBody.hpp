// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANYCASTPOPLOCATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANYCASTPOPLOCATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAnycastPopLocationsResponseBodyAnycastPopLocationList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class DescribeAnycastPopLocationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAnycastPopLocationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AnycastPopLocationList, anycastPopLocationList_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAnycastPopLocationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AnycastPopLocationList, anycastPopLocationList_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAnycastPopLocationsResponseBody() = default ;
    DescribeAnycastPopLocationsResponseBody(const DescribeAnycastPopLocationsResponseBody &) = default ;
    DescribeAnycastPopLocationsResponseBody(DescribeAnycastPopLocationsResponseBody &&) = default ;
    DescribeAnycastPopLocationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAnycastPopLocationsResponseBody() = default ;
    DescribeAnycastPopLocationsResponseBody& operator=(const DescribeAnycastPopLocationsResponseBody &) = default ;
    DescribeAnycastPopLocationsResponseBody& operator=(DescribeAnycastPopLocationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->anycastPopLocationList_ != nullptr
        && this->count_ != nullptr && this->requestId_ != nullptr; };
    // anycastPopLocationList Field Functions 
    bool hasAnycastPopLocationList() const { return this->anycastPopLocationList_ != nullptr;};
    void deleteAnycastPopLocationList() { this->anycastPopLocationList_ = nullptr;};
    inline const vector<DescribeAnycastPopLocationsResponseBodyAnycastPopLocationList> & anycastPopLocationList() const { DARABONBA_PTR_GET_CONST(anycastPopLocationList_, vector<DescribeAnycastPopLocationsResponseBodyAnycastPopLocationList>) };
    inline vector<DescribeAnycastPopLocationsResponseBodyAnycastPopLocationList> anycastPopLocationList() { DARABONBA_PTR_GET(anycastPopLocationList_, vector<DescribeAnycastPopLocationsResponseBodyAnycastPopLocationList>) };
    inline DescribeAnycastPopLocationsResponseBody& setAnycastPopLocationList(const vector<DescribeAnycastPopLocationsResponseBodyAnycastPopLocationList> & anycastPopLocationList) { DARABONBA_PTR_SET_VALUE(anycastPopLocationList_, anycastPopLocationList) };
    inline DescribeAnycastPopLocationsResponseBody& setAnycastPopLocationList(vector<DescribeAnycastPopLocationsResponseBodyAnycastPopLocationList> && anycastPopLocationList) { DARABONBA_PTR_SET_RVALUE(anycastPopLocationList_, anycastPopLocationList) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline DescribeAnycastPopLocationsResponseBody& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAnycastPopLocationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of access points in the specified access area.
    std::shared_ptr<vector<DescribeAnycastPopLocationsResponseBodyAnycastPopLocationList>> anycastPopLocationList_ = nullptr;
    // The number of access points.
    std::shared_ptr<string> count_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
