// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBTEMPLATEVERSIONDETAIL_HPP_
#define ALIBABACLOUD_MODELS_JOBTEMPLATEVERSIONDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class JobTemplateVersionDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobTemplateVersionDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Constraints, constraints_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, JobTemplateVersionDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    JobTemplateVersionDetail() = default ;
    JobTemplateVersionDetail(const JobTemplateVersionDetail &) = default ;
    JobTemplateVersionDetail(JobTemplateVersionDetail &&) = default ;
    JobTemplateVersionDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobTemplateVersionDetail() = default ;
    JobTemplateVersionDetail& operator=(const JobTemplateVersionDetail &) = default ;
    JobTemplateVersionDetail& operator=(JobTemplateVersionDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->constraints_ == nullptr
        && this->content_ == nullptr && this->createdBy_ == nullptr && this->gmtCreated_ == nullptr && this->version_ == nullptr; };
    // constraints Field Functions 
    bool hasConstraints() const { return this->constraints_ != nullptr;};
    void deleteConstraints() { this->constraints_ = nullptr;};
    inline const map<string, string> & getConstraints() const { DARABONBA_PTR_GET_CONST(constraints_, map<string, string>) };
    inline map<string, string> getConstraints() { DARABONBA_PTR_GET(constraints_, map<string, string>) };
    inline JobTemplateVersionDetail& setConstraints(const map<string, string> & constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };
    inline JobTemplateVersionDetail& setConstraints(map<string, string> && constraints) { DARABONBA_PTR_SET_RVALUE(constraints_, constraints) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline JobTemplateVersionDetail& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline JobTemplateVersionDetail& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline JobTemplateVersionDetail& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline JobTemplateVersionDetail& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<map<string, string>> constraints_ {};
    // 任务模板的配置内容，支持 CreateJob 接口的所有参数字段，以 JSON 对象存储
    shared_ptr<string> content_ {};
    // 创建该版本的用户ID
    shared_ptr<string> createdBy_ {};
    // 该版本的创建时间
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    shared_ptr<string> gmtCreated_ {};
    // 模板版本号
    shared_ptr<int32_t> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
