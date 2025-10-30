// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLELINEAGEBYTASKIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTABLELINEAGEBYTASKIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetTableLineageByTaskIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableLineageByTaskIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(TableLineageByTaskIdQuery, tableLineageByTaskIdQueryShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableLineageByTaskIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(TableLineageByTaskIdQuery, tableLineageByTaskIdQueryShrink_);
    };
    GetTableLineageByTaskIdShrinkRequest() = default ;
    GetTableLineageByTaskIdShrinkRequest(const GetTableLineageByTaskIdShrinkRequest &) = default ;
    GetTableLineageByTaskIdShrinkRequest(GetTableLineageByTaskIdShrinkRequest &&) = default ;
    GetTableLineageByTaskIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableLineageByTaskIdShrinkRequest() = default ;
    GetTableLineageByTaskIdShrinkRequest& operator=(const GetTableLineageByTaskIdShrinkRequest &) = default ;
    GetTableLineageByTaskIdShrinkRequest& operator=(GetTableLineageByTaskIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && return this->tableLineageByTaskIdQueryShrink_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetTableLineageByTaskIdShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // tableLineageByTaskIdQueryShrink Field Functions 
    bool hasTableLineageByTaskIdQueryShrink() const { return this->tableLineageByTaskIdQueryShrink_ != nullptr;};
    void deleteTableLineageByTaskIdQueryShrink() { this->tableLineageByTaskIdQueryShrink_ = nullptr;};
    inline string tableLineageByTaskIdQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(tableLineageByTaskIdQueryShrink_, "") };
    inline GetTableLineageByTaskIdShrinkRequest& setTableLineageByTaskIdQueryShrink(string tableLineageByTaskIdQueryShrink) { DARABONBA_PTR_SET_VALUE(tableLineageByTaskIdQueryShrink_, tableLineageByTaskIdQueryShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tableLineageByTaskIdQueryShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
