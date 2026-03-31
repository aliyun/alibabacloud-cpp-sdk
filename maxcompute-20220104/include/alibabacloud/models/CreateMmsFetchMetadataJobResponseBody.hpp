// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMMSFETCHMETADATAJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMMSFETCHMETADATAJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class CreateMmsFetchMetadataJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMmsFetchMetadataJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMmsFetchMetadataJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateMmsFetchMetadataJobResponseBody() = default ;
    CreateMmsFetchMetadataJobResponseBody(const CreateMmsFetchMetadataJobResponseBody &) = default ;
    CreateMmsFetchMetadataJobResponseBody(CreateMmsFetchMetadataJobResponseBody &&) = default ;
    CreateMmsFetchMetadataJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMmsFetchMetadataJobResponseBody() = default ;
    CreateMmsFetchMetadataJobResponseBody& operator=(const CreateMmsFetchMetadataJobResponseBody &) = default ;
    CreateMmsFetchMetadataJobResponseBody& operator=(CreateMmsFetchMetadataJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(scanId, scanId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(scanId, scanId_);
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
      virtual bool empty() const override { return this->scanId_ == nullptr; };
      // scanId Field Functions 
      bool hasScanId() const { return this->scanId_ != nullptr;};
      void deleteScanId() { this->scanId_ = nullptr;};
      inline int64_t getScanId() const { DARABONBA_PTR_GET_DEFAULT(scanId_, 0L) };
      inline Data& setScanId(int64_t scanId) { DARABONBA_PTR_SET_VALUE(scanId_, scanId) };


    protected:
      shared_ptr<int64_t> scanId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateMmsFetchMetadataJobResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateMmsFetchMetadataJobResponseBody::Data) };
    inline CreateMmsFetchMetadataJobResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateMmsFetchMetadataJobResponseBody::Data) };
    inline CreateMmsFetchMetadataJobResponseBody& setData(const CreateMmsFetchMetadataJobResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateMmsFetchMetadataJobResponseBody& setData(CreateMmsFetchMetadataJobResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMmsFetchMetadataJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreateMmsFetchMetadataJobResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
