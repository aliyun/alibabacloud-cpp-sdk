// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DECODEDIAGNOSTICMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DECODEDIAGNOSTICMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class DecodeDiagnosticMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DecodeDiagnosticMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
    };
    friend void from_json(const Darabonba::Json& j, DecodeDiagnosticMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
    };
    DecodeDiagnosticMessageRequest() = default ;
    DecodeDiagnosticMessageRequest(const DecodeDiagnosticMessageRequest &) = default ;
    DecodeDiagnosticMessageRequest(DecodeDiagnosticMessageRequest &&) = default ;
    DecodeDiagnosticMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DecodeDiagnosticMessageRequest() = default ;
    DecodeDiagnosticMessageRequest& operator=(const DecodeDiagnosticMessageRequest &) = default ;
    DecodeDiagnosticMessageRequest& operator=(DecodeDiagnosticMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encodedDiagnosticMessage_ == nullptr; };
    // encodedDiagnosticMessage Field Functions 
    bool hasEncodedDiagnosticMessage() const { return this->encodedDiagnosticMessage_ != nullptr;};
    void deleteEncodedDiagnosticMessage() { this->encodedDiagnosticMessage_ = nullptr;};
    inline string getEncodedDiagnosticMessage() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticMessage_, "") };
    inline DecodeDiagnosticMessageRequest& setEncodedDiagnosticMessage(string encodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticMessage_, encodedDiagnosticMessage) };


  protected:
    // The encoded diagnostic information in the response that contains an access denied error. The error is caused by no RAM permissions.
    shared_ptr<string> encodedDiagnosticMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
