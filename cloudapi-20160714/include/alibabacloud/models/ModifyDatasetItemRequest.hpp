// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATASETITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATASETITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyDatasetItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDatasetItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetItemId, datasetItemId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDatasetItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetItemId, datasetItemId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    ModifyDatasetItemRequest() = default ;
    ModifyDatasetItemRequest(const ModifyDatasetItemRequest &) = default ;
    ModifyDatasetItemRequest(ModifyDatasetItemRequest &&) = default ;
    ModifyDatasetItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDatasetItemRequest() = default ;
    ModifyDatasetItemRequest& operator=(const ModifyDatasetItemRequest &) = default ;
    ModifyDatasetItemRequest& operator=(ModifyDatasetItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetId_ == nullptr
        && return this->datasetItemId_ == nullptr && return this->description_ == nullptr && return this->expiredTime_ == nullptr && return this->securityToken_ == nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline ModifyDatasetItemRequest& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetItemId Field Functions 
    bool hasDatasetItemId() const { return this->datasetItemId_ != nullptr;};
    void deleteDatasetItemId() { this->datasetItemId_ = nullptr;};
    inline string datasetItemId() const { DARABONBA_PTR_GET_DEFAULT(datasetItemId_, "") };
    inline ModifyDatasetItemRequest& setDatasetItemId(string datasetItemId) { DARABONBA_PTR_SET_VALUE(datasetItemId_, datasetItemId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyDatasetItemRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline ModifyDatasetItemRequest& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyDatasetItemRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the dataset.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetId_ = nullptr;
    // The ID of the data entry.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetItemId_ = nullptr;
    // The description of the data entry. The description cannot exceed 180 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The time in UTC when the data entry expires. The time is in the **yyyy-MM-ddTHH:mm:ssZ** format.
    std::shared_ptr<string> expiredTime_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
