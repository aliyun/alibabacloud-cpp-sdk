// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKUSERPROJECTNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKUSERPROJECTNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CheckUserProjectNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckUserProjectNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, CheckUserProjectNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    CheckUserProjectNameRequest() = default ;
    CheckUserProjectNameRequest(const CheckUserProjectNameRequest &) = default ;
    CheckUserProjectNameRequest(CheckUserProjectNameRequest &&) = default ;
    CheckUserProjectNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckUserProjectNameRequest() = default ;
    CheckUserProjectNameRequest& operator=(const CheckUserProjectNameRequest &) = default ;
    CheckUserProjectNameRequest& operator=(CheckUserProjectNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectName_ == nullptr; };
    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CheckUserProjectNameRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The name of the real-time log delivery task.
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
