// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCECONSUMETIMERANKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCECONSUMETIMERANKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetInstanceConsumeTimeRankRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceConsumeTimeRankRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceConsumeTimeRankRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetInstanceConsumeTimeRankRequest() = default ;
    GetInstanceConsumeTimeRankRequest(const GetInstanceConsumeTimeRankRequest &) = default ;
    GetInstanceConsumeTimeRankRequest(GetInstanceConsumeTimeRankRequest &&) = default ;
    GetInstanceConsumeTimeRankRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceConsumeTimeRankRequest() = default ;
    GetInstanceConsumeTimeRankRequest& operator=(const GetInstanceConsumeTimeRankRequest &) = default ;
    GetInstanceConsumeTimeRankRequest& operator=(GetInstanceConsumeTimeRankRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizdate_ != nullptr
        && this->projectId_ != nullptr; };
    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline string bizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, "") };
    inline GetInstanceConsumeTimeRankRequest& setBizdate(string bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetInstanceConsumeTimeRankRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The data timestamp, accurate to the day. Specify the time in the ISO 8601 standard in the yyyy-MM-dd\\"T\\"HH:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> bizdate_ = nullptr;
    // The DataWorks workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
