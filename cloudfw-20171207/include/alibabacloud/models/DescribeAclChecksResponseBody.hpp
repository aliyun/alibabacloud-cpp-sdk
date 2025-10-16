// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLCHECKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLCHECKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAclChecksResponseBodyCheckRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAclChecksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclChecksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckRecords, checkRecords_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclChecksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckRecords, checkRecords_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAclChecksResponseBody() = default ;
    DescribeAclChecksResponseBody(const DescribeAclChecksResponseBody &) = default ;
    DescribeAclChecksResponseBody(DescribeAclChecksResponseBody &&) = default ;
    DescribeAclChecksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclChecksResponseBody() = default ;
    DescribeAclChecksResponseBody& operator=(const DescribeAclChecksResponseBody &) = default ;
    DescribeAclChecksResponseBody& operator=(DescribeAclChecksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkRecords_ == nullptr
        && return this->requestId_ == nullptr; };
    // checkRecords Field Functions 
    bool hasCheckRecords() const { return this->checkRecords_ != nullptr;};
    void deleteCheckRecords() { this->checkRecords_ = nullptr;};
    inline const DescribeAclChecksResponseBodyCheckRecords & checkRecords() const { DARABONBA_PTR_GET_CONST(checkRecords_, DescribeAclChecksResponseBodyCheckRecords) };
    inline DescribeAclChecksResponseBodyCheckRecords checkRecords() { DARABONBA_PTR_GET(checkRecords_, DescribeAclChecksResponseBodyCheckRecords) };
    inline DescribeAclChecksResponseBody& setCheckRecords(const DescribeAclChecksResponseBodyCheckRecords & checkRecords) { DARABONBA_PTR_SET_VALUE(checkRecords_, checkRecords) };
    inline DescribeAclChecksResponseBody& setCheckRecords(DescribeAclChecksResponseBodyCheckRecords && checkRecords) { DARABONBA_PTR_SET_RVALUE(checkRecords_, checkRecords) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAclChecksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeAclChecksResponseBodyCheckRecords> checkRecords_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
