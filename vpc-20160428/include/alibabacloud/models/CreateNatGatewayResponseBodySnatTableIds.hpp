// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENATGATEWAYRESPONSEBODYSNATTABLEIDS_HPP_
#define ALIBABACLOUD_MODELS_CREATENATGATEWAYRESPONSEBODYSNATTABLEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateNatGatewayResponseBodySnatTableIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNatGatewayResponseBodySnatTableIds& obj) { 
      DARABONBA_PTR_TO_JSON(SnatTableId, snatTableId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNatGatewayResponseBodySnatTableIds& obj) { 
      DARABONBA_PTR_FROM_JSON(SnatTableId, snatTableId_);
    };
    CreateNatGatewayResponseBodySnatTableIds() = default ;
    CreateNatGatewayResponseBodySnatTableIds(const CreateNatGatewayResponseBodySnatTableIds &) = default ;
    CreateNatGatewayResponseBodySnatTableIds(CreateNatGatewayResponseBodySnatTableIds &&) = default ;
    CreateNatGatewayResponseBodySnatTableIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNatGatewayResponseBodySnatTableIds() = default ;
    CreateNatGatewayResponseBodySnatTableIds& operator=(const CreateNatGatewayResponseBodySnatTableIds &) = default ;
    CreateNatGatewayResponseBodySnatTableIds& operator=(CreateNatGatewayResponseBodySnatTableIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->snatTableId_ == nullptr; };
    // snatTableId Field Functions 
    bool hasSnatTableId() const { return this->snatTableId_ != nullptr;};
    void deleteSnatTableId() { this->snatTableId_ = nullptr;};
    inline const vector<string> & snatTableId() const { DARABONBA_PTR_GET_CONST(snatTableId_, vector<string>) };
    inline vector<string> snatTableId() { DARABONBA_PTR_GET(snatTableId_, vector<string>) };
    inline CreateNatGatewayResponseBodySnatTableIds& setSnatTableId(const vector<string> & snatTableId) { DARABONBA_PTR_SET_VALUE(snatTableId_, snatTableId) };
    inline CreateNatGatewayResponseBodySnatTableIds& setSnatTableId(vector<string> && snatTableId) { DARABONBA_PTR_SET_RVALUE(snatTableId_, snatTableId) };


  protected:
    std::shared_ptr<vector<string>> snatTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
