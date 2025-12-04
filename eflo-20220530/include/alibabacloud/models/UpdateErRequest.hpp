// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class UpdateErRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateErRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ErId, erId_);
      DARABONBA_PTR_TO_JSON(ErName, erName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateErRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ErId, erId_);
      DARABONBA_PTR_FROM_JSON(ErName, erName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateErRequest() = default ;
    UpdateErRequest(const UpdateErRequest &) = default ;
    UpdateErRequest(UpdateErRequest &&) = default ;
    UpdateErRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateErRequest() = default ;
    UpdateErRequest& operator=(const UpdateErRequest &) = default ;
    UpdateErRequest& operator=(UpdateErRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->erId_ == nullptr && return this->erName_ == nullptr && return this->regionId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateErRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // erId Field Functions 
    bool hasErId() const { return this->erId_ != nullptr;};
    void deleteErId() { this->erId_ = nullptr;};
    inline string erId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
    inline UpdateErRequest& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


    // erName Field Functions 
    bool hasErName() const { return this->erName_ != nullptr;};
    void deleteErName() { this->erName_ = nullptr;};
    inline string erName() const { DARABONBA_PTR_GET_DEFAULT(erName_, "") };
    inline UpdateErRequest& setErName(string erName) { DARABONBA_PTR_SET_VALUE(erName_, erName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateErRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The description of the document.
    std::shared_ptr<string> description_ = nullptr;
    // Lingjun HUB Instance ID
    // 
    // This parameter is required.
    std::shared_ptr<string> erId_ = nullptr;
    // Parameter
    std::shared_ptr<string> erName_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
