// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATECLICOMMANDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATECLICOMMANDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GenerateCLICommandResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateCLICommandResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cli, cli_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(unifiedCli, unifiedCli_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateCLICommandResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cli, cli_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(unifiedCli, unifiedCli_);
    };
    GenerateCLICommandResponseBody() = default ;
    GenerateCLICommandResponseBody(const GenerateCLICommandResponseBody &) = default ;
    GenerateCLICommandResponseBody(GenerateCLICommandResponseBody &&) = default ;
    GenerateCLICommandResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateCLICommandResponseBody() = default ;
    GenerateCLICommandResponseBody& operator=(const GenerateCLICommandResponseBody &) = default ;
    GenerateCLICommandResponseBody& operator=(GenerateCLICommandResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cli_ == nullptr
        && this->requestId_ == nullptr && this->unifiedCli_ == nullptr; };
    // cli Field Functions 
    bool hasCli() const { return this->cli_ != nullptr;};
    void deleteCli() { this->cli_ = nullptr;};
    inline string getCli() const { DARABONBA_PTR_GET_DEFAULT(cli_, "") };
    inline GenerateCLICommandResponseBody& setCli(string cli) { DARABONBA_PTR_SET_VALUE(cli_, cli) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateCLICommandResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // unifiedCli Field Functions 
    bool hasUnifiedCli() const { return this->unifiedCli_ != nullptr;};
    void deleteUnifiedCli() { this->unifiedCli_ = nullptr;};
    inline string getUnifiedCli() const { DARABONBA_PTR_GET_DEFAULT(unifiedCli_, "") };
    inline GenerateCLICommandResponseBody& setUnifiedCli(string unifiedCli) { DARABONBA_PTR_SET_VALUE(unifiedCli_, unifiedCli) };


  protected:
    // CLI command.
    shared_ptr<string> cli_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<string> unifiedCli_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
