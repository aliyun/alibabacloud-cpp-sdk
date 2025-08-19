// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEENDPOINTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEENDPOINTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class UpdateEndpointResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEndpointResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(endpointId, endpointId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEndpointResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(endpointId, endpointId_);
    };
    UpdateEndpointResponseBodyResult() = default ;
    UpdateEndpointResponseBodyResult(const UpdateEndpointResponseBodyResult &) = default ;
    UpdateEndpointResponseBodyResult(UpdateEndpointResponseBodyResult &&) = default ;
    UpdateEndpointResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEndpointResponseBodyResult() = default ;
    UpdateEndpointResponseBodyResult& operator=(const UpdateEndpointResponseBodyResult &) = default ;
    UpdateEndpointResponseBodyResult& operator=(UpdateEndpointResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endpointId_ != nullptr; };
    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string endpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline UpdateEndpointResponseBodyResult& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


  protected:
    std::shared_ptr<string> endpointId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
