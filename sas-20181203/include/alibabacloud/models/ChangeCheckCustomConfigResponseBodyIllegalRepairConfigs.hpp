// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECHECKCUSTOMCONFIGRESPONSEBODYILLEGALREPAIRCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_CHANGECHECKCUSTOMCONFIGRESPONSEBODYILLEGALREPAIRCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs() = default ;
    ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs(const ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs &) = default ;
    ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs(ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs &&) = default ;
    ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs() = default ;
    ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs& operator=(const ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs &) = default ;
    ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs& operator=(ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ChangeCheckCustomConfigResponseBodyIllegalRepairConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The name of the invalid parameter required for fixing a risk item.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
