// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECTRLINSTANCEMEMBERACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECTRLINSTANCEMEMBERACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeCtrlInstanceMemberAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCtrlInstanceMemberAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceMemberCount, instanceMemberCount_);
      DARABONBA_PTR_TO_JSON(MaxInstanceMemberNum, maxInstanceMemberNum_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCtrlInstanceMemberAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceMemberCount, instanceMemberCount_);
      DARABONBA_PTR_FROM_JSON(MaxInstanceMemberNum, maxInstanceMemberNum_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCtrlInstanceMemberAccountsResponseBody() = default ;
    DescribeCtrlInstanceMemberAccountsResponseBody(const DescribeCtrlInstanceMemberAccountsResponseBody &) = default ;
    DescribeCtrlInstanceMemberAccountsResponseBody(DescribeCtrlInstanceMemberAccountsResponseBody &&) = default ;
    DescribeCtrlInstanceMemberAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCtrlInstanceMemberAccountsResponseBody() = default ;
    DescribeCtrlInstanceMemberAccountsResponseBody& operator=(const DescribeCtrlInstanceMemberAccountsResponseBody &) = default ;
    DescribeCtrlInstanceMemberAccountsResponseBody& operator=(DescribeCtrlInstanceMemberAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceMemberCount_ == nullptr
        && this->maxInstanceMemberNum_ == nullptr && this->requestId_ == nullptr; };
    // instanceMemberCount Field Functions 
    bool hasInstanceMemberCount() const { return this->instanceMemberCount_ != nullptr;};
    void deleteInstanceMemberCount() { this->instanceMemberCount_ = nullptr;};
    inline int64_t getInstanceMemberCount() const { DARABONBA_PTR_GET_DEFAULT(instanceMemberCount_, 0L) };
    inline DescribeCtrlInstanceMemberAccountsResponseBody& setInstanceMemberCount(int64_t instanceMemberCount) { DARABONBA_PTR_SET_VALUE(instanceMemberCount_, instanceMemberCount) };


    // maxInstanceMemberNum Field Functions 
    bool hasMaxInstanceMemberNum() const { return this->maxInstanceMemberNum_ != nullptr;};
    void deleteMaxInstanceMemberNum() { this->maxInstanceMemberNum_ = nullptr;};
    inline int64_t getMaxInstanceMemberNum() const { DARABONBA_PTR_GET_DEFAULT(maxInstanceMemberNum_, 0L) };
    inline DescribeCtrlInstanceMemberAccountsResponseBody& setMaxInstanceMemberNum(int64_t maxInstanceMemberNum) { DARABONBA_PTR_SET_VALUE(maxInstanceMemberNum_, maxInstanceMemberNum) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCtrlInstanceMemberAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int64_t> instanceMemberCount_ {};
    shared_ptr<int64_t> maxInstanceMemberNum_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
