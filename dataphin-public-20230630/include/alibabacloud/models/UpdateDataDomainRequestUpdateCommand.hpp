// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATADOMAINREQUESTUPDATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATADOMAINREQUESTUPDATECOMMAND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateDataDomainRequestUpdateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataDomainRequestUpdateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(Abbreviation, abbreviation_);
      DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_TO_JSON(DataDomainId, dataDomainId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataDomainRequestUpdateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(Abbreviation, abbreviation_);
      DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_FROM_JSON(DataDomainId, dataDomainId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
    };
    UpdateDataDomainRequestUpdateCommand() = default ;
    UpdateDataDomainRequestUpdateCommand(const UpdateDataDomainRequestUpdateCommand &) = default ;
    UpdateDataDomainRequestUpdateCommand(UpdateDataDomainRequestUpdateCommand &&) = default ;
    UpdateDataDomainRequestUpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataDomainRequestUpdateCommand() = default ;
    UpdateDataDomainRequestUpdateCommand& operator=(const UpdateDataDomainRequestUpdateCommand &) = default ;
    UpdateDataDomainRequestUpdateCommand& operator=(UpdateDataDomainRequestUpdateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abbreviation_ == nullptr
        && return this->bizUnitId_ == nullptr && return this->dataDomainId_ == nullptr && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->name_ == nullptr
        && return this->parentId_ == nullptr; };
    // abbreviation Field Functions 
    bool hasAbbreviation() const { return this->abbreviation_ != nullptr;};
    void deleteAbbreviation() { this->abbreviation_ = nullptr;};
    inline string abbreviation() const { DARABONBA_PTR_GET_DEFAULT(abbreviation_, "") };
    inline UpdateDataDomainRequestUpdateCommand& setAbbreviation(string abbreviation) { DARABONBA_PTR_SET_VALUE(abbreviation_, abbreviation) };


    // bizUnitId Field Functions 
    bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
    void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
    inline int64_t bizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
    inline UpdateDataDomainRequestUpdateCommand& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


    // dataDomainId Field Functions 
    bool hasDataDomainId() const { return this->dataDomainId_ != nullptr;};
    void deleteDataDomainId() { this->dataDomainId_ = nullptr;};
    inline int64_t dataDomainId() const { DARABONBA_PTR_GET_DEFAULT(dataDomainId_, 0L) };
    inline UpdateDataDomainRequestUpdateCommand& setDataDomainId(int64_t dataDomainId) { DARABONBA_PTR_SET_VALUE(dataDomainId_, dataDomainId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDataDomainRequestUpdateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateDataDomainRequestUpdateCommand& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDataDomainRequestUpdateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline UpdateDataDomainRequestUpdateCommand& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> abbreviation_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> bizUnitId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> dataDomainId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> displayName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> parentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
