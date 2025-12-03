// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHEAIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHEAIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eais20190624
{
namespace Models
{
  class AttachEaiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachEaiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClientInstanceId, clientInstanceId_);
      DARABONBA_PTR_TO_JSON(ElasticAcceleratedInstanceId, elasticAcceleratedInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachEaiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientInstanceId, clientInstanceId_);
      DARABONBA_PTR_FROM_JSON(ElasticAcceleratedInstanceId, elasticAcceleratedInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AttachEaiResponseBody() = default ;
    AttachEaiResponseBody(const AttachEaiResponseBody &) = default ;
    AttachEaiResponseBody(AttachEaiResponseBody &&) = default ;
    AttachEaiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachEaiResponseBody() = default ;
    AttachEaiResponseBody& operator=(const AttachEaiResponseBody &) = default ;
    AttachEaiResponseBody& operator=(AttachEaiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientInstanceId_ == nullptr
        && return this->elasticAcceleratedInstanceId_ == nullptr && return this->requestId_ == nullptr; };
    // clientInstanceId Field Functions 
    bool hasClientInstanceId() const { return this->clientInstanceId_ != nullptr;};
    void deleteClientInstanceId() { this->clientInstanceId_ = nullptr;};
    inline string clientInstanceId() const { DARABONBA_PTR_GET_DEFAULT(clientInstanceId_, "") };
    inline AttachEaiResponseBody& setClientInstanceId(string clientInstanceId) { DARABONBA_PTR_SET_VALUE(clientInstanceId_, clientInstanceId) };


    // elasticAcceleratedInstanceId Field Functions 
    bool hasElasticAcceleratedInstanceId() const { return this->elasticAcceleratedInstanceId_ != nullptr;};
    void deleteElasticAcceleratedInstanceId() { this->elasticAcceleratedInstanceId_ = nullptr;};
    inline string elasticAcceleratedInstanceId() const { DARABONBA_PTR_GET_DEFAULT(elasticAcceleratedInstanceId_, "") };
    inline AttachEaiResponseBody& setElasticAcceleratedInstanceId(string elasticAcceleratedInstanceId) { DARABONBA_PTR_SET_VALUE(elasticAcceleratedInstanceId_, elasticAcceleratedInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AttachEaiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> clientInstanceId_ = nullptr;
    std::shared_ptr<string> elasticAcceleratedInstanceId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eais20190624
#endif
