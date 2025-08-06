// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENDCOORDINATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENDCOORDINATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class EndCoordinationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EndCoordinationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EndCoordinationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    EndCoordinationResponseBody() = default ;
    EndCoordinationResponseBody(const EndCoordinationResponseBody &) = default ;
    EndCoordinationResponseBody(EndCoordinationResponseBody &&) = default ;
    EndCoordinationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EndCoordinationResponseBody() = default ;
    EndCoordinationResponseBody& operator=(const EndCoordinationResponseBody &) = default ;
    EndCoordinationResponseBody& operator=(EndCoordinationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EndCoordinationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
