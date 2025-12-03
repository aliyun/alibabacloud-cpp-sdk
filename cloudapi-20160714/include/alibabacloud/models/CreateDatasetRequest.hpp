// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDatasetRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(DatasetType, datasetType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(DatasetType, datasetType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateDatasetRequest() = default ;
    CreateDatasetRequest(const CreateDatasetRequest &) = default ;
    CreateDatasetRequest(CreateDatasetRequest &&) = default ;
    CreateDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetRequest() = default ;
    CreateDatasetRequest& operator=(const CreateDatasetRequest &) = default ;
    CreateDatasetRequest& operator=(CreateDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetName_ == nullptr
        && return this->datasetType_ == nullptr && return this->description_ == nullptr && return this->securityToken_ == nullptr && return this->tag_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline CreateDatasetRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // datasetType Field Functions 
    bool hasDatasetType() const { return this->datasetType_ != nullptr;};
    void deleteDatasetType() { this->datasetType_ = nullptr;};
    inline string datasetType() const { DARABONBA_PTR_GET_DEFAULT(datasetType_, "") };
    inline CreateDatasetRequest& setDatasetType(string datasetType) { DARABONBA_PTR_SET_VALUE(datasetType_, datasetType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDatasetRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreateDatasetRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDatasetRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDatasetRequestTag>) };
    inline vector<CreateDatasetRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateDatasetRequestTag>) };
    inline CreateDatasetRequest& setTag(const vector<CreateDatasetRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDatasetRequest& setTag(vector<CreateDatasetRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The name of the dataset.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The type of the dataset. Valid values:
    // 
    // * JWT_BLOCKING: a JSON Web Token (JWT) blacklist
    // * IP_WHITELIST_CIDR : an IP address whitelist
    // * PARAMETER_ACCESS : parameter-based access control
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The tag of objects that match the rule. You can specify multiple tags.
    std::shared_ptr<vector<CreateDatasetRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
