// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODCOUNTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODCOUNTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeProdCountResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProdCountResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunImportedCount, aliyunImportedCount_);
      DARABONBA_PTR_TO_JSON(AliyunProdCount, aliyunProdCount_);
      DARABONBA_PTR_TO_JSON(HcloudImportedCount, hcloudImportedCount_);
      DARABONBA_PTR_TO_JSON(HcloudProdCount, hcloudProdCount_);
      DARABONBA_PTR_TO_JSON(IdcImportedCount, idcImportedCount_);
      DARABONBA_PTR_TO_JSON(IdcProdCount, idcProdCount_);
      DARABONBA_PTR_TO_JSON(QcloudImportedCount, qcloudImportedCount_);
      DARABONBA_PTR_TO_JSON(QcloudProdCount, qcloudProdCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProdCountResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunImportedCount, aliyunImportedCount_);
      DARABONBA_PTR_FROM_JSON(AliyunProdCount, aliyunProdCount_);
      DARABONBA_PTR_FROM_JSON(HcloudImportedCount, hcloudImportedCount_);
      DARABONBA_PTR_FROM_JSON(HcloudProdCount, hcloudProdCount_);
      DARABONBA_PTR_FROM_JSON(IdcImportedCount, idcImportedCount_);
      DARABONBA_PTR_FROM_JSON(IdcProdCount, idcProdCount_);
      DARABONBA_PTR_FROM_JSON(QcloudImportedCount, qcloudImportedCount_);
      DARABONBA_PTR_FROM_JSON(QcloudProdCount, qcloudProdCount_);
    };
    DescribeProdCountResponseBodyData() = default ;
    DescribeProdCountResponseBodyData(const DescribeProdCountResponseBodyData &) = default ;
    DescribeProdCountResponseBodyData(DescribeProdCountResponseBodyData &&) = default ;
    DescribeProdCountResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProdCountResponseBodyData() = default ;
    DescribeProdCountResponseBodyData& operator=(const DescribeProdCountResponseBodyData &) = default ;
    DescribeProdCountResponseBodyData& operator=(DescribeProdCountResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunImportedCount_ != nullptr
        && this->aliyunProdCount_ != nullptr && this->hcloudImportedCount_ != nullptr && this->hcloudProdCount_ != nullptr && this->idcImportedCount_ != nullptr && this->idcProdCount_ != nullptr
        && this->qcloudImportedCount_ != nullptr && this->qcloudProdCount_ != nullptr; };
    // aliyunImportedCount Field Functions 
    bool hasAliyunImportedCount() const { return this->aliyunImportedCount_ != nullptr;};
    void deleteAliyunImportedCount() { this->aliyunImportedCount_ = nullptr;};
    inline int32_t aliyunImportedCount() const { DARABONBA_PTR_GET_DEFAULT(aliyunImportedCount_, 0) };
    inline DescribeProdCountResponseBodyData& setAliyunImportedCount(int32_t aliyunImportedCount) { DARABONBA_PTR_SET_VALUE(aliyunImportedCount_, aliyunImportedCount) };


    // aliyunProdCount Field Functions 
    bool hasAliyunProdCount() const { return this->aliyunProdCount_ != nullptr;};
    void deleteAliyunProdCount() { this->aliyunProdCount_ = nullptr;};
    inline int32_t aliyunProdCount() const { DARABONBA_PTR_GET_DEFAULT(aliyunProdCount_, 0) };
    inline DescribeProdCountResponseBodyData& setAliyunProdCount(int32_t aliyunProdCount) { DARABONBA_PTR_SET_VALUE(aliyunProdCount_, aliyunProdCount) };


    // hcloudImportedCount Field Functions 
    bool hasHcloudImportedCount() const { return this->hcloudImportedCount_ != nullptr;};
    void deleteHcloudImportedCount() { this->hcloudImportedCount_ = nullptr;};
    inline int32_t hcloudImportedCount() const { DARABONBA_PTR_GET_DEFAULT(hcloudImportedCount_, 0) };
    inline DescribeProdCountResponseBodyData& setHcloudImportedCount(int32_t hcloudImportedCount) { DARABONBA_PTR_SET_VALUE(hcloudImportedCount_, hcloudImportedCount) };


    // hcloudProdCount Field Functions 
    bool hasHcloudProdCount() const { return this->hcloudProdCount_ != nullptr;};
    void deleteHcloudProdCount() { this->hcloudProdCount_ = nullptr;};
    inline int32_t hcloudProdCount() const { DARABONBA_PTR_GET_DEFAULT(hcloudProdCount_, 0) };
    inline DescribeProdCountResponseBodyData& setHcloudProdCount(int32_t hcloudProdCount) { DARABONBA_PTR_SET_VALUE(hcloudProdCount_, hcloudProdCount) };


    // idcImportedCount Field Functions 
    bool hasIdcImportedCount() const { return this->idcImportedCount_ != nullptr;};
    void deleteIdcImportedCount() { this->idcImportedCount_ = nullptr;};
    inline int32_t idcImportedCount() const { DARABONBA_PTR_GET_DEFAULT(idcImportedCount_, 0) };
    inline DescribeProdCountResponseBodyData& setIdcImportedCount(int32_t idcImportedCount) { DARABONBA_PTR_SET_VALUE(idcImportedCount_, idcImportedCount) };


    // idcProdCount Field Functions 
    bool hasIdcProdCount() const { return this->idcProdCount_ != nullptr;};
    void deleteIdcProdCount() { this->idcProdCount_ = nullptr;};
    inline int32_t idcProdCount() const { DARABONBA_PTR_GET_DEFAULT(idcProdCount_, 0) };
    inline DescribeProdCountResponseBodyData& setIdcProdCount(int32_t idcProdCount) { DARABONBA_PTR_SET_VALUE(idcProdCount_, idcProdCount) };


    // qcloudImportedCount Field Functions 
    bool hasQcloudImportedCount() const { return this->qcloudImportedCount_ != nullptr;};
    void deleteQcloudImportedCount() { this->qcloudImportedCount_ = nullptr;};
    inline int32_t qcloudImportedCount() const { DARABONBA_PTR_GET_DEFAULT(qcloudImportedCount_, 0) };
    inline DescribeProdCountResponseBodyData& setQcloudImportedCount(int32_t qcloudImportedCount) { DARABONBA_PTR_SET_VALUE(qcloudImportedCount_, qcloudImportedCount) };


    // qcloudProdCount Field Functions 
    bool hasQcloudProdCount() const { return this->qcloudProdCount_ != nullptr;};
    void deleteQcloudProdCount() { this->qcloudProdCount_ = nullptr;};
    inline int32_t qcloudProdCount() const { DARABONBA_PTR_GET_DEFAULT(qcloudProdCount_, 0) };
    inline DescribeProdCountResponseBodyData& setQcloudProdCount(int32_t qcloudProdCount) { DARABONBA_PTR_SET_VALUE(qcloudProdCount_, qcloudProdCount) };


  protected:
    std::shared_ptr<int32_t> aliyunImportedCount_ = nullptr;
    // The number of Alibaba Cloud services.
    std::shared_ptr<int32_t> aliyunProdCount_ = nullptr;
    std::shared_ptr<int32_t> hcloudImportedCount_ = nullptr;
    // The number of Huawei Cloud services.
    std::shared_ptr<int32_t> hcloudProdCount_ = nullptr;
    std::shared_ptr<int32_t> idcImportedCount_ = nullptr;
    std::shared_ptr<int32_t> idcProdCount_ = nullptr;
    std::shared_ptr<int32_t> qcloudImportedCount_ = nullptr;
    // The number of Tencent Cloud services.
    std::shared_ptr<int32_t> qcloudProdCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
