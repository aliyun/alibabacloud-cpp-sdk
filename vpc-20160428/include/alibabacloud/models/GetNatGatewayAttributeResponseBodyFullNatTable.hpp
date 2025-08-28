// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNATGATEWAYATTRIBUTERESPONSEBODYFULLNATTABLE_HPP_
#define ALIBABACLOUD_MODELS_GETNATGATEWAYATTRIBUTERESPONSEBODYFULLNATTABLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetNatGatewayAttributeResponseBodyFullNatTable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNatGatewayAttributeResponseBodyFullNatTable& obj) { 
      DARABONBA_PTR_TO_JSON(FullNatEntryCount, fullNatEntryCount_);
      DARABONBA_PTR_TO_JSON(FullNatTableId, fullNatTableId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNatGatewayAttributeResponseBodyFullNatTable& obj) { 
      DARABONBA_PTR_FROM_JSON(FullNatEntryCount, fullNatEntryCount_);
      DARABONBA_PTR_FROM_JSON(FullNatTableId, fullNatTableId_);
    };
    GetNatGatewayAttributeResponseBodyFullNatTable() = default ;
    GetNatGatewayAttributeResponseBodyFullNatTable(const GetNatGatewayAttributeResponseBodyFullNatTable &) = default ;
    GetNatGatewayAttributeResponseBodyFullNatTable(GetNatGatewayAttributeResponseBodyFullNatTable &&) = default ;
    GetNatGatewayAttributeResponseBodyFullNatTable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNatGatewayAttributeResponseBodyFullNatTable() = default ;
    GetNatGatewayAttributeResponseBodyFullNatTable& operator=(const GetNatGatewayAttributeResponseBodyFullNatTable &) = default ;
    GetNatGatewayAttributeResponseBodyFullNatTable& operator=(GetNatGatewayAttributeResponseBodyFullNatTable &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fullNatEntryCount_ != nullptr
        && this->fullNatTableId_ != nullptr; };
    // fullNatEntryCount Field Functions 
    bool hasFullNatEntryCount() const { return this->fullNatEntryCount_ != nullptr;};
    void deleteFullNatEntryCount() { this->fullNatEntryCount_ = nullptr;};
    inline int64_t fullNatEntryCount() const { DARABONBA_PTR_GET_DEFAULT(fullNatEntryCount_, 0L) };
    inline GetNatGatewayAttributeResponseBodyFullNatTable& setFullNatEntryCount(int64_t fullNatEntryCount) { DARABONBA_PTR_SET_VALUE(fullNatEntryCount_, fullNatEntryCount) };


    // fullNatTableId Field Functions 
    bool hasFullNatTableId() const { return this->fullNatTableId_ != nullptr;};
    void deleteFullNatTableId() { this->fullNatTableId_ = nullptr;};
    inline string fullNatTableId() const { DARABONBA_PTR_GET_DEFAULT(fullNatTableId_, "") };
    inline GetNatGatewayAttributeResponseBodyFullNatTable& setFullNatTableId(string fullNatTableId) { DARABONBA_PTR_SET_VALUE(fullNatTableId_, fullNatTableId) };


  protected:
    // The number of FULLNAT entries.
    std::shared_ptr<int64_t> fullNatEntryCount_ = nullptr;
    // The ID of the FULLNAT table.
    std::shared_ptr<string> fullNatTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
