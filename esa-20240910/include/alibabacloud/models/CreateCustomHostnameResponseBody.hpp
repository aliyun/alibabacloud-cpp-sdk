// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMHOSTNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMHOSTNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateCustomHostnameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomHostnameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(HostnameId, hostnameId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomHostnameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(HostnameId, hostnameId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCustomHostnameResponseBody() = default ;
    CreateCustomHostnameResponseBody(const CreateCustomHostnameResponseBody &) = default ;
    CreateCustomHostnameResponseBody(CreateCustomHostnameResponseBody &&) = default ;
    CreateCustomHostnameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomHostnameResponseBody() = default ;
    CreateCustomHostnameResponseBody& operator=(const CreateCustomHostnameResponseBody &) = default ;
    CreateCustomHostnameResponseBody& operator=(CreateCustomHostnameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostname_ == nullptr
        && this->hostnameId_ == nullptr && this->requestId_ == nullptr; };
    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline CreateCustomHostnameResponseBody& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // hostnameId Field Functions 
    bool hasHostnameId() const { return this->hostnameId_ != nullptr;};
    void deleteHostnameId() { this->hostnameId_ = nullptr;};
    inline int64_t getHostnameId() const { DARABONBA_PTR_GET_DEFAULT(hostnameId_, 0L) };
    inline CreateCustomHostnameResponseBody& setHostnameId(int64_t hostnameId) { DARABONBA_PTR_SET_VALUE(hostnameId_, hostnameId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCustomHostnameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> hostname_ {};
    shared_ptr<int64_t> hostnameId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
