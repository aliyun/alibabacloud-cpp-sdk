// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEASSETSELECTIONCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEASSETSELECTIONCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAssetSelectionConfigResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateAssetSelectionConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAssetSelectionConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAssetSelectionConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAssetSelectionConfigResponseBody() = default ;
    CreateAssetSelectionConfigResponseBody(const CreateAssetSelectionConfigResponseBody &) = default ;
    CreateAssetSelectionConfigResponseBody(CreateAssetSelectionConfigResponseBody &&) = default ;
    CreateAssetSelectionConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAssetSelectionConfigResponseBody() = default ;
    CreateAssetSelectionConfigResponseBody& operator=(const CreateAssetSelectionConfigResponseBody &) = default ;
    CreateAssetSelectionConfigResponseBody& operator=(CreateAssetSelectionConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateAssetSelectionConfigResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateAssetSelectionConfigResponseBodyData) };
    inline CreateAssetSelectionConfigResponseBodyData data() { DARABONBA_PTR_GET(data_, CreateAssetSelectionConfigResponseBodyData) };
    inline CreateAssetSelectionConfigResponseBody& setData(const CreateAssetSelectionConfigResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateAssetSelectionConfigResponseBody& setData(CreateAssetSelectionConfigResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAssetSelectionConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    std::shared_ptr<CreateAssetSelectionConfigResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
