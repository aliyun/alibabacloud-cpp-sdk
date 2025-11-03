// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNATGATEWAYATTRIBUTERESPONSEBODYSNATTABLE_HPP_
#define ALIBABACLOUD_MODELS_GETNATGATEWAYATTRIBUTERESPONSEBODYSNATTABLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetNatGatewayAttributeResponseBodySnatTable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNatGatewayAttributeResponseBodySnatTable& obj) { 
      DARABONBA_PTR_TO_JSON(SnatEntryCount, snatEntryCount_);
      DARABONBA_PTR_TO_JSON(SnatTableId, snatTableId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNatGatewayAttributeResponseBodySnatTable& obj) { 
      DARABONBA_PTR_FROM_JSON(SnatEntryCount, snatEntryCount_);
      DARABONBA_PTR_FROM_JSON(SnatTableId, snatTableId_);
    };
    GetNatGatewayAttributeResponseBodySnatTable() = default ;
    GetNatGatewayAttributeResponseBodySnatTable(const GetNatGatewayAttributeResponseBodySnatTable &) = default ;
    GetNatGatewayAttributeResponseBodySnatTable(GetNatGatewayAttributeResponseBodySnatTable &&) = default ;
    GetNatGatewayAttributeResponseBodySnatTable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNatGatewayAttributeResponseBodySnatTable() = default ;
    GetNatGatewayAttributeResponseBodySnatTable& operator=(const GetNatGatewayAttributeResponseBodySnatTable &) = default ;
    GetNatGatewayAttributeResponseBodySnatTable& operator=(GetNatGatewayAttributeResponseBodySnatTable &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->snatEntryCount_ == nullptr
        && return this->snatTableId_ == nullptr; };
    // snatEntryCount Field Functions 
    bool hasSnatEntryCount() const { return this->snatEntryCount_ != nullptr;};
    void deleteSnatEntryCount() { this->snatEntryCount_ = nullptr;};
    inline int32_t snatEntryCount() const { DARABONBA_PTR_GET_DEFAULT(snatEntryCount_, 0) };
    inline GetNatGatewayAttributeResponseBodySnatTable& setSnatEntryCount(int32_t snatEntryCount) { DARABONBA_PTR_SET_VALUE(snatEntryCount_, snatEntryCount) };


    // snatTableId Field Functions 
    bool hasSnatTableId() const { return this->snatTableId_ != nullptr;};
    void deleteSnatTableId() { this->snatTableId_ = nullptr;};
    inline string snatTableId() const { DARABONBA_PTR_GET_DEFAULT(snatTableId_, "") };
    inline GetNatGatewayAttributeResponseBodySnatTable& setSnatTableId(string snatTableId) { DARABONBA_PTR_SET_VALUE(snatTableId_, snatTableId) };


  protected:
    // The number of SNAT entries.
    std::shared_ptr<int32_t> snatEntryCount_ = nullptr;
    // The ID of the SNAT table.
    std::shared_ptr<string> snatTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
