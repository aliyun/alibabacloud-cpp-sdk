// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPSITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOPSITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetOpsItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpsItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpsItemId, opsItemId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpsItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpsItemId, opsItemId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetOpsItemRequest() = default ;
    GetOpsItemRequest(const GetOpsItemRequest &) = default ;
    GetOpsItemRequest(GetOpsItemRequest &&) = default ;
    GetOpsItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpsItemRequest() = default ;
    GetOpsItemRequest& operator=(const GetOpsItemRequest &) = default ;
    GetOpsItemRequest& operator=(GetOpsItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opsItemId_ == nullptr
        && return this->regionId_ == nullptr; };
    // opsItemId Field Functions 
    bool hasOpsItemId() const { return this->opsItemId_ != nullptr;};
    void deleteOpsItemId() { this->opsItemId_ = nullptr;};
    inline string opsItemId() const { DARABONBA_PTR_GET_DEFAULT(opsItemId_, "") };
    inline GetOpsItemRequest& setOpsItemId(string opsItemId) { DARABONBA_PTR_SET_VALUE(opsItemId_, opsItemId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetOpsItemRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The O\\&M item ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> opsItemId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
