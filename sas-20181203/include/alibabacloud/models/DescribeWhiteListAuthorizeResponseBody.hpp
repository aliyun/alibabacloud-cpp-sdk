// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTAUTHORIZERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTAUTHORIZERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWhiteListAuthorizeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteListAuthorizeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableAuthorizeNum, availableAuthorizeNum_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteListAuthorizeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableAuthorizeNum, availableAuthorizeNum_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeWhiteListAuthorizeResponseBody() = default ;
    DescribeWhiteListAuthorizeResponseBody(const DescribeWhiteListAuthorizeResponseBody &) = default ;
    DescribeWhiteListAuthorizeResponseBody(DescribeWhiteListAuthorizeResponseBody &&) = default ;
    DescribeWhiteListAuthorizeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteListAuthorizeResponseBody() = default ;
    DescribeWhiteListAuthorizeResponseBody& operator=(const DescribeWhiteListAuthorizeResponseBody &) = default ;
    DescribeWhiteListAuthorizeResponseBody& operator=(DescribeWhiteListAuthorizeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableAuthorizeNum_ == nullptr
        && return this->requestId_ == nullptr; };
    // availableAuthorizeNum Field Functions 
    bool hasAvailableAuthorizeNum() const { return this->availableAuthorizeNum_ != nullptr;};
    void deleteAvailableAuthorizeNum() { this->availableAuthorizeNum_ = nullptr;};
    inline int32_t availableAuthorizeNum() const { DARABONBA_PTR_GET_DEFAULT(availableAuthorizeNum_, 0) };
    inline DescribeWhiteListAuthorizeResponseBody& setAvailableAuthorizeNum(int32_t availableAuthorizeNum) { DARABONBA_PTR_SET_VALUE(availableAuthorizeNum_, availableAuthorizeNum) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWhiteListAuthorizeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The available quota.
    std::shared_ptr<int32_t> availableAuthorizeNum_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
