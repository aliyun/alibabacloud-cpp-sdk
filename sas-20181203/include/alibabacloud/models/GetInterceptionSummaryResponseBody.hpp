// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERCEPTIONSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINTERCEPTIONSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInterceptionSummaryResponseBodyInterceptionSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetInterceptionSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInterceptionSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InterceptionSummary, interceptionSummary_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInterceptionSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InterceptionSummary, interceptionSummary_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInterceptionSummaryResponseBody() = default ;
    GetInterceptionSummaryResponseBody(const GetInterceptionSummaryResponseBody &) = default ;
    GetInterceptionSummaryResponseBody(GetInterceptionSummaryResponseBody &&) = default ;
    GetInterceptionSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInterceptionSummaryResponseBody() = default ;
    GetInterceptionSummaryResponseBody& operator=(const GetInterceptionSummaryResponseBody &) = default ;
    GetInterceptionSummaryResponseBody& operator=(GetInterceptionSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->interceptionSummary_ == nullptr
        && return this->requestId_ == nullptr; };
    // interceptionSummary Field Functions 
    bool hasInterceptionSummary() const { return this->interceptionSummary_ != nullptr;};
    void deleteInterceptionSummary() { this->interceptionSummary_ = nullptr;};
    inline const GetInterceptionSummaryResponseBodyInterceptionSummary & interceptionSummary() const { DARABONBA_PTR_GET_CONST(interceptionSummary_, GetInterceptionSummaryResponseBodyInterceptionSummary) };
    inline GetInterceptionSummaryResponseBodyInterceptionSummary interceptionSummary() { DARABONBA_PTR_GET(interceptionSummary_, GetInterceptionSummaryResponseBodyInterceptionSummary) };
    inline GetInterceptionSummaryResponseBody& setInterceptionSummary(const GetInterceptionSummaryResponseBodyInterceptionSummary & interceptionSummary) { DARABONBA_PTR_SET_VALUE(interceptionSummary_, interceptionSummary) };
    inline GetInterceptionSummaryResponseBody& setInterceptionSummary(GetInterceptionSummaryResponseBodyInterceptionSummary && interceptionSummary) { DARABONBA_PTR_SET_RVALUE(interceptionSummary_, interceptionSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInterceptionSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics.
    std::shared_ptr<GetInterceptionSummaryResponseBodyInterceptionSummary> interceptionSummary_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
