// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICSYNCANDCREATEIMAGESCANTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUBLICSYNCANDCREATEIMAGESCANTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PublicSyncAndCreateImageScanTaskResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class PublicSyncAndCreateImageScanTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicSyncAndCreateImageScanTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PublicSyncAndCreateImageScanTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PublicSyncAndCreateImageScanTaskResponseBody() = default ;
    PublicSyncAndCreateImageScanTaskResponseBody(const PublicSyncAndCreateImageScanTaskResponseBody &) = default ;
    PublicSyncAndCreateImageScanTaskResponseBody(PublicSyncAndCreateImageScanTaskResponseBody &&) = default ;
    PublicSyncAndCreateImageScanTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicSyncAndCreateImageScanTaskResponseBody() = default ;
    PublicSyncAndCreateImageScanTaskResponseBody& operator=(const PublicSyncAndCreateImageScanTaskResponseBody &) = default ;
    PublicSyncAndCreateImageScanTaskResponseBody& operator=(PublicSyncAndCreateImageScanTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const PublicSyncAndCreateImageScanTaskResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, PublicSyncAndCreateImageScanTaskResponseBodyData) };
    inline PublicSyncAndCreateImageScanTaskResponseBodyData data() { DARABONBA_PTR_GET(data_, PublicSyncAndCreateImageScanTaskResponseBodyData) };
    inline PublicSyncAndCreateImageScanTaskResponseBody& setData(const PublicSyncAndCreateImageScanTaskResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PublicSyncAndCreateImageScanTaskResponseBody& setData(PublicSyncAndCreateImageScanTaskResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PublicSyncAndCreateImageScanTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned if the call is successful.
    std::shared_ptr<PublicSyncAndCreateImageScanTaskResponseBodyData> data_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
