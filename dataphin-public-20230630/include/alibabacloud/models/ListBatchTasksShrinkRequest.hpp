// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBATCHTASKSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBATCHTASKSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListBatchTasksShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBatchTasksShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchTaskQuery, batchTaskQueryShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBatchTasksShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchTaskQuery, batchTaskQueryShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    ListBatchTasksShrinkRequest() = default ;
    ListBatchTasksShrinkRequest(const ListBatchTasksShrinkRequest &) = default ;
    ListBatchTasksShrinkRequest(ListBatchTasksShrinkRequest &&) = default ;
    ListBatchTasksShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBatchTasksShrinkRequest() = default ;
    ListBatchTasksShrinkRequest& operator=(const ListBatchTasksShrinkRequest &) = default ;
    ListBatchTasksShrinkRequest& operator=(ListBatchTasksShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchTaskQueryShrink_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // batchTaskQueryShrink Field Functions 
    bool hasBatchTaskQueryShrink() const { return this->batchTaskQueryShrink_ != nullptr;};
    void deleteBatchTaskQueryShrink() { this->batchTaskQueryShrink_ = nullptr;};
    inline string getBatchTaskQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(batchTaskQueryShrink_, "") };
    inline ListBatchTasksShrinkRequest& setBatchTaskQueryShrink(string batchTaskQueryShrink) { DARABONBA_PTR_SET_VALUE(batchTaskQueryShrink_, batchTaskQueryShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListBatchTasksShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ListBatchTasksShrinkRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // This parameter is required.
    shared_ptr<string> batchTaskQueryShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
