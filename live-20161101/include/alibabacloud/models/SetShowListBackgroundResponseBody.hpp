// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSHOWLISTBACKGROUNDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETSHOWLISTBACKGROUNDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetShowListBackgroundResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetShowListBackgroundResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetShowListBackgroundResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetShowListBackgroundResponseBody() = default ;
    SetShowListBackgroundResponseBody(const SetShowListBackgroundResponseBody &) = default ;
    SetShowListBackgroundResponseBody(SetShowListBackgroundResponseBody &&) = default ;
    SetShowListBackgroundResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetShowListBackgroundResponseBody() = default ;
    SetShowListBackgroundResponseBody& operator=(const SetShowListBackgroundResponseBody &) = default ;
    SetShowListBackgroundResponseBody& operator=(SetShowListBackgroundResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetShowListBackgroundResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
