// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPORTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTREPORTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListReportResponseBodyDataListContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListReportResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReportResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Contents, contents_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(DeptName, deptName_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(Latitude, latitude_);
      DARABONBA_PTR_TO_JSON(Longitude, longitude_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, ListReportResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Contents, contents_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(DeptName, deptName_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(Latitude, latitude_);
      DARABONBA_PTR_FROM_JSON(Longitude, longitude_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    ListReportResponseBodyDataList() = default ;
    ListReportResponseBodyDataList(const ListReportResponseBodyDataList &) = default ;
    ListReportResponseBodyDataList(ListReportResponseBodyDataList &&) = default ;
    ListReportResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReportResponseBodyDataList() = default ;
    ListReportResponseBodyDataList& operator=(const ListReportResponseBodyDataList &) = default ;
    ListReportResponseBodyDataList& operator=(ListReportResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contents_ != nullptr
        && this->createTime_ != nullptr && this->creatorId_ != nullptr && this->creatorName_ != nullptr && this->deptName_ != nullptr && this->images_ != nullptr
        && this->latitude_ != nullptr && this->longitude_ != nullptr && this->modifiedTime_ != nullptr && this->remark_ != nullptr && this->reportId_ != nullptr
        && this->templateName_ != nullptr; };
    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<Models::ListReportResponseBodyDataListContents> & contents() const { DARABONBA_PTR_GET_CONST(contents_, vector<Models::ListReportResponseBodyDataListContents>) };
    inline vector<Models::ListReportResponseBodyDataListContents> contents() { DARABONBA_PTR_GET(contents_, vector<Models::ListReportResponseBodyDataListContents>) };
    inline ListReportResponseBodyDataList& setContents(const vector<Models::ListReportResponseBodyDataListContents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline ListReportResponseBodyDataList& setContents(vector<Models::ListReportResponseBodyDataListContents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListReportResponseBodyDataList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline ListReportResponseBodyDataList& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string creatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline ListReportResponseBodyDataList& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // deptName Field Functions 
    bool hasDeptName() const { return this->deptName_ != nullptr;};
    void deleteDeptName() { this->deptName_ = nullptr;};
    inline string deptName() const { DARABONBA_PTR_GET_DEFAULT(deptName_, "") };
    inline ListReportResponseBodyDataList& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<string> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<string>) };
    inline vector<string> images() { DARABONBA_PTR_GET(images_, vector<string>) };
    inline ListReportResponseBodyDataList& setImages(const vector<string> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline ListReportResponseBodyDataList& setImages(vector<string> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // latitude Field Functions 
    bool hasLatitude() const { return this->latitude_ != nullptr;};
    void deleteLatitude() { this->latitude_ = nullptr;};
    inline string latitude() const { DARABONBA_PTR_GET_DEFAULT(latitude_, "") };
    inline ListReportResponseBodyDataList& setLatitude(string latitude) { DARABONBA_PTR_SET_VALUE(latitude_, latitude) };


    // longitude Field Functions 
    bool hasLongitude() const { return this->longitude_ != nullptr;};
    void deleteLongitude() { this->longitude_ = nullptr;};
    inline string longitude() const { DARABONBA_PTR_GET_DEFAULT(longitude_, "") };
    inline ListReportResponseBodyDataList& setLongitude(string longitude) { DARABONBA_PTR_SET_VALUE(longitude_, longitude) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline ListReportResponseBodyDataList& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListReportResponseBodyDataList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline ListReportResponseBodyDataList& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListReportResponseBodyDataList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    std::shared_ptr<vector<Models::ListReportResponseBodyDataListContents>> contents_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> creatorId_ = nullptr;
    std::shared_ptr<string> creatorName_ = nullptr;
    std::shared_ptr<string> deptName_ = nullptr;
    std::shared_ptr<vector<string>> images_ = nullptr;
    std::shared_ptr<string> latitude_ = nullptr;
    std::shared_ptr<string> longitude_ = nullptr;
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> reportId_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
