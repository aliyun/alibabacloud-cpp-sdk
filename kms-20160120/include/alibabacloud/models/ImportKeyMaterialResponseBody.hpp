// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTKEYMATERIALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMPORTKEYMATERIALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ImportKeyMaterialResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportKeyMaterialResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportKeyMaterialResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ImportKeyMaterialResponseBody() = default ;
    ImportKeyMaterialResponseBody(const ImportKeyMaterialResponseBody &) = default ;
    ImportKeyMaterialResponseBody(ImportKeyMaterialResponseBody &&) = default ;
    ImportKeyMaterialResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportKeyMaterialResponseBody() = default ;
    ImportKeyMaterialResponseBody& operator=(const ImportKeyMaterialResponseBody &) = default ;
    ImportKeyMaterialResponseBody& operator=(ImportKeyMaterialResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImportKeyMaterialResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
