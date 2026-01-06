// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEESSDCACHECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEESSDCACHECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeEssdCacheConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEssdCacheConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEssdCacheConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEssdCacheConfigResponseBody() = default ;
    DescribeEssdCacheConfigResponseBody(const DescribeEssdCacheConfigResponseBody &) = default ;
    DescribeEssdCacheConfigResponseBody(DescribeEssdCacheConfigResponseBody &&) = default ;
    DescribeEssdCacheConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEssdCacheConfigResponseBody() = default ;
    DescribeEssdCacheConfigResponseBody& operator=(const DescribeEssdCacheConfigResponseBody &) = default ;
    DescribeEssdCacheConfigResponseBody& operator=(DescribeEssdCacheConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EnableEssdCache, enableEssdCache_);
        DARABONBA_PTR_TO_JSON(EssdCacheSize, essdCacheSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableEssdCache, enableEssdCache_);
        DARABONBA_PTR_FROM_JSON(EssdCacheSize, essdCacheSize_);
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
      virtual bool empty() const override { return this->enableEssdCache_ == nullptr
        && this->essdCacheSize_ == nullptr; };
      // enableEssdCache Field Functions 
      bool hasEnableEssdCache() const { return this->enableEssdCache_ != nullptr;};
      void deleteEnableEssdCache() { this->enableEssdCache_ = nullptr;};
      inline bool getEnableEssdCache() const { DARABONBA_PTR_GET_DEFAULT(enableEssdCache_, false) };
      inline Data& setEnableEssdCache(bool enableEssdCache) { DARABONBA_PTR_SET_VALUE(enableEssdCache_, enableEssdCache) };


      // essdCacheSize Field Functions 
      bool hasEssdCacheSize() const { return this->essdCacheSize_ != nullptr;};
      void deleteEssdCacheSize() { this->essdCacheSize_ = nullptr;};
      inline int32_t getEssdCacheSize() const { DARABONBA_PTR_GET_DEFAULT(essdCacheSize_, 0) };
      inline Data& setEssdCacheSize(int32_t essdCacheSize) { DARABONBA_PTR_SET_VALUE(essdCacheSize_, essdCacheSize) };


    protected:
      // Specifies whether to enable the disk cache feature.
      // 
      // Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> enableEssdCache_ {};
      // The disk cache size. Unit: GB.
      shared_ptr<int32_t> essdCacheSize_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeEssdCacheConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeEssdCacheConfigResponseBody::Data) };
    inline DescribeEssdCacheConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeEssdCacheConfigResponseBody::Data) };
    inline DescribeEssdCacheConfigResponseBody& setData(const DescribeEssdCacheConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeEssdCacheConfigResponseBody& setData(DescribeEssdCacheConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEssdCacheConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<DescribeEssdCacheConfigResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
