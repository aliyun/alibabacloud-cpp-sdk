// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECORPNUMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECORPNUMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class DeleteCorpNumberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCorpNumberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCorpNumberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    DeleteCorpNumberRequest() = default ;
    DeleteCorpNumberRequest(const DeleteCorpNumberRequest &) = default ;
    DeleteCorpNumberRequest(DeleteCorpNumberRequest &&) = default ;
    DeleteCorpNumberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCorpNumberRequest() = default ;
    DeleteCorpNumberRequest& operator=(const DeleteCorpNumberRequest &) = default ;
    DeleteCorpNumberRequest& operator=(DeleteCorpNumberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->force_ == nullptr
        && this->number_ == nullptr && this->tenantId_ == nullptr; };
    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline DeleteCorpNumberRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline DeleteCorpNumberRequest& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DeleteCorpNumberRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // Specifies whether to force delete an existing number.
    shared_ptr<bool> force_ {};
    // The outbound number.
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
