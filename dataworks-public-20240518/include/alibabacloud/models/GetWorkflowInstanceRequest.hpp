// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetWorkflowInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetWorkflowInstanceRequest() = default ;
    GetWorkflowInstanceRequest(const GetWorkflowInstanceRequest &) = default ;
    GetWorkflowInstanceRequest(GetWorkflowInstanceRequest &&) = default ;
    GetWorkflowInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowInstanceRequest() = default ;
    GetWorkflowInstanceRequest& operator=(const GetWorkflowInstanceRequest &) = default ;
    GetWorkflowInstanceRequest& operator=(GetWorkflowInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetWorkflowInstanceRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The ID of the workflow instance.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
