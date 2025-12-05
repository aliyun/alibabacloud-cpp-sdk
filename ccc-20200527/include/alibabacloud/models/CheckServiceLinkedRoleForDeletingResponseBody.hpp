// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSERVICELINKEDROLEFORDELETINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKSERVICELINKEDROLEFORDELETINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200527
{
namespace Models
{
  class CheckServiceLinkedRoleForDeletingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckServiceLinkedRoleForDeletingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeleTable, deleTable_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoleUsages, roleUsages_);
    };
    friend void from_json(const Darabonba::Json& j, CheckServiceLinkedRoleForDeletingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleTable, deleTable_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoleUsages, roleUsages_);
    };
    CheckServiceLinkedRoleForDeletingResponseBody() = default ;
    CheckServiceLinkedRoleForDeletingResponseBody(const CheckServiceLinkedRoleForDeletingResponseBody &) = default ;
    CheckServiceLinkedRoleForDeletingResponseBody(CheckServiceLinkedRoleForDeletingResponseBody &&) = default ;
    CheckServiceLinkedRoleForDeletingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckServiceLinkedRoleForDeletingResponseBody() = default ;
    CheckServiceLinkedRoleForDeletingResponseBody& operator=(const CheckServiceLinkedRoleForDeletingResponseBody &) = default ;
    CheckServiceLinkedRoleForDeletingResponseBody& operator=(CheckServiceLinkedRoleForDeletingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleTable_ == nullptr
        && return this->requestId_ == nullptr && return this->roleUsages_ == nullptr; };
    // deleTable Field Functions 
    bool hasDeleTable() const { return this->deleTable_ != nullptr;};
    void deleteDeleTable() { this->deleTable_ = nullptr;};
    inline bool deleTable() const { DARABONBA_PTR_GET_DEFAULT(deleTable_, false) };
    inline CheckServiceLinkedRoleForDeletingResponseBody& setDeleTable(bool deleTable) { DARABONBA_PTR_SET_VALUE(deleTable_, deleTable) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckServiceLinkedRoleForDeletingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleUsages Field Functions 
    bool hasRoleUsages() const { return this->roleUsages_ != nullptr;};
    void deleteRoleUsages() { this->roleUsages_ = nullptr;};
    inline const vector<CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages> & roleUsages() const { DARABONBA_PTR_GET_CONST(roleUsages_, vector<CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages>) };
    inline vector<CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages> roleUsages() { DARABONBA_PTR_GET(roleUsages_, vector<CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages>) };
    inline CheckServiceLinkedRoleForDeletingResponseBody& setRoleUsages(const vector<CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages> & roleUsages) { DARABONBA_PTR_SET_VALUE(roleUsages_, roleUsages) };
    inline CheckServiceLinkedRoleForDeletingResponseBody& setRoleUsages(vector<CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages> && roleUsages) { DARABONBA_PTR_SET_RVALUE(roleUsages_, roleUsages) };


  protected:
    std::shared_ptr<bool> deleTable_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages>> roleUsages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200527
#endif
