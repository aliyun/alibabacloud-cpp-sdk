// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSUPPORTEDPROVISIONPROTOCOLTYPESRESPONSEBODYAPPLICATIONSUPPORTEDPROVISIONPROTOCOLTYPE_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSUPPORTEDPROVISIONPROTOCOLTYPESRESPONSEBODYAPPLICATIONSUPPORTEDPROVISIONPROTOCOLTYPE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType& obj) { 
      DARABONBA_PTR_TO_JSON(ProvisionProtocolType, provisionProtocolType_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType& obj) { 
      DARABONBA_PTR_FROM_JSON(ProvisionProtocolType, provisionProtocolType_);
    };
    ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType() = default ;
    ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType(const ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType &) = default ;
    ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType(ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType &&) = default ;
    ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType() = default ;
    ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType& operator=(const ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType &) = default ;
    ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType& operator=(ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->provisionProtocolType_ == nullptr; };
    // provisionProtocolType Field Functions 
    bool hasProvisionProtocolType() const { return this->provisionProtocolType_ != nullptr;};
    void deleteProvisionProtocolType() { this->provisionProtocolType_ = nullptr;};
    inline const vector<string> & provisionProtocolType() const { DARABONBA_PTR_GET_CONST(provisionProtocolType_, vector<string>) };
    inline vector<string> provisionProtocolType() { DARABONBA_PTR_GET(provisionProtocolType_, vector<string>) };
    inline ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType& setProvisionProtocolType(const vector<string> & provisionProtocolType) { DARABONBA_PTR_SET_VALUE(provisionProtocolType_, provisionProtocolType) };
    inline ListApplicationSupportedProvisionProtocolTypesResponseBodyApplicationSupportedProvisionProtocolType& setProvisionProtocolType(vector<string> && provisionProtocolType) { DARABONBA_PTR_SET_RVALUE(provisionProtocolType_, provisionProtocolType) };


  protected:
    // 账户同步支持类型
    std::shared_ptr<vector<string>> provisionProtocolType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
