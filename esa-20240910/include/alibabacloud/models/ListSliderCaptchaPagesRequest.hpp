// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSLIDERCAPTCHAPAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSLIDERCAPTCHAPAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListSliderCaptchaPagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSliderCaptchaPagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryArgs, queryArgs_);
    };
    friend void from_json(const Darabonba::Json& j, ListSliderCaptchaPagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryArgs, queryArgs_);
    };
    ListSliderCaptchaPagesRequest() = default ;
    ListSliderCaptchaPagesRequest(const ListSliderCaptchaPagesRequest &) = default ;
    ListSliderCaptchaPagesRequest(ListSliderCaptchaPagesRequest &&) = default ;
    ListSliderCaptchaPagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSliderCaptchaPagesRequest() = default ;
    ListSliderCaptchaPagesRequest& operator=(const ListSliderCaptchaPagesRequest &) = default ;
    ListSliderCaptchaPagesRequest& operator=(ListSliderCaptchaPagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueryArgs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryArgs& obj) { 
        DARABONBA_PTR_TO_JSON(NameLike, nameLike_);
      };
      friend void from_json(const Darabonba::Json& j, QueryArgs& obj) { 
        DARABONBA_PTR_FROM_JSON(NameLike, nameLike_);
      };
      QueryArgs() = default ;
      QueryArgs(const QueryArgs &) = default ;
      QueryArgs(QueryArgs &&) = default ;
      QueryArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryArgs() = default ;
      QueryArgs& operator=(const QueryArgs &) = default ;
      QueryArgs& operator=(QueryArgs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nameLike_ == nullptr; };
      // nameLike Field Functions 
      bool hasNameLike() const { return this->nameLike_ != nullptr;};
      void deleteNameLike() { this->nameLike_ = nullptr;};
      inline string getNameLike() const { DARABONBA_PTR_GET_DEFAULT(nameLike_, "") };
      inline QueryArgs& setNameLike(string nameLike) { DARABONBA_PTR_SET_VALUE(nameLike_, nameLike) };


    protected:
      // The fuzzy search keyword for the name.
      shared_ptr<string> nameLike_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->queryArgs_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSliderCaptchaPagesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSliderCaptchaPagesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryArgs Field Functions 
    bool hasQueryArgs() const { return this->queryArgs_ != nullptr;};
    void deleteQueryArgs() { this->queryArgs_ = nullptr;};
    inline const ListSliderCaptchaPagesRequest::QueryArgs & getQueryArgs() const { DARABONBA_PTR_GET_CONST(queryArgs_, ListSliderCaptchaPagesRequest::QueryArgs) };
    inline ListSliderCaptchaPagesRequest::QueryArgs getQueryArgs() { DARABONBA_PTR_GET(queryArgs_, ListSliderCaptchaPagesRequest::QueryArgs) };
    inline ListSliderCaptchaPagesRequest& setQueryArgs(const ListSliderCaptchaPagesRequest::QueryArgs & queryArgs) { DARABONBA_PTR_SET_VALUE(queryArgs_, queryArgs) };
    inline ListSliderCaptchaPagesRequest& setQueryArgs(ListSliderCaptchaPagesRequest::QueryArgs && queryArgs) { DARABONBA_PTR_SET_RVALUE(queryArgs_, queryArgs) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The filter parameters.
    shared_ptr<ListSliderCaptchaPagesRequest::QueryArgs> queryArgs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
