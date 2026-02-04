// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDCDNPROJECTEXISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKDCDNPROJECTEXISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class CheckDcdnProjectExistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDcdnProjectExistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDcdnProjectExistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    CheckDcdnProjectExistRequest() = default ;
    CheckDcdnProjectExistRequest(const CheckDcdnProjectExistRequest &) = default ;
    CheckDcdnProjectExistRequest(CheckDcdnProjectExistRequest &&) = default ;
    CheckDcdnProjectExistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDcdnProjectExistRequest() = default ;
    CheckDcdnProjectExistRequest& operator=(const CheckDcdnProjectExistRequest &) = default ;
    CheckDcdnProjectExistRequest& operator=(CheckDcdnProjectExistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectName_ == nullptr; };
    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CheckDcdnProjectExistRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The name of a real-time log delivery project.
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
