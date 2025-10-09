// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFUNCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFUNCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DeleteFunctionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFunctionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFunctionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    DeleteFunctionRequest() = default ;
    DeleteFunctionRequest(const DeleteFunctionRequest &) = default ;
    DeleteFunctionRequest(DeleteFunctionRequest &&) = default ;
    DeleteFunctionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFunctionRequest() = default ;
    DeleteFunctionRequest& operator=(const DeleteFunctionRequest &) = default ;
    DeleteFunctionRequest& operator=(DeleteFunctionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->projectId_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteFunctionRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline DeleteFunctionRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The ID of the UDF.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to obtain the ID. You can use this parameter to specify the DataWorks workspace on which you want to perform the API operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
