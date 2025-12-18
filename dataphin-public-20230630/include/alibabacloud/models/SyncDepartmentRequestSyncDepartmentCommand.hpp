// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCDEPARTMENTREQUESTSYNCDEPARTMENTCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_SYNCDEPARTMENTREQUESTSYNCDEPARTMENTCOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SyncDepartmentRequestSyncDepartmentCommandDepartmentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class SyncDepartmentRequestSyncDepartmentCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncDepartmentRequestSyncDepartmentCommand& obj) { 
      DARABONBA_PTR_TO_JSON(DepartmentList, departmentList_);
    };
    friend void from_json(const Darabonba::Json& j, SyncDepartmentRequestSyncDepartmentCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(DepartmentList, departmentList_);
    };
    SyncDepartmentRequestSyncDepartmentCommand() = default ;
    SyncDepartmentRequestSyncDepartmentCommand(const SyncDepartmentRequestSyncDepartmentCommand &) = default ;
    SyncDepartmentRequestSyncDepartmentCommand(SyncDepartmentRequestSyncDepartmentCommand &&) = default ;
    SyncDepartmentRequestSyncDepartmentCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncDepartmentRequestSyncDepartmentCommand() = default ;
    SyncDepartmentRequestSyncDepartmentCommand& operator=(const SyncDepartmentRequestSyncDepartmentCommand &) = default ;
    SyncDepartmentRequestSyncDepartmentCommand& operator=(SyncDepartmentRequestSyncDepartmentCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->departmentList_ == nullptr; };
    // departmentList Field Functions 
    bool hasDepartmentList() const { return this->departmentList_ != nullptr;};
    void deleteDepartmentList() { this->departmentList_ = nullptr;};
    inline const vector<Models::SyncDepartmentRequestSyncDepartmentCommandDepartmentList> & departmentList() const { DARABONBA_PTR_GET_CONST(departmentList_, vector<Models::SyncDepartmentRequestSyncDepartmentCommandDepartmentList>) };
    inline vector<Models::SyncDepartmentRequestSyncDepartmentCommandDepartmentList> departmentList() { DARABONBA_PTR_GET(departmentList_, vector<Models::SyncDepartmentRequestSyncDepartmentCommandDepartmentList>) };
    inline SyncDepartmentRequestSyncDepartmentCommand& setDepartmentList(const vector<Models::SyncDepartmentRequestSyncDepartmentCommandDepartmentList> & departmentList) { DARABONBA_PTR_SET_VALUE(departmentList_, departmentList) };
    inline SyncDepartmentRequestSyncDepartmentCommand& setDepartmentList(vector<Models::SyncDepartmentRequestSyncDepartmentCommandDepartmentList> && departmentList) { DARABONBA_PTR_SET_RVALUE(departmentList_, departmentList) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::SyncDepartmentRequestSyncDepartmentCommandDepartmentList>> departmentList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
