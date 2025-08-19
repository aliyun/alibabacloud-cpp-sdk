// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class DeleteEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    DeleteEndpointResponseBody() = default ;
    DeleteEndpointResponseBody(const DeleteEndpointResponseBody &) = default ;
    DeleteEndpointResponseBody(DeleteEndpointResponseBody &&) = default ;
    DeleteEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEndpointResponseBody() = default ;
    DeleteEndpointResponseBody& operator=(const DeleteEndpointResponseBody &) = default ;
    DeleteEndpointResponseBody& operator=(DeleteEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool result() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline DeleteEndpointResponseBody& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
