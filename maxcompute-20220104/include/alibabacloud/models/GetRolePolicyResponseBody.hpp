// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROLEPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETROLEPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetRolePolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRolePolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRolePolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetRolePolicyResponseBody() = default ;
    GetRolePolicyResponseBody(const GetRolePolicyResponseBody &) = default ;
    GetRolePolicyResponseBody(GetRolePolicyResponseBody &&) = default ;
    GetRolePolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRolePolicyResponseBody() = default ;
    GetRolePolicyResponseBody& operator=(const GetRolePolicyResponseBody &) = default ;
    GetRolePolicyResponseBody& operator=(GetRolePolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline GetRolePolicyResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRolePolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    std::shared_ptr<string> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
