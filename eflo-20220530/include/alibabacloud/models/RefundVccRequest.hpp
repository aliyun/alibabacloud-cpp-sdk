// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDVCCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFUNDVCCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class RefundVccRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundVccRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VccId, vccId_);
    };
    friend void from_json(const Darabonba::Json& j, RefundVccRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VccId, vccId_);
    };
    RefundVccRequest() = default ;
    RefundVccRequest(const RefundVccRequest &) = default ;
    RefundVccRequest(RefundVccRequest &&) = default ;
    RefundVccRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundVccRequest() = default ;
    RefundVccRequest& operator=(const RefundVccRequest &) = default ;
    RefundVccRequest& operator=(RefundVccRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->vccId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RefundVccRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vccId Field Functions 
    bool hasVccId() const { return this->vccId_ != nullptr;};
    void deleteVccId() { this->vccId_ = nullptr;};
    inline string vccId() const { DARABONBA_PTR_GET_DEFAULT(vccId_, "") };
    inline RefundVccRequest& setVccId(string vccId) { DARABONBA_PTR_SET_VALUE(vccId_, vccId) };


  protected:
    // Region
    std::shared_ptr<string> regionId_ = nullptr;
    // Lingjun Connection ID
    std::shared_ptr<string> vccId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
