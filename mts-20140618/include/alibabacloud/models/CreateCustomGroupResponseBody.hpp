// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class CreateCustomGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomGroupId, customGroupId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomGroupId, customGroupId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCustomGroupResponseBody() = default ;
    CreateCustomGroupResponseBody(const CreateCustomGroupResponseBody &) = default ;
    CreateCustomGroupResponseBody(CreateCustomGroupResponseBody &&) = default ;
    CreateCustomGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomGroupResponseBody() = default ;
    CreateCustomGroupResponseBody& operator=(const CreateCustomGroupResponseBody &) = default ;
    CreateCustomGroupResponseBody& operator=(CreateCustomGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customGroupId_ == nullptr
        && this->requestId_ == nullptr; };
    // customGroupId Field Functions 
    bool hasCustomGroupId() const { return this->customGroupId_ != nullptr;};
    void deleteCustomGroupId() { this->customGroupId_ = nullptr;};
    inline string getCustomGroupId() const { DARABONBA_PTR_GET_DEFAULT(customGroupId_, "") };
    inline CreateCustomGroupResponseBody& setCustomGroupId(string customGroupId) { DARABONBA_PTR_SET_VALUE(customGroupId_, customGroupId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCustomGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> customGroupId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
