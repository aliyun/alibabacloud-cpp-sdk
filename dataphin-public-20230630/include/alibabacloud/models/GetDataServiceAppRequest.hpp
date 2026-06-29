// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataServiceAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GetDataServiceAppRequest() = default ;
    GetDataServiceAppRequest(const GetDataServiceAppRequest &) = default ;
    GetDataServiceAppRequest(GetDataServiceAppRequest &&) = default ;
    GetDataServiceAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceAppRequest() = default ;
    GetDataServiceAppRequest& operator=(const GetDataServiceAppRequest &) = default ;
    GetDataServiceAppRequest& operator=(GetDataServiceAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->opTenantId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int32_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
    inline GetDataServiceAppRequest& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetDataServiceAppRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<int32_t> appId_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
