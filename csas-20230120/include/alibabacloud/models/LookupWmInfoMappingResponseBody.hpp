// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPWMINFOMAPPINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPWMINFOMAPPINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LookupWmInfoMappingResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class LookupWmInfoMappingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupWmInfoMappingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, LookupWmInfoMappingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    LookupWmInfoMappingResponseBody() = default ;
    LookupWmInfoMappingResponseBody(const LookupWmInfoMappingResponseBody &) = default ;
    LookupWmInfoMappingResponseBody(LookupWmInfoMappingResponseBody &&) = default ;
    LookupWmInfoMappingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupWmInfoMappingResponseBody() = default ;
    LookupWmInfoMappingResponseBody& operator=(const LookupWmInfoMappingResponseBody &) = default ;
    LookupWmInfoMappingResponseBody& operator=(LookupWmInfoMappingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const LookupWmInfoMappingResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, LookupWmInfoMappingResponseBodyData) };
    inline LookupWmInfoMappingResponseBodyData data() { DARABONBA_PTR_GET(data_, LookupWmInfoMappingResponseBodyData) };
    inline LookupWmInfoMappingResponseBody& setData(const LookupWmInfoMappingResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline LookupWmInfoMappingResponseBody& setData(LookupWmInfoMappingResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LookupWmInfoMappingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<LookupWmInfoMappingResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
