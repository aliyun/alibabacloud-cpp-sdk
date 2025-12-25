// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENAMESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENAMESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteNamespaceRequestDeleteNamespaceRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class DeleteNamespaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNamespaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteNamespaceRequest, deleteNamespaceRequest_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNamespaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteNamespaceRequest, deleteNamespaceRequest_);
    };
    DeleteNamespaceRequest() = default ;
    DeleteNamespaceRequest(const DeleteNamespaceRequest &) = default ;
    DeleteNamespaceRequest(DeleteNamespaceRequest &&) = default ;
    DeleteNamespaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNamespaceRequest() = default ;
    DeleteNamespaceRequest& operator=(const DeleteNamespaceRequest &) = default ;
    DeleteNamespaceRequest& operator=(DeleteNamespaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteNamespaceRequest_ == nullptr; };
    // deleteNamespaceRequest Field Functions 
    bool hasDeleteNamespaceRequest() const { return this->deleteNamespaceRequest_ != nullptr;};
    void deleteDeleteNamespaceRequest() { this->deleteNamespaceRequest_ = nullptr;};
    inline const DeleteNamespaceRequestDeleteNamespaceRequest & deleteNamespaceRequest() const { DARABONBA_PTR_GET_CONST(deleteNamespaceRequest_, DeleteNamespaceRequestDeleteNamespaceRequest) };
    inline DeleteNamespaceRequestDeleteNamespaceRequest deleteNamespaceRequest() { DARABONBA_PTR_GET(deleteNamespaceRequest_, DeleteNamespaceRequestDeleteNamespaceRequest) };
    inline DeleteNamespaceRequest& setDeleteNamespaceRequest(const DeleteNamespaceRequestDeleteNamespaceRequest & deleteNamespaceRequest) { DARABONBA_PTR_SET_VALUE(deleteNamespaceRequest_, deleteNamespaceRequest) };
    inline DeleteNamespaceRequest& setDeleteNamespaceRequest(DeleteNamespaceRequestDeleteNamespaceRequest && deleteNamespaceRequest) { DARABONBA_PTR_SET_RVALUE(deleteNamespaceRequest_, deleteNamespaceRequest) };


  protected:
    // This parameter is required.
    std::shared_ptr<DeleteNamespaceRequestDeleteNamespaceRequest> deleteNamespaceRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
