// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMYTENANTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMYTENANTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetMyTenantsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMyTenantsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureCodeList, featureCodeList_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMyTenantsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureCodeList, featureCodeList_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    GetMyTenantsRequest() = default ;
    GetMyTenantsRequest(const GetMyTenantsRequest &) = default ;
    GetMyTenantsRequest(GetMyTenantsRequest &&) = default ;
    GetMyTenantsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMyTenantsRequest() = default ;
    GetMyTenantsRequest& operator=(const GetMyTenantsRequest &) = default ;
    GetMyTenantsRequest& operator=(GetMyTenantsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureCodeList_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // featureCodeList Field Functions 
    bool hasFeatureCodeList() const { return this->featureCodeList_ != nullptr;};
    void deleteFeatureCodeList() { this->featureCodeList_ = nullptr;};
    inline const vector<string> & getFeatureCodeList() const { DARABONBA_PTR_GET_CONST(featureCodeList_, vector<string>) };
    inline vector<string> getFeatureCodeList() { DARABONBA_PTR_GET(featureCodeList_, vector<string>) };
    inline GetMyTenantsRequest& setFeatureCodeList(const vector<string> & featureCodeList) { DARABONBA_PTR_SET_VALUE(featureCodeList_, featureCodeList) };
    inline GetMyTenantsRequest& setFeatureCodeList(vector<string> && featureCodeList) { DARABONBA_PTR_SET_RVALUE(featureCodeList_, featureCodeList) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetMyTenantsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline GetMyTenantsRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The feature codes owned by the tenant.
    shared_ptr<vector<string>> featureCodeList_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
