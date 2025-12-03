// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHAPIPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHAPIPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetachApiProductRequestApis.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DetachApiProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachApiProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiProductId, apiProductId_);
      DARABONBA_PTR_TO_JSON(Apis, apis_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DetachApiProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiProductId, apiProductId_);
      DARABONBA_PTR_FROM_JSON(Apis, apis_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DetachApiProductRequest() = default ;
    DetachApiProductRequest(const DetachApiProductRequest &) = default ;
    DetachApiProductRequest(DetachApiProductRequest &&) = default ;
    DetachApiProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachApiProductRequest() = default ;
    DetachApiProductRequest& operator=(const DetachApiProductRequest &) = default ;
    DetachApiProductRequest& operator=(DetachApiProductRequest &&) = default ;
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
    inline DetachApiProductRequest& setApiProductId(string apiProductId) { DARABONBA_PTR_SET_VALUE(apiProductId_, apiProductId) };


    // apis Field Functions 
    bool hasApis() const { return this->apis_ != nullptr;};
    void deleteApis() { this->apis_ = nullptr;};
    inline const vector<DetachApiProductRequestApis> & apis() const { DARABONBA_PTR_GET_CONST(apis_, vector<DetachApiProductRequestApis>) };
    inline vector<DetachApiProductRequestApis> apis() { DARABONBA_PTR_GET(apis_, vector<DetachApiProductRequestApis>) };
    inline DetachApiProductRequest& setApis(const vector<DetachApiProductRequestApis> & apis) { DARABONBA_PTR_SET_VALUE(apis_, apis) };
    inline DetachApiProductRequest& setApis(vector<DetachApiProductRequestApis> && apis) { DARABONBA_PTR_SET_RVALUE(apis_, apis) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DetachApiProductRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the API product.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiProductId_ = nullptr;
    // The APIs that you want to detach from the API product.
    // 
    // This parameter is required.
    std::shared_ptr<vector<DetachApiProductRequestApis>> apis_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
