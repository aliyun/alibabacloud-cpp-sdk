// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSOURCETABLEMETASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSOURCETABLEMETASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetSourceTableMetaShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSourceTableMetaShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, contextShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(Query, queryShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetSourceTableMetaShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, contextShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(Query, queryShrink_);
    };
    GetSourceTableMetaShrinkRequest() = default ;
    GetSourceTableMetaShrinkRequest(const GetSourceTableMetaShrinkRequest &) = default ;
    GetSourceTableMetaShrinkRequest(GetSourceTableMetaShrinkRequest &&) = default ;
    GetSourceTableMetaShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSourceTableMetaShrinkRequest() = default ;
    GetSourceTableMetaShrinkRequest& operator=(const GetSourceTableMetaShrinkRequest &) = default ;
    GetSourceTableMetaShrinkRequest& operator=(GetSourceTableMetaShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contextShrink_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr && this->queryShrink_ == nullptr; };
    // contextShrink Field Functions 
    bool hasContextShrink() const { return this->contextShrink_ != nullptr;};
    void deleteContextShrink() { this->contextShrink_ = nullptr;};
    inline string getContextShrink() const { DARABONBA_PTR_GET_DEFAULT(contextShrink_, "") };
    inline GetSourceTableMetaShrinkRequest& setContextShrink(string contextShrink) { DARABONBA_PTR_SET_VALUE(contextShrink_, contextShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetSourceTableMetaShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline GetSourceTableMetaShrinkRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // queryShrink Field Functions 
    bool hasQueryShrink() const { return this->queryShrink_ != nullptr;};
    void deleteQueryShrink() { this->queryShrink_ = nullptr;};
    inline string getQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(queryShrink_, "") };
    inline GetSourceTableMetaShrinkRequest& setQueryShrink(string queryShrink) { DARABONBA_PTR_SET_VALUE(queryShrink_, queryShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> contextShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
    // This parameter is required.
    shared_ptr<string> queryShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
