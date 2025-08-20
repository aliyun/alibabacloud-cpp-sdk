// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBUILDRECORDBYRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBUILDRECORDBYRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateBuildRecordByRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBuildRecordByRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BuildRecordId, buildRecordId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBuildRecordByRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildRecordId, buildRecordId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
    };
    CreateBuildRecordByRecordRequest() = default ;
    CreateBuildRecordByRecordRequest(const CreateBuildRecordByRecordRequest &) = default ;
    CreateBuildRecordByRecordRequest(CreateBuildRecordByRecordRequest &&) = default ;
    CreateBuildRecordByRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBuildRecordByRecordRequest() = default ;
    CreateBuildRecordByRecordRequest& operator=(const CreateBuildRecordByRecordRequest &) = default ;
    CreateBuildRecordByRecordRequest& operator=(CreateBuildRecordByRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildRecordId_ != nullptr
        && this->instanceId_ != nullptr && this->repoId_ != nullptr; };
    // buildRecordId Field Functions 
    bool hasBuildRecordId() const { return this->buildRecordId_ != nullptr;};
    void deleteBuildRecordId() { this->buildRecordId_ = nullptr;};
    inline string buildRecordId() const { DARABONBA_PTR_GET_DEFAULT(buildRecordId_, "") };
    inline CreateBuildRecordByRecordRequest& setBuildRecordId(string buildRecordId) { DARABONBA_PTR_SET_VALUE(buildRecordId_, buildRecordId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateBuildRecordByRecordRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline CreateBuildRecordByRecordRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


  protected:
    // The ID of the image building record.
    // 
    // This parameter is required.
    std::shared_ptr<string> buildRecordId_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the image repository.
    // 
    // This parameter is required.
    std::shared_ptr<string> repoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
