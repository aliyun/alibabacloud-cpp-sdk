// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANTIBRUTEFORCERULESRESPONSEBODYRULESPROTOCOLTYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANTIBRUTEFORCERULESRESPONSEBODYRULESPROTOCOLTYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAntiBruteForceRulesResponseBodyRulesProtocolType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAntiBruteForceRulesResponseBodyRulesProtocolType& obj) { 
      DARABONBA_PTR_TO_JSON(Rdp, rdp_);
      DARABONBA_PTR_TO_JSON(SqlServer, sqlServer_);
      DARABONBA_PTR_TO_JSON(Ssh, ssh_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAntiBruteForceRulesResponseBodyRulesProtocolType& obj) { 
      DARABONBA_PTR_FROM_JSON(Rdp, rdp_);
      DARABONBA_PTR_FROM_JSON(SqlServer, sqlServer_);
      DARABONBA_PTR_FROM_JSON(Ssh, ssh_);
    };
    DescribeAntiBruteForceRulesResponseBodyRulesProtocolType() = default ;
    DescribeAntiBruteForceRulesResponseBodyRulesProtocolType(const DescribeAntiBruteForceRulesResponseBodyRulesProtocolType &) = default ;
    DescribeAntiBruteForceRulesResponseBodyRulesProtocolType(DescribeAntiBruteForceRulesResponseBodyRulesProtocolType &&) = default ;
    DescribeAntiBruteForceRulesResponseBodyRulesProtocolType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAntiBruteForceRulesResponseBodyRulesProtocolType() = default ;
    DescribeAntiBruteForceRulesResponseBodyRulesProtocolType& operator=(const DescribeAntiBruteForceRulesResponseBodyRulesProtocolType &) = default ;
    DescribeAntiBruteForceRulesResponseBodyRulesProtocolType& operator=(DescribeAntiBruteForceRulesResponseBodyRulesProtocolType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rdp_ != nullptr
        && this->sqlServer_ != nullptr && this->ssh_ != nullptr; };
    // rdp Field Functions 
    bool hasRdp() const { return this->rdp_ != nullptr;};
    void deleteRdp() { this->rdp_ = nullptr;};
    inline string rdp() const { DARABONBA_PTR_GET_DEFAULT(rdp_, "") };
    inline DescribeAntiBruteForceRulesResponseBodyRulesProtocolType& setRdp(string rdp) { DARABONBA_PTR_SET_VALUE(rdp_, rdp) };


    // sqlServer Field Functions 
    bool hasSqlServer() const { return this->sqlServer_ != nullptr;};
    void deleteSqlServer() { this->sqlServer_ = nullptr;};
    inline string sqlServer() const { DARABONBA_PTR_GET_DEFAULT(sqlServer_, "") };
    inline DescribeAntiBruteForceRulesResponseBodyRulesProtocolType& setSqlServer(string sqlServer) { DARABONBA_PTR_SET_VALUE(sqlServer_, sqlServer) };


    // ssh Field Functions 
    bool hasSsh() const { return this->ssh_ != nullptr;};
    void deleteSsh() { this->ssh_ = nullptr;};
    inline string ssh() const { DARABONBA_PTR_GET_DEFAULT(ssh_, "") };
    inline DescribeAntiBruteForceRulesResponseBodyRulesProtocolType& setSsh(string ssh) { DARABONBA_PTR_SET_VALUE(ssh_, ssh) };


  protected:
    // RDP interception method, values: 
    // - **on**: enable 
    // - **off**: disable
    std::shared_ptr<string> rdp_ = nullptr;
    // SqlServer interception mode, with values: 
    // - **on**: enable 
    // - **off**: disable
    std::shared_ptr<string> sqlServer_ = nullptr;
    // SSH interception method, with values: 
    // - **on**: enabled 
    // - **off**: disabled
    std::shared_ptr<string> ssh_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
