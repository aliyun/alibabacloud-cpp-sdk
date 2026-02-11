// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASTIONHOSTCERTIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBASTIONHOSTCERTIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class GetBastionHostCertificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBastionHostCertificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBastionHostCertificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetBastionHostCertificationRequest() = default ;
    GetBastionHostCertificationRequest(const GetBastionHostCertificationRequest &) = default ;
    GetBastionHostCertificationRequest(GetBastionHostCertificationRequest &&) = default ;
    GetBastionHostCertificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBastionHostCertificationRequest() = default ;
    GetBastionHostCertificationRequest& operator=(const GetBastionHostCertificationRequest &) = default ;
    GetBastionHostCertificationRequest& operator=(GetBastionHostCertificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectId_ == nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetBastionHostCertificationRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // Project ID
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
