// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALPROCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALPROCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApprovalProcessResponseBodyProcess.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetApprovalProcessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalProcessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Process, process_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalProcessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Process, process_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApprovalProcessResponseBody() = default ;
    GetApprovalProcessResponseBody(const GetApprovalProcessResponseBody &) = default ;
    GetApprovalProcessResponseBody(GetApprovalProcessResponseBody &&) = default ;
    GetApprovalProcessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalProcessResponseBody() = default ;
    GetApprovalProcessResponseBody& operator=(const GetApprovalProcessResponseBody &) = default ;
    GetApprovalProcessResponseBody& operator=(GetApprovalProcessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->process_ == nullptr
        && return this->requestId_ == nullptr; };
    // process Field Functions 
    bool hasProcess() const { return this->process_ != nullptr;};
    void deleteProcess() { this->process_ = nullptr;};
    inline const GetApprovalProcessResponseBodyProcess & process() const { DARABONBA_PTR_GET_CONST(process_, GetApprovalProcessResponseBodyProcess) };
    inline GetApprovalProcessResponseBodyProcess process() { DARABONBA_PTR_GET(process_, GetApprovalProcessResponseBodyProcess) };
    inline GetApprovalProcessResponseBody& setProcess(const GetApprovalProcessResponseBodyProcess & process) { DARABONBA_PTR_SET_VALUE(process_, process) };
    inline GetApprovalProcessResponseBody& setProcess(GetApprovalProcessResponseBodyProcess && process) { DARABONBA_PTR_SET_RVALUE(process_, process) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApprovalProcessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetApprovalProcessResponseBodyProcess> process_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
