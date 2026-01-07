// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESECRETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESECRETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateSecretRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSecretRequest& obj) { 
      DARABONBA_PTR_TO_JSON(secretData, secretData_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSecretRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(secretData, secretData_);
    };
    UpdateSecretRequest() = default ;
    UpdateSecretRequest(const UpdateSecretRequest &) = default ;
    UpdateSecretRequest(UpdateSecretRequest &&) = default ;
    UpdateSecretRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSecretRequest() = default ;
    UpdateSecretRequest& operator=(const UpdateSecretRequest &) = default ;
    UpdateSecretRequest& operator=(UpdateSecretRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->secretData_ == nullptr; };
    // secretData Field Functions 
    bool hasSecretData() const { return this->secretData_ != nullptr;};
    void deleteSecretData() { this->secretData_ = nullptr;};
    inline string getSecretData() const { DARABONBA_PTR_GET_DEFAULT(secretData_, "") };
    inline UpdateSecretRequest& setSecretData(string secretData) { DARABONBA_PTR_SET_VALUE(secretData_, secretData) };


  protected:
    shared_ptr<string> secretData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
