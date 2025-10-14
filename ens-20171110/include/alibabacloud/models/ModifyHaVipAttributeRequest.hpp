// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHAVIPATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHAVIPATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ModifyHaVipAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHaVipAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HaVipId, haVipId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHaVipAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HaVipId, haVipId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ModifyHaVipAttributeRequest() = default ;
    ModifyHaVipAttributeRequest(const ModifyHaVipAttributeRequest &) = default ;
    ModifyHaVipAttributeRequest(ModifyHaVipAttributeRequest &&) = default ;
    ModifyHaVipAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHaVipAttributeRequest() = default ;
    ModifyHaVipAttributeRequest& operator=(const ModifyHaVipAttributeRequest &) = default ;
    ModifyHaVipAttributeRequest& operator=(ModifyHaVipAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->haVipId_ == nullptr
        && return this->name_ == nullptr; };
    // haVipId Field Functions 
    bool hasHaVipId() const { return this->haVipId_ != nullptr;};
    void deleteHaVipId() { this->haVipId_ = nullptr;};
    inline string haVipId() const { DARABONBA_PTR_GET_DEFAULT(haVipId_, "") };
    inline ModifyHaVipAttributeRequest& setHaVipId(string haVipId) { DARABONBA_PTR_SET_VALUE(haVipId_, haVipId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyHaVipAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The ID of the HAVIP that you want to modify.
    // 
    // This parameter is required.
    std::shared_ptr<string> haVipId_ = nullptr;
    // The name of the HAVIP. The name must be 1 to 128 characters in length and cannot start with http:// or https://.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
