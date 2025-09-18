// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMAPPRESPONSEBODYAPPINFOLISTMODELCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTMMAPPRESPONSEBODYAPPINFOLISTMODELCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class ListMmAppResponseBodyAppInfoListModelConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmAppResponseBodyAppInfoListModelConfig& obj) { 
      DARABONBA_PTR_TO_JSON(HistoryLimit, historyLimit_);
      DARABONBA_PTR_TO_JSON(ModelType, modelType_);
      DARABONBA_PTR_TO_JSON(OpenWebSearch, openWebSearch_);
      DARABONBA_PTR_TO_JSON(TextModal, textModal_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmAppResponseBodyAppInfoListModelConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(HistoryLimit, historyLimit_);
      DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
      DARABONBA_PTR_FROM_JSON(OpenWebSearch, openWebSearch_);
      DARABONBA_PTR_FROM_JSON(TextModal, textModal_);
    };
    ListMmAppResponseBodyAppInfoListModelConfig() = default ;
    ListMmAppResponseBodyAppInfoListModelConfig(const ListMmAppResponseBodyAppInfoListModelConfig &) = default ;
    ListMmAppResponseBodyAppInfoListModelConfig(ListMmAppResponseBodyAppInfoListModelConfig &&) = default ;
    ListMmAppResponseBodyAppInfoListModelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmAppResponseBodyAppInfoListModelConfig() = default ;
    ListMmAppResponseBodyAppInfoListModelConfig& operator=(const ListMmAppResponseBodyAppInfoListModelConfig &) = default ;
    ListMmAppResponseBodyAppInfoListModelConfig& operator=(ListMmAppResponseBodyAppInfoListModelConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->historyLimit_ != nullptr
        && this->modelType_ != nullptr && this->openWebSearch_ != nullptr && this->textModal_ != nullptr; };
    // historyLimit Field Functions 
    bool hasHistoryLimit() const { return this->historyLimit_ != nullptr;};
    void deleteHistoryLimit() { this->historyLimit_ = nullptr;};
    inline string historyLimit() const { DARABONBA_PTR_GET_DEFAULT(historyLimit_, "") };
    inline ListMmAppResponseBodyAppInfoListModelConfig& setHistoryLimit(string historyLimit) { DARABONBA_PTR_SET_VALUE(historyLimit_, historyLimit) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string modelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline ListMmAppResponseBodyAppInfoListModelConfig& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // openWebSearch Field Functions 
    bool hasOpenWebSearch() const { return this->openWebSearch_ != nullptr;};
    void deleteOpenWebSearch() { this->openWebSearch_ = nullptr;};
    inline bool openWebSearch() const { DARABONBA_PTR_GET_DEFAULT(openWebSearch_, false) };
    inline ListMmAppResponseBodyAppInfoListModelConfig& setOpenWebSearch(bool openWebSearch) { DARABONBA_PTR_SET_VALUE(openWebSearch_, openWebSearch) };


    // textModal Field Functions 
    bool hasTextModal() const { return this->textModal_ != nullptr;};
    void deleteTextModal() { this->textModal_ = nullptr;};
    inline string textModal() const { DARABONBA_PTR_GET_DEFAULT(textModal_, "") };
    inline ListMmAppResponseBodyAppInfoListModelConfig& setTextModal(string textModal) { DARABONBA_PTR_SET_VALUE(textModal_, textModal) };


  protected:
    std::shared_ptr<string> historyLimit_ = nullptr;
    std::shared_ptr<string> modelType_ = nullptr;
    std::shared_ptr<bool> openWebSearch_ = nullptr;
    std::shared_ptr<string> textModal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
