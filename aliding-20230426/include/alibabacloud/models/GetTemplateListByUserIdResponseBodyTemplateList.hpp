// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATELISTBYUSERIDRESPONSEBODYTEMPLATELIST_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATELISTBYUSERIDRESPONSEBODYTEMPLATELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetTemplateListByUserIdResponseBodyTemplateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateListByUserIdResponseBodyTemplateList& obj) { 
      DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ReportCode, reportCode_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateListByUserIdResponseBodyTemplateList& obj) { 
      DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ReportCode, reportCode_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetTemplateListByUserIdResponseBodyTemplateList() = default ;
    GetTemplateListByUserIdResponseBodyTemplateList(const GetTemplateListByUserIdResponseBodyTemplateList &) = default ;
    GetTemplateListByUserIdResponseBodyTemplateList(GetTemplateListByUserIdResponseBodyTemplateList &&) = default ;
    GetTemplateListByUserIdResponseBodyTemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateListByUserIdResponseBodyTemplateList() = default ;
    GetTemplateListByUserIdResponseBodyTemplateList& operator=(const GetTemplateListByUserIdResponseBodyTemplateList &) = default ;
    GetTemplateListByUserIdResponseBodyTemplateList& operator=(GetTemplateListByUserIdResponseBodyTemplateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->iconUrl_ != nullptr
        && this->name_ != nullptr && this->reportCode_ != nullptr && this->url_ != nullptr; };
    // iconUrl Field Functions 
    bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
    void deleteIconUrl() { this->iconUrl_ = nullptr;};
    inline string iconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
    inline GetTemplateListByUserIdResponseBodyTemplateList& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTemplateListByUserIdResponseBodyTemplateList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // reportCode Field Functions 
    bool hasReportCode() const { return this->reportCode_ != nullptr;};
    void deleteReportCode() { this->reportCode_ = nullptr;};
    inline string reportCode() const { DARABONBA_PTR_GET_DEFAULT(reportCode_, "") };
    inline GetTemplateListByUserIdResponseBodyTemplateList& setReportCode(string reportCode) { DARABONBA_PTR_SET_VALUE(reportCode_, reportCode) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetTemplateListByUserIdResponseBodyTemplateList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> iconUrl_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> reportCode_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
