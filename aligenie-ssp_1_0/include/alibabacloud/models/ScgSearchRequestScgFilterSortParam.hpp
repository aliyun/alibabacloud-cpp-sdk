// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCGSEARCHREQUESTSCGFILTERSORTPARAM_HPP_
#define ALIBABACLOUD_MODELS_SCGSEARCHREQUESTSCGFILTERSORTPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ScgSearchRequestScgFilterSortParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScgSearchRequestScgFilterSortParam& obj) { 
      DARABONBA_PTR_TO_JSON(SortKey, sortKey_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(SortText, sortText_);
    };
    friend void from_json(const Darabonba::Json& j, ScgSearchRequestScgFilterSortParam& obj) { 
      DARABONBA_PTR_FROM_JSON(SortKey, sortKey_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(SortText, sortText_);
    };
    ScgSearchRequestScgFilterSortParam() = default ;
    ScgSearchRequestScgFilterSortParam(const ScgSearchRequestScgFilterSortParam &) = default ;
    ScgSearchRequestScgFilterSortParam(ScgSearchRequestScgFilterSortParam &&) = default ;
    ScgSearchRequestScgFilterSortParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScgSearchRequestScgFilterSortParam() = default ;
    ScgSearchRequestScgFilterSortParam& operator=(const ScgSearchRequestScgFilterSortParam &) = default ;
    ScgSearchRequestScgFilterSortParam& operator=(ScgSearchRequestScgFilterSortParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sortKey_ != nullptr
        && this->sortOrder_ != nullptr && this->sortText_ != nullptr; };
    // sortKey Field Functions 
    bool hasSortKey() const { return this->sortKey_ != nullptr;};
    void deleteSortKey() { this->sortKey_ = nullptr;};
    inline string sortKey() const { DARABONBA_PTR_GET_DEFAULT(sortKey_, "") };
    inline ScgSearchRequestScgFilterSortParam& setSortKey(string sortKey) { DARABONBA_PTR_SET_VALUE(sortKey_, sortKey) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string sortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ScgSearchRequestScgFilterSortParam& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // sortText Field Functions 
    bool hasSortText() const { return this->sortText_ != nullptr;};
    void deleteSortText() { this->sortText_ = nullptr;};
    inline string sortText() const { DARABONBA_PTR_GET_DEFAULT(sortText_, "") };
    inline ScgSearchRequestScgFilterSortParam& setSortText(string sortText) { DARABONBA_PTR_SET_VALUE(sortText_, sortText) };


  protected:
    std::shared_ptr<string> sortKey_ = nullptr;
    std::shared_ptr<string> sortOrder_ = nullptr;
    std::shared_ptr<string> sortText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
