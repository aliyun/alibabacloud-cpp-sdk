// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCAINSTANCESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCAINSTANCESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class GetCAInstanceStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCAInstanceStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCAInstanceStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetCAInstanceStatusRequest() = default ;
    GetCAInstanceStatusRequest(const GetCAInstanceStatusRequest &) = default ;
    GetCAInstanceStatusRequest(GetCAInstanceStatusRequest &&) = default ;
    GetCAInstanceStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCAInstanceStatusRequest() = default ;
    GetCAInstanceStatusRequest& operator=(const GetCAInstanceStatusRequest &) = default ;
    GetCAInstanceStatusRequest& operator=(GetCAInstanceStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifier_ == nullptr
        && this->instanceId_ == nullptr; };
    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline GetCAInstanceStatusRequest& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetCAInstanceStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The unique identifier of the client certificate or server-side certificate to query.
    // 
    // > Call [ListClientCertificate](https://help.aliyun.com/document_detail/330884.html) to query the unique identifiers of all client certificates and server-side certificates.
    shared_ptr<string> identifier_ {};
    // The ID of the private CA instance to query.
    // 
    // > After you purchase a private CA instance in the [CAS console](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist), you can go to the **Private Certificates** page and view the **details** of the instance to obtain its ID.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
