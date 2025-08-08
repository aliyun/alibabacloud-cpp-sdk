// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEDEPLOYMENTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEDEPLOYMENTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ListServiceDeploymentsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceDeploymentsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(labelSelector, labelSelectorShrink_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceDeploymentsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(labelSelector, labelSelectorShrink_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    ListServiceDeploymentsShrinkRequest() = default ;
    ListServiceDeploymentsShrinkRequest(const ListServiceDeploymentsShrinkRequest &) = default ;
    ListServiceDeploymentsShrinkRequest(ListServiceDeploymentsShrinkRequest &&) = default ;
    ListServiceDeploymentsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceDeploymentsShrinkRequest() = default ;
    ListServiceDeploymentsShrinkRequest& operator=(const ListServiceDeploymentsShrinkRequest &) = default ;
    ListServiceDeploymentsShrinkRequest& operator=(ListServiceDeploymentsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyword_ != nullptr
        && this->labelSelectorShrink_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListServiceDeploymentsShrinkRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // labelSelectorShrink Field Functions 
    bool hasLabelSelectorShrink() const { return this->labelSelectorShrink_ != nullptr;};
    void deleteLabelSelectorShrink() { this->labelSelectorShrink_ = nullptr;};
    inline string labelSelectorShrink() const { DARABONBA_PTR_GET_DEFAULT(labelSelectorShrink_, "") };
    inline ListServiceDeploymentsShrinkRequest& setLabelSelectorShrink(string labelSelectorShrink) { DARABONBA_PTR_SET_VALUE(labelSelectorShrink_, labelSelectorShrink) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListServiceDeploymentsShrinkRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListServiceDeploymentsShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<string> labelSelectorShrink_ = nullptr;
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
