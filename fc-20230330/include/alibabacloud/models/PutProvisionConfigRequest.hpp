// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTPROVISIONCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTPROVISIONCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PutProvisionConfigInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class PutProvisionConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutProvisionConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
    };
    friend void from_json(const Darabonba::Json& j, PutProvisionConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
    };
    PutProvisionConfigRequest() = default ;
    PutProvisionConfigRequest(const PutProvisionConfigRequest &) = default ;
    PutProvisionConfigRequest(PutProvisionConfigRequest &&) = default ;
    PutProvisionConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutProvisionConfigRequest() = default ;
    PutProvisionConfigRequest& operator=(const PutProvisionConfigRequest &) = default ;
    PutProvisionConfigRequest& operator=(PutProvisionConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && this->qualifier_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PutProvisionConfigInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, PutProvisionConfigInput) };
    inline PutProvisionConfigInput getBody() { DARABONBA_PTR_GET(body_, PutProvisionConfigInput) };
    inline PutProvisionConfigRequest& setBody(const PutProvisionConfigInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline PutProvisionConfigRequest& setBody(PutProvisionConfigInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string getQualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline PutProvisionConfigRequest& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


  protected:
    // The provisioned configuration information.
    // 
    // This parameter is required.
    shared_ptr<PutProvisionConfigInput> body_ {};
    // The function alias.
    shared_ptr<string> qualifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
