// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOBUILDRECORDLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOBUILDRECORDLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoBuildRecordLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoBuildRecordLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BuildRecordId, buildRecordId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepoBuildRecordLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildRecordId, buildRecordId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
    };
    ListRepoBuildRecordLogRequest() = default ;
    ListRepoBuildRecordLogRequest(const ListRepoBuildRecordLogRequest &) = default ;
    ListRepoBuildRecordLogRequest(ListRepoBuildRecordLogRequest &&) = default ;
    ListRepoBuildRecordLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoBuildRecordLogRequest() = default ;
    ListRepoBuildRecordLogRequest& operator=(const ListRepoBuildRecordLogRequest &) = default ;
    ListRepoBuildRecordLogRequest& operator=(ListRepoBuildRecordLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buildRecordId_ == nullptr
        && this->instanceId_ == nullptr && this->offset_ == nullptr && this->repoId_ == nullptr; };
    // buildRecordId Field Functions 
    bool hasBuildRecordId() const { return this->buildRecordId_ != nullptr;};
    void deleteBuildRecordId() { this->buildRecordId_ = nullptr;};
    inline string getBuildRecordId() const { DARABONBA_PTR_GET_DEFAULT(buildRecordId_, "") };
    inline ListRepoBuildRecordLogRequest& setBuildRecordId(string buildRecordId) { DARABONBA_PTR_SET_VALUE(buildRecordId_, buildRecordId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListRepoBuildRecordLogRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline ListRepoBuildRecordLogRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline ListRepoBuildRecordLogRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


  protected:
    // The ID of the image building record.
    // 
    // This parameter is required.
    shared_ptr<string> buildRecordId_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The offset of log lines.
    shared_ptr<int32_t> offset_ {};
    // The ID of the image repository.
    shared_ptr<string> repoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
