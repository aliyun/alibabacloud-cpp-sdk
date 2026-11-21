// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPSERTUMODELCOMMONSCHEMAREFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPSERTUMODELCOMMONSCHEMAREFREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpsertUmodelCommonSchemaRefRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpsertUmodelCommonSchemaRefRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(group, group_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, UpsertUmodelCommonSchemaRefRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(group, group_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    UpsertUmodelCommonSchemaRefRequest() = default ;
    UpsertUmodelCommonSchemaRefRequest(const UpsertUmodelCommonSchemaRefRequest &) = default ;
    UpsertUmodelCommonSchemaRefRequest(UpsertUmodelCommonSchemaRefRequest &&) = default ;
    UpsertUmodelCommonSchemaRefRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpsertUmodelCommonSchemaRefRequest() = default ;
    UpsertUmodelCommonSchemaRefRequest& operator=(const UpsertUmodelCommonSchemaRefRequest &) = default ;
    UpsertUmodelCommonSchemaRefRequest& operator=(UpsertUmodelCommonSchemaRefRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->group_ == nullptr && this->version_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpsertUmodelCommonSchemaRefRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline UpsertUmodelCommonSchemaRefRequest& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UpsertUmodelCommonSchemaRefRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Specifies whether to perform a dry run for this request. Valid values:
    // - true: Sends a check request without performing actual changes.
    // - false: Sends a normal request.
    // Default value: false.
    shared_ptr<bool> dryRun_ {};
    // The public Umodel schema group.
    // 
    // This parameter is required.
    shared_ptr<string> group_ {};
    // The version number.
    // 
    // This parameter is required.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
