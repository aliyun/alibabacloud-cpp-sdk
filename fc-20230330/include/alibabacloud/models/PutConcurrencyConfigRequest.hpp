// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTCONCURRENCYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTCONCURRENCYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PutConcurrencyInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class PutConcurrencyConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutConcurrencyConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, PutConcurrencyConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    PutConcurrencyConfigRequest() = default ;
    PutConcurrencyConfigRequest(const PutConcurrencyConfigRequest &) = default ;
    PutConcurrencyConfigRequest(PutConcurrencyConfigRequest &&) = default ;
    PutConcurrencyConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutConcurrencyConfigRequest() = default ;
    PutConcurrencyConfigRequest& operator=(const PutConcurrencyConfigRequest &) = default ;
    PutConcurrencyConfigRequest& operator=(PutConcurrencyConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PutConcurrencyInput & body() const { DARABONBA_PTR_GET_CONST(body_, PutConcurrencyInput) };
    inline PutConcurrencyInput body() { DARABONBA_PTR_GET(body_, PutConcurrencyInput) };
    inline PutConcurrencyConfigRequest& setBody(const PutConcurrencyInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline PutConcurrencyConfigRequest& setBody(PutConcurrencyInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The concurrency configurations.
    // 
    // This parameter is required.
    std::shared_ptr<PutConcurrencyInput> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
