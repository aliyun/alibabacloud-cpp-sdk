// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALERTDESTINATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALERTDESTINATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class DeleteAlertDestinationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlertDestinationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlertDestinationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    DeleteAlertDestinationRequest() = default ;
    DeleteAlertDestinationRequest(const DeleteAlertDestinationRequest &) = default ;
    DeleteAlertDestinationRequest(DeleteAlertDestinationRequest &&) = default ;
    DeleteAlertDestinationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlertDestinationRequest() = default ;
    DeleteAlertDestinationRequest& operator=(const DeleteAlertDestinationRequest &) = default ;
    DeleteAlertDestinationRequest& operator=(DeleteAlertDestinationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DeleteAlertDestinationRequest& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    shared_ptr<int32_t> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
