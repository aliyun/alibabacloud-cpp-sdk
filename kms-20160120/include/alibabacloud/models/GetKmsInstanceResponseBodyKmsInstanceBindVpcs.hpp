// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKMSINSTANCERESPONSEBODYKMSINSTANCEBINDVPCS_HPP_
#define ALIBABACLOUD_MODELS_GETKMSINSTANCERESPONSEBODYKMSINSTANCEBINDVPCS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetKmsInstanceResponseBodyKmsInstanceBindVpcs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKmsInstanceResponseBodyKmsInstanceBindVpcs& obj) { 
      DARABONBA_PTR_TO_JSON(BindVpc, bindVpc_);
    };
    friend void from_json(const Darabonba::Json& j, GetKmsInstanceResponseBodyKmsInstanceBindVpcs& obj) { 
      DARABONBA_PTR_FROM_JSON(BindVpc, bindVpc_);
    };
    GetKmsInstanceResponseBodyKmsInstanceBindVpcs() = default ;
    GetKmsInstanceResponseBodyKmsInstanceBindVpcs(const GetKmsInstanceResponseBodyKmsInstanceBindVpcs &) = default ;
    GetKmsInstanceResponseBodyKmsInstanceBindVpcs(GetKmsInstanceResponseBodyKmsInstanceBindVpcs &&) = default ;
    GetKmsInstanceResponseBodyKmsInstanceBindVpcs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKmsInstanceResponseBodyKmsInstanceBindVpcs() = default ;
    GetKmsInstanceResponseBodyKmsInstanceBindVpcs& operator=(const GetKmsInstanceResponseBodyKmsInstanceBindVpcs &) = default ;
    GetKmsInstanceResponseBodyKmsInstanceBindVpcs& operator=(GetKmsInstanceResponseBodyKmsInstanceBindVpcs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindVpc_ == nullptr; };
    // bindVpc Field Functions 
    bool hasBindVpc() const { return this->bindVpc_ != nullptr;};
    void deleteBindVpc() { this->bindVpc_ = nullptr;};
    inline const vector<Models::GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc> & bindVpc() const { DARABONBA_PTR_GET_CONST(bindVpc_, vector<Models::GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc>) };
    inline vector<Models::GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc> bindVpc() { DARABONBA_PTR_GET(bindVpc_, vector<Models::GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc>) };
    inline GetKmsInstanceResponseBodyKmsInstanceBindVpcs& setBindVpc(const vector<Models::GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc> & bindVpc) { DARABONBA_PTR_SET_VALUE(bindVpc_, bindVpc) };
    inline GetKmsInstanceResponseBodyKmsInstanceBindVpcs& setBindVpc(vector<Models::GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc> && bindVpc) { DARABONBA_PTR_SET_RVALUE(bindVpc_, bindVpc) };


  protected:
    std::shared_ptr<vector<Models::GetKmsInstanceResponseBodyKmsInstanceBindVpcsBindVpc>> bindVpc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
