// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEAUTHSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEAUTHSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListServiceAuthsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceAuthsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(serviceAuthType, serviceAuthType_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceAuthsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(serviceAuthType, serviceAuthType_);
    };
    ListServiceAuthsRequest() = default ;
    ListServiceAuthsRequest(const ListServiceAuthsRequest &) = default ;
    ListServiceAuthsRequest(ListServiceAuthsRequest &&) = default ;
    ListServiceAuthsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceAuthsRequest() = default ;
    ListServiceAuthsRequest& operator=(const ListServiceAuthsRequest &) = default ;
    ListServiceAuthsRequest& operator=(ListServiceAuthsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceAuthType_ == nullptr; };
    // serviceAuthType Field Functions 
    bool hasServiceAuthType() const { return this->serviceAuthType_ != nullptr;};
    void deleteServiceAuthType() { this->serviceAuthType_ = nullptr;};
    inline string serviceAuthType() const { DARABONBA_PTR_GET_DEFAULT(serviceAuthType_, "") };
    inline ListServiceAuthsRequest& setServiceAuthType(string serviceAuthType) { DARABONBA_PTR_SET_VALUE(serviceAuthType_, serviceAuthType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> serviceAuthType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
