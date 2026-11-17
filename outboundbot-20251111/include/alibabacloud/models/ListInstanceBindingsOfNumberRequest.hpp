// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEBINDINGSOFNUMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEBINDINGSOFNUMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class ListInstanceBindingsOfNumberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceBindingsOfNumberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceBindingsOfNumberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    ListInstanceBindingsOfNumberRequest() = default ;
    ListInstanceBindingsOfNumberRequest(const ListInstanceBindingsOfNumberRequest &) = default ;
    ListInstanceBindingsOfNumberRequest(ListInstanceBindingsOfNumberRequest &&) = default ;
    ListInstanceBindingsOfNumberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceBindingsOfNumberRequest() = default ;
    ListInstanceBindingsOfNumberRequest& operator=(const ListInstanceBindingsOfNumberRequest &) = default ;
    ListInstanceBindingsOfNumberRequest& operator=(ListInstanceBindingsOfNumberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->number_ == nullptr
        && this->tenantId_ == nullptr; };
    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline ListInstanceBindingsOfNumberRequest& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListInstanceBindingsOfNumberRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The bound number.
    // 
    // This parameter is required.
    shared_ptr<string> number_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
