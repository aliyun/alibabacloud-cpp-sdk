// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLPRODSRESPONSEBODYDATAPRODLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTALLPRODSRESPONSEBODYDATAPRODLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListAllProdsResponseBodyDataProdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllProdsResponseBodyDataProdList& obj) { 
      DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_TO_JSON(ImportedLogCount, importedLogCount_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_TO_JSON(TotalLogCount, totalLogCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllProdsResponseBodyDataProdList& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_FROM_JSON(ImportedLogCount, importedLogCount_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_FROM_JSON(TotalLogCount, totalLogCount_);
    };
    ListAllProdsResponseBodyDataProdList() = default ;
    ListAllProdsResponseBodyDataProdList(const ListAllProdsResponseBodyDataProdList &) = default ;
    ListAllProdsResponseBodyDataProdList(ListAllProdsResponseBodyDataProdList &&) = default ;
    ListAllProdsResponseBodyDataProdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllProdsResponseBodyDataProdList() = default ;
    ListAllProdsResponseBodyDataProdList& operator=(const ListAllProdsResponseBodyDataProdList &) = default ;
    ListAllProdsResponseBodyDataProdList& operator=(ListAllProdsResponseBodyDataProdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cloudCode_ != nullptr
        && this->importedLogCount_ != nullptr && this->modifyTime_ != nullptr && this->prodCode_ != nullptr && this->totalLogCount_ != nullptr; };
    // cloudCode Field Functions 
    bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
    void deleteCloudCode() { this->cloudCode_ = nullptr;};
    inline string cloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
    inline ListAllProdsResponseBodyDataProdList& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


    // importedLogCount Field Functions 
    bool hasImportedLogCount() const { return this->importedLogCount_ != nullptr;};
    void deleteImportedLogCount() { this->importedLogCount_ = nullptr;};
    inline int32_t importedLogCount() const { DARABONBA_PTR_GET_DEFAULT(importedLogCount_, 0) };
    inline ListAllProdsResponseBodyDataProdList& setImportedLogCount(int32_t importedLogCount) { DARABONBA_PTR_SET_VALUE(importedLogCount_, importedLogCount) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListAllProdsResponseBodyDataProdList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // prodCode Field Functions 
    bool hasProdCode() const { return this->prodCode_ != nullptr;};
    void deleteProdCode() { this->prodCode_ = nullptr;};
    inline string prodCode() const { DARABONBA_PTR_GET_DEFAULT(prodCode_, "") };
    inline ListAllProdsResponseBodyDataProdList& setProdCode(string prodCode) { DARABONBA_PTR_SET_VALUE(prodCode_, prodCode) };


    // totalLogCount Field Functions 
    bool hasTotalLogCount() const { return this->totalLogCount_ != nullptr;};
    void deleteTotalLogCount() { this->totalLogCount_ = nullptr;};
    inline int32_t totalLogCount() const { DARABONBA_PTR_GET_DEFAULT(totalLogCount_, 0) };
    inline ListAllProdsResponseBodyDataProdList& setTotalLogCount(int32_t totalLogCount) { DARABONBA_PTR_SET_VALUE(totalLogCount_, totalLogCount) };


  protected:
    // The code of the cloud service provider. Valid values:
    // 
    // *   qcloud: Tencent Cloud.
    // *   aliyun: Alibaba Cloud.
    // *   hcloud: Huawei Cloud.
    std::shared_ptr<string> cloudCode_ = nullptr;
    // The number of logs within the cloud service that are added to the threat analysis feature.
    std::shared_ptr<int32_t> importedLogCount_ = nullptr;
    // The time when the logs within the cloud service were last added to the threat analysis feature.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The code of the cloud service.
    std::shared_ptr<string> prodCode_ = nullptr;
    // The total number of logs within the cloud service.
    std::shared_ptr<int32_t> totalLogCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
