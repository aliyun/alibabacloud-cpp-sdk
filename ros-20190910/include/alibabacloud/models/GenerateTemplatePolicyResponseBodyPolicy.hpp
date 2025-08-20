// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATETEMPLATEPOLICYRESPONSEBODYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_GENERATETEMPLATEPOLICYRESPONSEBODYPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GenerateTemplatePolicyResponseBodyPolicyStatement.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GenerateTemplatePolicyResponseBodyPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateTemplatePolicyResponseBodyPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(Statement, statement_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateTemplatePolicyResponseBodyPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(Statement, statement_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GenerateTemplatePolicyResponseBodyPolicy() = default ;
    GenerateTemplatePolicyResponseBodyPolicy(const GenerateTemplatePolicyResponseBodyPolicy &) = default ;
    GenerateTemplatePolicyResponseBodyPolicy(GenerateTemplatePolicyResponseBodyPolicy &&) = default ;
    GenerateTemplatePolicyResponseBodyPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateTemplatePolicyResponseBodyPolicy() = default ;
    GenerateTemplatePolicyResponseBodyPolicy& operator=(const GenerateTemplatePolicyResponseBodyPolicy &) = default ;
    GenerateTemplatePolicyResponseBodyPolicy& operator=(GenerateTemplatePolicyResponseBodyPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->statement_ != nullptr
        && this->version_ != nullptr; };
    // statement Field Functions 
    bool hasStatement() const { return this->statement_ != nullptr;};
    void deleteStatement() { this->statement_ = nullptr;};
    inline const vector<Models::GenerateTemplatePolicyResponseBodyPolicyStatement> & statement() const { DARABONBA_PTR_GET_CONST(statement_, vector<Models::GenerateTemplatePolicyResponseBodyPolicyStatement>) };
    inline vector<Models::GenerateTemplatePolicyResponseBodyPolicyStatement> statement() { DARABONBA_PTR_GET(statement_, vector<Models::GenerateTemplatePolicyResponseBodyPolicyStatement>) };
    inline GenerateTemplatePolicyResponseBodyPolicy& setStatement(const vector<Models::GenerateTemplatePolicyResponseBodyPolicyStatement> & statement) { DARABONBA_PTR_SET_VALUE(statement_, statement) };
    inline GenerateTemplatePolicyResponseBodyPolicy& setStatement(vector<Models::GenerateTemplatePolicyResponseBodyPolicyStatement> && statement) { DARABONBA_PTR_SET_RVALUE(statement_, statement) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GenerateTemplatePolicyResponseBodyPolicy& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The statements that are contained in the policy.
    std::shared_ptr<vector<Models::GenerateTemplatePolicyResponseBodyPolicyStatement>> statement_ = nullptr;
    // The version number.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
