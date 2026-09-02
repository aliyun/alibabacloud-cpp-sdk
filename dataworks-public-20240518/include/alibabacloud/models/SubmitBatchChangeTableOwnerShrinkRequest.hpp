// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITBATCHCHANGETABLEOWNERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITBATCHCHANGETABLEOWNERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class SubmitBatchChangeTableOwnerShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitBatchChangeTableOwnerShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableCrossTenant, enableCrossTenant_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(TableMetaEntityIds, tableMetaEntityIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitBatchChangeTableOwnerShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableCrossTenant, enableCrossTenant_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(TableMetaEntityIds, tableMetaEntityIdsShrink_);
    };
    SubmitBatchChangeTableOwnerShrinkRequest() = default ;
    SubmitBatchChangeTableOwnerShrinkRequest(const SubmitBatchChangeTableOwnerShrinkRequest &) = default ;
    SubmitBatchChangeTableOwnerShrinkRequest(SubmitBatchChangeTableOwnerShrinkRequest &&) = default ;
    SubmitBatchChangeTableOwnerShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitBatchChangeTableOwnerShrinkRequest() = default ;
    SubmitBatchChangeTableOwnerShrinkRequest& operator=(const SubmitBatchChangeTableOwnerShrinkRequest &) = default ;
    SubmitBatchChangeTableOwnerShrinkRequest& operator=(SubmitBatchChangeTableOwnerShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableCrossTenant_ == nullptr
        && this->owner_ == nullptr && this->tableMetaEntityIdsShrink_ == nullptr; };
    // enableCrossTenant Field Functions 
    bool hasEnableCrossTenant() const { return this->enableCrossTenant_ != nullptr;};
    void deleteEnableCrossTenant() { this->enableCrossTenant_ = nullptr;};
    inline bool getEnableCrossTenant() const { DARABONBA_PTR_GET_DEFAULT(enableCrossTenant_, false) };
    inline SubmitBatchChangeTableOwnerShrinkRequest& setEnableCrossTenant(bool enableCrossTenant) { DARABONBA_PTR_SET_VALUE(enableCrossTenant_, enableCrossTenant) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline SubmitBatchChangeTableOwnerShrinkRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // tableMetaEntityIdsShrink Field Functions 
    bool hasTableMetaEntityIdsShrink() const { return this->tableMetaEntityIdsShrink_ != nullptr;};
    void deleteTableMetaEntityIdsShrink() { this->tableMetaEntityIdsShrink_ = nullptr;};
    inline string getTableMetaEntityIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(tableMetaEntityIdsShrink_, "") };
    inline SubmitBatchChangeTableOwnerShrinkRequest& setTableMetaEntityIdsShrink(string tableMetaEntityIdsShrink) { DARABONBA_PTR_SET_VALUE(tableMetaEntityIdsShrink_, tableMetaEntityIdsShrink) };


  protected:
    shared_ptr<bool> enableCrossTenant_ {};
    // This parameter is required.
    shared_ptr<string> owner_ {};
    // This parameter is required.
    shared_ptr<string> tableMetaEntityIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
