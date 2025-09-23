// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTWORKWEARRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETECTWORKWEARRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DetectWorkwearResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectWorkwearResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectWorkwearResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetectWorkwearResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DetectWorkwearResponseBody() = default ;
    DetectWorkwearResponseBody(const DetectWorkwearResponseBody &) = default ;
    DetectWorkwearResponseBody(DetectWorkwearResponseBody &&) = default ;
    DetectWorkwearResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectWorkwearResponseBody() = default ;
    DetectWorkwearResponseBody& operator=(const DetectWorkwearResponseBody &) = default ;
    DetectWorkwearResponseBody& operator=(DetectWorkwearResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DetectWorkwearResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DetectWorkwearResponseBodyData) };
    inline DetectWorkwearResponseBodyData data() { DARABONBA_PTR_GET(data_, DetectWorkwearResponseBodyData) };
    inline DetectWorkwearResponseBody& setData(const DetectWorkwearResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DetectWorkwearResponseBody& setData(DetectWorkwearResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetectWorkwearResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DetectWorkwearResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
