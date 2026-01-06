// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPORT_HPP_
#define ALIBABACLOUD_MODELS_REPORT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class Report : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Report& obj) { 
      DARABONBA_PTR_TO_JSON(FailedFiles, failedFiles_);
      DARABONBA_PTR_TO_JSON(SkippedFiles, skippedFiles_);
      DARABONBA_PTR_TO_JSON(SuccessFiles, successFiles_);
      DARABONBA_PTR_TO_JSON(TotalFiles, totalFiles_);
    };
    friend void from_json(const Darabonba::Json& j, Report& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedFiles, failedFiles_);
      DARABONBA_PTR_FROM_JSON(SkippedFiles, skippedFiles_);
      DARABONBA_PTR_FROM_JSON(SuccessFiles, successFiles_);
      DARABONBA_PTR_FROM_JSON(TotalFiles, totalFiles_);
    };
    Report() = default ;
    Report(const Report &) = default ;
    Report(Report &&) = default ;
    Report(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Report() = default ;
    Report& operator=(const Report &) = default ;
    Report& operator=(Report &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedFiles_ == nullptr
        && this->skippedFiles_ == nullptr && this->successFiles_ == nullptr && this->totalFiles_ == nullptr; };
    // failedFiles Field Functions 
    bool hasFailedFiles() const { return this->failedFiles_ != nullptr;};
    void deleteFailedFiles() { this->failedFiles_ = nullptr;};
    inline string getFailedFiles() const { DARABONBA_PTR_GET_DEFAULT(failedFiles_, "") };
    inline Report& setFailedFiles(string failedFiles) { DARABONBA_PTR_SET_VALUE(failedFiles_, failedFiles) };


    // skippedFiles Field Functions 
    bool hasSkippedFiles() const { return this->skippedFiles_ != nullptr;};
    void deleteSkippedFiles() { this->skippedFiles_ = nullptr;};
    inline string getSkippedFiles() const { DARABONBA_PTR_GET_DEFAULT(skippedFiles_, "") };
    inline Report& setSkippedFiles(string skippedFiles) { DARABONBA_PTR_SET_VALUE(skippedFiles_, skippedFiles) };


    // successFiles Field Functions 
    bool hasSuccessFiles() const { return this->successFiles_ != nullptr;};
    void deleteSuccessFiles() { this->successFiles_ = nullptr;};
    inline string getSuccessFiles() const { DARABONBA_PTR_GET_DEFAULT(successFiles_, "") };
    inline Report& setSuccessFiles(string successFiles) { DARABONBA_PTR_SET_VALUE(successFiles_, successFiles) };


    // totalFiles Field Functions 
    bool hasTotalFiles() const { return this->totalFiles_ != nullptr;};
    void deleteTotalFiles() { this->totalFiles_ = nullptr;};
    inline string getTotalFiles() const { DARABONBA_PTR_GET_DEFAULT(totalFiles_, "") };
    inline Report& setTotalFiles(string totalFiles) { DARABONBA_PTR_SET_VALUE(totalFiles_, totalFiles) };


  protected:
    shared_ptr<string> failedFiles_ {};
    shared_ptr<string> skippedFiles_ {};
    shared_ptr<string> successFiles_ {};
    shared_ptr<string> totalFiles_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
