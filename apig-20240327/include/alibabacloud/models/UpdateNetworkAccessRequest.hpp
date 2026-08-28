// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENETWORKACCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENETWORKACCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateNetworkAccessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNetworkAccessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(networkAccessType, networkAccessType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNetworkAccessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(networkAccessType, networkAccessType_);
    };
    UpdateNetworkAccessRequest() = default ;
    UpdateNetworkAccessRequest(const UpdateNetworkAccessRequest &) = default ;
    UpdateNetworkAccessRequest(UpdateNetworkAccessRequest &&) = default ;
    UpdateNetworkAccessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNetworkAccessRequest() = default ;
    UpdateNetworkAccessRequest& operator=(const UpdateNetworkAccessRequest &) = default ;
    UpdateNetworkAccessRequest& operator=(UpdateNetworkAccessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkAccessType_ == nullptr; };
    // networkAccessType Field Functions 
    bool hasNetworkAccessType() const { return this->networkAccessType_ != nullptr;};
    void deleteNetworkAccessType() { this->networkAccessType_ = nullptr;};
    inline string getNetworkAccessType() const { DARABONBA_PTR_GET_DEFAULT(networkAccessType_, "") };
    inline UpdateNetworkAccessRequest& setNetworkAccessType(string networkAccessType) { DARABONBA_PTR_SET_VALUE(networkAccessType_, networkAccessType) };


  protected:
    // This parameter is required.
    shared_ptr<string> networkAccessType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
