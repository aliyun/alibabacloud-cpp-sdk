// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTKEYPAIRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMPORTKEYPAIRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImportKeyPairResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ImportKeyPairResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportKeyPairResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportKeyPairResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ImportKeyPairResponseBody() = default ;
    ImportKeyPairResponseBody(const ImportKeyPairResponseBody &) = default ;
    ImportKeyPairResponseBody(ImportKeyPairResponseBody &&) = default ;
    ImportKeyPairResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportKeyPairResponseBody() = default ;
    ImportKeyPairResponseBody& operator=(const ImportKeyPairResponseBody &) = default ;
    ImportKeyPairResponseBody& operator=(ImportKeyPairResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ImportKeyPairResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ImportKeyPairResponseBodyData) };
    inline ImportKeyPairResponseBodyData data() { DARABONBA_PTR_GET(data_, ImportKeyPairResponseBodyData) };
    inline ImportKeyPairResponseBody& setData(const ImportKeyPairResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ImportKeyPairResponseBody& setData(ImportKeyPairResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImportKeyPairResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The object that is returned.
    std::shared_ptr<ImportKeyPairResponseBodyData> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
