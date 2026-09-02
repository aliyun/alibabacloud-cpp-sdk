// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITBATCHCHANGETABLEOWNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITBATCHCHANGETABLEOWNERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class SubmitBatchChangeTableOwnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitBatchChangeTableOwnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableCrossTenant, enableCrossTenant_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(TableMetaEntityIds, tableMetaEntityIds_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitBatchChangeTableOwnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableCrossTenant, enableCrossTenant_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(TableMetaEntityIds, tableMetaEntityIds_);
    };
    SubmitBatchChangeTableOwnerRequest() = default ;
    SubmitBatchChangeTableOwnerRequest(const SubmitBatchChangeTableOwnerRequest &) = default ;
    SubmitBatchChangeTableOwnerRequest(SubmitBatchChangeTableOwnerRequest &&) = default ;
    SubmitBatchChangeTableOwnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitBatchChangeTableOwnerRequest() = default ;
    SubmitBatchChangeTableOwnerRequest& operator=(const SubmitBatchChangeTableOwnerRequest &) = default ;
    SubmitBatchChangeTableOwnerRequest& operator=(SubmitBatchChangeTableOwnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableCrossTenant_ == nullptr
        && this->owner_ == nullptr && this->tableMetaEntityIds_ == nullptr; };
    // enableCrossTenant Field Functions 
    bool hasEnableCrossTenant() const { return this->enableCrossTenant_ != nullptr;};
    void deleteEnableCrossTenant() { this->enableCrossTenant_ = nullptr;};
    inline bool getEnableCrossTenant() const { DARABONBA_PTR_GET_DEFAULT(enableCrossTenant_, false) };
    inline SubmitBatchChangeTableOwnerRequest& setEnableCrossTenant(bool enableCrossTenant) { DARABONBA_PTR_SET_VALUE(enableCrossTenant_, enableCrossTenant) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline SubmitBatchChangeTableOwnerRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // tableMetaEntityIds Field Functions 
    bool hasTableMetaEntityIds() const { return this->tableMetaEntityIds_ != nullptr;};
    void deleteTableMetaEntityIds() { this->tableMetaEntityIds_ = nullptr;};
    inline const vector<string> & getTableMetaEntityIds() const { DARABONBA_PTR_GET_CONST(tableMetaEntityIds_, vector<string>) };
    inline vector<string> getTableMetaEntityIds() { DARABONBA_PTR_GET(tableMetaEntityIds_, vector<string>) };
    inline SubmitBatchChangeTableOwnerRequest& setTableMetaEntityIds(const vector<string> & tableMetaEntityIds) { DARABONBA_PTR_SET_VALUE(tableMetaEntityIds_, tableMetaEntityIds) };
    inline SubmitBatchChangeTableOwnerRequest& setTableMetaEntityIds(vector<string> && tableMetaEntityIds) { DARABONBA_PTR_SET_RVALUE(tableMetaEntityIds_, tableMetaEntityIds) };


  protected:
    shared_ptr<bool> enableCrossTenant_ {};
    // This parameter is required.
    shared_ptr<string> owner_ {};
    // This parameter is required.
    shared_ptr<vector<string>> tableMetaEntityIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
