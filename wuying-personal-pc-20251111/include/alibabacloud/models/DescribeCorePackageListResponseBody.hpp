// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOREPACKAGELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOREPACKAGELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCorePackageListResponseBodyCorePackageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class DescribeCorePackageListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCorePackageListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CorePackageInfo, corePackageInfo_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCorePackageListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CorePackageInfo, corePackageInfo_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeCorePackageListResponseBody() = default ;
    DescribeCorePackageListResponseBody(const DescribeCorePackageListResponseBody &) = default ;
    DescribeCorePackageListResponseBody(DescribeCorePackageListResponseBody &&) = default ;
    DescribeCorePackageListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCorePackageListResponseBody() = default ;
    DescribeCorePackageListResponseBody& operator=(const DescribeCorePackageListResponseBody &) = default ;
    DescribeCorePackageListResponseBody& operator=(DescribeCorePackageListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->corePackageInfo_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeCorePackageListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // corePackageInfo Field Functions 
    bool hasCorePackageInfo() const { return this->corePackageInfo_ != nullptr;};
    void deleteCorePackageInfo() { this->corePackageInfo_ = nullptr;};
    inline const DescribeCorePackageListResponseBodyCorePackageInfo & corePackageInfo() const { DARABONBA_PTR_GET_CONST(corePackageInfo_, DescribeCorePackageListResponseBodyCorePackageInfo) };
    inline DescribeCorePackageListResponseBodyCorePackageInfo corePackageInfo() { DARABONBA_PTR_GET(corePackageInfo_, DescribeCorePackageListResponseBodyCorePackageInfo) };
    inline DescribeCorePackageListResponseBody& setCorePackageInfo(const DescribeCorePackageListResponseBodyCorePackageInfo & corePackageInfo) { DARABONBA_PTR_SET_VALUE(corePackageInfo_, corePackageInfo) };
    inline DescribeCorePackageListResponseBody& setCorePackageInfo(DescribeCorePackageListResponseBodyCorePackageInfo && corePackageInfo) { DARABONBA_PTR_SET_RVALUE(corePackageInfo_, corePackageInfo) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCorePackageListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCorePackageListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeCorePackageListResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<DescribeCorePackageListResponseBodyCorePackageInfo> corePackageInfo_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
