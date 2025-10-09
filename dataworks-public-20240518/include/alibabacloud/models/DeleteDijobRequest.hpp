// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDIJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDIJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DeleteDIJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDIJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDIJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    DeleteDIJobRequest() = default ;
    DeleteDIJobRequest(const DeleteDIJobRequest &) = default ;
    DeleteDIJobRequest(DeleteDIJobRequest &&) = default ;
    DeleteDIJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDIJobRequest() = default ;
    DeleteDIJobRequest& operator=(const DeleteDIJobRequest &) = default ;
    DeleteDIJobRequest& operator=(DeleteDIJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DIJobId_ != nullptr
        && this->id_ != nullptr && this->projectId_ != nullptr; };
    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t DIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline DeleteDIJobRequest& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteDIJobRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline DeleteDIJobRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is deprecated. Use the Id parameter instead.
    std::shared_ptr<int64_t> DIJobId_ = nullptr;
    // The ID of the synchronization task.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The DataWorks workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
