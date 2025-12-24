// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARRECORDINOUTPUTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARRECORDINOUTPUTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeSoarRecordInOutputResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarRecordInOutputResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InOutputInfo, inOutputInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarRecordInOutputResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InOutputInfo, inOutputInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSoarRecordInOutputResponseBody() = default ;
    DescribeSoarRecordInOutputResponseBody(const DescribeSoarRecordInOutputResponseBody &) = default ;
    DescribeSoarRecordInOutputResponseBody(DescribeSoarRecordInOutputResponseBody &&) = default ;
    DescribeSoarRecordInOutputResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarRecordInOutputResponseBody() = default ;
    DescribeSoarRecordInOutputResponseBody& operator=(const DescribeSoarRecordInOutputResponseBody &) = default ;
    DescribeSoarRecordInOutputResponseBody& operator=(DescribeSoarRecordInOutputResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inOutputInfo_ == nullptr
        && return this->requestId_ == nullptr; };
    // inOutputInfo Field Functions 
    bool hasInOutputInfo() const { return this->inOutputInfo_ != nullptr;};
    void deleteInOutputInfo() { this->inOutputInfo_ = nullptr;};
    inline string inOutputInfo() const { DARABONBA_PTR_GET_DEFAULT(inOutputInfo_, "") };
    inline DescribeSoarRecordInOutputResponseBody& setInOutputInfo(string inOutputInfo) { DARABONBA_PTR_SET_VALUE(inOutputInfo_, inOutputInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSoarRecordInOutputResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The execution result of the component action.
    std::shared_ptr<string> inOutputInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
