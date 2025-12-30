// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHOTWORDLIBRARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEHOTWORDLIBRARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateHotwordLibraryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHotwordLibraryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HotwordLibraryId, hotwordLibraryId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHotwordLibraryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HotwordLibraryId, hotwordLibraryId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateHotwordLibraryResponseBody() = default ;
    CreateHotwordLibraryResponseBody(const CreateHotwordLibraryResponseBody &) = default ;
    CreateHotwordLibraryResponseBody(CreateHotwordLibraryResponseBody &&) = default ;
    CreateHotwordLibraryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHotwordLibraryResponseBody() = default ;
    CreateHotwordLibraryResponseBody& operator=(const CreateHotwordLibraryResponseBody &) = default ;
    CreateHotwordLibraryResponseBody& operator=(CreateHotwordLibraryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotwordLibraryId_ == nullptr
        && this->requestId_ == nullptr; };
    // hotwordLibraryId Field Functions 
    bool hasHotwordLibraryId() const { return this->hotwordLibraryId_ != nullptr;};
    void deleteHotwordLibraryId() { this->hotwordLibraryId_ = nullptr;};
    inline string getHotwordLibraryId() const { DARABONBA_PTR_GET_DEFAULT(hotwordLibraryId_, "") };
    inline CreateHotwordLibraryResponseBody& setHotwordLibraryId(string hotwordLibraryId) { DARABONBA_PTR_SET_VALUE(hotwordLibraryId_, hotwordLibraryId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateHotwordLibraryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the hotword library.
    shared_ptr<string> hotwordLibraryId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
