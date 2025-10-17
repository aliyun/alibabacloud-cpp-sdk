// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERBUSINESSBEHAVIORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERBUSINESSBEHAVIORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeUserBusinessBehaviorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserBusinessBehaviorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatusValue, statusValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserBusinessBehaviorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatusValue, statusValue_);
    };
    DescribeUserBusinessBehaviorResponseBody() = default ;
    DescribeUserBusinessBehaviorResponseBody(const DescribeUserBusinessBehaviorResponseBody &) = default ;
    DescribeUserBusinessBehaviorResponseBody(DescribeUserBusinessBehaviorResponseBody &&) = default ;
    DescribeUserBusinessBehaviorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserBusinessBehaviorResponseBody() = default ;
    DescribeUserBusinessBehaviorResponseBody& operator=(const DescribeUserBusinessBehaviorResponseBody &) = default ;
    DescribeUserBusinessBehaviorResponseBody& operator=(DescribeUserBusinessBehaviorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->statusValue_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserBusinessBehaviorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statusValue Field Functions 
    bool hasStatusValue() const { return this->statusValue_ != nullptr;};
    void deleteStatusValue() { this->statusValue_ = nullptr;};
    inline string statusValue() const { DARABONBA_PTR_GET_DEFAULT(statusValue_, "") };
    inline DescribeUserBusinessBehaviorResponseBody& setStatusValue(string statusValue) { DARABONBA_PTR_SET_VALUE(statusValue_, statusValue) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> statusValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
