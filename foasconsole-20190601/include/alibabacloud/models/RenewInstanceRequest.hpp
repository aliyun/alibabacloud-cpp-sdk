// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RenewInstanceRequestRenewInstanceRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class RenewInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RenewInstanceRequest, renewInstanceRequest_);
    };
    friend void from_json(const Darabonba::Json& j, RenewInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RenewInstanceRequest, renewInstanceRequest_);
    };
    RenewInstanceRequest() = default ;
    RenewInstanceRequest(const RenewInstanceRequest &) = default ;
    RenewInstanceRequest(RenewInstanceRequest &&) = default ;
    RenewInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewInstanceRequest() = default ;
    RenewInstanceRequest& operator=(const RenewInstanceRequest &) = default ;
    RenewInstanceRequest& operator=(RenewInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->renewInstanceRequest_ == nullptr; };
    // renewInstanceRequest Field Functions 
    bool hasRenewInstanceRequest() const { return this->renewInstanceRequest_ != nullptr;};
    void deleteRenewInstanceRequest() { this->renewInstanceRequest_ = nullptr;};
    inline const RenewInstanceRequestRenewInstanceRequest & renewInstanceRequest() const { DARABONBA_PTR_GET_CONST(renewInstanceRequest_, RenewInstanceRequestRenewInstanceRequest) };
    inline RenewInstanceRequestRenewInstanceRequest renewInstanceRequest() { DARABONBA_PTR_GET(renewInstanceRequest_, RenewInstanceRequestRenewInstanceRequest) };
    inline RenewInstanceRequest& setRenewInstanceRequest(const RenewInstanceRequestRenewInstanceRequest & renewInstanceRequest) { DARABONBA_PTR_SET_VALUE(renewInstanceRequest_, renewInstanceRequest) };
    inline RenewInstanceRequest& setRenewInstanceRequest(RenewInstanceRequestRenewInstanceRequest && renewInstanceRequest) { DARABONBA_PTR_SET_RVALUE(renewInstanceRequest_, renewInstanceRequest) };


  protected:
    // This parameter is required.
    std::shared_ptr<RenewInstanceRequestRenewInstanceRequest> renewInstanceRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
