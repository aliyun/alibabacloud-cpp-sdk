// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIRUSSCANONCETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIRUSSCANONCETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateVirusScanOnceTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVirusScanOnceTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(ScanPath, scanPath_);
      DARABONBA_PTR_TO_JSON(ScanType, scanType_);
      DARABONBA_PTR_TO_JSON(SelectionKey, selectionKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVirusScanOnceTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(ScanPath, scanPath_);
      DARABONBA_PTR_FROM_JSON(ScanType, scanType_);
      DARABONBA_PTR_FROM_JSON(SelectionKey, selectionKey_);
    };
    CreateVirusScanOnceTaskRequest() = default ;
    CreateVirusScanOnceTaskRequest(const CreateVirusScanOnceTaskRequest &) = default ;
    CreateVirusScanOnceTaskRequest(CreateVirusScanOnceTaskRequest &&) = default ;
    CreateVirusScanOnceTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVirusScanOnceTaskRequest() = default ;
    CreateVirusScanOnceTaskRequest& operator=(const CreateVirusScanOnceTaskRequest &) = default ;
    CreateVirusScanOnceTaskRequest& operator=(CreateVirusScanOnceTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->param_ == nullptr
        && this->scanPath_ == nullptr && this->scanType_ == nullptr && this->selectionKey_ == nullptr; };
    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline string getParam() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
    inline CreateVirusScanOnceTaskRequest& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


    // scanPath Field Functions 
    bool hasScanPath() const { return this->scanPath_ != nullptr;};
    void deleteScanPath() { this->scanPath_ = nullptr;};
    inline const vector<string> & getScanPath() const { DARABONBA_PTR_GET_CONST(scanPath_, vector<string>) };
    inline vector<string> getScanPath() { DARABONBA_PTR_GET(scanPath_, vector<string>) };
    inline CreateVirusScanOnceTaskRequest& setScanPath(const vector<string> & scanPath) { DARABONBA_PTR_SET_VALUE(scanPath_, scanPath) };
    inline CreateVirusScanOnceTaskRequest& setScanPath(vector<string> && scanPath) { DARABONBA_PTR_SET_RVALUE(scanPath_, scanPath) };


    // scanType Field Functions 
    bool hasScanType() const { return this->scanType_ != nullptr;};
    void deleteScanType() { this->scanType_ = nullptr;};
    inline string getScanType() const { DARABONBA_PTR_GET_DEFAULT(scanType_, "") };
    inline CreateVirusScanOnceTaskRequest& setScanType(string scanType) { DARABONBA_PTR_SET_VALUE(scanType_, scanType) };


    // selectionKey Field Functions 
    bool hasSelectionKey() const { return this->selectionKey_ != nullptr;};
    void deleteSelectionKey() { this->selectionKey_ = nullptr;};
    inline string getSelectionKey() const { DARABONBA_PTR_GET_DEFAULT(selectionKey_, "") };
    inline CreateVirusScanOnceTaskRequest& setSelectionKey(string selectionKey) { DARABONBA_PTR_SET_VALUE(selectionKey_, selectionKey) };


  protected:
    // Additional information fields: 
    // - **additionType**: The type of extended scan
    shared_ptr<string> param_ {};
    // The information about the scan path that is required for a custom scan.
    shared_ptr<vector<string>> scanPath_ {};
    // The type of the virus scan. Valid values:
    // 
    // *   **system**: system scan.
    // *   **user**: custom scan.
    shared_ptr<string> scanType_ {};
    // The key that stores the asset information.
    // 
    // > You can call the [GetAssetSelectionConfig](~~GetAssetSelectionConfig~~) operation to obtain the key value.
    shared_ptr<string> selectionKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
