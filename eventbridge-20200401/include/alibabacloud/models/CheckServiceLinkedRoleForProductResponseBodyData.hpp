// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSERVICELINKEDROLEFORPRODUCTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CHECKSERVICELINKEDROLEFORPRODUCTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CheckServiceLinkedRoleForProductResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckServiceLinkedRoleForProductResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CheckPass, checkPass_);
      DARABONBA_PTR_TO_JSON(StsRoleName, stsRoleName_);
    };
    friend void from_json(const Darabonba::Json& j, CheckServiceLinkedRoleForProductResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckPass, checkPass_);
      DARABONBA_PTR_FROM_JSON(StsRoleName, stsRoleName_);
    };
    CheckServiceLinkedRoleForProductResponseBodyData() = default ;
    CheckServiceLinkedRoleForProductResponseBodyData(const CheckServiceLinkedRoleForProductResponseBodyData &) = default ;
    CheckServiceLinkedRoleForProductResponseBodyData(CheckServiceLinkedRoleForProductResponseBodyData &&) = default ;
    CheckServiceLinkedRoleForProductResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckServiceLinkedRoleForProductResponseBodyData() = default ;
    CheckServiceLinkedRoleForProductResponseBodyData& operator=(const CheckServiceLinkedRoleForProductResponseBodyData &) = default ;
    CheckServiceLinkedRoleForProductResponseBodyData& operator=(CheckServiceLinkedRoleForProductResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkPass_ != nullptr
        && this->stsRoleName_ != nullptr; };
    // checkPass Field Functions 
    bool hasCheckPass() const { return this->checkPass_ != nullptr;};
    void deleteCheckPass() { this->checkPass_ = nullptr;};
    inline bool checkPass() const { DARABONBA_PTR_GET_DEFAULT(checkPass_, false) };
    inline CheckServiceLinkedRoleForProductResponseBodyData& setCheckPass(bool checkPass) { DARABONBA_PTR_SET_VALUE(checkPass_, checkPass) };


    // stsRoleName Field Functions 
    bool hasStsRoleName() const { return this->stsRoleName_ != nullptr;};
    void deleteStsRoleName() { this->stsRoleName_ = nullptr;};
    inline string stsRoleName() const { DARABONBA_PTR_GET_DEFAULT(stsRoleName_, "") };
    inline CheckServiceLinkedRoleForProductResponseBodyData& setStsRoleName(string stsRoleName) { DARABONBA_PTR_SET_VALUE(stsRoleName_, stsRoleName) };


  protected:
    // Indicates whether the service-linked role exists.
    std::shared_ptr<bool> checkPass_ = nullptr;
    // The name of the service-linked role.
    std::shared_ptr<string> stsRoleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
