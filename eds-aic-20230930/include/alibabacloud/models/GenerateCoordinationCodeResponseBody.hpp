// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATECOORDINATIONCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATECOORDINATIONCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class GenerateCoordinationCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateCoordinationCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CoordinatorCode, coordinatorCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateCoordinationCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CoordinatorCode, coordinatorCode_);
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
    virtual bool empty() const override { this->coordinatorCode_ != nullptr
        && this->requestId_ != nullptr; };
    // coordinatorCode Field Functions 
    bool hasCoordinatorCode() const { return this->coordinatorCode_ != nullptr;};
    void deleteCoordinatorCode() { this->coordinatorCode_ = nullptr;};
    inline string coordinatorCode() const { DARABONBA_PTR_GET_DEFAULT(coordinatorCode_, "") };
    inline GenerateCoordinationCodeResponseBody& setCoordinatorCode(string coordinatorCode) { DARABONBA_PTR_SET_VALUE(coordinatorCode_, coordinatorCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateCoordinationCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The collaboration code.
    std::shared_ptr<string> coordinatorCode_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
