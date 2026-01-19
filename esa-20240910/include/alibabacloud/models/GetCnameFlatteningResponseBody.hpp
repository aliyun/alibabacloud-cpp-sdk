// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCNAMEFLATTENINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCNAMEFLATTENINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetCnameFlatteningResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCnameFlatteningResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FlattenMode, flattenMode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCnameFlatteningResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FlattenMode, flattenMode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCnameFlatteningResponseBody() = default ;
    GetCnameFlatteningResponseBody(const GetCnameFlatteningResponseBody &) = default ;
    GetCnameFlatteningResponseBody(GetCnameFlatteningResponseBody &&) = default ;
    GetCnameFlatteningResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCnameFlatteningResponseBody() = default ;
    GetCnameFlatteningResponseBody& operator=(const GetCnameFlatteningResponseBody &) = default ;
    GetCnameFlatteningResponseBody& operator=(GetCnameFlatteningResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flattenMode_ == nullptr
        && this->requestId_ == nullptr; };
    // flattenMode Field Functions 
    bool hasFlattenMode() const { return this->flattenMode_ != nullptr;};
    void deleteFlattenMode() { this->flattenMode_ = nullptr;};
    inline string getFlattenMode() const { DARABONBA_PTR_GET_DEFAULT(flattenMode_, "") };
    inline GetCnameFlatteningResponseBody& setFlattenMode(string flattenMode) { DARABONBA_PTR_SET_VALUE(flattenMode_, flattenMode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCnameFlatteningResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The CNAME flattening mode. Valid values:
    // 
    // *   flatten_all: flattens all CNAMEs.
    // *   flatten_all (default): flattens only the root domain.
    shared_ptr<string> flattenMode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
