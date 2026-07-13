// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTDATAREDUNDANCYTYPESTATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTDATAREDUNDANCYTYPESTATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class DescribeProductDataRedundancyTypeStatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductDataRedundancyTypeStatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductDataRedundancyTypeStatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeProductDataRedundancyTypeStatResponseBody() = default ;
    DescribeProductDataRedundancyTypeStatResponseBody(const DescribeProductDataRedundancyTypeStatResponseBody &) = default ;
    DescribeProductDataRedundancyTypeStatResponseBody(DescribeProductDataRedundancyTypeStatResponseBody &&) = default ;
    DescribeProductDataRedundancyTypeStatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductDataRedundancyTypeStatResponseBody() = default ;
    DescribeProductDataRedundancyTypeStatResponseBody& operator=(const DescribeProductDataRedundancyTypeStatResponseBody &) = default ;
    DescribeProductDataRedundancyTypeStatResponseBody& operator=(DescribeProductDataRedundancyTypeStatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
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
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(DataRedundancyType, dataRedundancyType_);
          DARABONBA_PTR_TO_JSON(ResourceCount, resourceCount_);
          DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(DataRedundancyType, dataRedundancyType_);
          DARABONBA_PTR_FROM_JSON(ResourceCount, resourceCount_);
          DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataRedundancyType_ == nullptr
        && this->resourceCount_ == nullptr && this->storageClass_ == nullptr; };
        // dataRedundancyType Field Functions 
        bool hasDataRedundancyType() const { return this->dataRedundancyType_ != nullptr;};
        void deleteDataRedundancyType() { this->dataRedundancyType_ = nullptr;};
        inline string getDataRedundancyType() const { DARABONBA_PTR_GET_DEFAULT(dataRedundancyType_, "") };
        inline Content& setDataRedundancyType(string dataRedundancyType) { DARABONBA_PTR_SET_VALUE(dataRedundancyType_, dataRedundancyType) };


        // resourceCount Field Functions 
        bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
        void deleteResourceCount() { this->resourceCount_ = nullptr;};
        inline int64_t getResourceCount() const { DARABONBA_PTR_GET_DEFAULT(resourceCount_, 0L) };
        inline Content& setResourceCount(int64_t resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };


        // storageClass Field Functions 
        bool hasStorageClass() const { return this->storageClass_ != nullptr;};
        void deleteStorageClass() { this->storageClass_ = nullptr;};
        inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
        inline Content& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


      protected:
        // The data redundancy type.
        shared_ptr<string> dataRedundancyType_ {};
        // The resource count.
        shared_ptr<int64_t> resourceCount_ {};
        // The storage class.
        shared_ptr<string> storageClass_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<Data::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Data::Content>) };
      inline vector<Data::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Data::Content>) };
      inline Data& setContent(const vector<Data::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Data& setContent(vector<Data::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    protected:
      // The list of records returned by the request.
      shared_ptr<vector<Data::Content>> content_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeProductDataRedundancyTypeStatResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeProductDataRedundancyTypeStatResponseBody::Data) };
    inline DescribeProductDataRedundancyTypeStatResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeProductDataRedundancyTypeStatResponseBody::Data) };
    inline DescribeProductDataRedundancyTypeStatResponseBody& setData(const DescribeProductDataRedundancyTypeStatResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeProductDataRedundancyTypeStatResponseBody& setData(DescribeProductDataRedundancyTypeStatResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProductDataRedundancyTypeStatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response data.
    shared_ptr<DescribeProductDataRedundancyTypeStatResponseBody::Data> data_ {};
    // The unique request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
