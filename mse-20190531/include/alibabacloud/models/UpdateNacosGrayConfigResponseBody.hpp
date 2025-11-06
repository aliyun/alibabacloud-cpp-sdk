// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENACOSGRAYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATENACOSGRAYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateNacosGrayConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNacosGrayConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNacosGrayConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateNacosGrayConfigResponseBody() = default ;
    UpdateNacosGrayConfigResponseBody(const UpdateNacosGrayConfigResponseBody &) = default ;
    UpdateNacosGrayConfigResponseBody(UpdateNacosGrayConfigResponseBody &&) = default ;
    UpdateNacosGrayConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNacosGrayConfigResponseBody() = default ;
    UpdateNacosGrayConfigResponseBody& operator=(const UpdateNacosGrayConfigResponseBody &) = default ;
    UpdateNacosGrayConfigResponseBody& operator=(UpdateNacosGrayConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline bool data() const { DARABONBA_PTR_GET_DEFAULT(data_, false) };
    inline UpdateNacosGrayConfigResponseBody& setData(bool data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateNacosGrayConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
