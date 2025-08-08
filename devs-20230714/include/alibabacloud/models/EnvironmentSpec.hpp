// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENVIRONMENTSPEC_HPP_
#define ALIBABACLOUD_MODELS_ENVIRONMENTSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class EnvironmentSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnvironmentSpec& obj) { 
      DARABONBA_PTR_TO_JSON(roleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(stagedConfigs, stagedConfigs_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, EnvironmentSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(roleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(stagedConfigs, stagedConfigs_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    EnvironmentSpec() = default ;
    EnvironmentSpec(const EnvironmentSpec &) = default ;
    EnvironmentSpec(EnvironmentSpec &&) = default ;
    EnvironmentSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnvironmentSpec() = default ;
    EnvironmentSpec& operator=(const EnvironmentSpec &) = default ;
    EnvironmentSpec& operator=(EnvironmentSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->roleArn_ != nullptr
        && this->stagedConfigs_ != nullptr && this->type_ != nullptr; };
    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline EnvironmentSpec& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // stagedConfigs Field Functions 
    bool hasStagedConfigs() const { return this->stagedConfigs_ != nullptr;};
    void deleteStagedConfigs() { this->stagedConfigs_ = nullptr;};
    inline const EnvironmentStagedConfigs & stagedConfigs() const { DARABONBA_PTR_GET_CONST(stagedConfigs_, EnvironmentStagedConfigs) };
    inline EnvironmentStagedConfigs stagedConfigs() { DARABONBA_PTR_GET(stagedConfigs_, EnvironmentStagedConfigs) };
    inline EnvironmentSpec& setStagedConfigs(const EnvironmentStagedConfigs & stagedConfigs) { DARABONBA_PTR_SET_VALUE(stagedConfigs_, stagedConfigs) };
    inline EnvironmentSpec& setStagedConfigs(EnvironmentStagedConfigs && stagedConfigs) { DARABONBA_PTR_SET_RVALUE(stagedConfigs_, stagedConfigs) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline EnvironmentSpec& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> roleArn_ = nullptr;
    std::shared_ptr<EnvironmentStagedConfigs> stagedConfigs_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
