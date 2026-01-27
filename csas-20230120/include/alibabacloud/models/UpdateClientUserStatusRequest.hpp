// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLIENTUSERSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLIENTUSERSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateClientUserStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateClientUserStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateClientUserStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateClientUserStatusRequest() = default ;
    UpdateClientUserStatusRequest(const UpdateClientUserStatusRequest &) = default ;
    UpdateClientUserStatusRequest(UpdateClientUserStatusRequest &&) = default ;
    UpdateClientUserStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateClientUserStatusRequest() = default ;
    UpdateClientUserStatusRequest& operator=(const UpdateClientUserStatusRequest &) = default ;
    UpdateClientUserStatusRequest& operator=(UpdateClientUserStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->status_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateClientUserStatusRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateClientUserStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // This parameter is required.
    shared_ptr<string> id_ {};
    // This parameter is required.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
