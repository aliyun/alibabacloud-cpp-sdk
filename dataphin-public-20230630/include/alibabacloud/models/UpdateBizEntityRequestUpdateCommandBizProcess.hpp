// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBIZENTITYREQUESTUPDATECOMMANDBIZPROCESS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBIZENTITYREQUESTUPDATECOMMANDBIZPROCESS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateBizEntityRequestUpdateCommandBizProcess : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBizEntityRequestUpdateCommandBizProcess& obj) { 
      DARABONBA_PTR_TO_JSON(BizEventEntityIdList, bizEventEntityIdList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(PreBizProcessIdList, preBizProcessIdList_);
      DARABONBA_PTR_TO_JSON(RefBizEntityIdList, refBizEntityIdList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBizEntityRequestUpdateCommandBizProcess& obj) { 
      DARABONBA_PTR_FROM_JSON(BizEventEntityIdList, bizEventEntityIdList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(PreBizProcessIdList, preBizProcessIdList_);
      DARABONBA_PTR_FROM_JSON(RefBizEntityIdList, refBizEntityIdList_);
    };
    UpdateBizEntityRequestUpdateCommandBizProcess() = default ;
    UpdateBizEntityRequestUpdateCommandBizProcess(const UpdateBizEntityRequestUpdateCommandBizProcess &) = default ;
    UpdateBizEntityRequestUpdateCommandBizProcess(UpdateBizEntityRequestUpdateCommandBizProcess &&) = default ;
    UpdateBizEntityRequestUpdateCommandBizProcess(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBizEntityRequestUpdateCommandBizProcess() = default ;
    UpdateBizEntityRequestUpdateCommandBizProcess& operator=(const UpdateBizEntityRequestUpdateCommandBizProcess &) = default ;
    UpdateBizEntityRequestUpdateCommandBizProcess& operator=(UpdateBizEntityRequestUpdateCommandBizProcess &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizEventEntityIdList_ != nullptr
        && this->description_ != nullptr && this->displayName_ != nullptr && this->name_ != nullptr && this->ownerUserId_ != nullptr && this->preBizProcessIdList_ != nullptr
        && this->refBizEntityIdList_ != nullptr; };
    // bizEventEntityIdList Field Functions 
    bool hasBizEventEntityIdList() const { return this->bizEventEntityIdList_ != nullptr;};
    void deleteBizEventEntityIdList() { this->bizEventEntityIdList_ = nullptr;};
    inline const vector<int64_t> & bizEventEntityIdList() const { DARABONBA_PTR_GET_CONST(bizEventEntityIdList_, vector<int64_t>) };
    inline vector<int64_t> bizEventEntityIdList() { DARABONBA_PTR_GET(bizEventEntityIdList_, vector<int64_t>) };
    inline UpdateBizEntityRequestUpdateCommandBizProcess& setBizEventEntityIdList(const vector<int64_t> & bizEventEntityIdList) { DARABONBA_PTR_SET_VALUE(bizEventEntityIdList_, bizEventEntityIdList) };
    inline UpdateBizEntityRequestUpdateCommandBizProcess& setBizEventEntityIdList(vector<int64_t> && bizEventEntityIdList) { DARABONBA_PTR_SET_RVALUE(bizEventEntityIdList_, bizEventEntityIdList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateBizEntityRequestUpdateCommandBizProcess& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateBizEntityRequestUpdateCommandBizProcess& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateBizEntityRequestUpdateCommandBizProcess& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline UpdateBizEntityRequestUpdateCommandBizProcess& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // preBizProcessIdList Field Functions 
    bool hasPreBizProcessIdList() const { return this->preBizProcessIdList_ != nullptr;};
    void deletePreBizProcessIdList() { this->preBizProcessIdList_ = nullptr;};
    inline const vector<int64_t> & preBizProcessIdList() const { DARABONBA_PTR_GET_CONST(preBizProcessIdList_, vector<int64_t>) };
    inline vector<int64_t> preBizProcessIdList() { DARABONBA_PTR_GET(preBizProcessIdList_, vector<int64_t>) };
    inline UpdateBizEntityRequestUpdateCommandBizProcess& setPreBizProcessIdList(const vector<int64_t> & preBizProcessIdList) { DARABONBA_PTR_SET_VALUE(preBizProcessIdList_, preBizProcessIdList) };
    inline UpdateBizEntityRequestUpdateCommandBizProcess& setPreBizProcessIdList(vector<int64_t> && preBizProcessIdList) { DARABONBA_PTR_SET_RVALUE(preBizProcessIdList_, preBizProcessIdList) };


    // refBizEntityIdList Field Functions 
    bool hasRefBizEntityIdList() const { return this->refBizEntityIdList_ != nullptr;};
    void deleteRefBizEntityIdList() { this->refBizEntityIdList_ = nullptr;};
    inline const vector<int64_t> & refBizEntityIdList() const { DARABONBA_PTR_GET_CONST(refBizEntityIdList_, vector<int64_t>) };
    inline vector<int64_t> refBizEntityIdList() { DARABONBA_PTR_GET(refBizEntityIdList_, vector<int64_t>) };
    inline UpdateBizEntityRequestUpdateCommandBizProcess& setRefBizEntityIdList(const vector<int64_t> & refBizEntityIdList) { DARABONBA_PTR_SET_VALUE(refBizEntityIdList_, refBizEntityIdList) };
    inline UpdateBizEntityRequestUpdateCommandBizProcess& setRefBizEntityIdList(vector<int64_t> && refBizEntityIdList) { DARABONBA_PTR_SET_RVALUE(refBizEntityIdList_, refBizEntityIdList) };


  protected:
    std::shared_ptr<vector<int64_t>> bizEventEntityIdList_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> displayName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ownerUserId_ = nullptr;
    std::shared_ptr<vector<int64_t>> preBizProcessIdList_ = nullptr;
    std::shared_ptr<vector<int64_t>> refBizEntityIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
