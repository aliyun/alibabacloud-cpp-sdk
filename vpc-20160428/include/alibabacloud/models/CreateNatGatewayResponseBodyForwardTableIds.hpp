// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENATGATEWAYRESPONSEBODYFORWARDTABLEIDS_HPP_
#define ALIBABACLOUD_MODELS_CREATENATGATEWAYRESPONSEBODYFORWARDTABLEIDS_HPP_
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
  class CreateNatGatewayResponseBodyForwardTableIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNatGatewayResponseBodyForwardTableIds& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardTableId, forwardTableId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNatGatewayResponseBodyForwardTableIds& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardTableId, forwardTableId_);
    };
    CreateNatGatewayResponseBodyForwardTableIds() = default ;
    CreateNatGatewayResponseBodyForwardTableIds(const CreateNatGatewayResponseBodyForwardTableIds &) = default ;
    CreateNatGatewayResponseBodyForwardTableIds(CreateNatGatewayResponseBodyForwardTableIds &&) = default ;
    CreateNatGatewayResponseBodyForwardTableIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNatGatewayResponseBodyForwardTableIds() = default ;
    CreateNatGatewayResponseBodyForwardTableIds& operator=(const CreateNatGatewayResponseBodyForwardTableIds &) = default ;
    CreateNatGatewayResponseBodyForwardTableIds& operator=(CreateNatGatewayResponseBodyForwardTableIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->forwardTableId_ != nullptr; };
    // forwardTableId Field Functions 
    bool hasForwardTableId() const { return this->forwardTableId_ != nullptr;};
    void deleteForwardTableId() { this->forwardTableId_ = nullptr;};
    inline const vector<string> & forwardTableId() const { DARABONBA_PTR_GET_CONST(forwardTableId_, vector<string>) };
    inline vector<string> forwardTableId() { DARABONBA_PTR_GET(forwardTableId_, vector<string>) };
    inline CreateNatGatewayResponseBodyForwardTableIds& setForwardTableId(const vector<string> & forwardTableId) { DARABONBA_PTR_SET_VALUE(forwardTableId_, forwardTableId) };
    inline CreateNatGatewayResponseBodyForwardTableIds& setForwardTableId(vector<string> && forwardTableId) { DARABONBA_PTR_SET_RVALUE(forwardTableId_, forwardTableId) };


  protected:
    std::shared_ptr<vector<string>> forwardTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
