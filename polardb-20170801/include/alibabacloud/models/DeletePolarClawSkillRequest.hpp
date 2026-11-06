// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLARCLAWSKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLARCLAWSKILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeletePolarClawSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolarClawSkillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SkillName, skillName_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolarClawSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
    };
    DeletePolarClawSkillRequest() = default ;
    DeletePolarClawSkillRequest(const DeletePolarClawSkillRequest &) = default ;
    DeletePolarClawSkillRequest(DeletePolarClawSkillRequest &&) = default ;
    DeletePolarClawSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolarClawSkillRequest() = default ;
    DeletePolarClawSkillRequest& operator=(const DeletePolarClawSkillRequest &) = default ;
    DeletePolarClawSkillRequest& operator=(DeletePolarClawSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->skillName_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeletePolarClawSkillRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline DeletePolarClawSkillRequest& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


  protected:
    // The region ID of the region where the parameter template resides.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query region IDs.
    shared_ptr<string> regionId_ {};
    // The name of the skill.
    // 
    // This parameter is required.
    shared_ptr<string> skillName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
