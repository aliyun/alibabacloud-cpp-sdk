// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRECYCLEBINATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRECYCLEBINATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRecycleBinAttributeResponseBodyRecycleBinAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class GetRecycleBinAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRecycleBinAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecycleBinAttribute, recycleBinAttribute_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRecycleBinAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecycleBinAttribute, recycleBinAttribute_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRecycleBinAttributeResponseBody() = default ;
    GetRecycleBinAttributeResponseBody(const GetRecycleBinAttributeResponseBody &) = default ;
    GetRecycleBinAttributeResponseBody(GetRecycleBinAttributeResponseBody &&) = default ;
    GetRecycleBinAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRecycleBinAttributeResponseBody() = default ;
    GetRecycleBinAttributeResponseBody& operator=(const GetRecycleBinAttributeResponseBody &) = default ;
    GetRecycleBinAttributeResponseBody& operator=(GetRecycleBinAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->recycleBinAttribute_ != nullptr
        && this->requestId_ != nullptr; };
    // recycleBinAttribute Field Functions 
    bool hasRecycleBinAttribute() const { return this->recycleBinAttribute_ != nullptr;};
    void deleteRecycleBinAttribute() { this->recycleBinAttribute_ = nullptr;};
    inline const GetRecycleBinAttributeResponseBodyRecycleBinAttribute & recycleBinAttribute() const { DARABONBA_PTR_GET_CONST(recycleBinAttribute_, GetRecycleBinAttributeResponseBodyRecycleBinAttribute) };
    inline GetRecycleBinAttributeResponseBodyRecycleBinAttribute recycleBinAttribute() { DARABONBA_PTR_GET(recycleBinAttribute_, GetRecycleBinAttributeResponseBodyRecycleBinAttribute) };
    inline GetRecycleBinAttributeResponseBody& setRecycleBinAttribute(const GetRecycleBinAttributeResponseBodyRecycleBinAttribute & recycleBinAttribute) { DARABONBA_PTR_SET_VALUE(recycleBinAttribute_, recycleBinAttribute) };
    inline GetRecycleBinAttributeResponseBody& setRecycleBinAttribute(GetRecycleBinAttributeResponseBodyRecycleBinAttribute && recycleBinAttribute) { DARABONBA_PTR_SET_RVALUE(recycleBinAttribute_, recycleBinAttribute) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRecycleBinAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The description of the recycle bin.
    std::shared_ptr<GetRecycleBinAttributeResponseBodyRecycleBinAttribute> recycleBinAttribute_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
