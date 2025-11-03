// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNATGATEWAYATTRIBUTERESPONSEBODYFORWARDTABLE_HPP_
#define ALIBABACLOUD_MODELS_GETNATGATEWAYATTRIBUTERESPONSEBODYFORWARDTABLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetNatGatewayAttributeResponseBodyForwardTable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNatGatewayAttributeResponseBodyForwardTable& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardEntryCount, forwardEntryCount_);
      DARABONBA_PTR_TO_JSON(ForwardTableId, forwardTableId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNatGatewayAttributeResponseBodyForwardTable& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardEntryCount, forwardEntryCount_);
      DARABONBA_PTR_FROM_JSON(ForwardTableId, forwardTableId_);
    };
    GetNatGatewayAttributeResponseBodyForwardTable() = default ;
    GetNatGatewayAttributeResponseBodyForwardTable(const GetNatGatewayAttributeResponseBodyForwardTable &) = default ;
    GetNatGatewayAttributeResponseBodyForwardTable(GetNatGatewayAttributeResponseBodyForwardTable &&) = default ;
    GetNatGatewayAttributeResponseBodyForwardTable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNatGatewayAttributeResponseBodyForwardTable() = default ;
    GetNatGatewayAttributeResponseBodyForwardTable& operator=(const GetNatGatewayAttributeResponseBodyForwardTable &) = default ;
    GetNatGatewayAttributeResponseBodyForwardTable& operator=(GetNatGatewayAttributeResponseBodyForwardTable &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forwardEntryCount_ == nullptr
        && return this->forwardTableId_ == nullptr; };
    // forwardEntryCount Field Functions 
    bool hasForwardEntryCount() const { return this->forwardEntryCount_ != nullptr;};
    void deleteForwardEntryCount() { this->forwardEntryCount_ = nullptr;};
    inline int32_t forwardEntryCount() const { DARABONBA_PTR_GET_DEFAULT(forwardEntryCount_, 0) };
    inline GetNatGatewayAttributeResponseBodyForwardTable& setForwardEntryCount(int32_t forwardEntryCount) { DARABONBA_PTR_SET_VALUE(forwardEntryCount_, forwardEntryCount) };


    // forwardTableId Field Functions 
    bool hasForwardTableId() const { return this->forwardTableId_ != nullptr;};
    void deleteForwardTableId() { this->forwardTableId_ = nullptr;};
    inline string forwardTableId() const { DARABONBA_PTR_GET_DEFAULT(forwardTableId_, "") };
    inline GetNatGatewayAttributeResponseBodyForwardTable& setForwardTableId(string forwardTableId) { DARABONBA_PTR_SET_VALUE(forwardTableId_, forwardTableId) };


  protected:
    // The number of DNAT entries.
    std::shared_ptr<int32_t> forwardEntryCount_ = nullptr;
    // The ID of the DNAT table.
    std::shared_ptr<string> forwardTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
