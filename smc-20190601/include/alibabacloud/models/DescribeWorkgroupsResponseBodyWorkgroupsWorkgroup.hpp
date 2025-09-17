// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWORKGROUPSRESPONSEBODYWORKGROUPSWORKGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWORKGROUPSRESPONSEBODYWORKGROUPSWORKGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupTags.hpp>
#include <alibabacloud/models/DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Warnings, warnings_);
      DARABONBA_PTR_TO_JSON(WorkgroupId, workgroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Warnings, warnings_);
      DARABONBA_PTR_FROM_JSON(WorkgroupId, workgroupId_);
    };
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup() = default ;
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup(const DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup &) = default ;
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup(DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup &&) = default ;
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup() = default ;
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup& operator=(const DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup &) = default ;
    DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup& operator=(DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->name_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr && this->warnings_ != nullptr && this->workgroupId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupTags) };
    inline Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupTags) };
    inline DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup& setTags(const Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup& setTags(Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // warnings Field Functions 
    bool hasWarnings() const { return this->warnings_ != nullptr;};
    void deleteWarnings() { this->warnings_ = nullptr;};
    inline const Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings & warnings() const { DARABONBA_PTR_GET_CONST(warnings_, Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings) };
    inline Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings warnings() { DARABONBA_PTR_GET(warnings_, Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings) };
    inline DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup& setWarnings(const Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings & warnings) { DARABONBA_PTR_SET_VALUE(warnings_, warnings) };
    inline DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup& setWarnings(Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings && warnings) { DARABONBA_PTR_SET_RVALUE(warnings_, warnings) };


    // workgroupId Field Functions 
    bool hasWorkgroupId() const { return this->workgroupId_ != nullptr;};
    void deleteWorkgroupId() { this->workgroupId_ = nullptr;};
    inline string workgroupId() const { DARABONBA_PTR_GET_DEFAULT(workgroupId_, "") };
    inline DescribeWorkgroupsResponseBodyWorkgroupsWorkgroup& setWorkgroupId(string workgroupId) { DARABONBA_PTR_SET_VALUE(workgroupId_, workgroupId) };


  protected:
    // The description of the workgroup.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the workgroup.
    std::shared_ptr<string> name_ = nullptr;
    // The state of the workgroup. Valid values:
    // 
    // *   NotStarted
    // *   InProgress
    // *   Cutover
    // *   Completed
    std::shared_ptr<string> status_ = nullptr;
    // The tag information of the workgroup.
    std::shared_ptr<Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupTags> tags_ = nullptr;
    // The alert information of the workgroup, which can contain multiple types of alerts.
    std::shared_ptr<Models::DescribeWorkgroupsResponseBodyWorkgroupsWorkgroupWarnings> warnings_ = nullptr;
    // The ID of the workgroup.
    std::shared_ptr<string> workgroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
