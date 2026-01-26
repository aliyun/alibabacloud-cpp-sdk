// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMHOSTNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMHOSTNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteCustomHostnameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomHostnameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostnameId, hostnameId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomHostnameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostnameId, hostnameId_);
    };
    DeleteCustomHostnameRequest() = default ;
    DeleteCustomHostnameRequest(const DeleteCustomHostnameRequest &) = default ;
    DeleteCustomHostnameRequest(DeleteCustomHostnameRequest &&) = default ;
    DeleteCustomHostnameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomHostnameRequest() = default ;
    DeleteCustomHostnameRequest& operator=(const DeleteCustomHostnameRequest &) = default ;
    DeleteCustomHostnameRequest& operator=(DeleteCustomHostnameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostnameId_ == nullptr; };
    // hostnameId Field Functions 
    bool hasHostnameId() const { return this->hostnameId_ != nullptr;};
    void deleteHostnameId() { this->hostnameId_ = nullptr;};
    inline int64_t getHostnameId() const { DARABONBA_PTR_GET_DEFAULT(hostnameId_, 0L) };
    inline DeleteCustomHostnameRequest& setHostnameId(int64_t hostnameId) { DARABONBA_PTR_SET_VALUE(hostnameId_, hostnameId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> hostnameId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
