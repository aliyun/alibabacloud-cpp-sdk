// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETSRESPONSEBODYTHIRDSEARCHCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETSRESPONSEBODYTHIRDSEARCHCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListDatasetsResponseBodyThirdSearchConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetsResponseBodyThirdSearchConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetQuota, datasetQuota_);
      DARABONBA_PTR_TO_JSON(DatasetUsedQuota, datasetUsedQuota_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetsResponseBodyThirdSearchConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetQuota, datasetQuota_);
      DARABONBA_PTR_FROM_JSON(DatasetUsedQuota, datasetUsedQuota_);
    };
    ListDatasetsResponseBodyThirdSearchConfig() = default ;
    ListDatasetsResponseBodyThirdSearchConfig(const ListDatasetsResponseBodyThirdSearchConfig &) = default ;
    ListDatasetsResponseBodyThirdSearchConfig(ListDatasetsResponseBodyThirdSearchConfig &&) = default ;
    ListDatasetsResponseBodyThirdSearchConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetsResponseBodyThirdSearchConfig() = default ;
    ListDatasetsResponseBodyThirdSearchConfig& operator=(const ListDatasetsResponseBodyThirdSearchConfig &) = default ;
    ListDatasetsResponseBodyThirdSearchConfig& operator=(ListDatasetsResponseBodyThirdSearchConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasetQuota_ != nullptr
        && this->datasetUsedQuota_ != nullptr; };
    // datasetQuota Field Functions 
    bool hasDatasetQuota() const { return this->datasetQuota_ != nullptr;};
    void deleteDatasetQuota() { this->datasetQuota_ = nullptr;};
    inline int32_t datasetQuota() const { DARABONBA_PTR_GET_DEFAULT(datasetQuota_, 0) };
    inline ListDatasetsResponseBodyThirdSearchConfig& setDatasetQuota(int32_t datasetQuota) { DARABONBA_PTR_SET_VALUE(datasetQuota_, datasetQuota) };


    // datasetUsedQuota Field Functions 
    bool hasDatasetUsedQuota() const { return this->datasetUsedQuota_ != nullptr;};
    void deleteDatasetUsedQuota() { this->datasetUsedQuota_ = nullptr;};
    inline int32_t datasetUsedQuota() const { DARABONBA_PTR_GET_DEFAULT(datasetUsedQuota_, 0) };
    inline ListDatasetsResponseBodyThirdSearchConfig& setDatasetUsedQuota(int32_t datasetUsedQuota) { DARABONBA_PTR_SET_VALUE(datasetUsedQuota_, datasetUsedQuota) };


  protected:
    std::shared_ptr<int32_t> datasetQuota_ = nullptr;
    std::shared_ptr<int32_t> datasetUsedQuota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
