// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEDETECTREPORTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETFILEDETECTREPORTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetFileDetectReportResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileDetectReportResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Basic, basic_);
      DARABONBA_PTR_TO_JSON(FileHash, fileHash_);
      DARABONBA_PTR_TO_JSON(Filename, filename_);
      DARABONBA_PTR_TO_JSON(HasData, hasData_);
      DARABONBA_PTR_TO_JSON(Intelligences, intelligences_);
      DARABONBA_PTR_TO_JSON(Sandbox, sandbox_);
      DARABONBA_PTR_TO_JSON(ShowTab, showTab_);
      DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
      DARABONBA_PTR_TO_JSON(ThreatTypes, threatTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileDetectReportResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Basic, basic_);
      DARABONBA_PTR_FROM_JSON(FileHash, fileHash_);
      DARABONBA_PTR_FROM_JSON(Filename, filename_);
      DARABONBA_PTR_FROM_JSON(HasData, hasData_);
      DARABONBA_PTR_FROM_JSON(Intelligences, intelligences_);
      DARABONBA_PTR_FROM_JSON(Sandbox, sandbox_);
      DARABONBA_PTR_FROM_JSON(ShowTab, showTab_);
      DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
      DARABONBA_PTR_FROM_JSON(ThreatTypes, threatTypes_);
    };
    GetFileDetectReportResponseBodyData() = default ;
    GetFileDetectReportResponseBodyData(const GetFileDetectReportResponseBodyData &) = default ;
    GetFileDetectReportResponseBodyData(GetFileDetectReportResponseBodyData &&) = default ;
    GetFileDetectReportResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileDetectReportResponseBodyData() = default ;
    GetFileDetectReportResponseBodyData& operator=(const GetFileDetectReportResponseBodyData &) = default ;
    GetFileDetectReportResponseBodyData& operator=(GetFileDetectReportResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->basic_ == nullptr
        && return this->fileHash_ == nullptr && return this->filename_ == nullptr && return this->hasData_ == nullptr && return this->intelligences_ == nullptr && return this->sandbox_ == nullptr
        && return this->showTab_ == nullptr && return this->threatLevel_ == nullptr && return this->threatTypes_ == nullptr; };
    // basic Field Functions 
    bool hasBasic() const { return this->basic_ != nullptr;};
    void deleteBasic() { this->basic_ = nullptr;};
    inline string basic() const { DARABONBA_PTR_GET_DEFAULT(basic_, "") };
    inline GetFileDetectReportResponseBodyData& setBasic(string basic) { DARABONBA_PTR_SET_VALUE(basic_, basic) };


    // fileHash Field Functions 
    bool hasFileHash() const { return this->fileHash_ != nullptr;};
    void deleteFileHash() { this->fileHash_ = nullptr;};
    inline string fileHash() const { DARABONBA_PTR_GET_DEFAULT(fileHash_, "") };
    inline GetFileDetectReportResponseBodyData& setFileHash(string fileHash) { DARABONBA_PTR_SET_VALUE(fileHash_, fileHash) };


    // filename Field Functions 
    bool hasFilename() const { return this->filename_ != nullptr;};
    void deleteFilename() { this->filename_ = nullptr;};
    inline string filename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
    inline GetFileDetectReportResponseBodyData& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


    // hasData Field Functions 
    bool hasHasData() const { return this->hasData_ != nullptr;};
    void deleteHasData() { this->hasData_ = nullptr;};
    inline bool hasData() const { DARABONBA_PTR_GET_DEFAULT(hasData_, false) };
    inline GetFileDetectReportResponseBodyData& setHasData(bool hasData) { DARABONBA_PTR_SET_VALUE(hasData_, hasData) };


    // intelligences Field Functions 
    bool hasIntelligences() const { return this->intelligences_ != nullptr;};
    void deleteIntelligences() { this->intelligences_ = nullptr;};
    inline string intelligences() const { DARABONBA_PTR_GET_DEFAULT(intelligences_, "") };
    inline GetFileDetectReportResponseBodyData& setIntelligences(string intelligences) { DARABONBA_PTR_SET_VALUE(intelligences_, intelligences) };


    // sandbox Field Functions 
    bool hasSandbox() const { return this->sandbox_ != nullptr;};
    void deleteSandbox() { this->sandbox_ = nullptr;};
    inline string sandbox() const { DARABONBA_PTR_GET_DEFAULT(sandbox_, "") };
    inline GetFileDetectReportResponseBodyData& setSandbox(string sandbox) { DARABONBA_PTR_SET_VALUE(sandbox_, sandbox) };


    // showTab Field Functions 
    bool hasShowTab() const { return this->showTab_ != nullptr;};
    void deleteShowTab() { this->showTab_ = nullptr;};
    inline bool showTab() const { DARABONBA_PTR_GET_DEFAULT(showTab_, false) };
    inline GetFileDetectReportResponseBodyData& setShowTab(bool showTab) { DARABONBA_PTR_SET_VALUE(showTab_, showTab) };


    // threatLevel Field Functions 
    bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
    void deleteThreatLevel() { this->threatLevel_ = nullptr;};
    inline int64_t threatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, 0L) };
    inline GetFileDetectReportResponseBodyData& setThreatLevel(int64_t threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


    // threatTypes Field Functions 
    bool hasThreatTypes() const { return this->threatTypes_ != nullptr;};
    void deleteThreatTypes() { this->threatTypes_ = nullptr;};
    inline string threatTypes() const { DARABONBA_PTR_GET_DEFAULT(threatTypes_, "") };
    inline GetFileDetectReportResponseBodyData& setThreatTypes(string threatTypes) { DARABONBA_PTR_SET_VALUE(threatTypes_, threatTypes) };


  protected:
    // The basic information about the detected file.
    std::shared_ptr<string> basic_ = nullptr;
    // The hash value of the file.
    std::shared_ptr<string> fileHash_ = nullptr;
    // The name of the file.
    std::shared_ptr<string> filename_ = nullptr;
    // Indicates whether the file data exists in the cloud sandbox. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> hasData_ = nullptr;
    // The threat intelligence event, which is a JSON array.
    // 
    // Valid values:
    // 
    // *   The threat type. The value is an array. The elements in the array can be DDoS trojans, mining programs, network layer intrusions, network service scans, network sharing and discovery, mining pools, exploits, dark webs, malicious logons, malicious download sources, C\\&C servers, webshells, and web attacks.
    std::shared_ptr<string> intelligences_ = nullptr;
    // The details of the cloud sandbox check results.
    std::shared_ptr<string> sandbox_ = nullptr;
    // Indicates whether the check report is displayed. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> showTab_ = nullptr;
    // The threat level. Valid values:
    // 
    // *   **0**: normal
    // *   **1**: suspicious
    // *   **2**: high
    std::shared_ptr<int64_t> threatLevel_ = nullptr;
    // The risk tags and server tags that are generated by analyzing threat intelligence and security events. The value is a string array. The array includes the following elements:
    // 
    // *   **threat_type_desc**: the threat type.
    // *   **last_find_time**: the last time the threat was detected.
    // *   **risk_type**: indicates whether the tag is malicious. The value 0 indicates that the tag is not malicious. The value 1 indicates that the tag is malicious. The value -1 indicates that whether the tag type is malicious is unknown.
    // *   **threat_type**: the threat type. The value is an array. The elements in the array can be network layer intrusion, network service scanning, network sharing and discovery, mining pool, exploits, darknet, malicious logon, malicious download source, central control, web shell, and web attack.
    std::shared_ptr<string> threatTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
