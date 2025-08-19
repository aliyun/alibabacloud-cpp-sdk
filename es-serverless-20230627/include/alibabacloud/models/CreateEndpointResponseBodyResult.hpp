// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENDPOINTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEENDPOINTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class CreateEndpointResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEndpointResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(endpointId, endpointId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEndpointResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(endpointId, endpointId_);
    };
    CreateEndpointResponseBodyResult() = default ;
    CreateEndpointResponseBodyResult(const CreateEndpointResponseBodyResult &) = default ;
    CreateEndpointResponseBodyResult(CreateEndpointResponseBodyResult &&) = default ;
    CreateEndpointResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEndpointResponseBodyResult() = default ;
    CreateEndpointResponseBodyResult& operator=(const CreateEndpointResponseBodyResult &) = default ;
    CreateEndpointResponseBodyResult& operator=(CreateEndpointResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endpointId_ != nullptr; };
    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string endpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline CreateEndpointResponseBodyResult& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


  protected:
    std::shared_ptr<string> endpointId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
