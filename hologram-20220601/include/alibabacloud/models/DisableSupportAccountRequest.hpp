// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLESUPPORTACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLESUPPORTACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class DisableSupportAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableSupportAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableSupportAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DisableSupportAccountRequest() = default ;
    DisableSupportAccountRequest(const DisableSupportAccountRequest &) = default ;
    DisableSupportAccountRequest(DisableSupportAccountRequest &&) = default ;
    DisableSupportAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableSupportAccountRequest() = default ;
    DisableSupportAccountRequest& operator=(const DisableSupportAccountRequest &) = default ;
    DisableSupportAccountRequest& operator=(DisableSupportAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DisableSupportAccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
