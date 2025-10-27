// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SubmitCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_TO_JSON(TaskSource, taskSource_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_FROM_JSON(TaskSource, taskSource_);
    };
    SubmitCheckRequest() = default ;
    SubmitCheckRequest(const SubmitCheckRequest &) = default ;
    SubmitCheckRequest(SubmitCheckRequest &&) = default ;
    SubmitCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCheckRequest() = default ;
    SubmitCheckRequest& operator=(const SubmitCheckRequest &) = default ;
    SubmitCheckRequest& operator=(SubmitCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scanRange_ == nullptr
        && return this->taskSource_ == nullptr; };
    // scanRange Field Functions 
    bool hasScanRange() const { return this->scanRange_ != nullptr;};
    void deleteScanRange() { this->scanRange_ = nullptr;};
    inline string scanRange() const { DARABONBA_PTR_GET_DEFAULT(scanRange_, "") };
    inline SubmitCheckRequest& setScanRange(string scanRange) { DARABONBA_PTR_SET_VALUE(scanRange_, scanRange) };


    // taskSource Field Functions 
    bool hasTaskSource() const { return this->taskSource_ != nullptr;};
    void deleteTaskSource() { this->taskSource_ = nullptr;};
    inline string taskSource() const { DARABONBA_PTR_GET_DEFAULT(taskSource_, "") };
    inline SubmitCheckRequest& setTaskSource(string taskSource) { DARABONBA_PTR_SET_VALUE(taskSource_, taskSource) };


  protected:
    // The check items that are scanned. Valid values:
    // 
    // *   **FULL**: All check items are scanned.
    // *   **FULL**: Only the check items that are configured are scanned.
    std::shared_ptr<string> scanRange_ = nullptr;
    std::shared_ptr<string> taskSource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
