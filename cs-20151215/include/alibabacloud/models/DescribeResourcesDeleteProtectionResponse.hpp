// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCESDELETEPROTECTIONRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCESDELETEPROTECTIONRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeResourcesDeleteProtectionResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourcesDeleteProtectionResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourcesDeleteProtectionResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeResourcesDeleteProtectionResponse() = default ;
    DescribeResourcesDeleteProtectionResponse(const DescribeResourcesDeleteProtectionResponse &) = default ;
    DescribeResourcesDeleteProtectionResponse(DescribeResourcesDeleteProtectionResponse &&) = default ;
    DescribeResourcesDeleteProtectionResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourcesDeleteProtectionResponse() = default ;
    DescribeResourcesDeleteProtectionResponse& operator=(const DescribeResourcesDeleteProtectionResponse &) = default ;
    DescribeResourcesDeleteProtectionResponse& operator=(DescribeResourcesDeleteProtectionResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(namespace, namespace_);
        DARABONBA_PTR_TO_JSON(resource, resource_);
        DARABONBA_PTR_TO_JSON(protection, protection_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(resource, resource_);
        DARABONBA_PTR_FROM_JSON(protection, protection_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->namespace_ == nullptr && this->resource_ == nullptr && this->protection_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Body& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Body& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
      inline Body& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


      // protection Field Functions 
      bool hasProtection() const { return this->protection_ != nullptr;};
      void deleteProtection() { this->protection_ = nullptr;};
      inline bool getProtection() const { DARABONBA_PTR_GET_DEFAULT(protection_, false) };
      inline Body& setProtection(bool protection) { DARABONBA_PTR_SET_VALUE(protection_, protection) };


    protected:
      // The resource name.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The namespace to which the resource belongs.
      shared_ptr<string> namespace_ {};
      // The type of the resource.
      shared_ptr<string> resource_ {};
      // Indicates whether deletion protection is enabled.
      // 
      // *   true: deletion protection is enabled.
      // *   false: deletion protection is disabled.
      shared_ptr<bool> protection_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline DescribeResourcesDeleteProtectionResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeResourcesDeleteProtectionResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeResourcesDeleteProtectionResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<DescribeResourcesDeleteProtectionResponse::Body> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<DescribeResourcesDeleteProtectionResponse::Body>) };
    inline vector<DescribeResourcesDeleteProtectionResponse::Body> getBody() { DARABONBA_PTR_GET(body_, vector<DescribeResourcesDeleteProtectionResponse::Body>) };
    inline DescribeResourcesDeleteProtectionResponse& setBody(const vector<DescribeResourcesDeleteProtectionResponse::Body> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeResourcesDeleteProtectionResponse& setBody(vector<DescribeResourcesDeleteProtectionResponse::Body> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<vector<DescribeResourcesDeleteProtectionResponse::Body>> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
