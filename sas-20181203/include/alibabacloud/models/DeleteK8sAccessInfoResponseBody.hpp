// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEK8SACCESSINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEK8SACCESSINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteK8sAccessInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteK8sAccessInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteK8sAccessInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteK8sAccessInfoResponseBody() = default ;
    DeleteK8sAccessInfoResponseBody(const DeleteK8sAccessInfoResponseBody &) = default ;
    DeleteK8sAccessInfoResponseBody(DeleteK8sAccessInfoResponseBody &&) = default ;
    DeleteK8sAccessInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteK8sAccessInfoResponseBody() = default ;
    DeleteK8sAccessInfoResponseBody& operator=(const DeleteK8sAccessInfoResponseBody &) = default ;
    DeleteK8sAccessInfoResponseBody& operator=(DeleteK8sAccessInfoResponseBody &&) = default ;
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
    inline DeleteK8sAccessInfoResponseBody& setData(bool data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteK8sAccessInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the request was successful. Valid value:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
