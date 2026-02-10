// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICPRECHECKIMAGESCANTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUBLICPRECHECKIMAGESCANTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class PublicPreCheckImageScanTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicPreCheckImageScanTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PublicPreCheckImageScanTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PublicPreCheckImageScanTaskResponseBody() = default ;
    PublicPreCheckImageScanTaskResponseBody(const PublicPreCheckImageScanTaskResponseBody &) = default ;
    PublicPreCheckImageScanTaskResponseBody(PublicPreCheckImageScanTaskResponseBody &&) = default ;
    PublicPreCheckImageScanTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicPreCheckImageScanTaskResponseBody() = default ;
    PublicPreCheckImageScanTaskResponseBody& operator=(const PublicPreCheckImageScanTaskResponseBody &) = default ;
    PublicPreCheckImageScanTaskResponseBody& operator=(PublicPreCheckImageScanTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(NeedAuthCount, needAuthCount_);
        DARABONBA_PTR_TO_JSON(ScanImageCount, scanImageCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(NeedAuthCount, needAuthCount_);
        DARABONBA_PTR_FROM_JSON(ScanImageCount, scanImageCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->needAuthCount_ == nullptr
        && this->scanImageCount_ == nullptr; };
      // needAuthCount Field Functions 
      bool hasNeedAuthCount() const { return this->needAuthCount_ != nullptr;};
      void deleteNeedAuthCount() { this->needAuthCount_ = nullptr;};
      inline int32_t getNeedAuthCount() const { DARABONBA_PTR_GET_DEFAULT(needAuthCount_, 0) };
      inline Data& setNeedAuthCount(int32_t needAuthCount) { DARABONBA_PTR_SET_VALUE(needAuthCount_, needAuthCount) };


      // scanImageCount Field Functions 
      bool hasScanImageCount() const { return this->scanImageCount_ != nullptr;};
      void deleteScanImageCount() { this->scanImageCount_ = nullptr;};
      inline int32_t getScanImageCount() const { DARABONBA_PTR_GET_DEFAULT(scanImageCount_, 0) };
      inline Data& setScanImageCount(int32_t scanImageCount) { DARABONBA_PTR_SET_VALUE(scanImageCount_, scanImageCount) };


    protected:
      // The number of images to scan in the task.
      shared_ptr<int32_t> needAuthCount_ {};
      // The quota for container image scan to be consumed by the task.
      shared_ptr<int32_t> scanImageCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const PublicPreCheckImageScanTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, PublicPreCheckImageScanTaskResponseBody::Data) };
    inline PublicPreCheckImageScanTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, PublicPreCheckImageScanTaskResponseBody::Data) };
    inline PublicPreCheckImageScanTaskResponseBody& setData(const PublicPreCheckImageScanTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PublicPreCheckImageScanTaskResponseBody& setData(PublicPreCheckImageScanTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PublicPreCheckImageScanTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned if the call is successful.
    shared_ptr<PublicPreCheckImageScanTaskResponseBody::Data> data_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
