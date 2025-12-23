// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESUMMARIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESUMMARIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateSummariesRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class UpdateSummariesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSummariesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSummariesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    UpdateSummariesRequest() = default ;
    UpdateSummariesRequest(const UpdateSummariesRequest &) = default ;
    UpdateSummariesRequest(UpdateSummariesRequest &&) = default ;
    UpdateSummariesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSummariesRequest() = default ;
    UpdateSummariesRequest& operator=(const UpdateSummariesRequest &) = default ;
    UpdateSummariesRequest& operator=(UpdateSummariesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->dryRun_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<UpdateSummariesRequestBody> & body() const { DARABONBA_PTR_GET_CONST(body_, vector<UpdateSummariesRequestBody>) };
    inline vector<UpdateSummariesRequestBody> body() { DARABONBA_PTR_GET(body_, vector<UpdateSummariesRequestBody>) };
    inline UpdateSummariesRequest& setBody(const vector<UpdateSummariesRequestBody> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateSummariesRequest& setBody(vector<UpdateSummariesRequestBody> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateSummariesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The request body.
    std::shared_ptr<vector<UpdateSummariesRequestBody>> body_ = nullptr;
    // Specifies whether the request is a dry run.
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
