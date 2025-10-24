// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPACKAGERESPONSEBODYDATAALLOWEDPROJECTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPACKAGERESPONSEBODYDATAALLOWEDPROJECTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetPackageResponseBodyDataAllowedProjectList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPackageResponseBodyDataAllowedProjectList& obj) { 
      DARABONBA_PTR_TO_JSON(label, label_);
      DARABONBA_PTR_TO_JSON(project, project_);
    };
    friend void from_json(const Darabonba::Json& j, GetPackageResponseBodyDataAllowedProjectList& obj) { 
      DARABONBA_PTR_FROM_JSON(label, label_);
      DARABONBA_PTR_FROM_JSON(project, project_);
    };
    GetPackageResponseBodyDataAllowedProjectList() = default ;
    GetPackageResponseBodyDataAllowedProjectList(const GetPackageResponseBodyDataAllowedProjectList &) = default ;
    GetPackageResponseBodyDataAllowedProjectList(GetPackageResponseBodyDataAllowedProjectList &&) = default ;
    GetPackageResponseBodyDataAllowedProjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPackageResponseBodyDataAllowedProjectList() = default ;
    GetPackageResponseBodyDataAllowedProjectList& operator=(const GetPackageResponseBodyDataAllowedProjectList &) = default ;
    GetPackageResponseBodyDataAllowedProjectList& operator=(GetPackageResponseBodyDataAllowedProjectList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->label_ == nullptr
        && return this->project_ == nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetPackageResponseBodyDataAllowedProjectList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline GetPackageResponseBodyDataAllowedProjectList& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


  protected:
    // The security level for sensitive data.
    std::shared_ptr<string> label_ = nullptr;
    // The name of the MaxCompute project.
    std::shared_ptr<string> project_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
