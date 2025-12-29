// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACLCONFIG_HPP_
#define ALIBABACLOUD_MODELS_ACLCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AclEntryConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class AclConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AclConfig& obj) { 
      DARABONBA_PTR_TO_JSON(aclEntries, aclEntries_);
    };
    friend void from_json(const Darabonba::Json& j, AclConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(aclEntries, aclEntries_);
    };
    AclConfig() = default ;
    AclConfig(const AclConfig &) = default ;
    AclConfig(AclConfig &&) = default ;
    AclConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AclConfig() = default ;
    AclConfig& operator=(const AclConfig &) = default ;
    AclConfig& operator=(AclConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclEntries_ == nullptr; };
    // aclEntries Field Functions 
    bool hasAclEntries() const { return this->aclEntries_ != nullptr;};
    void deleteAclEntries() { this->aclEntries_ = nullptr;};
    inline const vector<AclEntryConfig> & getAclEntries() const { DARABONBA_PTR_GET_CONST(aclEntries_, vector<AclEntryConfig>) };
    inline vector<AclEntryConfig> getAclEntries() { DARABONBA_PTR_GET(aclEntries_, vector<AclEntryConfig>) };
    inline AclConfig& setAclEntries(const vector<AclEntryConfig> & aclEntries) { DARABONBA_PTR_SET_VALUE(aclEntries_, aclEntries) };
    inline AclConfig& setAclEntries(vector<AclEntryConfig> && aclEntries) { DARABONBA_PTR_SET_RVALUE(aclEntries_, aclEntries) };


  protected:
    // This parameter is required.
    shared_ptr<vector<AclEntryConfig>> aclEntries_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
