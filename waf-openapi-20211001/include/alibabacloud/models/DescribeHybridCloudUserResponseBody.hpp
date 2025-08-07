// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHybridCloudUserResponseBodyUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    DescribeHybridCloudUserResponseBody() = default ;
    DescribeHybridCloudUserResponseBody(const DescribeHybridCloudUserResponseBody &) = default ;
    DescribeHybridCloudUserResponseBody(DescribeHybridCloudUserResponseBody &&) = default ;
    DescribeHybridCloudUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudUserResponseBody() = default ;
    DescribeHybridCloudUserResponseBody& operator=(const DescribeHybridCloudUserResponseBody &) = default ;
    DescribeHybridCloudUserResponseBody& operator=(DescribeHybridCloudUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->userInfo_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const DescribeHybridCloudUserResponseBodyUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, DescribeHybridCloudUserResponseBodyUserInfo) };
    inline DescribeHybridCloudUserResponseBodyUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, DescribeHybridCloudUserResponseBodyUserInfo) };
    inline DescribeHybridCloudUserResponseBody& setUserInfo(const DescribeHybridCloudUserResponseBodyUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline DescribeHybridCloudUserResponseBody& setUserInfo(DescribeHybridCloudUserResponseBodyUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the ports that can be used by a hybrid cloud cluster.
    std::shared_ptr<DescribeHybridCloudUserResponseBodyUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
