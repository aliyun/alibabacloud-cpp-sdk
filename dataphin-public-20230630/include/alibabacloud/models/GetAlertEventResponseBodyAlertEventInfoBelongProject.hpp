// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTEVENTRESPONSEBODYALERTEVENTINFOBELONGPROJECT_HPP_
#define ALIBABACLOUD_MODELS_GETALERTEVENTRESPONSEBODYALERTEVENTINFOBELONGPROJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAlertEventResponseBodyAlertEventInfoBelongProject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertEventResponseBodyAlertEventInfoBelongProject& obj) { 
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertEventResponseBodyAlertEventInfoBelongProject& obj) { 
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    GetAlertEventResponseBodyAlertEventInfoBelongProject() = default ;
    GetAlertEventResponseBodyAlertEventInfoBelongProject(const GetAlertEventResponseBodyAlertEventInfoBelongProject &) = default ;
    GetAlertEventResponseBodyAlertEventInfoBelongProject(GetAlertEventResponseBodyAlertEventInfoBelongProject &&) = default ;
    GetAlertEventResponseBodyAlertEventInfoBelongProject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertEventResponseBodyAlertEventInfoBelongProject() = default ;
    GetAlertEventResponseBodyAlertEventInfoBelongProject& operator=(const GetAlertEventResponseBodyAlertEventInfoBelongProject &) = default ;
    GetAlertEventResponseBodyAlertEventInfoBelongProject& operator=(GetAlertEventResponseBodyAlertEventInfoBelongProject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizName_ != nullptr
        && this->projectName_ != nullptr; };
    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string bizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline GetAlertEventResponseBodyAlertEventInfoBelongProject& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetAlertEventResponseBodyAlertEventInfoBelongProject& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    std::shared_ptr<string> bizName_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
