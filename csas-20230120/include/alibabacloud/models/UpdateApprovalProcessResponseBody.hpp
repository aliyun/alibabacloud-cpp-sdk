// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPROVALPROCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPROVALPROCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateApprovalProcessResponseBodyProcess.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateApprovalProcessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApprovalProcessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Process, process_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApprovalProcessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Process, process_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateApprovalProcessResponseBody() = default ;
    UpdateApprovalProcessResponseBody(const UpdateApprovalProcessResponseBody &) = default ;
    UpdateApprovalProcessResponseBody(UpdateApprovalProcessResponseBody &&) = default ;
    UpdateApprovalProcessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApprovalProcessResponseBody() = default ;
    UpdateApprovalProcessResponseBody& operator=(const UpdateApprovalProcessResponseBody &) = default ;
    UpdateApprovalProcessResponseBody& operator=(UpdateApprovalProcessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->process_ != nullptr
        && this->requestId_ != nullptr; };
    // process Field Functions 
    bool hasProcess() const { return this->process_ != nullptr;};
    void deleteProcess() { this->process_ = nullptr;};
    inline const UpdateApprovalProcessResponseBodyProcess & process() const { DARABONBA_PTR_GET_CONST(process_, UpdateApprovalProcessResponseBodyProcess) };
    inline UpdateApprovalProcessResponseBodyProcess process() { DARABONBA_PTR_GET(process_, UpdateApprovalProcessResponseBodyProcess) };
    inline UpdateApprovalProcessResponseBody& setProcess(const UpdateApprovalProcessResponseBodyProcess & process) { DARABONBA_PTR_SET_VALUE(process_, process) };
    inline UpdateApprovalProcessResponseBody& setProcess(UpdateApprovalProcessResponseBodyProcess && process) { DARABONBA_PTR_SET_RVALUE(process_, process) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateApprovalProcessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<UpdateApprovalProcessResponseBodyProcess> process_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
