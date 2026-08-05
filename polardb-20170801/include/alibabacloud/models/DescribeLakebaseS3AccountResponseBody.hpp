// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAKEBASES3ACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAKEBASES3ACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeLakebaseS3AccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLakebaseS3AccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserAccAk, userAccAk_);
      DARABONBA_PTR_TO_JSON(UserAccPolicy, userAccPolicy_);
      DARABONBA_PTR_TO_JSON(UserAccSk, userAccSk_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLakebaseS3AccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserAccAk, userAccAk_);
      DARABONBA_PTR_FROM_JSON(UserAccPolicy, userAccPolicy_);
      DARABONBA_PTR_FROM_JSON(UserAccSk, userAccSk_);
    };
    DescribeLakebaseS3AccountResponseBody() = default ;
    DescribeLakebaseS3AccountResponseBody(const DescribeLakebaseS3AccountResponseBody &) = default ;
    DescribeLakebaseS3AccountResponseBody(DescribeLakebaseS3AccountResponseBody &&) = default ;
    DescribeLakebaseS3AccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLakebaseS3AccountResponseBody() = default ;
    DescribeLakebaseS3AccountResponseBody& operator=(const DescribeLakebaseS3AccountResponseBody &) = default ;
    DescribeLakebaseS3AccountResponseBody& operator=(DescribeLakebaseS3AccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userAccAk_ == nullptr && this->userAccPolicy_ == nullptr && this->userAccSk_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLakebaseS3AccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userAccAk Field Functions 
    bool hasUserAccAk() const { return this->userAccAk_ != nullptr;};
    void deleteUserAccAk() { this->userAccAk_ = nullptr;};
    inline string getUserAccAk() const { DARABONBA_PTR_GET_DEFAULT(userAccAk_, "") };
    inline DescribeLakebaseS3AccountResponseBody& setUserAccAk(string userAccAk) { DARABONBA_PTR_SET_VALUE(userAccAk_, userAccAk) };


    // userAccPolicy Field Functions 
    bool hasUserAccPolicy() const { return this->userAccPolicy_ != nullptr;};
    void deleteUserAccPolicy() { this->userAccPolicy_ = nullptr;};
    inline string getUserAccPolicy() const { DARABONBA_PTR_GET_DEFAULT(userAccPolicy_, "") };
    inline DescribeLakebaseS3AccountResponseBody& setUserAccPolicy(string userAccPolicy) { DARABONBA_PTR_SET_VALUE(userAccPolicy_, userAccPolicy) };


    // userAccSk Field Functions 
    bool hasUserAccSk() const { return this->userAccSk_ != nullptr;};
    void deleteUserAccSk() { this->userAccSk_ = nullptr;};
    inline string getUserAccSk() const { DARABONBA_PTR_GET_DEFAULT(userAccSk_, "") };
    inline DescribeLakebaseS3AccountResponseBody& setUserAccSk(string userAccSk) { DARABONBA_PTR_SET_VALUE(userAccSk_, userAccSk) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The Access Key of the S3 account.
    shared_ptr<string> userAccAk_ {};
    // The policy document of the S3 account.
    shared_ptr<string> userAccPolicy_ {};
    // The Secret Key of the S3 account (masked).
    shared_ptr<string> userAccSk_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
