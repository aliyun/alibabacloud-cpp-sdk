// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHAPIPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHAPIPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Apis : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Apis& obj) { 
        DARABONBA_PTR_TO_JSON(ApiId, apiId_);
        DARABONBA_PTR_TO_JSON(StageName, stageName_);
      };
      friend void from_json(const Darabonba::Json& j, Apis& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
        DARABONBA_PTR_FROM_JSON(StageName, stageName_);
      };
      Apis() = default ;
      Apis(const Apis &) = default ;
      Apis(Apis &&) = default ;
      Apis(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Apis() = default ;
      Apis& operator=(const Apis &) = default ;
      Apis& operator=(Apis &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiId_ == nullptr
        && this->stageName_ == nullptr; };
      // apiId Field Functions 
      bool hasApiId() const { return this->apiId_ != nullptr;};
      void deleteApiId() { this->apiId_ = nullptr;};
      inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
      inline Apis& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


      // stageName Field Functions 
      bool hasStageName() const { return this->stageName_ != nullptr;};
      void deleteStageName() { this->stageName_ = nullptr;};
      inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
      inline Apis& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    protected:
      // The API ID.
      // 
      // This parameter is required.
      shared_ptr<string> apiId_ {};
      // The environment. Valid values:
      // 
      // *   **RELEASE**: the production environment
      // *   **PRE**: the staging environment
      // *   **TEST**: the test environment
      // 
      // This parameter is required.
      shared_ptr<string> stageName_ {};
    };

    virtual bool empty() const override { return this->apiProductId_ == nullptr
        && this->apis_ == nullptr && this->securityToken_ == nullptr; };
    // apiProductId Field Functions 
    bool hasApiProductId() const { return this->apiProductId_ != nullptr;};
    void deleteApiProductId() { this->apiProductId_ = nullptr;};
    inline string getApiProductId() const { DARABONBA_PTR_GET_DEFAULT(apiProductId_, "") };
    inline AttachApiProductRequest& setApiProductId(string apiProductId) { DARABONBA_PTR_SET_VALUE(apiProductId_, apiProductId) };


    // apis Field Functions 
    bool hasApis() const { return this->apis_ != nullptr;};
    void deleteApis() { this->apis_ = nullptr;};
    inline const vector<AttachApiProductRequest::Apis> & getApis() const { DARABONBA_PTR_GET_CONST(apis_, vector<AttachApiProductRequest::Apis>) };
    inline vector<AttachApiProductRequest::Apis> getApis() { DARABONBA_PTR_GET(apis_, vector<AttachApiProductRequest::Apis>) };
    inline AttachApiProductRequest& setApis(const vector<AttachApiProductRequest::Apis> & apis) { DARABONBA_PTR_SET_VALUE(apis_, apis) };
    inline AttachApiProductRequest& setApis(vector<AttachApiProductRequest::Apis> && apis) { DARABONBA_PTR_SET_RVALUE(apis_, apis) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline AttachApiProductRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the API product.
    // 
    // This parameter is required.
    shared_ptr<string> apiProductId_ {};
    // The APIs to be attached.
    // 
    // This parameter is required.
    shared_ptr<vector<AttachApiProductRequest::Apis>> apis_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
