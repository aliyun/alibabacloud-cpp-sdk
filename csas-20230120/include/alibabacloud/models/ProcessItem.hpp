// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROCESSITEM_HPP_
#define ALIBABACLOUD_MODELS_PROCESSITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ProcessItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProcessItem& obj) { 
      DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
      DARABONBA_PTR_TO_JSON(DevType, devType_);
      DARABONBA_PTR_TO_JSON(Directory, directory_);
      DARABONBA_PTR_TO_JSON(Process, process_);
    };
    friend void from_json(const Darabonba::Json& j, ProcessItem& obj) { 
      DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
      DARABONBA_PTR_FROM_JSON(DevType, devType_);
      DARABONBA_PTR_FROM_JSON(Directory, directory_);
      DARABONBA_PTR_FROM_JSON(Process, process_);
    };
    ProcessItem() = default ;
    ProcessItem(const ProcessItem &) = default ;
    ProcessItem(ProcessItem &&) = default ;
    ProcessItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProcessItem() = default ;
    ProcessItem& operator=(const ProcessItem &) = default ;
    ProcessItem& operator=(ProcessItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bundleId_ != nullptr
        && this->devType_ != nullptr && this->directory_ != nullptr && this->process_ != nullptr; };
    // bundleId Field Functions 
    bool hasBundleId() const { return this->bundleId_ != nullptr;};
    void deleteBundleId() { this->bundleId_ = nullptr;};
    inline string bundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
    inline ProcessItem& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


    // devType Field Functions 
    bool hasDevType() const { return this->devType_ != nullptr;};
    void deleteDevType() { this->devType_ = nullptr;};
    inline string devType() const { DARABONBA_PTR_GET_DEFAULT(devType_, "") };
    inline ProcessItem& setDevType(string devType) { DARABONBA_PTR_SET_VALUE(devType_, devType) };


    // directory Field Functions 
    bool hasDirectory() const { return this->directory_ != nullptr;};
    void deleteDirectory() { this->directory_ = nullptr;};
    inline string directory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
    inline ProcessItem& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


    // process Field Functions 
    bool hasProcess() const { return this->process_ != nullptr;};
    void deleteProcess() { this->process_ = nullptr;};
    inline string process() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
    inline ProcessItem& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


  protected:
    std::shared_ptr<string> bundleId_ = nullptr;
    std::shared_ptr<string> devType_ = nullptr;
    std::shared_ptr<string> directory_ = nullptr;
    std::shared_ptr<string> process_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
