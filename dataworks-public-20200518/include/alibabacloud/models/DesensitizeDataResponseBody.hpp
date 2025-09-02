// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESENSITIZEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESENSITIZEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DesensitizeDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DesensitizeDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DesensitizeData, desensitizeData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DesensitizeDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DesensitizeData, desensitizeData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DesensitizeDataResponseBody() = default ;
    DesensitizeDataResponseBody(const DesensitizeDataResponseBody &) = default ;
    DesensitizeDataResponseBody(DesensitizeDataResponseBody &&) = default ;
    DesensitizeDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DesensitizeDataResponseBody() = default ;
    DesensitizeDataResponseBody& operator=(const DesensitizeDataResponseBody &) = default ;
    DesensitizeDataResponseBody& operator=(DesensitizeDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desensitizeData_ != nullptr
        && this->requestId_ != nullptr; };
    // desensitizeData Field Functions 
    bool hasDesensitizeData() const { return this->desensitizeData_ != nullptr;};
    void deleteDesensitizeData() { this->desensitizeData_ = nullptr;};
    inline string desensitizeData() const { DARABONBA_PTR_GET_DEFAULT(desensitizeData_, "") };
    inline DesensitizeDataResponseBody& setDesensitizeData(string desensitizeData) { DARABONBA_PTR_SET_VALUE(desensitizeData_, desensitizeData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DesensitizeDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned after masking.
    std::shared_ptr<string> desensitizeData_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
