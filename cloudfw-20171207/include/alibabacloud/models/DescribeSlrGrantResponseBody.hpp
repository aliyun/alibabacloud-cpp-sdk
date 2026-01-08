// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLRGRANTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLRGRANTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSlrGrantResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlrGrantResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsGranted, isGranted_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlrGrantResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsGranted, isGranted_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    DescribeSlrGrantResponseBody() = default ;
    DescribeSlrGrantResponseBody(const DescribeSlrGrantResponseBody &) = default ;
    DescribeSlrGrantResponseBody(DescribeSlrGrantResponseBody &&) = default ;
    DescribeSlrGrantResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlrGrantResponseBody() = default ;
    DescribeSlrGrantResponseBody& operator=(const DescribeSlrGrantResponseBody &) = default ;
    DescribeSlrGrantResponseBody& operator=(DescribeSlrGrantResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isGranted_ == nullptr
        && this->requestId_ == nullptr && this->userType_ == nullptr; };
    // isGranted Field Functions 
    bool hasIsGranted() const { return this->isGranted_ != nullptr;};
    void deleteIsGranted() { this->isGranted_ = nullptr;};
    inline bool getIsGranted() const { DARABONBA_PTR_GET_DEFAULT(isGranted_, false) };
    inline DescribeSlrGrantResponseBody& setIsGranted(bool isGranted) { DARABONBA_PTR_SET_VALUE(isGranted_, isGranted) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlrGrantResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline DescribeSlrGrantResponseBody& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    shared_ptr<bool> isGranted_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> userType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
