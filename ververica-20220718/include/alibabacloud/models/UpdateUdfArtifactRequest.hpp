// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUDFARTIFACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUDFARTIFACTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UdfArtifact.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class UpdateUdfArtifactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUdfArtifactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUdfArtifactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateUdfArtifactRequest() = default ;
    UpdateUdfArtifactRequest(const UpdateUdfArtifactRequest &) = default ;
    UpdateUdfArtifactRequest(UpdateUdfArtifactRequest &&) = default ;
    UpdateUdfArtifactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUdfArtifactRequest() = default ;
    UpdateUdfArtifactRequest& operator=(const UpdateUdfArtifactRequest &) = default ;
    UpdateUdfArtifactRequest& operator=(UpdateUdfArtifactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UdfArtifact & body() const { DARABONBA_PTR_GET_CONST(body_, UdfArtifact) };
    inline UdfArtifact body() { DARABONBA_PTR_GET(body_, UdfArtifact) };
    inline UpdateUdfArtifactRequest& setBody(const UdfArtifact & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateUdfArtifactRequest& setBody(UdfArtifact && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The details of the JAR file of the UDF.
    // 
    // This parameter is required.
    std::shared_ptr<UdfArtifact> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
