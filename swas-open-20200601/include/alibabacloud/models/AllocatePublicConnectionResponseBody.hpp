// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATEPUBLICCONNECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATEPUBLICCONNECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class AllocatePublicConnectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocatePublicConnectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PublicConnection, publicConnection_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocatePublicConnectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PublicConnection, publicConnection_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AllocatePublicConnectionResponseBody() = default ;
    AllocatePublicConnectionResponseBody(const AllocatePublicConnectionResponseBody &) = default ;
    AllocatePublicConnectionResponseBody(AllocatePublicConnectionResponseBody &&) = default ;
    AllocatePublicConnectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocatePublicConnectionResponseBody() = default ;
    AllocatePublicConnectionResponseBody& operator=(const AllocatePublicConnectionResponseBody &) = default ;
    AllocatePublicConnectionResponseBody& operator=(AllocatePublicConnectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->publicConnection_ == nullptr
        && this->requestId_ == nullptr; };
    // publicConnection Field Functions 
    bool hasPublicConnection() const { return this->publicConnection_ != nullptr;};
    void deletePublicConnection() { this->publicConnection_ = nullptr;};
    inline string getPublicConnection() const { DARABONBA_PTR_GET_DEFAULT(publicConnection_, "") };
    inline AllocatePublicConnectionResponseBody& setPublicConnection(string publicConnection) { DARABONBA_PTR_SET_VALUE(publicConnection_, publicConnection) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AllocatePublicConnectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The public endpoint.
    shared_ptr<string> publicConnection_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
