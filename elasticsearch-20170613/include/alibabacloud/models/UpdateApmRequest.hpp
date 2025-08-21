// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateApmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(outputES, outputES_);
      DARABONBA_PTR_TO_JSON(outputESPassword, outputESPassword_);
      DARABONBA_PTR_TO_JSON(outputESUserName, outputESUserName_);
      DARABONBA_PTR_TO_JSON(token, token_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(outputES, outputES_);
      DARABONBA_PTR_FROM_JSON(outputESPassword, outputESPassword_);
      DARABONBA_PTR_FROM_JSON(outputESUserName, outputESUserName_);
      DARABONBA_PTR_FROM_JSON(token, token_);
    };
    UpdateApmRequest() = default ;
    UpdateApmRequest(const UpdateApmRequest &) = default ;
    UpdateApmRequest(UpdateApmRequest &&) = default ;
    UpdateApmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApmRequest() = default ;
    UpdateApmRequest& operator=(const UpdateApmRequest &) = default ;
    UpdateApmRequest& operator=(UpdateApmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->outputES_ != nullptr && this->outputESPassword_ != nullptr && this->outputESUserName_ != nullptr && this->token_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateApmRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // outputES Field Functions 
    bool hasOutputES() const { return this->outputES_ != nullptr;};
    void deleteOutputES() { this->outputES_ = nullptr;};
    inline string outputES() const { DARABONBA_PTR_GET_DEFAULT(outputES_, "") };
    inline UpdateApmRequest& setOutputES(string outputES) { DARABONBA_PTR_SET_VALUE(outputES_, outputES) };


    // outputESPassword Field Functions 
    bool hasOutputESPassword() const { return this->outputESPassword_ != nullptr;};
    void deleteOutputESPassword() { this->outputESPassword_ = nullptr;};
    inline string outputESPassword() const { DARABONBA_PTR_GET_DEFAULT(outputESPassword_, "") };
    inline UpdateApmRequest& setOutputESPassword(string outputESPassword) { DARABONBA_PTR_SET_VALUE(outputESPassword_, outputESPassword) };


    // outputESUserName Field Functions 
    bool hasOutputESUserName() const { return this->outputESUserName_ != nullptr;};
    void deleteOutputESUserName() { this->outputESUserName_ = nullptr;};
    inline string outputESUserName() const { DARABONBA_PTR_GET_DEFAULT(outputESUserName_, "") };
    inline UpdateApmRequest& setOutputESUserName(string outputESUserName) { DARABONBA_PTR_SET_VALUE(outputESUserName_, outputESUserName) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline UpdateApmRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> outputES_ = nullptr;
    std::shared_ptr<string> outputESPassword_ = nullptr;
    std::shared_ptr<string> outputESUserName_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
