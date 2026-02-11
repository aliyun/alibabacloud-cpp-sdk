// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeProdCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProdCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProdCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeProdCountResponseBody() = default ;
    DescribeProdCountResponseBody(const DescribeProdCountResponseBody &) = default ;
    DescribeProdCountResponseBody(DescribeProdCountResponseBody &&) = default ;
    DescribeProdCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProdCountResponseBody() = default ;
    DescribeProdCountResponseBody& operator=(const DescribeProdCountResponseBody &) = default ;
    DescribeProdCountResponseBody& operator=(DescribeProdCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunImportedCount, aliyunImportedCount_);
        DARABONBA_PTR_TO_JSON(AliyunProdCount, aliyunProdCount_);
        DARABONBA_PTR_TO_JSON(HcloudImportedCount, hcloudImportedCount_);
        DARABONBA_PTR_TO_JSON(HcloudProdCount, hcloudProdCount_);
        DARABONBA_PTR_TO_JSON(IdcImportedCount, idcImportedCount_);
        DARABONBA_PTR_TO_JSON(IdcProdCount, idcProdCount_);
        DARABONBA_PTR_TO_JSON(QcloudImportedCount, qcloudImportedCount_);
        DARABONBA_PTR_TO_JSON(QcloudProdCount, qcloudProdCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunImportedCount, aliyunImportedCount_);
        DARABONBA_PTR_FROM_JSON(AliyunProdCount, aliyunProdCount_);
        DARABONBA_PTR_FROM_JSON(HcloudImportedCount, hcloudImportedCount_);
        DARABONBA_PTR_FROM_JSON(HcloudProdCount, hcloudProdCount_);
        DARABONBA_PTR_FROM_JSON(IdcImportedCount, idcImportedCount_);
        DARABONBA_PTR_FROM_JSON(IdcProdCount, idcProdCount_);
        DARABONBA_PTR_FROM_JSON(QcloudImportedCount, qcloudImportedCount_);
        DARABONBA_PTR_FROM_JSON(QcloudProdCount, qcloudProdCount_);
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
      virtual bool empty() const override { return this->aliyunImportedCount_ == nullptr
        && this->aliyunProdCount_ == nullptr && this->hcloudImportedCount_ == nullptr && this->hcloudProdCount_ == nullptr && this->idcImportedCount_ == nullptr && this->idcProdCount_ == nullptr
        && this->qcloudImportedCount_ == nullptr && this->qcloudProdCount_ == nullptr; };
      // aliyunImportedCount Field Functions 
      bool hasAliyunImportedCount() const { return this->aliyunImportedCount_ != nullptr;};
      void deleteAliyunImportedCount() { this->aliyunImportedCount_ = nullptr;};
      inline int32_t getAliyunImportedCount() const { DARABONBA_PTR_GET_DEFAULT(aliyunImportedCount_, 0) };
      inline Data& setAliyunImportedCount(int32_t aliyunImportedCount) { DARABONBA_PTR_SET_VALUE(aliyunImportedCount_, aliyunImportedCount) };


      // aliyunProdCount Field Functions 
      bool hasAliyunProdCount() const { return this->aliyunProdCount_ != nullptr;};
      void deleteAliyunProdCount() { this->aliyunProdCount_ = nullptr;};
      inline int32_t getAliyunProdCount() const { DARABONBA_PTR_GET_DEFAULT(aliyunProdCount_, 0) };
      inline Data& setAliyunProdCount(int32_t aliyunProdCount) { DARABONBA_PTR_SET_VALUE(aliyunProdCount_, aliyunProdCount) };


      // hcloudImportedCount Field Functions 
      bool hasHcloudImportedCount() const { return this->hcloudImportedCount_ != nullptr;};
      void deleteHcloudImportedCount() { this->hcloudImportedCount_ = nullptr;};
      inline int32_t getHcloudImportedCount() const { DARABONBA_PTR_GET_DEFAULT(hcloudImportedCount_, 0) };
      inline Data& setHcloudImportedCount(int32_t hcloudImportedCount) { DARABONBA_PTR_SET_VALUE(hcloudImportedCount_, hcloudImportedCount) };


      // hcloudProdCount Field Functions 
      bool hasHcloudProdCount() const { return this->hcloudProdCount_ != nullptr;};
      void deleteHcloudProdCount() { this->hcloudProdCount_ = nullptr;};
      inline int32_t getHcloudProdCount() const { DARABONBA_PTR_GET_DEFAULT(hcloudProdCount_, 0) };
      inline Data& setHcloudProdCount(int32_t hcloudProdCount) { DARABONBA_PTR_SET_VALUE(hcloudProdCount_, hcloudProdCount) };


      // idcImportedCount Field Functions 
      bool hasIdcImportedCount() const { return this->idcImportedCount_ != nullptr;};
      void deleteIdcImportedCount() { this->idcImportedCount_ = nullptr;};
      inline int32_t getIdcImportedCount() const { DARABONBA_PTR_GET_DEFAULT(idcImportedCount_, 0) };
      inline Data& setIdcImportedCount(int32_t idcImportedCount) { DARABONBA_PTR_SET_VALUE(idcImportedCount_, idcImportedCount) };


      // idcProdCount Field Functions 
      bool hasIdcProdCount() const { return this->idcProdCount_ != nullptr;};
      void deleteIdcProdCount() { this->idcProdCount_ = nullptr;};
      inline int32_t getIdcProdCount() const { DARABONBA_PTR_GET_DEFAULT(idcProdCount_, 0) };
      inline Data& setIdcProdCount(int32_t idcProdCount) { DARABONBA_PTR_SET_VALUE(idcProdCount_, idcProdCount) };


      // qcloudImportedCount Field Functions 
      bool hasQcloudImportedCount() const { return this->qcloudImportedCount_ != nullptr;};
      void deleteQcloudImportedCount() { this->qcloudImportedCount_ = nullptr;};
      inline int32_t getQcloudImportedCount() const { DARABONBA_PTR_GET_DEFAULT(qcloudImportedCount_, 0) };
      inline Data& setQcloudImportedCount(int32_t qcloudImportedCount) { DARABONBA_PTR_SET_VALUE(qcloudImportedCount_, qcloudImportedCount) };


      // qcloudProdCount Field Functions 
      bool hasQcloudProdCount() const { return this->qcloudProdCount_ != nullptr;};
      void deleteQcloudProdCount() { this->qcloudProdCount_ = nullptr;};
      inline int32_t getQcloudProdCount() const { DARABONBA_PTR_GET_DEFAULT(qcloudProdCount_, 0) };
      inline Data& setQcloudProdCount(int32_t qcloudProdCount) { DARABONBA_PTR_SET_VALUE(qcloudProdCount_, qcloudProdCount) };


    protected:
      shared_ptr<int32_t> aliyunImportedCount_ {};
      // The number of Alibaba Cloud services.
      shared_ptr<int32_t> aliyunProdCount_ {};
      shared_ptr<int32_t> hcloudImportedCount_ {};
      // The number of Huawei Cloud services.
      shared_ptr<int32_t> hcloudProdCount_ {};
      shared_ptr<int32_t> idcImportedCount_ {};
      shared_ptr<int32_t> idcProdCount_ {};
      shared_ptr<int32_t> qcloudImportedCount_ {};
      // The number of Tencent Cloud services.
      shared_ptr<int32_t> qcloudProdCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeProdCountResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeProdCountResponseBody::Data) };
    inline DescribeProdCountResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeProdCountResponseBody::Data) };
    inline DescribeProdCountResponseBody& setData(const DescribeProdCountResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeProdCountResponseBody& setData(DescribeProdCountResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProdCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<DescribeProdCountResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
