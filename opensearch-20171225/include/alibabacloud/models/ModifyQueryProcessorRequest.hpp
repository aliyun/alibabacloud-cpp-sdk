// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYQUERYPROCESSORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYQUERYPROCESSORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ModifyQueryProcessorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyQueryProcessorRequest& obj) { 
      DARABONBA_ANY_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyQueryProcessorRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    ModifyQueryProcessorRequest() = default ;
    ModifyQueryProcessorRequest(const ModifyQueryProcessorRequest &) = default ;
    ModifyQueryProcessorRequest(ModifyQueryProcessorRequest &&) = default ;
    ModifyQueryProcessorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyQueryProcessorRequest() = default ;
    ModifyQueryProcessorRequest& operator=(const ModifyQueryProcessorRequest &) = default ;
    ModifyQueryProcessorRequest& operator=(ModifyQueryProcessorRequest &&) = default ;
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
    inline ModifyQueryProcessorRequest& setBody(const Darabonba::Json & body) { DARABONBA_SET_VALUE(body_, body) };
    inline ModifyQueryProcessorRequest& setBody(Darabonba::Json & body) { DARABONBA_SET_RVALUE(body_, body) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyQueryProcessorRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The request parameters.
    Darabonba::Json body_ = nullptr;
    // Specifies whether the request is a dry run.
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
