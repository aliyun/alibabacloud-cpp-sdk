// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMISSIONAPPLYORDERDETAILRESPONSEBODYAPPLYORDERDETAILAPPROVECONTENTPROJECTMETAOBJECTMETALISTCOLUMNMETALIST_HPP_
#define ALIBABACLOUD_MODELS_GETPERMISSIONAPPLYORDERDETAILRESPONSEBODYAPPLYORDERDETAILAPPROVECONTENTPROJECTMETAOBJECTMETALISTCOLUMNMETALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaListColumnMetaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaListColumnMetaList& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnActions, columnActions_);
      DARABONBA_PTR_TO_JSON(ColumnComment, columnComment_);
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaListColumnMetaList& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnActions, columnActions_);
      DARABONBA_PTR_FROM_JSON(ColumnComment, columnComment_);
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
    };
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaListColumnMetaList() = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaListColumnMetaList(const GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaListColumnMetaList &) = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaListColumnMetaList(GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaListColumnMetaList &&) = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaListColumnMetaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaListColumnMetaList() = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaListColumnMetaList& operator=(const GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaListColumnMetaList &) = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaListColumnMetaList& operator=(GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaListColumnMetaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnActions_ != nullptr
        && this->columnComment_ != nullptr && this->columnName_ != nullptr && this->securityLevel_ != nullptr; };
    // columnActions Field Functions 
    bool hasColumnActions() const { return this->columnActions_ != nullptr;};
    void deleteColumnActions() { this->columnActions_ = nullptr;};
    inline const vector<string> & columnActions() const { DARABONBA_PTR_GET_CONST(columnActions_, vector<string>) };
    inline vector<string> columnActions() { DARABONBA_PTR_GET(columnActions_, vector<string>) };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaListColumnMetaList& setColumnActions(const vector<string> & columnActions) { DARABONBA_PTR_SET_VALUE(columnActions_, columnActions) };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaListColumnMetaList& setColumnActions(vector<string> && columnActions) { DARABONBA_PTR_SET_RVALUE(columnActions_, columnActions) };


    // columnComment Field Functions 
    bool hasColumnComment() const { return this->columnComment_ != nullptr;};
    void deleteColumnComment() { this->columnComment_ = nullptr;};
    inline string columnComment() const { DARABONBA_PTR_GET_DEFAULT(columnComment_, "") };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaListColumnMetaList& setColumnComment(string columnComment) { DARABONBA_PTR_SET_VALUE(columnComment_, columnComment) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaListColumnMetaList& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline string securityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, "") };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaListColumnMetaList& setSecurityLevel(string securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


  protected:
    std::shared_ptr<vector<string>> columnActions_ = nullptr;
    // The description of the column on which you request permissions.
    std::shared_ptr<string> columnComment_ = nullptr;
    // The name of the column on which you request permissions.
    std::shared_ptr<string> columnName_ = nullptr;
    // The security level of the column on which you request permissions. Valid values: 0 to 9.
    std::shared_ptr<string> securityLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
