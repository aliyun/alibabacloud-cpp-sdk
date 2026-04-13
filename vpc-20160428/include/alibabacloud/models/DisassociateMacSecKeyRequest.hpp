// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISASSOCIATEMACSECKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISASSOCIATEMACSECKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DisassociateMacSecKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisassociateMacSecKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ckn, ckn_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DisassociateMacSecKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ckn, ckn_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DisassociateMacSecKeyRequest() = default ;
    DisassociateMacSecKeyRequest(const DisassociateMacSecKeyRequest &) = default ;
    DisassociateMacSecKeyRequest(DisassociateMacSecKeyRequest &&) = default ;
    DisassociateMacSecKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisassociateMacSecKeyRequest() = default ;
    DisassociateMacSecKeyRequest& operator=(const DisassociateMacSecKeyRequest &) = default ;
    DisassociateMacSecKeyRequest& operator=(DisassociateMacSecKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ckn_ == nullptr
        && this->physicalConnectionId_ == nullptr && this->regionId_ == nullptr; };
    // ckn Field Functions 
    bool hasCkn() const { return this->ckn_ != nullptr;};
    void deleteCkn() { this->ckn_ = nullptr;};
    inline string getCkn() const { DARABONBA_PTR_GET_DEFAULT(ckn_, "") };
    inline DisassociateMacSecKeyRequest& setCkn(string ckn) { DARABONBA_PTR_SET_VALUE(ckn_, ckn) };


    // physicalConnectionId Field Functions 
    bool hasPhysicalConnectionId() const { return this->physicalConnectionId_ != nullptr;};
    void deletePhysicalConnectionId() { this->physicalConnectionId_ = nullptr;};
    inline string getPhysicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionId_, "") };
    inline DisassociateMacSecKeyRequest& setPhysicalConnectionId(string physicalConnectionId) { DARABONBA_PTR_SET_VALUE(physicalConnectionId_, physicalConnectionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DisassociateMacSecKeyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> ckn_ {};
    // This parameter is required.
    shared_ptr<string> physicalConnectionId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
