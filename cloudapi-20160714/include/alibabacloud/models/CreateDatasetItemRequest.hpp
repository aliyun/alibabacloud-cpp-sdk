// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateDatasetItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateDatasetItemRequest() = default ;
    CreateDatasetItemRequest(const CreateDatasetItemRequest &) = default ;
    CreateDatasetItemRequest(CreateDatasetItemRequest &&) = default ;
    CreateDatasetItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetItemRequest() = default ;
    CreateDatasetItemRequest& operator=(const CreateDatasetItemRequest &) = default ;
    CreateDatasetItemRequest& operator=(CreateDatasetItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetId_ == nullptr
        && return this->description_ == nullptr && return this->expiredTime_ == nullptr && return this->securityToken_ == nullptr && return this->value_ == nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline CreateDatasetItemRequest& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDatasetItemRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline CreateDatasetItemRequest& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreateDatasetItemRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateDatasetItemRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> datasetId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> expiredTime_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
