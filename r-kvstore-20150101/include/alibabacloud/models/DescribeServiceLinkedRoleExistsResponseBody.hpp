// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICELINKEDROLEEXISTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICELINKEDROLEEXISTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeServiceLinkedRoleExistsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceLinkedRoleExistsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExistsServiceLinkedRole, existsServiceLinkedRole_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceLinkedRoleExistsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExistsServiceLinkedRole, existsServiceLinkedRole_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeServiceLinkedRoleExistsResponseBody() = default ;
    DescribeServiceLinkedRoleExistsResponseBody(const DescribeServiceLinkedRoleExistsResponseBody &) = default ;
    DescribeServiceLinkedRoleExistsResponseBody(DescribeServiceLinkedRoleExistsResponseBody &&) = default ;
    DescribeServiceLinkedRoleExistsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceLinkedRoleExistsResponseBody() = default ;
    DescribeServiceLinkedRoleExistsResponseBody& operator=(const DescribeServiceLinkedRoleExistsResponseBody &) = default ;
    DescribeServiceLinkedRoleExistsResponseBody& operator=(DescribeServiceLinkedRoleExistsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->existsServiceLinkedRole_ == nullptr
        && this->requestId_ == nullptr; };
    // existsServiceLinkedRole Field Functions 
    bool hasExistsServiceLinkedRole() const { return this->existsServiceLinkedRole_ != nullptr;};
    void deleteExistsServiceLinkedRole() { this->existsServiceLinkedRole_ = nullptr;};
    inline bool getExistsServiceLinkedRole() const { DARABONBA_PTR_GET_DEFAULT(existsServiceLinkedRole_, false) };
    inline DescribeServiceLinkedRoleExistsResponseBody& setExistsServiceLinkedRole(bool existsServiceLinkedRole) { DARABONBA_PTR_SET_VALUE(existsServiceLinkedRole_, existsServiceLinkedRole) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceLinkedRoleExistsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the service-linked role is created for Tair (Redis OSS-compatible) in the current account. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> existsServiceLinkedRole_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
