// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSPORTSHIGHLIGHTSJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSPORTSHIGHLIGHTSJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitSportsHighlightsJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSportsHighlightsJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_TO_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSportsHighlightsJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_FROM_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitSportsHighlightsJobRequest() = default ;
    SubmitSportsHighlightsJobRequest(const SubmitSportsHighlightsJobRequest &) = default ;
    SubmitSportsHighlightsJobRequest(SubmitSportsHighlightsJobRequest &&) = default ;
    SubmitSportsHighlightsJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSportsHighlightsJobRequest() = default ;
    SubmitSportsHighlightsJobRequest& operator=(const SubmitSportsHighlightsJobRequest &) = default ;
    SubmitSportsHighlightsJobRequest& operator=(SubmitSportsHighlightsJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->inputConfig_ != nullptr && this->outputConfig_ != nullptr && this->userData_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SubmitSportsHighlightsJobRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // inputConfig Field Functions 
    bool hasInputConfig() const { return this->inputConfig_ != nullptr;};
    void deleteInputConfig() { this->inputConfig_ = nullptr;};
    inline string inputConfig() const { DARABONBA_PTR_GET_DEFAULT(inputConfig_, "") };
    inline SubmitSportsHighlightsJobRequest& setInputConfig(string inputConfig) { DARABONBA_PTR_SET_VALUE(inputConfig_, inputConfig) };


    // outputConfig Field Functions 
    bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
    void deleteOutputConfig() { this->outputConfig_ = nullptr;};
    inline string outputConfig() const { DARABONBA_PTR_GET_DEFAULT(outputConfig_, "") };
    inline SubmitSportsHighlightsJobRequest& setOutputConfig(string outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitSportsHighlightsJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The input configurations.
    std::shared_ptr<string> inputConfig_ = nullptr;
    // The output configurations.
    std::shared_ptr<string> outputConfig_ = nullptr;
    // The user-defined data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
