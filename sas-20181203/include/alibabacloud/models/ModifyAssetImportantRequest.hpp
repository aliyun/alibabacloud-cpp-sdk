// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYASSETIMPORTANTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYASSETIMPORTANTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyAssetImportantRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAssetImportantRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImportantCode, importantCode_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAssetImportantRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImportantCode, importantCode_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    ModifyAssetImportantRequest() = default ;
    ModifyAssetImportantRequest(const ModifyAssetImportantRequest &) = default ;
    ModifyAssetImportantRequest(ModifyAssetImportantRequest &&) = default ;
    ModifyAssetImportantRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAssetImportantRequest() = default ;
    ModifyAssetImportantRequest& operator=(const ModifyAssetImportantRequest &) = default ;
    ModifyAssetImportantRequest& operator=(ModifyAssetImportantRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->importantCode_ == nullptr
        && this->uuidList_ == nullptr; };
    // importantCode Field Functions 
    bool hasImportantCode() const { return this->importantCode_ != nullptr;};
    void deleteImportantCode() { this->importantCode_ = nullptr;};
    inline int32_t getImportantCode() const { DARABONBA_PTR_GET_DEFAULT(importantCode_, 0) };
    inline ModifyAssetImportantRequest& setImportantCode(int32_t importantCode) { DARABONBA_PTR_SET_VALUE(importantCode_, importantCode) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline string getUuidList() const { DARABONBA_PTR_GET_DEFAULT(uuidList_, "") };
    inline ModifyAssetImportantRequest& setUuidList(string uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };


  protected:
    // The importance of the asset. Valid values:
    // 
    // *   **0**: test
    // *   **1**: normal
    // *   **2**: important
    shared_ptr<int32_t> importantCode_ {};
    // The UUIDs of servers. Separate multiple UUIDs with commas (,).
    // 
    // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
    shared_ptr<string> uuidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
