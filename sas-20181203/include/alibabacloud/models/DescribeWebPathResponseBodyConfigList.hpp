// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBPATHRESPONSEBODYCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBPATHRESPONSEBODYCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebPathResponseBodyConfigListTargetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWebPathResponseBodyConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebPathResponseBodyConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(TargetList, targetList_);
      DARABONBA_PTR_TO_JSON(WebPath, webPath_);
      DARABONBA_PTR_TO_JSON(WebPathType, webPathType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebPathResponseBodyConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetList, targetList_);
      DARABONBA_PTR_FROM_JSON(WebPath, webPath_);
      DARABONBA_PTR_FROM_JSON(WebPathType, webPathType_);
    };
    DescribeWebPathResponseBodyConfigList() = default ;
    DescribeWebPathResponseBodyConfigList(const DescribeWebPathResponseBodyConfigList &) = default ;
    DescribeWebPathResponseBodyConfigList(DescribeWebPathResponseBodyConfigList &&) = default ;
    DescribeWebPathResponseBodyConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebPathResponseBodyConfigList() = default ;
    DescribeWebPathResponseBodyConfigList& operator=(const DescribeWebPathResponseBodyConfigList &) = default ;
    DescribeWebPathResponseBodyConfigList& operator=(DescribeWebPathResponseBodyConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->targetList_ != nullptr
        && this->webPath_ != nullptr && this->webPathType_ != nullptr; };
    // targetList Field Functions 
    bool hasTargetList() const { return this->targetList_ != nullptr;};
    void deleteTargetList() { this->targetList_ = nullptr;};
    inline const vector<Models::DescribeWebPathResponseBodyConfigListTargetList> & targetList() const { DARABONBA_PTR_GET_CONST(targetList_, vector<Models::DescribeWebPathResponseBodyConfigListTargetList>) };
    inline vector<Models::DescribeWebPathResponseBodyConfigListTargetList> targetList() { DARABONBA_PTR_GET(targetList_, vector<Models::DescribeWebPathResponseBodyConfigListTargetList>) };
    inline DescribeWebPathResponseBodyConfigList& setTargetList(const vector<Models::DescribeWebPathResponseBodyConfigListTargetList> & targetList) { DARABONBA_PTR_SET_VALUE(targetList_, targetList) };
    inline DescribeWebPathResponseBodyConfigList& setTargetList(vector<Models::DescribeWebPathResponseBodyConfigListTargetList> && targetList) { DARABONBA_PTR_SET_RVALUE(targetList_, targetList) };


    // webPath Field Functions 
    bool hasWebPath() const { return this->webPath_ != nullptr;};
    void deleteWebPath() { this->webPath_ = nullptr;};
    inline string webPath() const { DARABONBA_PTR_GET_DEFAULT(webPath_, "") };
    inline DescribeWebPathResponseBodyConfigList& setWebPath(string webPath) { DARABONBA_PTR_SET_VALUE(webPath_, webPath) };


    // webPathType Field Functions 
    bool hasWebPathType() const { return this->webPathType_ != nullptr;};
    void deleteWebPathType() { this->webPathType_ = nullptr;};
    inline string webPathType() const { DARABONBA_PTR_GET_DEFAULT(webPathType_, "") };
    inline DescribeWebPathResponseBodyConfigList& setWebPathType(string webPathType) { DARABONBA_PTR_SET_VALUE(webPathType_, webPathType) };


  protected:
    // An array consisting of the servers on which the web directories are scanned.
    std::shared_ptr<vector<Models::DescribeWebPathResponseBodyConfigListTargetList>> targetList_ = nullptr;
    // The path to the web directory.
    std::shared_ptr<string> webPath_ = nullptr;
    // The path type of the web directory. Valid values:
    // 
    // *   **def**: automatically identified
    // *   **customize**: manually added
    std::shared_ptr<string> webPathType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
