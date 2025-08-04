// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETSRESPONSEBODYCUSTOMSEMANTICSEARCHCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETSRESPONSEBODYCUSTOMSEMANTICSEARCHCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListDatasetsResponseBodyCustomSemanticSearchConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetsResponseBodyCustomSemanticSearchConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetQuota, datasetQuota_);
      DARABONBA_PTR_TO_JSON(DatasetUsedQuota, datasetUsedQuota_);
      DARABONBA_PTR_TO_JSON(DocQuota, docQuota_);
      DARABONBA_PTR_TO_JSON(DocUsedQuota, docUsedQuota_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetsResponseBodyCustomSemanticSearchConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetQuota, datasetQuota_);
      DARABONBA_PTR_FROM_JSON(DatasetUsedQuota, datasetUsedQuota_);
      DARABONBA_PTR_FROM_JSON(DocQuota, docQuota_);
      DARABONBA_PTR_FROM_JSON(DocUsedQuota, docUsedQuota_);
    };
    ListDatasetsResponseBodyCustomSemanticSearchConfig() = default ;
    ListDatasetsResponseBodyCustomSemanticSearchConfig(const ListDatasetsResponseBodyCustomSemanticSearchConfig &) = default ;
    ListDatasetsResponseBodyCustomSemanticSearchConfig(ListDatasetsResponseBodyCustomSemanticSearchConfig &&) = default ;
    ListDatasetsResponseBodyCustomSemanticSearchConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetsResponseBodyCustomSemanticSearchConfig() = default ;
    ListDatasetsResponseBodyCustomSemanticSearchConfig& operator=(const ListDatasetsResponseBodyCustomSemanticSearchConfig &) = default ;
    ListDatasetsResponseBodyCustomSemanticSearchConfig& operator=(ListDatasetsResponseBodyCustomSemanticSearchConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasetQuota_ != nullptr
        && this->datasetUsedQuota_ != nullptr && this->docQuota_ != nullptr && this->docUsedQuota_ != nullptr; };
    // datasetQuota Field Functions 
    bool hasDatasetQuota() const { return this->datasetQuota_ != nullptr;};
    void deleteDatasetQuota() { this->datasetQuota_ = nullptr;};
    inline int32_t datasetQuota() const { DARABONBA_PTR_GET_DEFAULT(datasetQuota_, 0) };
    inline ListDatasetsResponseBodyCustomSemanticSearchConfig& setDatasetQuota(int32_t datasetQuota) { DARABONBA_PTR_SET_VALUE(datasetQuota_, datasetQuota) };


    // datasetUsedQuota Field Functions 
    bool hasDatasetUsedQuota() const { return this->datasetUsedQuota_ != nullptr;};
    void deleteDatasetUsedQuota() { this->datasetUsedQuota_ = nullptr;};
    inline int32_t datasetUsedQuota() const { DARABONBA_PTR_GET_DEFAULT(datasetUsedQuota_, 0) };
    inline ListDatasetsResponseBodyCustomSemanticSearchConfig& setDatasetUsedQuota(int32_t datasetUsedQuota) { DARABONBA_PTR_SET_VALUE(datasetUsedQuota_, datasetUsedQuota) };


    // docQuota Field Functions 
    bool hasDocQuota() const { return this->docQuota_ != nullptr;};
    void deleteDocQuota() { this->docQuota_ = nullptr;};
    inline int64_t docQuota() const { DARABONBA_PTR_GET_DEFAULT(docQuota_, 0L) };
    inline ListDatasetsResponseBodyCustomSemanticSearchConfig& setDocQuota(int64_t docQuota) { DARABONBA_PTR_SET_VALUE(docQuota_, docQuota) };


    // docUsedQuota Field Functions 
    bool hasDocUsedQuota() const { return this->docUsedQuota_ != nullptr;};
    void deleteDocUsedQuota() { this->docUsedQuota_ = nullptr;};
    inline int64_t docUsedQuota() const { DARABONBA_PTR_GET_DEFAULT(docUsedQuota_, 0L) };
    inline ListDatasetsResponseBodyCustomSemanticSearchConfig& setDocUsedQuota(int64_t docUsedQuota) { DARABONBA_PTR_SET_VALUE(docUsedQuota_, docUsedQuota) };


  protected:
    std::shared_ptr<int32_t> datasetQuota_ = nullptr;
    std::shared_ptr<int32_t> datasetUsedQuota_ = nullptr;
    std::shared_ptr<int64_t> docQuota_ = nullptr;
    std::shared_ptr<int64_t> docUsedQuota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
