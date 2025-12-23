// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECONDRANKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESECONDRANKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SecondRank.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateSecondRankRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecondRankRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecondRankRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    CreateSecondRankRequest() = default ;
    CreateSecondRankRequest(const CreateSecondRankRequest &) = default ;
    CreateSecondRankRequest(CreateSecondRankRequest &&) = default ;
    CreateSecondRankRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecondRankRequest() = default ;
    CreateSecondRankRequest& operator=(const CreateSecondRankRequest &) = default ;
    CreateSecondRankRequest& operator=(CreateSecondRankRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->dryRun_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SecondRank & body() const { DARABONBA_PTR_GET_CONST(body_, SecondRank) };
    inline SecondRank body() { DARABONBA_PTR_GET(body_, SecondRank) };
    inline CreateSecondRankRequest& setBody(const SecondRank & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateSecondRankRequest& setBody(SecondRank && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateSecondRankRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The request body. For more information, see [SecondRank](https://help.aliyun.com/document_detail/170008.html).
    std::shared_ptr<SecondRank> body_ = nullptr;
    // Specifies whether to perform a dry run.
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
