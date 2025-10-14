// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANCHORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTANCHORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ListAnchorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnchorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(anchorCategory, anchorCategory_);
      DARABONBA_PTR_TO_JSON(anchorId, anchorId_);
      DARABONBA_PTR_TO_JSON(anchorType, anchorType_);
      DARABONBA_PTR_TO_JSON(coverRate, coverRate_);
      DARABONBA_PTR_TO_JSON(digitalHumanType, digitalHumanType_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(resSpecType, resSpecType_);
      DARABONBA_PTR_TO_JSON(useScene, useScene_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnchorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(anchorCategory, anchorCategory_);
      DARABONBA_PTR_FROM_JSON(anchorId, anchorId_);
      DARABONBA_PTR_FROM_JSON(anchorType, anchorType_);
      DARABONBA_PTR_FROM_JSON(coverRate, coverRate_);
      DARABONBA_PTR_FROM_JSON(digitalHumanType, digitalHumanType_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(resSpecType, resSpecType_);
      DARABONBA_PTR_FROM_JSON(useScene, useScene_);
    };
    ListAnchorRequest() = default ;
    ListAnchorRequest(const ListAnchorRequest &) = default ;
    ListAnchorRequest(ListAnchorRequest &&) = default ;
    ListAnchorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnchorRequest() = default ;
    ListAnchorRequest& operator=(const ListAnchorRequest &) = default ;
    ListAnchorRequest& operator=(ListAnchorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anchorCategory_ == nullptr
        && return this->anchorId_ == nullptr && return this->anchorType_ == nullptr && return this->coverRate_ == nullptr && return this->digitalHumanType_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->resSpecType_ == nullptr && return this->useScene_ == nullptr; };
    // anchorCategory Field Functions 
    bool hasAnchorCategory() const { return this->anchorCategory_ != nullptr;};
    void deleteAnchorCategory() { this->anchorCategory_ = nullptr;};
    inline string anchorCategory() const { DARABONBA_PTR_GET_DEFAULT(anchorCategory_, "") };
    inline ListAnchorRequest& setAnchorCategory(string anchorCategory) { DARABONBA_PTR_SET_VALUE(anchorCategory_, anchorCategory) };


    // anchorId Field Functions 
    bool hasAnchorId() const { return this->anchorId_ != nullptr;};
    void deleteAnchorId() { this->anchorId_ = nullptr;};
    inline string anchorId() const { DARABONBA_PTR_GET_DEFAULT(anchorId_, "") };
    inline ListAnchorRequest& setAnchorId(string anchorId) { DARABONBA_PTR_SET_VALUE(anchorId_, anchorId) };


    // anchorType Field Functions 
    bool hasAnchorType() const { return this->anchorType_ != nullptr;};
    void deleteAnchorType() { this->anchorType_ = nullptr;};
    inline string anchorType() const { DARABONBA_PTR_GET_DEFAULT(anchorType_, "") };
    inline ListAnchorRequest& setAnchorType(string anchorType) { DARABONBA_PTR_SET_VALUE(anchorType_, anchorType) };


    // coverRate Field Functions 
    bool hasCoverRate() const { return this->coverRate_ != nullptr;};
    void deleteCoverRate() { this->coverRate_ = nullptr;};
    inline string coverRate() const { DARABONBA_PTR_GET_DEFAULT(coverRate_, "") };
    inline ListAnchorRequest& setCoverRate(string coverRate) { DARABONBA_PTR_SET_VALUE(coverRate_, coverRate) };


    // digitalHumanType Field Functions 
    bool hasDigitalHumanType() const { return this->digitalHumanType_ != nullptr;};
    void deleteDigitalHumanType() { this->digitalHumanType_ = nullptr;};
    inline string digitalHumanType() const { DARABONBA_PTR_GET_DEFAULT(digitalHumanType_, "") };
    inline ListAnchorRequest& setDigitalHumanType(string digitalHumanType) { DARABONBA_PTR_SET_VALUE(digitalHumanType_, digitalHumanType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAnchorRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAnchorRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resSpecType Field Functions 
    bool hasResSpecType() const { return this->resSpecType_ != nullptr;};
    void deleteResSpecType() { this->resSpecType_ = nullptr;};
    inline string resSpecType() const { DARABONBA_PTR_GET_DEFAULT(resSpecType_, "") };
    inline ListAnchorRequest& setResSpecType(string resSpecType) { DARABONBA_PTR_SET_VALUE(resSpecType_, resSpecType) };


    // useScene Field Functions 
    bool hasUseScene() const { return this->useScene_ != nullptr;};
    void deleteUseScene() { this->useScene_ = nullptr;};
    inline string useScene() const { DARABONBA_PTR_GET_DEFAULT(useScene_, "") };
    inline ListAnchorRequest& setUseScene(string useScene) { DARABONBA_PTR_SET_VALUE(useScene_, useScene) };


  protected:
    std::shared_ptr<string> anchorCategory_ = nullptr;
    std::shared_ptr<string> anchorId_ = nullptr;
    std::shared_ptr<string> anchorType_ = nullptr;
    std::shared_ptr<string> coverRate_ = nullptr;
    std::shared_ptr<string> digitalHumanType_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> resSpecType_ = nullptr;
    std::shared_ptr<string> useScene_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
