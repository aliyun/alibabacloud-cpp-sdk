// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDNATENTRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDDNATENTRYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class AddDnatEntryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDnatEntryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DnatEntryId, dnatEntryId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddDnatEntryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DnatEntryId, dnatEntryId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddDnatEntryResponseBody() = default ;
    AddDnatEntryResponseBody(const AddDnatEntryResponseBody &) = default ;
    AddDnatEntryResponseBody(AddDnatEntryResponseBody &&) = default ;
    AddDnatEntryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDnatEntryResponseBody() = default ;
    AddDnatEntryResponseBody& operator=(const AddDnatEntryResponseBody &) = default ;
    AddDnatEntryResponseBody& operator=(AddDnatEntryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dnatEntryId_ == nullptr
        && this->requestId_ == nullptr; };
    // dnatEntryId Field Functions 
    bool hasDnatEntryId() const { return this->dnatEntryId_ != nullptr;};
    void deleteDnatEntryId() { this->dnatEntryId_ = nullptr;};
    inline string getDnatEntryId() const { DARABONBA_PTR_GET_DEFAULT(dnatEntryId_, "") };
    inline AddDnatEntryResponseBody& setDnatEntryId(string dnatEntryId) { DARABONBA_PTR_SET_VALUE(dnatEntryId_, dnatEntryId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddDnatEntryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the DNAT entry.
    shared_ptr<string> dnatEntryId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
