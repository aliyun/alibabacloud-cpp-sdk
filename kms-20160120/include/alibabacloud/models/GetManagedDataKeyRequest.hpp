// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMANAGEDDATAKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMANAGEDDATAKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetManagedDataKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetManagedDataKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataKeyName, dataKeyName_);
      DARABONBA_PTR_TO_JSON(DataKeyVersionId, dataKeyVersionId_);
      DARABONBA_PTR_TO_JSON(UseLatest, useLatest_);
    };
    friend void from_json(const Darabonba::Json& j, GetManagedDataKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataKeyName, dataKeyName_);
      DARABONBA_PTR_FROM_JSON(DataKeyVersionId, dataKeyVersionId_);
      DARABONBA_PTR_FROM_JSON(UseLatest, useLatest_);
    };
    GetManagedDataKeyRequest() = default ;
    GetManagedDataKeyRequest(const GetManagedDataKeyRequest &) = default ;
    GetManagedDataKeyRequest(GetManagedDataKeyRequest &&) = default ;
    GetManagedDataKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetManagedDataKeyRequest() = default ;
    GetManagedDataKeyRequest& operator=(const GetManagedDataKeyRequest &) = default ;
    GetManagedDataKeyRequest& operator=(GetManagedDataKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataKeyName_ == nullptr
        && this->dataKeyVersionId_ == nullptr && this->useLatest_ == nullptr; };
    // dataKeyName Field Functions 
    bool hasDataKeyName() const { return this->dataKeyName_ != nullptr;};
    void deleteDataKeyName() { this->dataKeyName_ = nullptr;};
    inline string getDataKeyName() const { DARABONBA_PTR_GET_DEFAULT(dataKeyName_, "") };
    inline GetManagedDataKeyRequest& setDataKeyName(string dataKeyName) { DARABONBA_PTR_SET_VALUE(dataKeyName_, dataKeyName) };


    // dataKeyVersionId Field Functions 
    bool hasDataKeyVersionId() const { return this->dataKeyVersionId_ != nullptr;};
    void deleteDataKeyVersionId() { this->dataKeyVersionId_ = nullptr;};
    inline string getDataKeyVersionId() const { DARABONBA_PTR_GET_DEFAULT(dataKeyVersionId_, "") };
    inline GetManagedDataKeyRequest& setDataKeyVersionId(string dataKeyVersionId) { DARABONBA_PTR_SET_VALUE(dataKeyVersionId_, dataKeyVersionId) };


    // useLatest Field Functions 
    bool hasUseLatest() const { return this->useLatest_ != nullptr;};
    void deleteUseLatest() { this->useLatest_ = nullptr;};
    inline bool getUseLatest() const { DARABONBA_PTR_GET_DEFAULT(useLatest_, false) };
    inline GetManagedDataKeyRequest& setUseLatest(bool useLatest) { DARABONBA_PTR_SET_VALUE(useLatest_, useLatest) };


  protected:
    // The name of the managed data key (DK). This parameter is required.
    shared_ptr<string> dataKeyName_ {};
    // The version number of the managed data key (DK). This parameter is optional. If you set this parameter to a specific version number, the plaintext of the specified version of the managed data key (DK) is returned.
    shared_ptr<string> dataKeyVersionId_ {};
    // Specifies whether to use the latest version of the managed data key (DK) when no version number is provided. Valid values:
    // 
    // - true: Returns the latest version of the managed data key (DK).
    // - false: Returns the first version of the managed data key (DK).
    // 
    // Default value: false.
    shared_ptr<bool> useLatest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
