// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALPROCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALPROCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetApprovalProcessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalProcessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalProcessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
    };
    GetApprovalProcessRequest() = default ;
    GetApprovalProcessRequest(const GetApprovalProcessRequest &) = default ;
    GetApprovalProcessRequest(GetApprovalProcessRequest &&) = default ;
    GetApprovalProcessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalProcessRequest() = default ;
    GetApprovalProcessRequest& operator=(const GetApprovalProcessRequest &) = default ;
    GetApprovalProcessRequest& operator=(GetApprovalProcessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->processId_ == nullptr; };
    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline GetApprovalProcessRequest& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> processId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
