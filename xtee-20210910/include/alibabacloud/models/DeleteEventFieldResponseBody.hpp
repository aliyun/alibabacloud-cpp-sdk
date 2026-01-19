// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEVENTFIELDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEEVENTFIELDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DeleteEventFieldResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEventFieldResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resuleObject, resuleObject_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEventFieldResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resuleObject, resuleObject_);
    };
    DeleteEventFieldResponseBody() = default ;
    DeleteEventFieldResponseBody(const DeleteEventFieldResponseBody &) = default ;
    DeleteEventFieldResponseBody(DeleteEventFieldResponseBody &&) = default ;
    DeleteEventFieldResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEventFieldResponseBody() = default ;
    DeleteEventFieldResponseBody& operator=(const DeleteEventFieldResponseBody &) = default ;
    DeleteEventFieldResponseBody& operator=(DeleteEventFieldResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resuleObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteEventFieldResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resuleObject Field Functions 
    bool hasResuleObject() const { return this->resuleObject_ != nullptr;};
    void deleteResuleObject() { this->resuleObject_ = nullptr;};
    inline bool getResuleObject() const { DARABONBA_PTR_GET_DEFAULT(resuleObject_, false) };
    inline DeleteEventFieldResponseBody& setResuleObject(bool resuleObject) { DARABONBA_PTR_SET_VALUE(resuleObject_, resuleObject) };


  protected:
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Result object
    shared_ptr<bool> resuleObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
