// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCEQUOTA_HPP_
#define ALIBABACLOUD_MODELS_RESOURCEQUOTA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResourceSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class ResourceQuota : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceQuota& obj) { 
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(request, request_);
      DARABONBA_PTR_TO_JSON(used, used_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceQuota& obj) { 
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(request, request_);
      DARABONBA_PTR_FROM_JSON(used, used_);
    };
    ResourceQuota() = default ;
    ResourceQuota(const ResourceQuota &) = default ;
    ResourceQuota(ResourceQuota &&) = default ;
    ResourceQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceQuota() = default ;
    ResourceQuota& operator=(const ResourceQuota &) = default ;
    ResourceQuota& operator=(ResourceQuota &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->limit_ == nullptr
        && this->request_ == nullptr && this->used_ == nullptr; };
    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline const ResourceSpec & getLimit() const { DARABONBA_PTR_GET_CONST(limit_, ResourceSpec) };
    inline ResourceSpec getLimit() { DARABONBA_PTR_GET(limit_, ResourceSpec) };
    inline ResourceQuota& setLimit(const ResourceSpec & limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };
    inline ResourceQuota& setLimit(ResourceSpec && limit) { DARABONBA_PTR_SET_RVALUE(limit_, limit) };


    // request Field Functions 
    bool hasRequest() const { return this->request_ != nullptr;};
    void deleteRequest() { this->request_ = nullptr;};
    inline const ResourceSpec & getRequest() const { DARABONBA_PTR_GET_CONST(request_, ResourceSpec) };
    inline ResourceSpec getRequest() { DARABONBA_PTR_GET(request_, ResourceSpec) };
    inline ResourceQuota& setRequest(const ResourceSpec & request) { DARABONBA_PTR_SET_VALUE(request_, request) };
    inline ResourceQuota& setRequest(ResourceSpec && request) { DARABONBA_PTR_SET_RVALUE(request_, request) };


    // used Field Functions 
    bool hasUsed() const { return this->used_ != nullptr;};
    void deleteUsed() { this->used_ = nullptr;};
    inline const ResourceSpec & getUsed() const { DARABONBA_PTR_GET_CONST(used_, ResourceSpec) };
    inline ResourceSpec getUsed() { DARABONBA_PTR_GET(used_, ResourceSpec) };
    inline ResourceQuota& setUsed(const ResourceSpec & used) { DARABONBA_PTR_SET_VALUE(used_, used) };
    inline ResourceQuota& setUsed(ResourceSpec && used) { DARABONBA_PTR_SET_RVALUE(used_, used) };


  protected:
    shared_ptr<ResourceSpec> limit_ {};
    shared_ptr<ResourceSpec> request_ {};
    shared_ptr<ResourceSpec> used_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
