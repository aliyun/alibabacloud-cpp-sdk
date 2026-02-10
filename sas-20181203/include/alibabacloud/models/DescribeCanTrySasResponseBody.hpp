// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECANTRYSASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECANTRYSASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCanTrySasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCanTrySasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CanTry, canTry_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCanTrySasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CanTry, canTry_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCanTrySasResponseBody() = default ;
    DescribeCanTrySasResponseBody(const DescribeCanTrySasResponseBody &) = default ;
    DescribeCanTrySasResponseBody(DescribeCanTrySasResponseBody &&) = default ;
    DescribeCanTrySasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCanTrySasResponseBody() = default ;
    DescribeCanTrySasResponseBody& operator=(const DescribeCanTrySasResponseBody &) = default ;
    DescribeCanTrySasResponseBody& operator=(DescribeCanTrySasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canTry_ == nullptr
        && this->requestId_ == nullptr; };
    // canTry Field Functions 
    bool hasCanTry() const { return this->canTry_ != nullptr;};
    void deleteCanTry() { this->canTry_ = nullptr;};
    inline int32_t getCanTry() const { DARABONBA_PTR_GET_DEFAULT(canTry_, 0) };
    inline DescribeCanTrySasResponseBody& setCanTry(int32_t canTry) { DARABONBA_PTR_SET_VALUE(canTry_, canTry) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCanTrySasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether you have the permissions on the trial use of Security Center. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    shared_ptr<int32_t> canTry_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
