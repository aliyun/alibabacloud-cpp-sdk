// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KERBEROSCONF_HPP_
#define ALIBABACLOUD_MODELS_KERBEROSCONF_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class KerberosConf : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KerberosConf& obj) { 
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(gmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(kerberosConfId, kerberosConfId_);
      DARABONBA_PTR_TO_JSON(keytabs, keytabs_);
      DARABONBA_PTR_TO_JSON(krb5Conf, krb5Conf_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(networkServiceId, networkServiceId_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, KerberosConf& obj) { 
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(gmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(kerberosConfId, kerberosConfId_);
      DARABONBA_PTR_FROM_JSON(keytabs, keytabs_);
      DARABONBA_PTR_FROM_JSON(krb5Conf, krb5Conf_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(networkServiceId, networkServiceId_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    KerberosConf() = default ;
    KerberosConf(const KerberosConf &) = default ;
    KerberosConf(KerberosConf &&) = default ;
    KerberosConf(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KerberosConf() = default ;
    KerberosConf& operator=(const KerberosConf &) = default ;
    KerberosConf& operator=(KerberosConf &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creator_ != nullptr
        && this->enabled_ != nullptr && this->gmtCreated_ != nullptr && this->gmtModified_ != nullptr && this->kerberosConfId_ != nullptr && this->keytabs_ != nullptr
        && this->krb5Conf_ != nullptr && this->name_ != nullptr && this->networkServiceId_ != nullptr && this->workspaceId_ != nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline KerberosConf& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline KerberosConf& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline KerberosConf& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline KerberosConf& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // kerberosConfId Field Functions 
    bool hasKerberosConfId() const { return this->kerberosConfId_ != nullptr;};
    void deleteKerberosConfId() { this->kerberosConfId_ = nullptr;};
    inline string kerberosConfId() const { DARABONBA_PTR_GET_DEFAULT(kerberosConfId_, "") };
    inline KerberosConf& setKerberosConfId(string kerberosConfId) { DARABONBA_PTR_SET_VALUE(kerberosConfId_, kerberosConfId) };


    // keytabs Field Functions 
    bool hasKeytabs() const { return this->keytabs_ != nullptr;};
    void deleteKeytabs() { this->keytabs_ = nullptr;};
    inline const vector<string> & keytabs() const { DARABONBA_PTR_GET_CONST(keytabs_, vector<string>) };
    inline vector<string> keytabs() { DARABONBA_PTR_GET(keytabs_, vector<string>) };
    inline KerberosConf& setKeytabs(const vector<string> & keytabs) { DARABONBA_PTR_SET_VALUE(keytabs_, keytabs) };
    inline KerberosConf& setKeytabs(vector<string> && keytabs) { DARABONBA_PTR_SET_RVALUE(keytabs_, keytabs) };


    // krb5Conf Field Functions 
    bool hasKrb5Conf() const { return this->krb5Conf_ != nullptr;};
    void deleteKrb5Conf() { this->krb5Conf_ = nullptr;};
    inline string krb5Conf() const { DARABONBA_PTR_GET_DEFAULT(krb5Conf_, "") };
    inline KerberosConf& setKrb5Conf(string krb5Conf) { DARABONBA_PTR_SET_VALUE(krb5Conf_, krb5Conf) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline KerberosConf& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkServiceId Field Functions 
    bool hasNetworkServiceId() const { return this->networkServiceId_ != nullptr;};
    void deleteNetworkServiceId() { this->networkServiceId_ = nullptr;};
    inline string networkServiceId() const { DARABONBA_PTR_GET_DEFAULT(networkServiceId_, "") };
    inline KerberosConf& setNetworkServiceId(string networkServiceId) { DARABONBA_PTR_SET_VALUE(networkServiceId_, networkServiceId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline KerberosConf& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> kerberosConfId_ = nullptr;
    std::shared_ptr<vector<string>> keytabs_ = nullptr;
    std::shared_ptr<string> krb5Conf_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> networkServiceId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
