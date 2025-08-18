// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBIZUNITREQUESTUPDATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBIZUNITREQUESTUPDATECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateBizUnitRequestUpdateCommandBizUnitAccountList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateBizUnitRequestUpdateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBizUnitRequestUpdateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(BizUnitAccountList, bizUnitAccountList_);
      DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBizUnitRequestUpdateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(BizUnitAccountList, bizUnitAccountList_);
      DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateBizUnitRequestUpdateCommand() = default ;
    UpdateBizUnitRequestUpdateCommand(const UpdateBizUnitRequestUpdateCommand &) = default ;
    UpdateBizUnitRequestUpdateCommand(UpdateBizUnitRequestUpdateCommand &&) = default ;
    UpdateBizUnitRequestUpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBizUnitRequestUpdateCommand() = default ;
    UpdateBizUnitRequestUpdateCommand& operator=(const UpdateBizUnitRequestUpdateCommand &) = default ;
    UpdateBizUnitRequestUpdateCommand& operator=(UpdateBizUnitRequestUpdateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizUnitAccountList_ != nullptr
        && this->bizUnitId_ != nullptr && this->description_ != nullptr && this->displayName_ != nullptr && this->icon_ != nullptr && this->name_ != nullptr; };
    // bizUnitAccountList Field Functions 
    bool hasBizUnitAccountList() const { return this->bizUnitAccountList_ != nullptr;};
    void deleteBizUnitAccountList() { this->bizUnitAccountList_ = nullptr;};
    inline const vector<Models::UpdateBizUnitRequestUpdateCommandBizUnitAccountList> & bizUnitAccountList() const { DARABONBA_PTR_GET_CONST(bizUnitAccountList_, vector<Models::UpdateBizUnitRequestUpdateCommandBizUnitAccountList>) };
    inline vector<Models::UpdateBizUnitRequestUpdateCommandBizUnitAccountList> bizUnitAccountList() { DARABONBA_PTR_GET(bizUnitAccountList_, vector<Models::UpdateBizUnitRequestUpdateCommandBizUnitAccountList>) };
    inline UpdateBizUnitRequestUpdateCommand& setBizUnitAccountList(const vector<Models::UpdateBizUnitRequestUpdateCommandBizUnitAccountList> & bizUnitAccountList) { DARABONBA_PTR_SET_VALUE(bizUnitAccountList_, bizUnitAccountList) };
    inline UpdateBizUnitRequestUpdateCommand& setBizUnitAccountList(vector<Models::UpdateBizUnitRequestUpdateCommandBizUnitAccountList> && bizUnitAccountList) { DARABONBA_PTR_SET_RVALUE(bizUnitAccountList_, bizUnitAccountList) };


    // bizUnitId Field Functions 
    bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
    void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
    inline int64_t bizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
    inline UpdateBizUnitRequestUpdateCommand& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateBizUnitRequestUpdateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateBizUnitRequestUpdateCommand& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline UpdateBizUnitRequestUpdateCommand& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateBizUnitRequestUpdateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::UpdateBizUnitRequestUpdateCommandBizUnitAccountList>> bizUnitAccountList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> bizUnitId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> displayName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> icon_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
