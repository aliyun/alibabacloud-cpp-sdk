// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUERYPROCESSORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUERYPROCESSORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateQueryProcessorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQueryProcessorRequest& obj) { 
      DARABONBA_ANY_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQueryProcessorRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    CreateQueryProcessorRequest() = default ;
    CreateQueryProcessorRequest(const CreateQueryProcessorRequest &) = default ;
    CreateQueryProcessorRequest(CreateQueryProcessorRequest &&) = default ;
    CreateQueryProcessorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQueryProcessorRequest() = default ;
    CreateQueryProcessorRequest& operator=(const CreateQueryProcessorRequest &) = default ;
    CreateQueryProcessorRequest& operator=(CreateQueryProcessorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->dryRun_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline     const Darabonba::Json & body() const { DARABONBA_GET(body_) };
    Darabonba::Json & body() { DARABONBA_GET(body_) };
    inline CreateQueryProcessorRequest& setBody(const Darabonba::Json & body) { DARABONBA_SET_VALUE(body_, body) };
    inline CreateQueryProcessorRequest& setBody(Darabonba::Json & body) { DARABONBA_SET_RVALUE(body_, body) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateQueryProcessorRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The request body.
    Darabonba::Json body_ = nullptr;
    // Specifies whether to perform a dry run.
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
