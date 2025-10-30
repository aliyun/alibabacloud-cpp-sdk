// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATASERVICEPROJECTMEMBERREQUESTADDCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_ADDDATASERVICEPROJECTMEMBERREQUESTADDCOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddDataServiceProjectMemberRequestAddCommandProjectMemberList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class AddDataServiceProjectMemberRequestAddCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDataServiceProjectMemberRequestAddCommand& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectMemberList, projectMemberList_);
    };
    friend void from_json(const Darabonba::Json& j, AddDataServiceProjectMemberRequestAddCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectMemberList, projectMemberList_);
    };
    AddDataServiceProjectMemberRequestAddCommand() = default ;
    AddDataServiceProjectMemberRequestAddCommand(const AddDataServiceProjectMemberRequestAddCommand &) = default ;
    AddDataServiceProjectMemberRequestAddCommand(AddDataServiceProjectMemberRequestAddCommand &&) = default ;
    AddDataServiceProjectMemberRequestAddCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDataServiceProjectMemberRequestAddCommand() = default ;
    AddDataServiceProjectMemberRequestAddCommand& operator=(const AddDataServiceProjectMemberRequestAddCommand &) = default ;
    AddDataServiceProjectMemberRequestAddCommand& operator=(AddDataServiceProjectMemberRequestAddCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectMemberList_ == nullptr; };
    // projectMemberList Field Functions 
    bool hasProjectMemberList() const { return this->projectMemberList_ != nullptr;};
    void deleteProjectMemberList() { this->projectMemberList_ = nullptr;};
    inline const vector<Models::AddDataServiceProjectMemberRequestAddCommandProjectMemberList> & projectMemberList() const { DARABONBA_PTR_GET_CONST(projectMemberList_, vector<Models::AddDataServiceProjectMemberRequestAddCommandProjectMemberList>) };
    inline vector<Models::AddDataServiceProjectMemberRequestAddCommandProjectMemberList> projectMemberList() { DARABONBA_PTR_GET(projectMemberList_, vector<Models::AddDataServiceProjectMemberRequestAddCommandProjectMemberList>) };
    inline AddDataServiceProjectMemberRequestAddCommand& setProjectMemberList(const vector<Models::AddDataServiceProjectMemberRequestAddCommandProjectMemberList> & projectMemberList) { DARABONBA_PTR_SET_VALUE(projectMemberList_, projectMemberList) };
    inline AddDataServiceProjectMemberRequestAddCommand& setProjectMemberList(vector<Models::AddDataServiceProjectMemberRequestAddCommandProjectMemberList> && projectMemberList) { DARABONBA_PTR_SET_RVALUE(projectMemberList_, projectMemberList) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::AddDataServiceProjectMemberRequestAddCommandProjectMemberList>> projectMemberList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
