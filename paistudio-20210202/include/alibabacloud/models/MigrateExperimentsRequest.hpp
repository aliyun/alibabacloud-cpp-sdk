// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATEEXPERIMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MIGRATEEXPERIMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class MigrateExperimentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrateExperimentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(DestFolderId, destFolderId_);
      DARABONBA_PTR_TO_JSON(IsOwner, isOwner_);
      DARABONBA_PTR_TO_JSON(SourceExpId, sourceExpId_);
      DARABONBA_PTR_TO_JSON(UpdateIfExists, updateIfExists_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, MigrateExperimentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(DestFolderId, destFolderId_);
      DARABONBA_PTR_FROM_JSON(IsOwner, isOwner_);
      DARABONBA_PTR_FROM_JSON(SourceExpId, sourceExpId_);
      DARABONBA_PTR_FROM_JSON(UpdateIfExists, updateIfExists_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    MigrateExperimentsRequest() = default ;
    MigrateExperimentsRequest(const MigrateExperimentsRequest &) = default ;
    MigrateExperimentsRequest(MigrateExperimentsRequest &&) = default ;
    MigrateExperimentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrateExperimentsRequest() = default ;
    MigrateExperimentsRequest& operator=(const MigrateExperimentsRequest &) = default ;
    MigrateExperimentsRequest& operator=(MigrateExperimentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->destFolderId_ == nullptr && return this->isOwner_ == nullptr && return this->sourceExpId_ == nullptr && return this->updateIfExists_ == nullptr && return this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline MigrateExperimentsRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // destFolderId Field Functions 
    bool hasDestFolderId() const { return this->destFolderId_ != nullptr;};
    void deleteDestFolderId() { this->destFolderId_ = nullptr;};
    inline string destFolderId() const { DARABONBA_PTR_GET_DEFAULT(destFolderId_, "") };
    inline MigrateExperimentsRequest& setDestFolderId(string destFolderId) { DARABONBA_PTR_SET_VALUE(destFolderId_, destFolderId) };


    // isOwner Field Functions 
    bool hasIsOwner() const { return this->isOwner_ != nullptr;};
    void deleteIsOwner() { this->isOwner_ = nullptr;};
    inline bool isOwner() const { DARABONBA_PTR_GET_DEFAULT(isOwner_, false) };
    inline MigrateExperimentsRequest& setIsOwner(bool isOwner) { DARABONBA_PTR_SET_VALUE(isOwner_, isOwner) };


    // sourceExpId Field Functions 
    bool hasSourceExpId() const { return this->sourceExpId_ != nullptr;};
    void deleteSourceExpId() { this->sourceExpId_ = nullptr;};
    inline int64_t sourceExpId() const { DARABONBA_PTR_GET_DEFAULT(sourceExpId_, 0L) };
    inline MigrateExperimentsRequest& setSourceExpId(int64_t sourceExpId) { DARABONBA_PTR_SET_VALUE(sourceExpId_, sourceExpId) };


    // updateIfExists Field Functions 
    bool hasUpdateIfExists() const { return this->updateIfExists_ != nullptr;};
    void deleteUpdateIfExists() { this->updateIfExists_ = nullptr;};
    inline bool updateIfExists() const { DARABONBA_PTR_GET_DEFAULT(updateIfExists_, false) };
    inline MigrateExperimentsRequest& setUpdateIfExists(bool updateIfExists) { DARABONBA_PTR_SET_VALUE(updateIfExists_, updateIfExists) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline MigrateExperimentsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> accessibility_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> destFolderId_ = nullptr;
    std::shared_ptr<bool> isOwner_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> sourceExpId_ = nullptr;
    std::shared_ptr<bool> updateIfExists_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
