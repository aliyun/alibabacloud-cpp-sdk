// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECREDENTIALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECREDENTIALSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class CreateCredentialsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCredentialsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCredentialsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    CreateCredentialsRequest() = default ;
    CreateCredentialsRequest(const CreateCredentialsRequest &) = default ;
    CreateCredentialsRequest(CreateCredentialsRequest &&) = default ;
    CreateCredentialsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCredentialsRequest() = default ;
    CreateCredentialsRequest& operator=(const CreateCredentialsRequest &) = default ;
    CreateCredentialsRequest& operator=(CreateCredentialsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && this->dryRun_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateCredentialsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateCredentialsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The credential type. Valid types:
    // - api-token
    shared_ptr<string> type_ {};
    // Specifies whether to only validate the request parameters. Default value: false.
    // 
    // Valid values:
    // 
    // - **true**: Only validates the request parameters.
    // 
    // - **false**: Validates the request parameters and creates the attribution configuration.
    shared_ptr<bool> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
