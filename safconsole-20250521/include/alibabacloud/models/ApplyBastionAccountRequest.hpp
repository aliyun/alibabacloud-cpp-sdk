// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYBASTIONACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYBASTIONACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class ApplyBastionAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyBastionAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyBastionAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ApplyBastionAccountRequest() = default ;
    ApplyBastionAccountRequest(const ApplyBastionAccountRequest &) = default ;
    ApplyBastionAccountRequest(ApplyBastionAccountRequest &&) = default ;
    ApplyBastionAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyBastionAccountRequest() = default ;
    ApplyBastionAccountRequest& operator=(const ApplyBastionAccountRequest &) = default ;
    ApplyBastionAccountRequest& operator=(ApplyBastionAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mobile_ == nullptr
        && this->projectId_ == nullptr; };
    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline int64_t getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, 0L) };
    inline ApplyBastionAccountRequest& setMobile(int64_t mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ApplyBastionAccountRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // Mobile Phone Number
    shared_ptr<int64_t> mobile_ {};
    // Project ID
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
