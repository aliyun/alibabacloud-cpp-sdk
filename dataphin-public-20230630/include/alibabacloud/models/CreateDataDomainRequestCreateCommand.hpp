// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATADOMAINREQUESTCREATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATADOMAINREQUESTCREATECOMMAND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateDataDomainRequestCreateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataDomainRequestCreateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(Abbreviation, abbreviation_);
      DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataDomainRequestCreateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(Abbreviation, abbreviation_);
      DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
    };
    CreateDataDomainRequestCreateCommand() = default ;
    CreateDataDomainRequestCreateCommand(const CreateDataDomainRequestCreateCommand &) = default ;
    CreateDataDomainRequestCreateCommand(CreateDataDomainRequestCreateCommand &&) = default ;
    CreateDataDomainRequestCreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataDomainRequestCreateCommand() = default ;
    CreateDataDomainRequestCreateCommand& operator=(const CreateDataDomainRequestCreateCommand &) = default ;
    CreateDataDomainRequestCreateCommand& operator=(CreateDataDomainRequestCreateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abbreviation_ == nullptr
        && return this->bizUnitId_ == nullptr && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->name_ == nullptr && return this->parentId_ == nullptr; };
    // abbreviation Field Functions 
    bool hasAbbreviation() const { return this->abbreviation_ != nullptr;};
    void deleteAbbreviation() { this->abbreviation_ = nullptr;};
    inline string abbreviation() const { DARABONBA_PTR_GET_DEFAULT(abbreviation_, "") };
    inline CreateDataDomainRequestCreateCommand& setAbbreviation(string abbreviation) { DARABONBA_PTR_SET_VALUE(abbreviation_, abbreviation) };


    // bizUnitId Field Functions 
    bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
    void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
    inline int64_t bizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
    inline CreateDataDomainRequestCreateCommand& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDataDomainRequestCreateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateDataDomainRequestCreateCommand& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDataDomainRequestCreateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline CreateDataDomainRequestCreateCommand& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> abbreviation_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> bizUnitId_ = nullptr;
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
