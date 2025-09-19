// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULCHECKTASKSTATUSDETAILRESPONSEBODYTASKSTATUSESTASKSTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULCHECKTASKSTATUSDETAILRESPONSEBODYTASKSTATUSESTASKSTATUSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList() = default ;
    DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList(const DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList &) = default ;
    DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList(DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList &&) = default ;
    DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList() = default ;
    DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList& operator=(const DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList &) = default ;
    DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList& operator=(DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->status_ != nullptr && this->type_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeVulCheckTaskStatusDetailResponseBodyTaskStatusesTaskStatusList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The error code returned.
    std::shared_ptr<string> code_ = nullptr;
    // The status of the subtask. Valid values:
    // 
    // *   **0**: unhandled
    // *   **1**: collecting
    // *   **2**: collected
    // *   **3**: matching
    // *   **4**: complete
    std::shared_ptr<string> status_ = nullptr;
    // The type of the vulnerability. Valid values:
    // 
    // *   **cve**: Linux software vulnerability
    // *   **sys**: Windows system vulnerability
    // *   **cms**: Web-CMS vulnerability
    // *   **sca**: vulnerability that is detected based on software component analysis
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
