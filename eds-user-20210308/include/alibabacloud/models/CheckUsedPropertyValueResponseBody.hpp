// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKUSEDPROPERTYVALUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKUSEDPROPERTYVALUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class CheckUsedPropertyValueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckUsedPropertyValueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UseCount, useCount_);
    };
    friend void from_json(const Darabonba::Json& j, CheckUsedPropertyValueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UseCount, useCount_);
    };
    CheckUsedPropertyValueResponseBody() = default ;
    CheckUsedPropertyValueResponseBody(const CheckUsedPropertyValueResponseBody &) = default ;
    CheckUsedPropertyValueResponseBody(CheckUsedPropertyValueResponseBody &&) = default ;
    CheckUsedPropertyValueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckUsedPropertyValueResponseBody() = default ;
    CheckUsedPropertyValueResponseBody& operator=(const CheckUsedPropertyValueResponseBody &) = default ;
    CheckUsedPropertyValueResponseBody& operator=(CheckUsedPropertyValueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->useCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckUsedPropertyValueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // useCount Field Functions 
    bool hasUseCount() const { return this->useCount_ != nullptr;};
    void deleteUseCount() { this->useCount_ = nullptr;};
    inline int64_t useCount() const { DARABONBA_PTR_GET_DEFAULT(useCount_, 0L) };
    inline CheckUsedPropertyValueResponseBody& setUseCount(int64_t useCount) { DARABONBA_PTR_SET_VALUE(useCount_, useCount) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of convenience accounts that are associated with the specified custom property value.
    std::shared_ptr<int64_t> useCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
