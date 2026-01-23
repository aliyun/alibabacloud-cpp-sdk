// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLELINEAGESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTABLELINEAGESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetTableLineagesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableLineagesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FilterQuery, filterQueryShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableLineagesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterQuery, filterQueryShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
    };
    GetTableLineagesShrinkRequest() = default ;
    GetTableLineagesShrinkRequest(const GetTableLineagesShrinkRequest &) = default ;
    GetTableLineagesShrinkRequest(GetTableLineagesShrinkRequest &&) = default ;
    GetTableLineagesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableLineagesShrinkRequest() = default ;
    GetTableLineagesShrinkRequest& operator=(const GetTableLineagesShrinkRequest &) = default ;
    GetTableLineagesShrinkRequest& operator=(GetTableLineagesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterQueryShrink_ == nullptr
        && this->opTenantId_ == nullptr && this->tableGuid_ == nullptr; };
    // filterQueryShrink Field Functions 
    bool hasFilterQueryShrink() const { return this->filterQueryShrink_ != nullptr;};
    void deleteFilterQueryShrink() { this->filterQueryShrink_ = nullptr;};
    inline string getFilterQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(filterQueryShrink_, "") };
    inline GetTableLineagesShrinkRequest& setFilterQueryShrink(string filterQueryShrink) { DARABONBA_PTR_SET_VALUE(filterQueryShrink_, filterQueryShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetTableLineagesShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string getTableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline GetTableLineagesShrinkRequest& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


  protected:
    shared_ptr<string> filterQueryShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<string> tableGuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
