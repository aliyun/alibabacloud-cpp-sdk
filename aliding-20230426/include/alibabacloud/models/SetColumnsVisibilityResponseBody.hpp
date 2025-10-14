// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCOLUMNSVISIBILITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETCOLUMNSVISIBILITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SetColumnsVisibilityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetColumnsVisibilityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetColumnsVisibilityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    SetColumnsVisibilityResponseBody() = default ;
    SetColumnsVisibilityResponseBody(const SetColumnsVisibilityResponseBody &) = default ;
    SetColumnsVisibilityResponseBody(SetColumnsVisibilityResponseBody &&) = default ;
    SetColumnsVisibilityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetColumnsVisibilityResponseBody() = default ;
    SetColumnsVisibilityResponseBody& operator=(const SetColumnsVisibilityResponseBody &) = default ;
    SetColumnsVisibilityResponseBody& operator=(SetColumnsVisibilityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->requestId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline SetColumnsVisibilityResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetColumnsVisibilityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
