// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATELISTBYUSERIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATELISTBYUSERIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetTemplateListByUserIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateListByUserIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextCursor, nextCursor_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(templateList, templateList_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateListByUserIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextCursor, nextCursor_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(templateList, templateList_);
    };
    GetTemplateListByUserIdResponseBody() = default ;
    GetTemplateListByUserIdResponseBody(const GetTemplateListByUserIdResponseBody &) = default ;
    GetTemplateListByUserIdResponseBody(GetTemplateListByUserIdResponseBody &&) = default ;
    GetTemplateListByUserIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateListByUserIdResponseBody() = default ;
    GetTemplateListByUserIdResponseBody& operator=(const GetTemplateListByUserIdResponseBody &) = default ;
    GetTemplateListByUserIdResponseBody& operator=(GetTemplateListByUserIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TemplateList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateList& obj) { 
        DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ReportCode, reportCode_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, TemplateList& obj) { 
        DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ReportCode, reportCode_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      TemplateList() = default ;
      TemplateList(const TemplateList &) = default ;
      TemplateList(TemplateList &&) = default ;
      TemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateList() = default ;
      TemplateList& operator=(const TemplateList &) = default ;
      TemplateList& operator=(TemplateList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->iconUrl_ == nullptr
        && this->name_ == nullptr && this->reportCode_ == nullptr && this->url_ == nullptr; };
      // iconUrl Field Functions 
      bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
      void deleteIconUrl() { this->iconUrl_ = nullptr;};
      inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
      inline TemplateList& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TemplateList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // reportCode Field Functions 
      bool hasReportCode() const { return this->reportCode_ != nullptr;};
      void deleteReportCode() { this->reportCode_ = nullptr;};
      inline string getReportCode() const { DARABONBA_PTR_GET_DEFAULT(reportCode_, "") };
      inline TemplateList& setReportCode(string reportCode) { DARABONBA_PTR_SET_VALUE(reportCode_, reportCode) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline TemplateList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> iconUrl_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> reportCode_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->nextCursor_ == nullptr
        && this->requestId_ == nullptr && this->templateList_ == nullptr; };
    // nextCursor Field Functions 
    bool hasNextCursor() const { return this->nextCursor_ != nullptr;};
    void deleteNextCursor() { this->nextCursor_ = nullptr;};
    inline int64_t getNextCursor() const { DARABONBA_PTR_GET_DEFAULT(nextCursor_, 0L) };
    inline GetTemplateListByUserIdResponseBody& setNextCursor(int64_t nextCursor) { DARABONBA_PTR_SET_VALUE(nextCursor_, nextCursor) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTemplateListByUserIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateList Field Functions 
    bool hasTemplateList() const { return this->templateList_ != nullptr;};
    void deleteTemplateList() { this->templateList_ = nullptr;};
    inline const vector<GetTemplateListByUserIdResponseBody::TemplateList> & getTemplateList() const { DARABONBA_PTR_GET_CONST(templateList_, vector<GetTemplateListByUserIdResponseBody::TemplateList>) };
    inline vector<GetTemplateListByUserIdResponseBody::TemplateList> getTemplateList() { DARABONBA_PTR_GET(templateList_, vector<GetTemplateListByUserIdResponseBody::TemplateList>) };
    inline GetTemplateListByUserIdResponseBody& setTemplateList(const vector<GetTemplateListByUserIdResponseBody::TemplateList> & templateList) { DARABONBA_PTR_SET_VALUE(templateList_, templateList) };
    inline GetTemplateListByUserIdResponseBody& setTemplateList(vector<GetTemplateListByUserIdResponseBody::TemplateList> && templateList) { DARABONBA_PTR_SET_RVALUE(templateList_, templateList) };


  protected:
    shared_ptr<int64_t> nextCursor_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetTemplateListByUserIdResponseBody::TemplateList>> templateList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
