// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTSCALINGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTSCALINGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PutScalingConfigInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class PutScalingConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutScalingConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
    };
    friend void from_json(const Darabonba::Json& j, PutScalingConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
    };
    PutScalingConfigRequest() = default ;
    PutScalingConfigRequest(const PutScalingConfigRequest &) = default ;
    PutScalingConfigRequest(PutScalingConfigRequest &&) = default ;
    PutScalingConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutScalingConfigRequest() = default ;
    PutScalingConfigRequest& operator=(const PutScalingConfigRequest &) = default ;
    PutScalingConfigRequest& operator=(PutScalingConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->qualifier_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PutScalingConfigInput & body() const { DARABONBA_PTR_GET_CONST(body_, PutScalingConfigInput) };
    inline PutScalingConfigInput body() { DARABONBA_PTR_GET(body_, PutScalingConfigInput) };
    inline PutScalingConfigRequest& setBody(const PutScalingConfigInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline PutScalingConfigRequest& setBody(PutScalingConfigInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline PutScalingConfigRequest& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


  protected:
    std::shared_ptr<PutScalingConfigInput> body_ = nullptr;
    std::shared_ptr<string> qualifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
