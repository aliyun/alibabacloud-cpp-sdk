// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPACLUSTERSTRATEGYNEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOPACLUSTERSTRATEGYNEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOpaClusterStrategyNewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOpaClusterStrategyNewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
    };
    friend void from_json(const Darabonba::Json& j, ListOpaClusterStrategyNewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
    };
    ListOpaClusterStrategyNewRequest() = default ;
    ListOpaClusterStrategyNewRequest(const ListOpaClusterStrategyNewRequest &) = default ;
    ListOpaClusterStrategyNewRequest(ListOpaClusterStrategyNewRequest &&) = default ;
    ListOpaClusterStrategyNewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOpaClusterStrategyNewRequest() = default ;
    ListOpaClusterStrategyNewRequest& operator=(const ListOpaClusterStrategyNewRequest &) = default ;
    ListOpaClusterStrategyNewRequest& operator=(ListOpaClusterStrategyNewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->imageName_ == nullptr && this->label_ == nullptr && this->pageSize_ == nullptr && this->strategyName_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListOpaClusterStrategyNewRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline const vector<string> & getImageName() const { DARABONBA_PTR_GET_CONST(imageName_, vector<string>) };
    inline vector<string> getImageName() { DARABONBA_PTR_GET(imageName_, vector<string>) };
    inline ListOpaClusterStrategyNewRequest& setImageName(const vector<string> & imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };
    inline ListOpaClusterStrategyNewRequest& setImageName(vector<string> && imageName) { DARABONBA_PTR_SET_RVALUE(imageName_, imageName) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline const vector<string> & getLabel() const { DARABONBA_PTR_GET_CONST(label_, vector<string>) };
    inline vector<string> getLabel() { DARABONBA_PTR_GET(label_, vector<string>) };
    inline ListOpaClusterStrategyNewRequest& setLabel(const vector<string> & label) { DARABONBA_PTR_SET_VALUE(label_, label) };
    inline ListOpaClusterStrategyNewRequest& setLabel(vector<string> && label) { DARABONBA_PTR_SET_RVALUE(label_, label) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOpaClusterStrategyNewRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline const vector<string> & getStrategyName() const { DARABONBA_PTR_GET_CONST(strategyName_, vector<string>) };
    inline vector<string> getStrategyName() { DARABONBA_PTR_GET(strategyName_, vector<string>) };
    inline ListOpaClusterStrategyNewRequest& setStrategyName(const vector<string> & strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };
    inline ListOpaClusterStrategyNewRequest& setStrategyName(vector<string> && strategyName) { DARABONBA_PTR_SET_RVALUE(strategyName_, strategyName) };


  protected:
    // The page number.
    shared_ptr<int32_t> currentPage_ {};
    // The image names.
    shared_ptr<vector<string>> imageName_ {};
    // The tags that are added to the container.
    shared_ptr<vector<string>> label_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The rule names.
    shared_ptr<vector<string>> strategyName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
