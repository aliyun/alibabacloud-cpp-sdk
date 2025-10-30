// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVARIABLESCENELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVARIABLESCENELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeVariableSceneListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVariableSceneListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(bizType, bizType_);
      DARABONBA_PTR_TO_JSON(configKey, configKey_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(paging, paging_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVariableSceneListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(bizType, bizType_);
      DARABONBA_PTR_FROM_JSON(configKey, configKey_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(paging, paging_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DescribeVariableSceneListRequest() = default ;
    DescribeVariableSceneListRequest(const DescribeVariableSceneListRequest &) = default ;
    DescribeVariableSceneListRequest(DescribeVariableSceneListRequest &&) = default ;
    DescribeVariableSceneListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVariableSceneListRequest() = default ;
    DescribeVariableSceneListRequest& operator=(const DescribeVariableSceneListRequest &) = default ;
    DescribeVariableSceneListRequest& operator=(DescribeVariableSceneListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->bizType_ == nullptr && return this->configKey_ == nullptr && return this->currentPage_ == nullptr && return this->pageSize_ == nullptr && return this->paging_ == nullptr
        && return this->regId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeVariableSceneListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeVariableSceneListRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // configKey Field Functions 
    bool hasConfigKey() const { return this->configKey_ != nullptr;};
    void deleteConfigKey() { this->configKey_ = nullptr;};
    inline string configKey() const { DARABONBA_PTR_GET_DEFAULT(configKey_, "") };
    inline DescribeVariableSceneListRequest& setConfigKey(string configKey) { DARABONBA_PTR_SET_VALUE(configKey_, configKey) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeVariableSceneListRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeVariableSceneListRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // paging Field Functions 
    bool hasPaging() const { return this->paging_ != nullptr;};
    void deletePaging() { this->paging_ = nullptr;};
    inline bool paging() const { DARABONBA_PTR_GET_DEFAULT(paging_, false) };
    inline DescribeVariableSceneListRequest& setPaging(bool paging) { DARABONBA_PTR_SET_VALUE(paging_, paging) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeVariableSceneListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Business type.
    // 
    // This parameter is required.
    std::shared_ptr<string> bizType_ = nullptr;
    // Configuration key.
    std::shared_ptr<string> configKey_ = nullptr;
    // Current page number.
    std::shared_ptr<string> currentPage_ = nullptr;
    // Page size, default value is 10.
    std::shared_ptr<string> pageSize_ = nullptr;
    // Paging flag, default is true.
    // 
    // This parameter is required.
    std::shared_ptr<bool> paging_ = nullptr;
    // Region code.
    std::shared_ptr<string> regId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
