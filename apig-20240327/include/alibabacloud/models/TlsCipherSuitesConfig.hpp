// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TLSCIPHERSUITESCONFIG_HPP_
#define ALIBABACLOUD_MODELS_TLSCIPHERSUITESCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class TlsCipherSuitesConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TlsCipherSuitesConfig& obj) { 
      DARABONBA_PTR_TO_JSON(configType, configType_);
      DARABONBA_PTR_TO_JSON(tlsCipherSuite, tlsCipherSuite_);
    };
    friend void from_json(const Darabonba::Json& j, TlsCipherSuitesConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(configType, configType_);
      DARABONBA_PTR_FROM_JSON(tlsCipherSuite, tlsCipherSuite_);
    };
    TlsCipherSuitesConfig() = default ;
    TlsCipherSuitesConfig(const TlsCipherSuitesConfig &) = default ;
    TlsCipherSuitesConfig(TlsCipherSuitesConfig &&) = default ;
    TlsCipherSuitesConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TlsCipherSuitesConfig() = default ;
    TlsCipherSuitesConfig& operator=(const TlsCipherSuitesConfig &) = default ;
    TlsCipherSuitesConfig& operator=(TlsCipherSuitesConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TlsCipherSuite : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TlsCipherSuite& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(supportVersions, supportVersions_);
      };
      friend void from_json(const Darabonba::Json& j, TlsCipherSuite& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(supportVersions, supportVersions_);
      };
      TlsCipherSuite() = default ;
      TlsCipherSuite(const TlsCipherSuite &) = default ;
      TlsCipherSuite(TlsCipherSuite &&) = default ;
      TlsCipherSuite(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TlsCipherSuite() = default ;
      TlsCipherSuite& operator=(const TlsCipherSuite &) = default ;
      TlsCipherSuite& operator=(TlsCipherSuite &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->supportVersions_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TlsCipherSuite& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // supportVersions Field Functions 
      bool hasSupportVersions() const { return this->supportVersions_ != nullptr;};
      void deleteSupportVersions() { this->supportVersions_ = nullptr;};
      inline const vector<string> & getSupportVersions() const { DARABONBA_PTR_GET_CONST(supportVersions_, vector<string>) };
      inline vector<string> getSupportVersions() { DARABONBA_PTR_GET(supportVersions_, vector<string>) };
      inline TlsCipherSuite& setSupportVersions(const vector<string> & supportVersions) { DARABONBA_PTR_SET_VALUE(supportVersions_, supportVersions) };
      inline TlsCipherSuite& setSupportVersions(vector<string> && supportVersions) { DARABONBA_PTR_SET_RVALUE(supportVersions_, supportVersions) };


    protected:
      // The suite name.
      shared_ptr<string> name_ {};
      // The supported versions.
      shared_ptr<vector<string>> supportVersions_ {};
    };

    virtual bool empty() const override { return this->configType_ == nullptr
        && this->tlsCipherSuite_ == nullptr; };
    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline TlsCipherSuitesConfig& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // tlsCipherSuite Field Functions 
    bool hasTlsCipherSuite() const { return this->tlsCipherSuite_ != nullptr;};
    void deleteTlsCipherSuite() { this->tlsCipherSuite_ = nullptr;};
    inline const vector<TlsCipherSuitesConfig::TlsCipherSuite> & getTlsCipherSuite() const { DARABONBA_PTR_GET_CONST(tlsCipherSuite_, vector<TlsCipherSuitesConfig::TlsCipherSuite>) };
    inline vector<TlsCipherSuitesConfig::TlsCipherSuite> getTlsCipherSuite() { DARABONBA_PTR_GET(tlsCipherSuite_, vector<TlsCipherSuitesConfig::TlsCipherSuite>) };
    inline TlsCipherSuitesConfig& setTlsCipherSuite(const vector<TlsCipherSuitesConfig::TlsCipherSuite> & tlsCipherSuite) { DARABONBA_PTR_SET_VALUE(tlsCipherSuite_, tlsCipherSuite) };
    inline TlsCipherSuitesConfig& setTlsCipherSuite(vector<TlsCipherSuitesConfig::TlsCipherSuite> && tlsCipherSuite) { DARABONBA_PTR_SET_RVALUE(tlsCipherSuite_, tlsCipherSuite) };


  protected:
    // The configuration type.
    shared_ptr<string> configType_ {};
    // tlsCipherSuite
    shared_ptr<vector<TlsCipherSuitesConfig::TlsCipherSuite>> tlsCipherSuite_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
