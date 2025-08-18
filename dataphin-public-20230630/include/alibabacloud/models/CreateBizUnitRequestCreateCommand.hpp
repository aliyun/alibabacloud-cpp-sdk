// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBIZUNITREQUESTCREATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_CREATEBIZUNITREQUESTCREATECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateBizUnitRequestCreateCommandBizUnitAccountList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateBizUnitRequestCreateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBizUnitRequestCreateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(BizUnitAccountList, bizUnitAccountList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBizUnitRequestCreateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(BizUnitAccountList, bizUnitAccountList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreateBizUnitRequestCreateCommand() = default ;
    CreateBizUnitRequestCreateCommand(const CreateBizUnitRequestCreateCommand &) = default ;
    CreateBizUnitRequestCreateCommand(CreateBizUnitRequestCreateCommand &&) = default ;
    CreateBizUnitRequestCreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBizUnitRequestCreateCommand() = default ;
    CreateBizUnitRequestCreateCommand& operator=(const CreateBizUnitRequestCreateCommand &) = default ;
    CreateBizUnitRequestCreateCommand& operator=(CreateBizUnitRequestCreateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizUnitAccountList_ != nullptr
        && this->description_ != nullptr && this->displayName_ != nullptr && this->icon_ != nullptr && this->mode_ != nullptr && this->name_ != nullptr; };
    // bizUnitAccountList Field Functions 
    bool hasBizUnitAccountList() const { return this->bizUnitAccountList_ != nullptr;};
    void deleteBizUnitAccountList() { this->bizUnitAccountList_ = nullptr;};
    inline const vector<Models::CreateBizUnitRequestCreateCommandBizUnitAccountList> & bizUnitAccountList() const { DARABONBA_PTR_GET_CONST(bizUnitAccountList_, vector<Models::CreateBizUnitRequestCreateCommandBizUnitAccountList>) };
    inline vector<Models::CreateBizUnitRequestCreateCommandBizUnitAccountList> bizUnitAccountList() { DARABONBA_PTR_GET(bizUnitAccountList_, vector<Models::CreateBizUnitRequestCreateCommandBizUnitAccountList>) };
    inline CreateBizUnitRequestCreateCommand& setBizUnitAccountList(const vector<Models::CreateBizUnitRequestCreateCommandBizUnitAccountList> & bizUnitAccountList) { DARABONBA_PTR_SET_VALUE(bizUnitAccountList_, bizUnitAccountList) };
    inline CreateBizUnitRequestCreateCommand& setBizUnitAccountList(vector<Models::CreateBizUnitRequestCreateCommandBizUnitAccountList> && bizUnitAccountList) { DARABONBA_PTR_SET_RVALUE(bizUnitAccountList_, bizUnitAccountList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateBizUnitRequestCreateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateBizUnitRequestCreateCommand& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline CreateBizUnitRequestCreateCommand& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateBizUnitRequestCreateCommand& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateBizUnitRequestCreateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateBizUnitRequestCreateCommandBizUnitAccountList>> bizUnitAccountList_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> displayName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
