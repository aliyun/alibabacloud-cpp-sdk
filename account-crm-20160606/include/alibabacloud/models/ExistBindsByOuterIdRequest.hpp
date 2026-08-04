// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXISTBINDSBYOUTERIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXISTBINDSBYOUTERIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class ExistBindsByOuterIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExistBindsByOuterIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(MinorOuterId, minorOuterId_);
      DARABONBA_PTR_TO_JSON(OuterId, outerId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ExistBindsByOuterIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(MinorOuterId, minorOuterId_);
      DARABONBA_PTR_FROM_JSON(OuterId, outerId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    ExistBindsByOuterIdRequest() = default ;
    ExistBindsByOuterIdRequest(const ExistBindsByOuterIdRequest &) = default ;
    ExistBindsByOuterIdRequest(ExistBindsByOuterIdRequest &&) = default ;
    ExistBindsByOuterIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExistBindsByOuterIdRequest() = default ;
    ExistBindsByOuterIdRequest& operator=(const ExistBindsByOuterIdRequest &) = default ;
    ExistBindsByOuterIdRequest& operator=(ExistBindsByOuterIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->minorOuterId_ == nullptr && this->outerId_ == nullptr && this->tenantId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ExistBindsByOuterIdRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // minorOuterId Field Functions 
    bool hasMinorOuterId() const { return this->minorOuterId_ != nullptr;};
    void deleteMinorOuterId() { this->minorOuterId_ = nullptr;};
    inline string getMinorOuterId() const { DARABONBA_PTR_GET_DEFAULT(minorOuterId_, "") };
    inline ExistBindsByOuterIdRequest& setMinorOuterId(string minorOuterId) { DARABONBA_PTR_SET_VALUE(minorOuterId_, minorOuterId) };


    // outerId Field Functions 
    bool hasOuterId() const { return this->outerId_ != nullptr;};
    void deleteOuterId() { this->outerId_ = nullptr;};
    inline string getOuterId() const { DARABONBA_PTR_GET_DEFAULT(outerId_, "") };
    inline ExistBindsByOuterIdRequest& setOuterId(string outerId) { DARABONBA_PTR_SET_VALUE(outerId_, outerId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ExistBindsByOuterIdRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    shared_ptr<string> appName_ {};
    shared_ptr<string> minorOuterId_ {};
    shared_ptr<string> outerId_ {};
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
