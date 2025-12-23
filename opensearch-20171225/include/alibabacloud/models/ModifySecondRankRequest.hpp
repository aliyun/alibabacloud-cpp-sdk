// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSECONDRANKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSECONDRANKREQUEST_HPP_
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
  class ModifySecondRankRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySecondRankRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySecondRankRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    ModifySecondRankRequest() = default ;
    ModifySecondRankRequest(const ModifySecondRankRequest &) = default ;
    ModifySecondRankRequest(ModifySecondRankRequest &&) = default ;
    ModifySecondRankRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySecondRankRequest() = default ;
    ModifySecondRankRequest& operator=(const ModifySecondRankRequest &) = default ;
    ModifySecondRankRequest& operator=(ModifySecondRankRequest &&) = default ;
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
    inline ModifySecondRankRequest& setBody(const SecondRank & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModifySecondRankRequest& setBody(SecondRank && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifySecondRankRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The request parameters.
    std::shared_ptr<SecondRank> body_ = nullptr;
    // Specifies whether the request is a dry run.
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
