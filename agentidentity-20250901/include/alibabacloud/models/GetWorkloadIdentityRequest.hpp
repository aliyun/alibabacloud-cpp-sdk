// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKLOADIDENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWORKLOADIDENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class GetWorkloadIdentityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkloadIdentityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WorkloadIdentityName, workloadIdentityName_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkloadIdentityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkloadIdentityName, workloadIdentityName_);
    };
    GetWorkloadIdentityRequest() = default ;
    GetWorkloadIdentityRequest(const GetWorkloadIdentityRequest &) = default ;
    GetWorkloadIdentityRequest(GetWorkloadIdentityRequest &&) = default ;
    GetWorkloadIdentityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkloadIdentityRequest() = default ;
    GetWorkloadIdentityRequest& operator=(const GetWorkloadIdentityRequest &) = default ;
    GetWorkloadIdentityRequest& operator=(GetWorkloadIdentityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workloadIdentityName_ == nullptr; };
    // workloadIdentityName Field Functions 
    bool hasWorkloadIdentityName() const { return this->workloadIdentityName_ != nullptr;};
    void deleteWorkloadIdentityName() { this->workloadIdentityName_ = nullptr;};
    inline string workloadIdentityName() const { DARABONBA_PTR_GET_DEFAULT(workloadIdentityName_, "") };
    inline GetWorkloadIdentityRequest& setWorkloadIdentityName(string workloadIdentityName) { DARABONBA_PTR_SET_VALUE(workloadIdentityName_, workloadIdentityName) };


  protected:
    std::shared_ptr<string> workloadIdentityName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
