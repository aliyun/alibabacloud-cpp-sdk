// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANFILEOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_SCANFILEOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScanFileInfo.hpp>
#include <alibabacloud/models/UnifiedSearchInformation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class ScanFileOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanFileOutput& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scanFileInfoList, scanFileInfoList_);
      DARABONBA_PTR_TO_JSON(searchInformation, searchInformation_);
    };
    friend void from_json(const Darabonba::Json& j, ScanFileOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scanFileInfoList, scanFileInfoList_);
      DARABONBA_PTR_FROM_JSON(searchInformation, searchInformation_);
    };
    ScanFileOutput() = default ;
    ScanFileOutput(const ScanFileOutput &) = default ;
    ScanFileOutput(ScanFileOutput &&) = default ;
    ScanFileOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanFileOutput() = default ;
    ScanFileOutput& operator=(const ScanFileOutput &) = default ;
    ScanFileOutput& operator=(ScanFileOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->scanFileInfoList_ == nullptr && this->searchInformation_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ScanFileOutput& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scanFileInfoList Field Functions 
    bool hasScanFileInfoList() const { return this->scanFileInfoList_ != nullptr;};
    void deleteScanFileInfoList() { this->scanFileInfoList_ = nullptr;};
    inline const vector<ScanFileInfo> & getScanFileInfoList() const { DARABONBA_PTR_GET_CONST(scanFileInfoList_, vector<ScanFileInfo>) };
    inline vector<ScanFileInfo> getScanFileInfoList() { DARABONBA_PTR_GET(scanFileInfoList_, vector<ScanFileInfo>) };
    inline ScanFileOutput& setScanFileInfoList(const vector<ScanFileInfo> & scanFileInfoList) { DARABONBA_PTR_SET_VALUE(scanFileInfoList_, scanFileInfoList) };
    inline ScanFileOutput& setScanFileInfoList(vector<ScanFileInfo> && scanFileInfoList) { DARABONBA_PTR_SET_RVALUE(scanFileInfoList_, scanFileInfoList) };


    // searchInformation Field Functions 
    bool hasSearchInformation() const { return this->searchInformation_ != nullptr;};
    void deleteSearchInformation() { this->searchInformation_ = nullptr;};
    inline const UnifiedSearchInformation & getSearchInformation() const { DARABONBA_PTR_GET_CONST(searchInformation_, UnifiedSearchInformation) };
    inline UnifiedSearchInformation getSearchInformation() { DARABONBA_PTR_GET(searchInformation_, UnifiedSearchInformation) };
    inline ScanFileOutput& setSearchInformation(const UnifiedSearchInformation & searchInformation) { DARABONBA_PTR_SET_VALUE(searchInformation_, searchInformation) };
    inline ScanFileOutput& setSearchInformation(UnifiedSearchInformation && searchInformation) { DARABONBA_PTR_SET_RVALUE(searchInformation_, searchInformation) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of scan result objects.
    shared_ptr<vector<ScanFileInfo>> scanFileInfoList_ {};
    // The search execution information.
    shared_ptr<UnifiedSearchInformation> searchInformation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
