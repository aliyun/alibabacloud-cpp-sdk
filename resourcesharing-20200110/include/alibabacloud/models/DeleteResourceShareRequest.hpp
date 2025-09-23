// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERESOURCESHAREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERESOURCESHAREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class DeleteResourceShareRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteResourceShareRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceShareId, resourceShareId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteResourceShareRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceShareId, resourceShareId_);
    };
    DeleteResourceShareRequest() = default ;
    DeleteResourceShareRequest(const DeleteResourceShareRequest &) = default ;
    DeleteResourceShareRequest(DeleteResourceShareRequest &&) = default ;
    DeleteResourceShareRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteResourceShareRequest() = default ;
    DeleteResourceShareRequest& operator=(const DeleteResourceShareRequest &) = default ;
    DeleteResourceShareRequest& operator=(DeleteResourceShareRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceShareId_ != nullptr; };
    // resourceShareId Field Functions 
    bool hasResourceShareId() const { return this->resourceShareId_ != nullptr;};
    void deleteResourceShareId() { this->resourceShareId_ = nullptr;};
    inline string resourceShareId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareId_, "") };
    inline DeleteResourceShareRequest& setResourceShareId(string resourceShareId) { DARABONBA_PTR_SET_VALUE(resourceShareId_, resourceShareId) };


  protected:
    // The ID of the resource share.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceShareId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
