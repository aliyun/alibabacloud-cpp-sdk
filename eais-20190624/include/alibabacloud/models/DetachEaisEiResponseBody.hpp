// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHEAISEIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETACHEAISEIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eais20190624
{
namespace Models
{
  class DetachEaisEiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachEaisEiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachEaisEiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DetachEaisEiResponseBody() = default ;
    DetachEaisEiResponseBody(const DetachEaisEiResponseBody &) = default ;
    DetachEaisEiResponseBody(DetachEaisEiResponseBody &&) = default ;
    DetachEaisEiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachEaisEiResponseBody() = default ;
    DetachEaisEiResponseBody& operator=(const DetachEaisEiResponseBody &) = default ;
    DetachEaisEiResponseBody& operator=(DetachEaisEiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetachEaisEiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eais20190624
#endif
