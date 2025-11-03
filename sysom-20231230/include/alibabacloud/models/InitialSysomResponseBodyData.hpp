// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIALSYSOMRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_INITIALSYSOMRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class InitialSysomResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitialSysomResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(role_exist, roleExist_);
    };
    friend void from_json(const Darabonba::Json& j, InitialSysomResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(role_exist, roleExist_);
    };
    InitialSysomResponseBodyData() = default ;
    InitialSysomResponseBodyData(const InitialSysomResponseBodyData &) = default ;
    InitialSysomResponseBodyData(InitialSysomResponseBodyData &&) = default ;
    InitialSysomResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitialSysomResponseBodyData() = default ;
    InitialSysomResponseBodyData& operator=(const InitialSysomResponseBodyData &) = default ;
    InitialSysomResponseBodyData& operator=(InitialSysomResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleExist_ == nullptr; };
    // roleExist Field Functions 
    bool hasRoleExist() const { return this->roleExist_ != nullptr;};
    void deleteRoleExist() { this->roleExist_ = nullptr;};
    inline bool roleExist() const { DARABONBA_PTR_GET_DEFAULT(roleExist_, false) };
    inline InitialSysomResponseBodyData& setRoleExist(bool roleExist) { DARABONBA_PTR_SET_VALUE(roleExist_, roleExist) };


  protected:
    std::shared_ptr<bool> roleExist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
