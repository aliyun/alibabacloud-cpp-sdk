// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHREVOKEPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHREVOKEPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GrantRevokeEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class BatchRevokePermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchRevokePermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(GrantRevokeEntries, grantRevokeEntries_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, BatchRevokePermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(GrantRevokeEntries, grantRevokeEntries_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    BatchRevokePermissionsRequest() = default ;
    BatchRevokePermissionsRequest(const BatchRevokePermissionsRequest &) = default ;
    BatchRevokePermissionsRequest(BatchRevokePermissionsRequest &&) = default ;
    BatchRevokePermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchRevokePermissionsRequest() = default ;
    BatchRevokePermissionsRequest& operator=(const BatchRevokePermissionsRequest &) = default ;
    BatchRevokePermissionsRequest& operator=(BatchRevokePermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->grantRevokeEntries_ == nullptr && return this->type_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline BatchRevokePermissionsRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // grantRevokeEntries Field Functions 
    bool hasGrantRevokeEntries() const { return this->grantRevokeEntries_ != nullptr;};
    void deleteGrantRevokeEntries() { this->grantRevokeEntries_ = nullptr;};
    inline const vector<GrantRevokeEntry> & grantRevokeEntries() const { DARABONBA_PTR_GET_CONST(grantRevokeEntries_, vector<GrantRevokeEntry>) };
    inline vector<GrantRevokeEntry> grantRevokeEntries() { DARABONBA_PTR_GET(grantRevokeEntries_, vector<GrantRevokeEntry>) };
    inline BatchRevokePermissionsRequest& setGrantRevokeEntries(const vector<GrantRevokeEntry> & grantRevokeEntries) { DARABONBA_PTR_SET_VALUE(grantRevokeEntries_, grantRevokeEntries) };
    inline BatchRevokePermissionsRequest& setGrantRevokeEntries(vector<GrantRevokeEntry> && grantRevokeEntries) { DARABONBA_PTR_SET_RVALUE(grantRevokeEntries_, grantRevokeEntries) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline BatchRevokePermissionsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The catalog ID.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The permissions to be revoked.
    std::shared_ptr<vector<GrantRevokeEntry>> grantRevokeEntries_ = nullptr;
    // The authorization type. Set the value to Hive.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
