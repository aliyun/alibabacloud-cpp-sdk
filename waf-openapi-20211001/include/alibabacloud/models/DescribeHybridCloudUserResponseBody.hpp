// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class UserInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
        DARABONBA_PTR_TO_JSON(HttpPorts, httpPorts_);
        DARABONBA_PTR_TO_JSON(HttpsPorts, httpsPorts_);
      };
      friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(HttpPorts, httpPorts_);
        DARABONBA_PTR_FROM_JSON(HttpsPorts, httpsPorts_);
      };
      UserInfo() = default ;
      UserInfo(const UserInfo &) = default ;
      UserInfo(UserInfo &&) = default ;
      UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserInfo() = default ;
      UserInfo& operator=(const UserInfo &) = default ;
      UserInfo& operator=(UserInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->httpPorts_ == nullptr
        && this->httpsPorts_ == nullptr; };
      // httpPorts Field Functions 
      bool hasHttpPorts() const { return this->httpPorts_ != nullptr;};
      void deleteHttpPorts() { this->httpPorts_ = nullptr;};
      inline string getHttpPorts() const { DARABONBA_PTR_GET_DEFAULT(httpPorts_, "") };
      inline UserInfo& setHttpPorts(string httpPorts) { DARABONBA_PTR_SET_VALUE(httpPorts_, httpPorts) };


      // httpsPorts Field Functions 
      bool hasHttpsPorts() const { return this->httpsPorts_ != nullptr;};
      void deleteHttpsPorts() { this->httpsPorts_ = nullptr;};
      inline string getHttpsPorts() const { DARABONBA_PTR_GET_DEFAULT(httpsPorts_, "") };
      inline UserInfo& setHttpsPorts(string httpsPorts) { DARABONBA_PTR_SET_VALUE(httpsPorts_, httpsPorts) };


    protected:
      // The HTTP ports. The value is a string. If multiple ports are returned, the value is in the **port1,port2,port3** format.
      shared_ptr<string> httpPorts_ {};
      // The HTTPS ports. The value is a string. If multiple ports are returned, the value is in the **port1,port2,port3** format.
      shared_ptr<string> httpsPorts_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const DescribeHybridCloudUserResponseBody::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, DescribeHybridCloudUserResponseBody::UserInfo) };
    inline DescribeHybridCloudUserResponseBody::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, DescribeHybridCloudUserResponseBody::UserInfo) };
    inline DescribeHybridCloudUserResponseBody& setUserInfo(const DescribeHybridCloudUserResponseBody::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline DescribeHybridCloudUserResponseBody& setUserInfo(DescribeHybridCloudUserResponseBody::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the ports that can be used by a hybrid cloud cluster.
    shared_ptr<DescribeHybridCloudUserResponseBody::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
