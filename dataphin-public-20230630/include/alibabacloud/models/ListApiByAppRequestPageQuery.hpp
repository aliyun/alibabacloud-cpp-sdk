// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIBYAPPREQUESTPAGEQUERY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIBYAPPREQUESTPAGEQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListApiByAppRequestPageQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiByAppRequestPageQuery& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiByAppRequestPageQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListApiByAppRequestPageQuery() = default ;
    ListApiByAppRequestPageQuery(const ListApiByAppRequestPageQuery &) = default ;
    ListApiByAppRequestPageQuery(ListApiByAppRequestPageQuery &&) = default ;
    ListApiByAppRequestPageQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiByAppRequestPageQuery() = default ;
    ListApiByAppRequestPageQuery& operator=(const ListApiByAppRequestPageQuery &) = default ;
    ListApiByAppRequestPageQuery& operator=(ListApiByAppRequestPageQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && return this->keyword_ == nullptr && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline ListApiByAppRequestPageQuery& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListApiByAppRequestPageQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListApiByAppRequestPageQuery& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListApiByAppRequestPageQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // appKey
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> appKey_ = nullptr;
    std::shared_ptr<string> keyword_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
