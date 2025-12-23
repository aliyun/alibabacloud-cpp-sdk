// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFIRSTRANKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFIRSTRANKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FirstRank.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateFirstRankRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFirstRankRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFirstRankRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    CreateFirstRankRequest() = default ;
    CreateFirstRankRequest(const CreateFirstRankRequest &) = default ;
    CreateFirstRankRequest(CreateFirstRankRequest &&) = default ;
    CreateFirstRankRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFirstRankRequest() = default ;
    CreateFirstRankRequest& operator=(const CreateFirstRankRequest &) = default ;
    CreateFirstRankRequest& operator=(CreateFirstRankRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->dryRun_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const FirstRank & body() const { DARABONBA_PTR_GET_CONST(body_, FirstRank) };
    inline FirstRank body() { DARABONBA_PTR_GET(body_, FirstRank) };
    inline CreateFirstRankRequest& setBody(const FirstRank & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateFirstRankRequest& setBody(FirstRank && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateFirstRankRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The request body that contains the parameters of the rough sort expression.
    std::shared_ptr<FirstRank> body_ = nullptr;
    // Specifies whether to perform a dry run.
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
