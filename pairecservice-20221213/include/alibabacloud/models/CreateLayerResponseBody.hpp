// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELAYERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELAYERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateLayerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLayerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LayerId, layerId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLayerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LayerId, layerId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateLayerResponseBody() = default ;
    CreateLayerResponseBody(const CreateLayerResponseBody &) = default ;
    CreateLayerResponseBody(CreateLayerResponseBody &&) = default ;
    CreateLayerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLayerResponseBody() = default ;
    CreateLayerResponseBody& operator=(const CreateLayerResponseBody &) = default ;
    CreateLayerResponseBody& operator=(CreateLayerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->layerId_ != nullptr
        && this->requestId_ != nullptr; };
    // layerId Field Functions 
    bool hasLayerId() const { return this->layerId_ != nullptr;};
    void deleteLayerId() { this->layerId_ = nullptr;};
    inline string layerId() const { DARABONBA_PTR_GET_DEFAULT(layerId_, "") };
    inline CreateLayerResponseBody& setLayerId(string layerId) { DARABONBA_PTR_SET_VALUE(layerId_, layerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLayerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> layerId_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
