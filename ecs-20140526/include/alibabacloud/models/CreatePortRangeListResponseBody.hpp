// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPORTRANGELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPORTRANGELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreatePortRangeListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePortRangeListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PortRangeListId, portRangeListId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePortRangeListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PortRangeListId, portRangeListId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreatePortRangeListResponseBody() = default ;
    CreatePortRangeListResponseBody(const CreatePortRangeListResponseBody &) = default ;
    CreatePortRangeListResponseBody(CreatePortRangeListResponseBody &&) = default ;
    CreatePortRangeListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePortRangeListResponseBody() = default ;
    CreatePortRangeListResponseBody& operator=(const CreatePortRangeListResponseBody &) = default ;
    CreatePortRangeListResponseBody& operator=(CreatePortRangeListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->portRangeListId_ == nullptr
        && return this->requestId_ == nullptr; };
    // portRangeListId Field Functions 
    bool hasPortRangeListId() const { return this->portRangeListId_ != nullptr;};
    void deletePortRangeListId() { this->portRangeListId_ = nullptr;};
    inline string portRangeListId() const { DARABONBA_PTR_GET_DEFAULT(portRangeListId_, "") };
    inline CreatePortRangeListResponseBody& setPortRangeListId(string portRangeListId) { DARABONBA_PTR_SET_VALUE(portRangeListId_, portRangeListId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePortRangeListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the port list.
    std::shared_ptr<string> portRangeListId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
