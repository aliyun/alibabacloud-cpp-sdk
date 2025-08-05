// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTDEFAULTQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTDEFAULTQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateProjectDefaultQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectDefaultQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(quota, quota_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectDefaultQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(quota, quota_);
    };
    UpdateProjectDefaultQuotaRequest() = default ;
    UpdateProjectDefaultQuotaRequest(const UpdateProjectDefaultQuotaRequest &) = default ;
    UpdateProjectDefaultQuotaRequest(UpdateProjectDefaultQuotaRequest &&) = default ;
    UpdateProjectDefaultQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectDefaultQuotaRequest() = default ;
    UpdateProjectDefaultQuotaRequest& operator=(const UpdateProjectDefaultQuotaRequest &) = default ;
    UpdateProjectDefaultQuotaRequest& operator=(UpdateProjectDefaultQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->quota_ != nullptr; };
    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline string quota() const { DARABONBA_PTR_GET_DEFAULT(quota_, "") };
    inline UpdateProjectDefaultQuotaRequest& setQuota(string quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


  protected:
    // The default computing quota that is used to allocate computing resources, the jobs that are initiated by this project consume the computing resources in the default quota.
    std::shared_ptr<string> quota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
