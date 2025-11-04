// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEKMSDATAKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEKMSDATAKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GenerateKMSDataKeyResponseBodyDataKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GenerateKMSDataKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateKMSDataKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataKey, dataKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateKMSDataKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataKey, dataKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateKMSDataKeyResponseBody() = default ;
    GenerateKMSDataKeyResponseBody(const GenerateKMSDataKeyResponseBody &) = default ;
    GenerateKMSDataKeyResponseBody(GenerateKMSDataKeyResponseBody &&) = default ;
    GenerateKMSDataKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateKMSDataKeyResponseBody() = default ;
    GenerateKMSDataKeyResponseBody& operator=(const GenerateKMSDataKeyResponseBody &) = default ;
    GenerateKMSDataKeyResponseBody& operator=(GenerateKMSDataKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataKey_ == nullptr
        && return this->requestId_ == nullptr; };
    // dataKey Field Functions 
    bool hasDataKey() const { return this->dataKey_ != nullptr;};
    void deleteDataKey() { this->dataKey_ = nullptr;};
    inline const GenerateKMSDataKeyResponseBodyDataKey & dataKey() const { DARABONBA_PTR_GET_CONST(dataKey_, GenerateKMSDataKeyResponseBodyDataKey) };
    inline GenerateKMSDataKeyResponseBodyDataKey dataKey() { DARABONBA_PTR_GET(dataKey_, GenerateKMSDataKeyResponseBodyDataKey) };
    inline GenerateKMSDataKeyResponseBody& setDataKey(const GenerateKMSDataKeyResponseBodyDataKey & dataKey) { DARABONBA_PTR_SET_VALUE(dataKey_, dataKey) };
    inline GenerateKMSDataKeyResponseBody& setDataKey(GenerateKMSDataKeyResponseBodyDataKey && dataKey) { DARABONBA_PTR_SET_RVALUE(dataKey_, dataKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateKMSDataKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the data key.
    std::shared_ptr<GenerateKMSDataKeyResponseBodyDataKey> dataKey_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
