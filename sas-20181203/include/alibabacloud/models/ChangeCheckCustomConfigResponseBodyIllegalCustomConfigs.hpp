// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECHECKCUSTOMCONFIGRESPONSEBODYILLEGALCUSTOMCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_CHANGECHECKCUSTOMCONFIGRESPONSEBODYILLEGALCUSTOMCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs() = default ;
    ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs(const ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs &) = default ;
    ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs(ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs &&) = default ;
    ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs() = default ;
    ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs& operator=(const ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs &) = default ;
    ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs& operator=(ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ChangeCheckCustomConfigResponseBodyIllegalCustomConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The name of the custom configuration item, which is unique in a check item.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
