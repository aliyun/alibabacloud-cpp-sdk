// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEOTPCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEOTPCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class DeleteOtpConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOtpConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteOtpConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    DeleteOtpConfigRequest() = default ;
    DeleteOtpConfigRequest(const DeleteOtpConfigRequest &) = default ;
    DeleteOtpConfigRequest(DeleteOtpConfigRequest &&) = default ;
    DeleteOtpConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOtpConfigRequest() = default ;
    DeleteOtpConfigRequest& operator=(const DeleteOtpConfigRequest &) = default ;
    DeleteOtpConfigRequest& operator=(DeleteOtpConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->username_ != nullptr; };
    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline DeleteOtpConfigRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
