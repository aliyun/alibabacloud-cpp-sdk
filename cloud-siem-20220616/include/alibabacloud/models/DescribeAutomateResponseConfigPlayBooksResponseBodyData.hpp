// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOMATERESPONSECONFIGPLAYBOOKSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOMATERESPONSECONFIGPLAYBOOKSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAutomateResponseConfigPlayBooksResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutomateResponseConfigPlayBooksResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutomateResponseConfigPlayBooksResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeAutomateResponseConfigPlayBooksResponseBodyData() = default ;
    DescribeAutomateResponseConfigPlayBooksResponseBodyData(const DescribeAutomateResponseConfigPlayBooksResponseBodyData &) = default ;
    DescribeAutomateResponseConfigPlayBooksResponseBodyData(DescribeAutomateResponseConfigPlayBooksResponseBodyData &&) = default ;
    DescribeAutomateResponseConfigPlayBooksResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutomateResponseConfigPlayBooksResponseBodyData() = default ;
    DescribeAutomateResponseConfigPlayBooksResponseBodyData& operator=(const DescribeAutomateResponseConfigPlayBooksResponseBodyData &) = default ;
    DescribeAutomateResponseConfigPlayBooksResponseBodyData& operator=(DescribeAutomateResponseConfigPlayBooksResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->displayName_ != nullptr && this->name_ != nullptr && this->paramType_ != nullptr && this->uuid_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAutomateResponseConfigPlayBooksResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribeAutomateResponseConfigPlayBooksResponseBodyData& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAutomateResponseConfigPlayBooksResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string paramType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline DescribeAutomateResponseConfigPlayBooksResponseBodyData& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeAutomateResponseConfigPlayBooksResponseBodyData& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The description of the playbook.
    std::shared_ptr<string> description_ = nullptr;
    // The display name of the playbook.
    std::shared_ptr<string> displayName_ = nullptr;
    // The unique identifier name of the playbook.
    std::shared_ptr<string> name_ = nullptr;
    // The input parameter template of the playbook. Valid values:
    // 
    // *   template-ip: IP address
    // *   template-process: process
    // *   template-filee: file
    std::shared_ptr<string> paramType_ = nullptr;
    // The UUID of the playbook.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
