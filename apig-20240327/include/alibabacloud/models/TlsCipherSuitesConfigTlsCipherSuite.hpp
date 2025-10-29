// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TLSCIPHERSUITESCONFIGTLSCIPHERSUITE_HPP_
#define ALIBABACLOUD_MODELS_TLSCIPHERSUITESCONFIGTLSCIPHERSUITE_HPP_
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
  class TlsCipherSuitesConfigTlsCipherSuite : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TlsCipherSuitesConfigTlsCipherSuite& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(supportVersions, supportVersions_);
    };
    friend void from_json(const Darabonba::Json& j, TlsCipherSuitesConfigTlsCipherSuite& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(supportVersions, supportVersions_);
    };
    TlsCipherSuitesConfigTlsCipherSuite() = default ;
    TlsCipherSuitesConfigTlsCipherSuite(const TlsCipherSuitesConfigTlsCipherSuite &) = default ;
    TlsCipherSuitesConfigTlsCipherSuite(TlsCipherSuitesConfigTlsCipherSuite &&) = default ;
    TlsCipherSuitesConfigTlsCipherSuite(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TlsCipherSuitesConfigTlsCipherSuite() = default ;
    TlsCipherSuitesConfigTlsCipherSuite& operator=(const TlsCipherSuitesConfigTlsCipherSuite &) = default ;
    TlsCipherSuitesConfigTlsCipherSuite& operator=(TlsCipherSuitesConfigTlsCipherSuite &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->supportVersions_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline TlsCipherSuitesConfigTlsCipherSuite& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // supportVersions Field Functions 
    bool hasSupportVersions() const { return this->supportVersions_ != nullptr;};
    void deleteSupportVersions() { this->supportVersions_ = nullptr;};
    inline const vector<string> & supportVersions() const { DARABONBA_PTR_GET_CONST(supportVersions_, vector<string>) };
    inline vector<string> supportVersions() { DARABONBA_PTR_GET(supportVersions_, vector<string>) };
    inline TlsCipherSuitesConfigTlsCipherSuite& setSupportVersions(const vector<string> & supportVersions) { DARABONBA_PTR_SET_VALUE(supportVersions_, supportVersions) };
    inline TlsCipherSuitesConfigTlsCipherSuite& setSupportVersions(vector<string> && supportVersions) { DARABONBA_PTR_SET_RVALUE(supportVersions_, supportVersions) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<string>> supportVersions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
