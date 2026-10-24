// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEASSETSCOPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEASSETSCOPEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{
namespace Models
{
  class UpdateAssetScopeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAssetScopeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_TO_JSON(MatchTargetIds, matchTargetIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAssetScopeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_FROM_JSON(MatchTargetIds, matchTargetIds_);
    };
    UpdateAssetScopeRequest() = default ;
    UpdateAssetScopeRequest(const UpdateAssetScopeRequest &) = default ;
    UpdateAssetScopeRequest(UpdateAssetScopeRequest &&) = default ;
    UpdateAssetScopeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAssetScopeRequest() = default ;
    UpdateAssetScopeRequest& operator=(const UpdateAssetScopeRequest &) = default ;
    UpdateAssetScopeRequest& operator=(UpdateAssetScopeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->matchMode_ == nullptr && this->matchTargetIds_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateAssetScopeRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline UpdateAssetScopeRequest& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // matchTargetIds Field Functions 
    bool hasMatchTargetIds() const { return this->matchTargetIds_ != nullptr;};
    void deleteMatchTargetIds() { this->matchTargetIds_ = nullptr;};
    inline const vector<string> & getMatchTargetIds() const { DARABONBA_PTR_GET_CONST(matchTargetIds_, vector<string>) };
    inline vector<string> getMatchTargetIds() { DARABONBA_PTR_GET(matchTargetIds_, vector<string>) };
    inline UpdateAssetScopeRequest& setMatchTargetIds(const vector<string> & matchTargetIds) { DARABONBA_PTR_SET_VALUE(matchTargetIds_, matchTargetIds) };
    inline UpdateAssetScopeRequest& setMatchTargetIds(vector<string> && matchTargetIds) { DARABONBA_PTR_SET_RVALUE(matchTargetIds_, matchTargetIds) };


  protected:
    // The asset scope ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The effective scope mode. Valid values:
    // 
    // - **UserGroupAll**: All user groups.
    // - **UserGroupNormal**: Specified user groups.
    // - **DeviceGroupNormal**: Specified device groups.
    // - **DevTagNormal**: Specified device tags.
    // 
    // This field determines the meaning of MatchTargetIds.
    // 
    // This parameter is required.
    shared_ptr<string> matchMode_ {};
    // The IDs of the user groups, device tags, or tag groups.
    shared_ptr<vector<string>> matchTargetIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
