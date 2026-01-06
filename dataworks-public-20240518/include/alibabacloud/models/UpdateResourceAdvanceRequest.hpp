// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateResourceAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      // resourceFileObject_ is stream
      DARABONBA_PTR_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      // resourceFileObject_ is stream
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
    };
    UpdateResourceAdvanceRequest() = default ;
    UpdateResourceAdvanceRequest(const UpdateResourceAdvanceRequest &) = default ;
    UpdateResourceAdvanceRequest(UpdateResourceAdvanceRequest &&) = default ;
    UpdateResourceAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceAdvanceRequest() = default ;
    UpdateResourceAdvanceRequest& operator=(const UpdateResourceAdvanceRequest &) = default ;
    UpdateResourceAdvanceRequest& operator=(UpdateResourceAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->projectId_ == nullptr && this->resourceFileObject_ == nullptr && this->spec_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateResourceAdvanceRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateResourceAdvanceRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // resourceFileObject Field Functions 
    bool hasResourceFileObject() const { return this->resourceFileObject_ != nullptr;};
    void deleteResourceFileObject() { this->resourceFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getResourceFileObject() const { DARABONBA_GET(resourceFileObject_) };
    inline UpdateResourceAdvanceRequest& setResourceFileObject(shared_ptr<Darabonba::IStream> resourceFileObject) { DARABONBA_SET_VALUE(resourceFileObject_, resourceFileObject) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline UpdateResourceAdvanceRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    // The unique identifier of the Data Studio file resource.
    // 
    // >  This field is of type Long in SDK versions prior to 8.0.0, and of type String in SDK version 8.0.0 and later. This change does not affect the normal use of the SDK; parameters are still returned according to the type defined in the SDK. Compilation failures due to the type change may occur only when upgrading the SDK across version 8.0.0, in which case users need to manually correct the data type.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The specific file stream or OSS download link contained in the resource.
    // 
    // >  This field allows users to provide a file stream or an OSS download link. When providing an OSS download link, ensure that the OSS link is publicly accessible. A presigned URL is recommended.
    shared_ptr<Darabonba::IStream> resourceFileObject_ {};
    // The unique identifier of the Data Studio file resource.
    // 
    // >  Prior to SDK version 8.0.0, this field is of type Long. In SDK version 8.0.0 and later, it is of type String. This change does not affect the normal use of the SDK. The parameter is returned based on the type defined in the SDK. Compilation failures caused by the type change may occur only when you upgrade the SDK across version 8.0.0. In this case, you must manually update the data type.
    // 
    // This parameter is required.
    shared_ptr<string> spec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
