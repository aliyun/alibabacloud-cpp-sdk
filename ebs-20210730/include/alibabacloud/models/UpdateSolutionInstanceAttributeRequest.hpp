// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESOLUTIONINSTANCEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESOLUTIONINSTANCEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class UpdateSolutionInstanceAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSolutionInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SolutionInstanceId, solutionInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSolutionInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SolutionInstanceId, solutionInstanceId_);
    };
    UpdateSolutionInstanceAttributeRequest() = default ;
    UpdateSolutionInstanceAttributeRequest(const UpdateSolutionInstanceAttributeRequest &) = default ;
    UpdateSolutionInstanceAttributeRequest(UpdateSolutionInstanceAttributeRequest &&) = default ;
    UpdateSolutionInstanceAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSolutionInstanceAttributeRequest() = default ;
    UpdateSolutionInstanceAttributeRequest& operator=(const UpdateSolutionInstanceAttributeRequest &) = default ;
    UpdateSolutionInstanceAttributeRequest& operator=(UpdateSolutionInstanceAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->regionId_ == nullptr && return this->solutionInstanceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateSolutionInstanceAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateSolutionInstanceAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateSolutionInstanceAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateSolutionInstanceAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // solutionInstanceId Field Functions 
    bool hasSolutionInstanceId() const { return this->solutionInstanceId_ != nullptr;};
    void deleteSolutionInstanceId() { this->solutionInstanceId_ = nullptr;};
    inline string solutionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(solutionInstanceId_, "") };
    inline UpdateSolutionInstanceAttributeRequest& setSolutionInstanceId(string solutionInstanceId) { DARABONBA_PTR_SET_VALUE(solutionInstanceId_, solutionInstanceId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that it is unique among different requests. The **ClientToken** value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the instance.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the region where the dedicated block storage cluster resides. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> solutionInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
