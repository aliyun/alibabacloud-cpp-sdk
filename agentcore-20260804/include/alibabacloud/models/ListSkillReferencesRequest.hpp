// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLREFERENCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLREFERENCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListSkillReferencesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillReferencesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(pageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(selectorType, selectorType_);
      DARABONBA_PTR_TO_JSON(selectorValue, selectorValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillReferencesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(pageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(selectorType, selectorType_);
      DARABONBA_PTR_FROM_JSON(selectorValue, selectorValue_);
    };
    ListSkillReferencesRequest() = default ;
    ListSkillReferencesRequest(const ListSkillReferencesRequest &) = default ;
    ListSkillReferencesRequest(ListSkillReferencesRequest &&) = default ;
    ListSkillReferencesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillReferencesRequest() = default ;
    ListSkillReferencesRequest& operator=(const ListSkillReferencesRequest &) = default ;
    ListSkillReferencesRequest& operator=(ListSkillReferencesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->selectorType_ == nullptr && this->selectorValue_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListSkillReferencesRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSkillReferencesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // selectorType Field Functions 
    bool hasSelectorType() const { return this->selectorType_ != nullptr;};
    void deleteSelectorType() { this->selectorType_ = nullptr;};
    inline string getSelectorType() const { DARABONBA_PTR_GET_DEFAULT(selectorType_, "") };
    inline ListSkillReferencesRequest& setSelectorType(string selectorType) { DARABONBA_PTR_SET_VALUE(selectorType_, selectorType) };


    // selectorValue Field Functions 
    bool hasSelectorValue() const { return this->selectorValue_ != nullptr;};
    void deleteSelectorValue() { this->selectorValue_ = nullptr;};
    inline string getSelectorValue() const { DARABONBA_PTR_GET_DEFAULT(selectorValue_, "") };
    inline ListSkillReferencesRequest& setSelectorValue(string selectorValue) { DARABONBA_PTR_SET_VALUE(selectorValue_, selectorValue) };


  protected:
    // The page number, starting from 1. Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. If this parameter is not specified, the server-side default value is used.
    shared_ptr<int32_t> pageSize_ {};
    // Filters results by reference selector type. Valid values: LABEL and VERSION.
    shared_ptr<string> selectorType_ {};
    // Filters results by reference selector value, such as latest, a named label, HEAD, or a specific version.
    shared_ptr<string> selectorValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
