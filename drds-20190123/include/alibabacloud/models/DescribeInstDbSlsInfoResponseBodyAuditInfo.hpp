// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTDBSLSINFORESPONSEBODYAUDITINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTDBSLSINFORESPONSEBODYAUDITINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeInstDbSlsInfoResponseBodyAuditInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstDbSlsInfoResponseBodyAuditInfo& obj) { 
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstDbSlsInfoResponseBodyAuditInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
    };
    DescribeInstDbSlsInfoResponseBodyAuditInfo() = default ;
    DescribeInstDbSlsInfoResponseBodyAuditInfo(const DescribeInstDbSlsInfoResponseBodyAuditInfo &) = default ;
    DescribeInstDbSlsInfoResponseBodyAuditInfo(DescribeInstDbSlsInfoResponseBodyAuditInfo &&) = default ;
    DescribeInstDbSlsInfoResponseBodyAuditInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstDbSlsInfoResponseBodyAuditInfo() = default ;
    DescribeInstDbSlsInfoResponseBodyAuditInfo& operator=(const DescribeInstDbSlsInfoResponseBodyAuditInfo &) = default ;
    DescribeInstDbSlsInfoResponseBodyAuditInfo& operator=(DescribeInstDbSlsInfoResponseBodyAuditInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logStore_ != nullptr
        && this->project_ != nullptr; };
    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string logStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline DescribeInstDbSlsInfoResponseBodyAuditInfo& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline DescribeInstDbSlsInfoResponseBodyAuditInfo& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


  protected:
    // The name of the LogStore.
    std::shared_ptr<string> logStore_ = nullptr;
    // The name of the Log Service project.
    std::shared_ptr<string> project_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
