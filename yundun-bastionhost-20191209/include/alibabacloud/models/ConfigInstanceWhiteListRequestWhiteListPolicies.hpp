// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGINSTANCEWHITELISTREQUESTWHITELISTPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_CONFIGINSTANCEWHITELISTREQUESTWHITELISTPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ConfigInstanceWhiteListRequestWhiteListPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigInstanceWhiteListRequestWhiteListPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Entry, entry_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigInstanceWhiteListRequestWhiteListPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Entry, entry_);
    };
    ConfigInstanceWhiteListRequestWhiteListPolicies() = default ;
    ConfigInstanceWhiteListRequestWhiteListPolicies(const ConfigInstanceWhiteListRequestWhiteListPolicies &) = default ;
    ConfigInstanceWhiteListRequestWhiteListPolicies(ConfigInstanceWhiteListRequestWhiteListPolicies &&) = default ;
    ConfigInstanceWhiteListRequestWhiteListPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigInstanceWhiteListRequestWhiteListPolicies() = default ;
    ConfigInstanceWhiteListRequestWhiteListPolicies& operator=(const ConfigInstanceWhiteListRequestWhiteListPolicies &) = default ;
    ConfigInstanceWhiteListRequestWhiteListPolicies& operator=(ConfigInstanceWhiteListRequestWhiteListPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->entry_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ConfigInstanceWhiteListRequestWhiteListPolicies& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // entry Field Functions 
    bool hasEntry() const { return this->entry_ != nullptr;};
    void deleteEntry() { this->entry_ = nullptr;};
    inline string entry() const { DARABONBA_PTR_GET_DEFAULT(entry_, "") };
    inline ConfigInstanceWhiteListRequestWhiteListPolicies& setEntry(string entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> entry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
