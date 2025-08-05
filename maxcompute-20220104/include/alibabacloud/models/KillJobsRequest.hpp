// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KILLJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_KILLJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class KillJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KillJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, KillJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    KillJobsRequest() = default ;
    KillJobsRequest(const KillJobsRequest &) = default ;
    KillJobsRequest(KillJobsRequest &&) = default ;
    KillJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KillJobsRequest() = default ;
    KillJobsRequest& operator=(const KillJobsRequest &) = default ;
    KillJobsRequest& operator=(KillJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->region_ != nullptr && this->tenantId_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline KillJobsRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline KillJobsRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline KillJobsRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The request body parameters.
    std::shared_ptr<string> body_ = nullptr;
    // The ID of the region in which the instance resides.
    std::shared_ptr<string> region_ = nullptr;
    // The ID of the tenant.
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
