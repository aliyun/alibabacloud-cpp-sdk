// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATECOORDINATIONCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATECOORDINATIONCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Metaspace20220307
{
namespace Models
{
  class GenerateCoordinationCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateCoordinationCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CoordinationCode, coordinationCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateCoordinationCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CoordinationCode, coordinationCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateCoordinationCodeResponseBody() = default ;
    GenerateCoordinationCodeResponseBody(const GenerateCoordinationCodeResponseBody &) = default ;
    GenerateCoordinationCodeResponseBody(GenerateCoordinationCodeResponseBody &&) = default ;
    GenerateCoordinationCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateCoordinationCodeResponseBody() = default ;
    GenerateCoordinationCodeResponseBody& operator=(const GenerateCoordinationCodeResponseBody &) = default ;
    GenerateCoordinationCodeResponseBody& operator=(GenerateCoordinationCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coordinationCode_ == nullptr
        && return this->requestId_ == nullptr; };
    // coordinationCode Field Functions 
    bool hasCoordinationCode() const { return this->coordinationCode_ != nullptr;};
    void deleteCoordinationCode() { this->coordinationCode_ = nullptr;};
    inline string coordinationCode() const { DARABONBA_PTR_GET_DEFAULT(coordinationCode_, "") };
    inline GenerateCoordinationCodeResponseBody& setCoordinationCode(string coordinationCode) { DARABONBA_PTR_SET_VALUE(coordinationCode_, coordinationCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateCoordinationCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> coordinationCode_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Metaspace20220307
#endif
