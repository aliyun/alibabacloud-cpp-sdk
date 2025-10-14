// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSQLAUDITSLSSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKSQLAUDITSLSSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CheckSqlAuditSlsStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckSqlAuditSlsStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckSqlAuditSlsStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CheckSqlAuditSlsStatusRequest() = default ;
    CheckSqlAuditSlsStatusRequest(const CheckSqlAuditSlsStatusRequest &) = default ;
    CheckSqlAuditSlsStatusRequest(CheckSqlAuditSlsStatusRequest &&) = default ;
    CheckSqlAuditSlsStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckSqlAuditSlsStatusRequest() = default ;
    CheckSqlAuditSlsStatusRequest& operator=(const CheckSqlAuditSlsStatusRequest &) = default ;
    CheckSqlAuditSlsStatusRequest& operator=(CheckSqlAuditSlsStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CheckSqlAuditSlsStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
