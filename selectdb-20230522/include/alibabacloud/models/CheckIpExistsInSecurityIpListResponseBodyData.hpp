// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKIPEXISTSINSECURITYIPLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CHECKIPEXISTSINSECURITYIPLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class CheckIpExistsInSecurityIpListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckIpExistsInSecurityIpListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(IpExists, ipExists_);
    };
    friend void from_json(const Darabonba::Json& j, CheckIpExistsInSecurityIpListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(IpExists, ipExists_);
    };
    CheckIpExistsInSecurityIpListResponseBodyData() = default ;
    CheckIpExistsInSecurityIpListResponseBodyData(const CheckIpExistsInSecurityIpListResponseBodyData &) = default ;
    CheckIpExistsInSecurityIpListResponseBodyData(CheckIpExistsInSecurityIpListResponseBodyData &&) = default ;
    CheckIpExistsInSecurityIpListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckIpExistsInSecurityIpListResponseBodyData() = default ;
    CheckIpExistsInSecurityIpListResponseBodyData& operator=(const CheckIpExistsInSecurityIpListResponseBodyData &) = default ;
    CheckIpExistsInSecurityIpListResponseBodyData& operator=(CheckIpExistsInSecurityIpListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipExists_ == nullptr; };
    // ipExists Field Functions 
    bool hasIpExists() const { return this->ipExists_ != nullptr;};
    void deleteIpExists() { this->ipExists_ = nullptr;};
    inline bool ipExists() const { DARABONBA_PTR_GET_DEFAULT(ipExists_, false) };
    inline CheckIpExistsInSecurityIpListResponseBodyData& setIpExists(bool ipExists) { DARABONBA_PTR_SET_VALUE(ipExists_, ipExists) };


  protected:
    std::shared_ptr<bool> ipExists_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
