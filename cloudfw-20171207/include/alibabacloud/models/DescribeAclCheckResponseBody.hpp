// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLCHECKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLCHECKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAclCheckResponseBodyCheckRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAclCheckResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclCheckResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckRecord, checkRecord_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclCheckResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckRecord, checkRecord_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAclCheckResponseBody() = default ;
    DescribeAclCheckResponseBody(const DescribeAclCheckResponseBody &) = default ;
    DescribeAclCheckResponseBody(DescribeAclCheckResponseBody &&) = default ;
    DescribeAclCheckResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclCheckResponseBody() = default ;
    DescribeAclCheckResponseBody& operator=(const DescribeAclCheckResponseBody &) = default ;
    DescribeAclCheckResponseBody& operator=(DescribeAclCheckResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkRecord_ == nullptr
        && return this->requestId_ == nullptr; };
    // checkRecord Field Functions 
    bool hasCheckRecord() const { return this->checkRecord_ != nullptr;};
    void deleteCheckRecord() { this->checkRecord_ = nullptr;};
    inline const DescribeAclCheckResponseBodyCheckRecord & checkRecord() const { DARABONBA_PTR_GET_CONST(checkRecord_, DescribeAclCheckResponseBodyCheckRecord) };
    inline DescribeAclCheckResponseBodyCheckRecord checkRecord() { DARABONBA_PTR_GET(checkRecord_, DescribeAclCheckResponseBodyCheckRecord) };
    inline DescribeAclCheckResponseBody& setCheckRecord(const DescribeAclCheckResponseBodyCheckRecord & checkRecord) { DARABONBA_PTR_SET_VALUE(checkRecord_, checkRecord) };
    inline DescribeAclCheckResponseBody& setCheckRecord(DescribeAclCheckResponseBodyCheckRecord && checkRecord) { DARABONBA_PTR_SET_RVALUE(checkRecord_, checkRecord) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAclCheckResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeAclCheckResponseBodyCheckRecord> checkRecord_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
