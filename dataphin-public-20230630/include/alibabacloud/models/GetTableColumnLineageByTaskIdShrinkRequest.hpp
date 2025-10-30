// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLECOLUMNLINEAGEBYTASKIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTABLECOLUMNLINEAGEBYTASKIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetTableColumnLineageByTaskIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableColumnLineageByTaskIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(TableColumnLineageByTaskIdQuery, tableColumnLineageByTaskIdQueryShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableColumnLineageByTaskIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(TableColumnLineageByTaskIdQuery, tableColumnLineageByTaskIdQueryShrink_);
    };
    GetTableColumnLineageByTaskIdShrinkRequest() = default ;
    GetTableColumnLineageByTaskIdShrinkRequest(const GetTableColumnLineageByTaskIdShrinkRequest &) = default ;
    GetTableColumnLineageByTaskIdShrinkRequest(GetTableColumnLineageByTaskIdShrinkRequest &&) = default ;
    GetTableColumnLineageByTaskIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableColumnLineageByTaskIdShrinkRequest() = default ;
    GetTableColumnLineageByTaskIdShrinkRequest& operator=(const GetTableColumnLineageByTaskIdShrinkRequest &) = default ;
    GetTableColumnLineageByTaskIdShrinkRequest& operator=(GetTableColumnLineageByTaskIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && return this->tableColumnLineageByTaskIdQueryShrink_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetTableColumnLineageByTaskIdShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // tableColumnLineageByTaskIdQueryShrink Field Functions 
    bool hasTableColumnLineageByTaskIdQueryShrink() const { return this->tableColumnLineageByTaskIdQueryShrink_ != nullptr;};
    void deleteTableColumnLineageByTaskIdQueryShrink() { this->tableColumnLineageByTaskIdQueryShrink_ = nullptr;};
    inline string tableColumnLineageByTaskIdQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(tableColumnLineageByTaskIdQueryShrink_, "") };
    inline GetTableColumnLineageByTaskIdShrinkRequest& setTableColumnLineageByTaskIdQueryShrink(string tableColumnLineageByTaskIdQueryShrink) { DARABONBA_PTR_SET_VALUE(tableColumnLineageByTaskIdQueryShrink_, tableColumnLineageByTaskIdQueryShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tableColumnLineageByTaskIdQueryShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
