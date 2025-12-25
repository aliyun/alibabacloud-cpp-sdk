// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteInstanceRequestDeleteInstanceRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class DeleteInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteInstanceRequest, deleteInstanceRequest_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteInstanceRequest, deleteInstanceRequest_);
    };
    DeleteInstanceRequest() = default ;
    DeleteInstanceRequest(const DeleteInstanceRequest &) = default ;
    DeleteInstanceRequest(DeleteInstanceRequest &&) = default ;
    DeleteInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInstanceRequest() = default ;
    DeleteInstanceRequest& operator=(const DeleteInstanceRequest &) = default ;
    DeleteInstanceRequest& operator=(DeleteInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteInstanceRequest_ == nullptr; };
    // deleteInstanceRequest Field Functions 
    bool hasDeleteInstanceRequest() const { return this->deleteInstanceRequest_ != nullptr;};
    void deleteDeleteInstanceRequest() { this->deleteInstanceRequest_ = nullptr;};
    inline const DeleteInstanceRequestDeleteInstanceRequest & deleteInstanceRequest() const { DARABONBA_PTR_GET_CONST(deleteInstanceRequest_, DeleteInstanceRequestDeleteInstanceRequest) };
    inline DeleteInstanceRequestDeleteInstanceRequest deleteInstanceRequest() { DARABONBA_PTR_GET(deleteInstanceRequest_, DeleteInstanceRequestDeleteInstanceRequest) };
    inline DeleteInstanceRequest& setDeleteInstanceRequest(const DeleteInstanceRequestDeleteInstanceRequest & deleteInstanceRequest) { DARABONBA_PTR_SET_VALUE(deleteInstanceRequest_, deleteInstanceRequest) };
    inline DeleteInstanceRequest& setDeleteInstanceRequest(DeleteInstanceRequestDeleteInstanceRequest && deleteInstanceRequest) { DARABONBA_PTR_SET_RVALUE(deleteInstanceRequest_, deleteInstanceRequest) };


  protected:
    // This parameter is required.
    std::shared_ptr<DeleteInstanceRequestDeleteInstanceRequest> deleteInstanceRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
