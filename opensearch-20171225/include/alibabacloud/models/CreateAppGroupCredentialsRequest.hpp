// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPGROUPCREDENTIALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPGROUPCREDENTIALSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateAppGroupCredentialsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppGroupCredentialsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppGroupCredentialsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    CreateAppGroupCredentialsRequest() = default ;
    CreateAppGroupCredentialsRequest(const CreateAppGroupCredentialsRequest &) = default ;
    CreateAppGroupCredentialsRequest(CreateAppGroupCredentialsRequest &&) = default ;
    CreateAppGroupCredentialsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppGroupCredentialsRequest() = default ;
    CreateAppGroupCredentialsRequest& operator=(const CreateAppGroupCredentialsRequest &) = default ;
    CreateAppGroupCredentialsRequest& operator=(CreateAppGroupCredentialsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && return this->dryRun_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateAppGroupCredentialsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateAppGroupCredentialsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
