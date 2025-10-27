// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANTIBRUTEFORCERULEREQUESTPROTOCOLTYPE_HPP_
#define ALIBABACLOUD_MODELS_CREATEANTIBRUTEFORCERULEREQUESTPROTOCOLTYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateAntiBruteForceRuleRequestProtocolType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAntiBruteForceRuleRequestProtocolType& obj) { 
      DARABONBA_PTR_TO_JSON(Rdp, rdp_);
      DARABONBA_PTR_TO_JSON(SqlServer, sqlServer_);
      DARABONBA_PTR_TO_JSON(Ssh, ssh_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAntiBruteForceRuleRequestProtocolType& obj) { 
      DARABONBA_PTR_FROM_JSON(Rdp, rdp_);
      DARABONBA_PTR_FROM_JSON(SqlServer, sqlServer_);
      DARABONBA_PTR_FROM_JSON(Ssh, ssh_);
    };
    CreateAntiBruteForceRuleRequestProtocolType() = default ;
    CreateAntiBruteForceRuleRequestProtocolType(const CreateAntiBruteForceRuleRequestProtocolType &) = default ;
    CreateAntiBruteForceRuleRequestProtocolType(CreateAntiBruteForceRuleRequestProtocolType &&) = default ;
    CreateAntiBruteForceRuleRequestProtocolType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAntiBruteForceRuleRequestProtocolType() = default ;
    CreateAntiBruteForceRuleRequestProtocolType& operator=(const CreateAntiBruteForceRuleRequestProtocolType &) = default ;
    CreateAntiBruteForceRuleRequestProtocolType& operator=(CreateAntiBruteForceRuleRequestProtocolType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rdp_ == nullptr
        && return this->sqlServer_ == nullptr && return this->ssh_ == nullptr; };
    // rdp Field Functions 
    bool hasRdp() const { return this->rdp_ != nullptr;};
    void deleteRdp() { this->rdp_ = nullptr;};
    inline string rdp() const { DARABONBA_PTR_GET_DEFAULT(rdp_, "") };
    inline CreateAntiBruteForceRuleRequestProtocolType& setRdp(string rdp) { DARABONBA_PTR_SET_VALUE(rdp_, rdp) };


    // sqlServer Field Functions 
    bool hasSqlServer() const { return this->sqlServer_ != nullptr;};
    void deleteSqlServer() { this->sqlServer_ = nullptr;};
    inline string sqlServer() const { DARABONBA_PTR_GET_DEFAULT(sqlServer_, "") };
    inline CreateAntiBruteForceRuleRequestProtocolType& setSqlServer(string sqlServer) { DARABONBA_PTR_SET_VALUE(sqlServer_, sqlServer) };


    // ssh Field Functions 
    bool hasSsh() const { return this->ssh_ != nullptr;};
    void deleteSsh() { this->ssh_ = nullptr;};
    inline string ssh() const { DARABONBA_PTR_GET_DEFAULT(ssh_, "") };
    inline CreateAntiBruteForceRuleRequestProtocolType& setSsh(string ssh) { DARABONBA_PTR_SET_VALUE(ssh_, ssh) };


  protected:
    // Whether to enable RDP interception, default is on. Values: 
    // - **on**: Enable 
    // - **off**: Disable
    std::shared_ptr<string> rdp_ = nullptr;
    // Whether to enable the SqlServer interception method, default is off. Values: 
    // - **on**: Enable 
    // - **off**: Disable
    std::shared_ptr<string> sqlServer_ = nullptr;
    // Whether to enable SSH interception, default is on. Values: 
    // - **on**: Enable 
    // - **off**: Disable
    std::shared_ptr<string> ssh_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
