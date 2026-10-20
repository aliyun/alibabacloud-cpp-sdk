// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSLIDERCAPTCHAPAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSLIDERCAPTCHAPAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListSliderCaptchaPagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSliderCaptchaPagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Pages, pages_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSliderCaptchaPagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Pages, pages_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSliderCaptchaPagesResponseBody() = default ;
    ListSliderCaptchaPagesResponseBody(const ListSliderCaptchaPagesResponseBody &) = default ;
    ListSliderCaptchaPagesResponseBody(ListSliderCaptchaPagesResponseBody &&) = default ;
    ListSliderCaptchaPagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSliderCaptchaPagesResponseBody() = default ;
    ListSliderCaptchaPagesResponseBody& operator=(const ListSliderCaptchaPagesResponseBody &) = default ;
    ListSliderCaptchaPagesResponseBody& operator=(ListSliderCaptchaPagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Pages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Pages& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SiteIds, siteIds_);
      };
      friend void from_json(const Darabonba::Json& j, Pages& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SiteIds, siteIds_);
      };
      Pages() = default ;
      Pages(const Pages &) = default ;
      Pages(Pages &&) = default ;
      Pages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Pages() = default ;
      Pages& operator=(const Pages &) = default ;
      Pages& operator=(Pages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->siteIds_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Pages& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Pages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // siteIds Field Functions 
      bool hasSiteIds() const { return this->siteIds_ != nullptr;};
      void deleteSiteIds() { this->siteIds_ = nullptr;};
      inline const vector<int64_t> & getSiteIds() const { DARABONBA_PTR_GET_CONST(siteIds_, vector<int64_t>) };
      inline vector<int64_t> getSiteIds() { DARABONBA_PTR_GET(siteIds_, vector<int64_t>) };
      inline Pages& setSiteIds(const vector<int64_t> & siteIds) { DARABONBA_PTR_SET_VALUE(siteIds_, siteIds) };
      inline Pages& setSiteIds(vector<int64_t> && siteIds) { DARABONBA_PTR_SET_RVALUE(siteIds_, siteIds) };


    protected:
      // The ID of the custom slider CAPTCHA page.
      shared_ptr<int64_t> id_ {};
      // The name of the custom slider CAPTCHA page.
      shared_ptr<string> name_ {};
      // The list of associated site IDs.
      shared_ptr<vector<int64_t>> siteIds_ {};
    };

    virtual bool empty() const override { return this->pages_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pages Field Functions 
    bool hasPages() const { return this->pages_ != nullptr;};
    void deletePages() { this->pages_ = nullptr;};
    inline const vector<ListSliderCaptchaPagesResponseBody::Pages> & getPages() const { DARABONBA_PTR_GET_CONST(pages_, vector<ListSliderCaptchaPagesResponseBody::Pages>) };
    inline vector<ListSliderCaptchaPagesResponseBody::Pages> getPages() { DARABONBA_PTR_GET(pages_, vector<ListSliderCaptchaPagesResponseBody::Pages>) };
    inline ListSliderCaptchaPagesResponseBody& setPages(const vector<ListSliderCaptchaPagesResponseBody::Pages> & pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };
    inline ListSliderCaptchaPagesResponseBody& setPages(vector<ListSliderCaptchaPagesResponseBody::Pages> && pages) { DARABONBA_PTR_SET_RVALUE(pages_, pages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSliderCaptchaPagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSliderCaptchaPagesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of custom slider CAPTCHA pages.
    shared_ptr<vector<ListSliderCaptchaPagesResponseBody::Pages>> pages_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
