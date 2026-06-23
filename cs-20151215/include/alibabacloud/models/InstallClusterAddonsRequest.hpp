// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLCLUSTERADDONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLCLUSTERADDONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class InstallClusterAddonsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallClusterAddonsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, InstallClusterAddonsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    InstallClusterAddonsRequest() = default ;
    InstallClusterAddonsRequest(const InstallClusterAddonsRequest &) = default ;
    InstallClusterAddonsRequest(InstallClusterAddonsRequest &&) = default ;
    InstallClusterAddonsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallClusterAddonsRequest() = default ;
    InstallClusterAddonsRequest& operator=(const InstallClusterAddonsRequest &) = default ;
    InstallClusterAddonsRequest& operator=(InstallClusterAddonsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(config, config_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(config, config_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(version, version_);
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
      virtual bool empty() const override { return this->config_ == nullptr
        && this->name_ == nullptr && this->version_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Body& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Body& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Body& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The custom parameters of the component, encoded as a JSON string.
      shared_ptr<string> config_ {};
      // The component name. You can call the [ListAddons](https://help.aliyun.com/document_detail/2667939.html) operation to query information about available components, including component names and versions.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The component version. You can call the [ListAddons](https://help.aliyun.com/document_detail/2667939.html) operation to query information about available components, including component names and versions.
      // 
      // This parameter is required.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<InstallClusterAddonsRequest::Body> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<InstallClusterAddonsRequest::Body>) };
    inline vector<InstallClusterAddonsRequest::Body> getBody() { DARABONBA_PTR_GET(body_, vector<InstallClusterAddonsRequest::Body>) };
    inline InstallClusterAddonsRequest& setBody(const vector<InstallClusterAddonsRequest::Body> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline InstallClusterAddonsRequest& setBody(vector<InstallClusterAddonsRequest::Body> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body parameters.
    shared_ptr<vector<InstallClusterAddonsRequest::Body>> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
