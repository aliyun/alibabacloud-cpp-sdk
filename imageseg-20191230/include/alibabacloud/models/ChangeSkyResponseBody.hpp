// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGESKYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHANGESKYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChangeSkyResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class ChangeSkyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeSkyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeSkyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ChangeSkyResponseBody() = default ;
    ChangeSkyResponseBody(const ChangeSkyResponseBody &) = default ;
    ChangeSkyResponseBody(ChangeSkyResponseBody &&) = default ;
    ChangeSkyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeSkyResponseBody() = default ;
    ChangeSkyResponseBody& operator=(const ChangeSkyResponseBody &) = default ;
    ChangeSkyResponseBody& operator=(ChangeSkyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ChangeSkyResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ChangeSkyResponseBodyData) };
    inline ChangeSkyResponseBodyData data() { DARABONBA_PTR_GET(data_, ChangeSkyResponseBodyData) };
    inline ChangeSkyResponseBody& setData(const ChangeSkyResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ChangeSkyResponseBody& setData(ChangeSkyResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChangeSkyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ChangeSkyResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
