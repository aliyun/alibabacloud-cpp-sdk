// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGACCOUNTRESPONSEBODYAGRELATIONDTO_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGACCOUNTRESPONSEBODYAGRELATIONDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class CreateAgAccountResponseBodyAgRelationDto : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgAccountResponseBodyAgRelationDto& obj) { 
      DARABONBA_PTR_TO_JSON(Mpk, mpk_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
      DARABONBA_PTR_TO_JSON(RamAdminRoleName, ramAdminRoleName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgAccountResponseBodyAgRelationDto& obj) { 
      DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
      DARABONBA_PTR_FROM_JSON(RamAdminRoleName, ramAdminRoleName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateAgAccountResponseBodyAgRelationDto() = default ;
    CreateAgAccountResponseBodyAgRelationDto(const CreateAgAccountResponseBodyAgRelationDto &) = default ;
    CreateAgAccountResponseBodyAgRelationDto(CreateAgAccountResponseBodyAgRelationDto &&) = default ;
    CreateAgAccountResponseBodyAgRelationDto(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgAccountResponseBodyAgRelationDto() = default ;
    CreateAgAccountResponseBodyAgRelationDto& operator=(const CreateAgAccountResponseBodyAgRelationDto &) = default ;
    CreateAgAccountResponseBodyAgRelationDto& operator=(CreateAgAccountResponseBodyAgRelationDto &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mpk_ != nullptr
        && this->pk_ != nullptr && this->ramAdminRoleName_ != nullptr && this->type_ != nullptr; };
    // mpk Field Functions 
    bool hasMpk() const { return this->mpk_ != nullptr;};
    void deleteMpk() { this->mpk_ = nullptr;};
    inline string mpk() const { DARABONBA_PTR_GET_DEFAULT(mpk_, "") };
    inline CreateAgAccountResponseBodyAgRelationDto& setMpk(string mpk) { DARABONBA_PTR_SET_VALUE(mpk_, mpk) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string pk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline CreateAgAccountResponseBodyAgRelationDto& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    // ramAdminRoleName Field Functions 
    bool hasRamAdminRoleName() const { return this->ramAdminRoleName_ != nullptr;};
    void deleteRamAdminRoleName() { this->ramAdminRoleName_ = nullptr;};
    inline string ramAdminRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramAdminRoleName_, "") };
    inline CreateAgAccountResponseBodyAgRelationDto& setRamAdminRoleName(string ramAdminRoleName) { DARABONBA_PTR_SET_VALUE(ramAdminRoleName_, ramAdminRoleName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateAgAccountResponseBodyAgRelationDto& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the account that is used to call the CreateAgAccount operation.
    std::shared_ptr<string> mpk_ = nullptr;
    // The ID of the account that is created.
    std::shared_ptr<string> pk_ = nullptr;
    // The role of the account that is created.
    std::shared_ptr<string> ramAdminRoleName_ = nullptr;
    // The type of the relationship.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
