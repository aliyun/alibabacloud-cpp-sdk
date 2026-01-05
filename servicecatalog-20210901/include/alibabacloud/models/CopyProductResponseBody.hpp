// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYPRODUCTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COPYPRODUCTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class CopyProductResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyProductResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyProductResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CopyProductResponseBody() = default ;
    CopyProductResponseBody(const CopyProductResponseBody &) = default ;
    CopyProductResponseBody(CopyProductResponseBody &&) = default ;
    CopyProductResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyProductResponseBody() = default ;
    CopyProductResponseBody& operator=(const CopyProductResponseBody &) = default ;
    CopyProductResponseBody& operator=(CopyProductResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CopyProductResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
