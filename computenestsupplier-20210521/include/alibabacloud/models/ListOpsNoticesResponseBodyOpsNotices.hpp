// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPSNOTICESRESPONSEBODYOPSNOTICES_HPP_
#define ALIBABACLOUD_MODELS_LISTOPSNOTICESRESPONSEBODYOPSNOTICES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListOpsNoticesResponseBodyOpsNotices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOpsNoticesResponseBodyOpsNotices& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(NoticeId, noticeId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceVersions, serviceVersions_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(Solutions, solutions_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListOpsNoticesResponseBodyOpsNotices& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(NoticeId, noticeId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceVersions, serviceVersions_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(Solutions, solutions_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListOpsNoticesResponseBodyOpsNotices() = default ;
    ListOpsNoticesResponseBodyOpsNotices(const ListOpsNoticesResponseBodyOpsNotices &) = default ;
    ListOpsNoticesResponseBodyOpsNotices(ListOpsNoticesResponseBodyOpsNotices &&) = default ;
    ListOpsNoticesResponseBodyOpsNotices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOpsNoticesResponseBodyOpsNotices() = default ;
    ListOpsNoticesResponseBodyOpsNotices& operator=(const ListOpsNoticesResponseBodyOpsNotices &) = default ;
    ListOpsNoticesResponseBodyOpsNotices& operator=(ListOpsNoticesResponseBodyOpsNotices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributes_ != nullptr
        && this->category_ != nullptr && this->content_ != nullptr && this->noticeId_ != nullptr && this->serviceId_ != nullptr && this->serviceName_ != nullptr
        && this->serviceVersions_ != nullptr && this->severity_ != nullptr && this->solutions_ != nullptr && this->startTime_ != nullptr && this->success_ != nullptr
        && this->type_ != nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline string attributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
    inline ListOpsNoticesResponseBodyOpsNotices& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListOpsNoticesResponseBodyOpsNotices& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListOpsNoticesResponseBodyOpsNotices& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // noticeId Field Functions 
    bool hasNoticeId() const { return this->noticeId_ != nullptr;};
    void deleteNoticeId() { this->noticeId_ = nullptr;};
    inline string noticeId() const { DARABONBA_PTR_GET_DEFAULT(noticeId_, "") };
    inline ListOpsNoticesResponseBodyOpsNotices& setNoticeId(string noticeId) { DARABONBA_PTR_SET_VALUE(noticeId_, noticeId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ListOpsNoticesResponseBodyOpsNotices& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListOpsNoticesResponseBodyOpsNotices& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceVersions Field Functions 
    bool hasServiceVersions() const { return this->serviceVersions_ != nullptr;};
    void deleteServiceVersions() { this->serviceVersions_ = nullptr;};
    inline const vector<string> & serviceVersions() const { DARABONBA_PTR_GET_CONST(serviceVersions_, vector<string>) };
    inline vector<string> serviceVersions() { DARABONBA_PTR_GET(serviceVersions_, vector<string>) };
    inline ListOpsNoticesResponseBodyOpsNotices& setServiceVersions(const vector<string> & serviceVersions) { DARABONBA_PTR_SET_VALUE(serviceVersions_, serviceVersions) };
    inline ListOpsNoticesResponseBodyOpsNotices& setServiceVersions(vector<string> && serviceVersions) { DARABONBA_PTR_SET_RVALUE(serviceVersions_, serviceVersions) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline ListOpsNoticesResponseBodyOpsNotices& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // solutions Field Functions 
    bool hasSolutions() const { return this->solutions_ != nullptr;};
    void deleteSolutions() { this->solutions_ = nullptr;};
    inline string solutions() const { DARABONBA_PTR_GET_DEFAULT(solutions_, "") };
    inline ListOpsNoticesResponseBodyOpsNotices& setSolutions(string solutions) { DARABONBA_PTR_SET_VALUE(solutions_, solutions) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListOpsNoticesResponseBodyOpsNotices& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ListOpsNoticesResponseBodyOpsNotices& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListOpsNoticesResponseBodyOpsNotices& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> attributes_ = nullptr;
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> noticeId_ = nullptr;
    std::shared_ptr<string> serviceId_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
    std::shared_ptr<vector<string>> serviceVersions_ = nullptr;
    std::shared_ptr<string> severity_ = nullptr;
    std::shared_ptr<string> solutions_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> success_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
