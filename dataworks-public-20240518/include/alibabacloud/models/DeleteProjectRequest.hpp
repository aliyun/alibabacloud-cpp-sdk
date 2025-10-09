// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DeleteProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    DeleteProjectRequest() = default ;
    DeleteProjectRequest(const DeleteProjectRequest &) = default ;
    DeleteProjectRequest(DeleteProjectRequest &&) = default ;
    DeleteProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteProjectRequest() = default ;
    DeleteProjectRequest& operator=(const DeleteProjectRequest &) = default ;
    DeleteProjectRequest& operator=(DeleteProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteProjectRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://dataworks.console.aliyun.com/workspace/list) and go to the Workspace page to query the ID.
    // 
    // You must configure this parameter to specify the DataWorks workspace to which the API operation is applied.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
