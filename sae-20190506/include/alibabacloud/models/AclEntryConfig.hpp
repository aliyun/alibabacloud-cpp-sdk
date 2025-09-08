// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACLENTRYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_ACLENTRYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class AclEntryConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AclEntryConfig& obj) { 
      DARABONBA_PTR_TO_JSON(entry, entry_);
    };
    friend void from_json(const Darabonba::Json& j, AclEntryConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(entry, entry_);
    };
    AclEntryConfig() = default ;
    AclEntryConfig(const AclEntryConfig &) = default ;
    AclEntryConfig(AclEntryConfig &&) = default ;
    AclEntryConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AclEntryConfig() = default ;
    AclEntryConfig& operator=(const AclEntryConfig &) = default ;
    AclEntryConfig& operator=(AclEntryConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entry_ != nullptr; };
    // entry Field Functions 
    bool hasEntry() const { return this->entry_ != nullptr;};
    void deleteEntry() { this->entry_ = nullptr;};
    inline string entry() const { DARABONBA_PTR_GET_DEFAULT(entry_, "") };
    inline AclEntryConfig& setEntry(string entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> entry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
