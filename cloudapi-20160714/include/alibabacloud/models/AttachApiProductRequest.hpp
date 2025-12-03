// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHAPIPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHAPIPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttachApiProductRequestApis.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class AttachApiProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachApiProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiProductId, apiProductId_);
      DARABONBA_PTR_TO_JSON(Apis, apis_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, AttachApiProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiProductId, apiProductId_);
      DARABONBA_PTR_FROM_JSON(Apis, apis_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    AttachApiProductRequest() = default ;
    AttachApiProductRequest(const AttachApiProductRequest &) = default ;
    AttachApiProductRequest(AttachApiProductRequest &&) = default ;
    AttachApiProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachApiProductRequest() = default ;
    AttachApiProductRequest& operator=(const AttachApiProductRequest &) = default ;
    AttachApiProductRequest& operator=(AttachApiProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiProductId_ == nullptr
        && return this->apis_ == nullptr && return this->securityToken_ == nullptr; };
    // apiProductId Field Functions 
    bool hasApiProductId() const { return this->apiProductId_ != nullptr;};
    void deleteApiProductId() { this->apiProductId_ = nullptr;};
    inline string apiProductId() const { DARABONBA_PTR_GET_DEFAULT(apiProductId_, "") };
    inline AttachApiProductRequest& setApiProductId(string apiProductId) { DARABONBA_PTR_SET_VALUE(apiProductId_, apiProductId) };


    // apis Field Functions 
    bool hasApis() const { return this->apis_ != nullptr;};
    void deleteApis() { this->apis_ = nullptr;};
    inline const vector<AttachApiProductRequestApis> & apis() const { DARABONBA_PTR_GET_CONST(apis_, vector<AttachApiProductRequestApis>) };
    inline vector<AttachApiProductRequestApis> apis() { DARABONBA_PTR_GET(apis_, vector<AttachApiProductRequestApis>) };
    inline AttachApiProductRequest& setApis(const vector<AttachApiProductRequestApis> & apis) { DARABONBA_PTR_SET_VALUE(apis_, apis) };
    inline AttachApiProductRequest& setApis(vector<AttachApiProductRequestApis> && apis) { DARABONBA_PTR_SET_RVALUE(apis_, apis) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline AttachApiProductRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the API product.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiProductId_ = nullptr;
    // The APIs to be attached.
    // 
    // This parameter is required.
    std::shared_ptr<vector<AttachApiProductRequestApis>> apis_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
