// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENATGATEWAYRESPONSEBODYFULLNATTABLEIDS_HPP_
#define ALIBABACLOUD_MODELS_CREATENATGATEWAYRESPONSEBODYFULLNATTABLEIDS_HPP_
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
  class CreateNatGatewayResponseBodyFullNatTableIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNatGatewayResponseBodyFullNatTableIds& obj) { 
      DARABONBA_PTR_TO_JSON(FullNatTableId, fullNatTableId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNatGatewayResponseBodyFullNatTableIds& obj) { 
      DARABONBA_PTR_FROM_JSON(FullNatTableId, fullNatTableId_);
    };
    CreateNatGatewayResponseBodyFullNatTableIds() = default ;
    CreateNatGatewayResponseBodyFullNatTableIds(const CreateNatGatewayResponseBodyFullNatTableIds &) = default ;
    CreateNatGatewayResponseBodyFullNatTableIds(CreateNatGatewayResponseBodyFullNatTableIds &&) = default ;
    CreateNatGatewayResponseBodyFullNatTableIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNatGatewayResponseBodyFullNatTableIds() = default ;
    CreateNatGatewayResponseBodyFullNatTableIds& operator=(const CreateNatGatewayResponseBodyFullNatTableIds &) = default ;
    CreateNatGatewayResponseBodyFullNatTableIds& operator=(CreateNatGatewayResponseBodyFullNatTableIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fullNatTableId_ == nullptr; };
    // fullNatTableId Field Functions 
    bool hasFullNatTableId() const { return this->fullNatTableId_ != nullptr;};
    void deleteFullNatTableId() { this->fullNatTableId_ = nullptr;};
    inline const vector<string> & fullNatTableId() const { DARABONBA_PTR_GET_CONST(fullNatTableId_, vector<string>) };
    inline vector<string> fullNatTableId() { DARABONBA_PTR_GET(fullNatTableId_, vector<string>) };
    inline CreateNatGatewayResponseBodyFullNatTableIds& setFullNatTableId(const vector<string> & fullNatTableId) { DARABONBA_PTR_SET_VALUE(fullNatTableId_, fullNatTableId) };
    inline CreateNatGatewayResponseBodyFullNatTableIds& setFullNatTableId(vector<string> && fullNatTableId) { DARABONBA_PTR_SET_RVALUE(fullNatTableId_, fullNatTableId) };


  protected:
    std::shared_ptr<vector<string>> fullNatTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
