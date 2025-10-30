// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_COMMONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CommonConfigIdp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CommonConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommonConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Idp, idp_);
    };
    friend void from_json(const Darabonba::Json& j, CommonConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Idp, idp_);
    };
    CommonConfig() = default ;
    CommonConfig(const CommonConfig &) = default ;
    CommonConfig(CommonConfig &&) = default ;
    CommonConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommonConfig() = default ;
    CommonConfig& operator=(const CommonConfig &) = default ;
    CommonConfig& operator=(CommonConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->idp_ == nullptr; };
    // idp Field Functions 
    bool hasIdp() const { return this->idp_ != nullptr;};
    void deleteIdp() { this->idp_ = nullptr;};
    inline const CommonConfigIdp & idp() const { DARABONBA_PTR_GET_CONST(idp_, CommonConfigIdp) };
    inline CommonConfigIdp idp() { DARABONBA_PTR_GET(idp_, CommonConfigIdp) };
    inline CommonConfig& setIdp(const CommonConfigIdp & idp) { DARABONBA_PTR_SET_VALUE(idp_, idp) };
    inline CommonConfig& setIdp(CommonConfigIdp && idp) { DARABONBA_PTR_SET_RVALUE(idp_, idp) };


  protected:
    std::shared_ptr<CommonConfigIdp> idp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
