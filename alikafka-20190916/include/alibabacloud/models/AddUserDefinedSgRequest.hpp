// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUSERDEFINEDSGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDUSERDEFINEDSGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class AddUserDefinedSgRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUserDefinedSgRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SgIdList, sgIdList_);
    };
    friend void from_json(const Darabonba::Json& j, AddUserDefinedSgRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SgIdList, sgIdList_);
    };
    AddUserDefinedSgRequest() = default ;
    AddUserDefinedSgRequest(const AddUserDefinedSgRequest &) = default ;
    AddUserDefinedSgRequest(AddUserDefinedSgRequest &&) = default ;
    AddUserDefinedSgRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUserDefinedSgRequest() = default ;
    AddUserDefinedSgRequest& operator=(const AddUserDefinedSgRequest &) = default ;
    AddUserDefinedSgRequest& operator=(AddUserDefinedSgRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->regionId_ == nullptr && return this->sgIdList_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddUserDefinedSgRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddUserDefinedSgRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sgIdList Field Functions 
    bool hasSgIdList() const { return this->sgIdList_ != nullptr;};
    void deleteSgIdList() { this->sgIdList_ = nullptr;};
    inline const vector<string> & sgIdList() const { DARABONBA_PTR_GET_CONST(sgIdList_, vector<string>) };
    inline vector<string> sgIdList() { DARABONBA_PTR_GET(sgIdList_, vector<string>) };
    inline AddUserDefinedSgRequest& setSgIdList(const vector<string> & sgIdList) { DARABONBA_PTR_SET_VALUE(sgIdList_, sgIdList) };
    inline AddUserDefinedSgRequest& setSgIdList(vector<string> && sgIdList) { DARABONBA_PTR_SET_RVALUE(sgIdList_, sgIdList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<vector<string>> sgIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
