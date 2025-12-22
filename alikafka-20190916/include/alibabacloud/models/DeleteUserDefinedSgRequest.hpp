// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERDEFINEDSGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERDEFINEDSGREQUEST_HPP_
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
  class DeleteUserDefinedSgRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserDefinedSgRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SgIdList, sgIdList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserDefinedSgRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SgIdList, sgIdList_);
    };
    DeleteUserDefinedSgRequest() = default ;
    DeleteUserDefinedSgRequest(const DeleteUserDefinedSgRequest &) = default ;
    DeleteUserDefinedSgRequest(DeleteUserDefinedSgRequest &&) = default ;
    DeleteUserDefinedSgRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserDefinedSgRequest() = default ;
    DeleteUserDefinedSgRequest& operator=(const DeleteUserDefinedSgRequest &) = default ;
    DeleteUserDefinedSgRequest& operator=(DeleteUserDefinedSgRequest &&) = default ;
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
    inline DeleteUserDefinedSgRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteUserDefinedSgRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sgIdList Field Functions 
    bool hasSgIdList() const { return this->sgIdList_ != nullptr;};
    void deleteSgIdList() { this->sgIdList_ = nullptr;};
    inline const vector<string> & sgIdList() const { DARABONBA_PTR_GET_CONST(sgIdList_, vector<string>) };
    inline vector<string> sgIdList() { DARABONBA_PTR_GET(sgIdList_, vector<string>) };
    inline DeleteUserDefinedSgRequest& setSgIdList(const vector<string> & sgIdList) { DARABONBA_PTR_SET_VALUE(sgIdList_, sgIdList) };
    inline DeleteUserDefinedSgRequest& setSgIdList(vector<string> && sgIdList) { DARABONBA_PTR_SET_RVALUE(sgIdList_, sgIdList) };


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
