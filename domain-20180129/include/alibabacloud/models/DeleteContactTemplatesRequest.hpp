// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTACTTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTACTTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class DeleteContactTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContactTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegistrantProfileIds, registrantProfileIds_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteContactTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegistrantProfileIds, registrantProfileIds_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    DeleteContactTemplatesRequest() = default ;
    DeleteContactTemplatesRequest(const DeleteContactTemplatesRequest &) = default ;
    DeleteContactTemplatesRequest(DeleteContactTemplatesRequest &&) = default ;
    DeleteContactTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteContactTemplatesRequest() = default ;
    DeleteContactTemplatesRequest& operator=(const DeleteContactTemplatesRequest &) = default ;
    DeleteContactTemplatesRequest& operator=(DeleteContactTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->registrantProfileIds_ == nullptr
        && this->userClientIp_ == nullptr; };
    // registrantProfileIds Field Functions 
    bool hasRegistrantProfileIds() const { return this->registrantProfileIds_ != nullptr;};
    void deleteRegistrantProfileIds() { this->registrantProfileIds_ = nullptr;};
    inline string getRegistrantProfileIds() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileIds_, "") };
    inline DeleteContactTemplatesRequest& setRegistrantProfileIds(string registrantProfileIds) { DARABONBA_PTR_SET_VALUE(registrantProfileIds_, registrantProfileIds) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline DeleteContactTemplatesRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    shared_ptr<string> registrantProfileIds_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
