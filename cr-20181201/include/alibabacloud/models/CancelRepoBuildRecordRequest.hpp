// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELREPOBUILDRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELREPOBUILDRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CancelRepoBuildRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelRepoBuildRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BuildRecordId, buildRecordId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelRepoBuildRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildRecordId, buildRecordId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
    };
    CancelRepoBuildRecordRequest() = default ;
    CancelRepoBuildRecordRequest(const CancelRepoBuildRecordRequest &) = default ;
    CancelRepoBuildRecordRequest(CancelRepoBuildRecordRequest &&) = default ;
    CancelRepoBuildRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelRepoBuildRecordRequest() = default ;
    CancelRepoBuildRecordRequest& operator=(const CancelRepoBuildRecordRequest &) = default ;
    CancelRepoBuildRecordRequest& operator=(CancelRepoBuildRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buildRecordId_ == nullptr
        && this->instanceId_ == nullptr && this->repoId_ == nullptr; };
    // buildRecordId Field Functions 
    bool hasBuildRecordId() const { return this->buildRecordId_ != nullptr;};
    void deleteBuildRecordId() { this->buildRecordId_ = nullptr;};
    inline string getBuildRecordId() const { DARABONBA_PTR_GET_DEFAULT(buildRecordId_, "") };
    inline CancelRepoBuildRecordRequest& setBuildRecordId(string buildRecordId) { DARABONBA_PTR_SET_VALUE(buildRecordId_, buildRecordId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CancelRepoBuildRecordRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline CancelRepoBuildRecordRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


  protected:
    // The ID of the image building record.
    // 
    // This parameter is required.
    shared_ptr<string> buildRecordId_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the image repository.
    // 
    // This parameter is required.
    shared_ptr<string> repoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
