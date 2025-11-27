// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKBATCHTABLEACCESSPERMISSIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CHECKBATCHTABLEACCESSPERMISSIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CheckBatchTableAccessPermissionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckBatchTableAccessPermissionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, CheckBatchTableAccessPermissionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    CheckBatchTableAccessPermissionResponseBodyData() = default ;
    CheckBatchTableAccessPermissionResponseBodyData(const CheckBatchTableAccessPermissionResponseBodyData &) = default ;
    CheckBatchTableAccessPermissionResponseBodyData(CheckBatchTableAccessPermissionResponseBodyData &&) = default ;
    CheckBatchTableAccessPermissionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckBatchTableAccessPermissionResponseBodyData() = default ;
    CheckBatchTableAccessPermissionResponseBodyData& operator=(const CheckBatchTableAccessPermissionResponseBodyData &) = default ;
    CheckBatchTableAccessPermissionResponseBodyData& operator=(CheckBatchTableAccessPermissionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && return this->success_ == nullptr && return this->tableName_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline CheckBatchTableAccessPermissionResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline CheckBatchTableAccessPermissionResponseBodyData& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline CheckBatchTableAccessPermissionResponseBodyData& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> success_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
