// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULLISTPAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULLISTPAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulListPageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulListPageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CveId, cveId_);
      DARABONBA_PTR_TO_JSON(ExtAegis, extAegis_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsAegis, isAegis_);
      DARABONBA_PTR_TO_JSON(IsSas, isSas_);
      DARABONBA_PTR_TO_JSON(OtherId, otherId_);
      DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulListPageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CveId, cveId_);
      DARABONBA_PTR_FROM_JSON(ExtAegis, extAegis_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsAegis, isAegis_);
      DARABONBA_PTR_FROM_JSON(IsSas, isSas_);
      DARABONBA_PTR_FROM_JSON(OtherId, otherId_);
      DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    DescribeVulListPageResponseBodyData() = default ;
    DescribeVulListPageResponseBodyData(const DescribeVulListPageResponseBodyData &) = default ;
    DescribeVulListPageResponseBodyData(DescribeVulListPageResponseBodyData &&) = default ;
    DescribeVulListPageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulListPageResponseBodyData() = default ;
    DescribeVulListPageResponseBodyData& operator=(const DescribeVulListPageResponseBodyData &) = default ;
    DescribeVulListPageResponseBodyData& operator=(DescribeVulListPageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cveId_ == nullptr
        && return this->extAegis_ == nullptr && return this->id_ == nullptr && return this->isAegis_ == nullptr && return this->isSas_ == nullptr && return this->otherId_ == nullptr
        && return this->releaseTime_ == nullptr && return this->title_ == nullptr; };
    // cveId Field Functions 
    bool hasCveId() const { return this->cveId_ != nullptr;};
    void deleteCveId() { this->cveId_ = nullptr;};
    inline string cveId() const { DARABONBA_PTR_GET_DEFAULT(cveId_, "") };
    inline DescribeVulListPageResponseBodyData& setCveId(string cveId) { DARABONBA_PTR_SET_VALUE(cveId_, cveId) };


    // extAegis Field Functions 
    bool hasExtAegis() const { return this->extAegis_ != nullptr;};
    void deleteExtAegis() { this->extAegis_ = nullptr;};
    inline string extAegis() const { DARABONBA_PTR_GET_DEFAULT(extAegis_, "") };
    inline DescribeVulListPageResponseBodyData& setExtAegis(string extAegis) { DARABONBA_PTR_SET_VALUE(extAegis_, extAegis) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeVulListPageResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isAegis Field Functions 
    bool hasIsAegis() const { return this->isAegis_ != nullptr;};
    void deleteIsAegis() { this->isAegis_ = nullptr;};
    inline int32_t isAegis() const { DARABONBA_PTR_GET_DEFAULT(isAegis_, 0) };
    inline DescribeVulListPageResponseBodyData& setIsAegis(int32_t isAegis) { DARABONBA_PTR_SET_VALUE(isAegis_, isAegis) };


    // isSas Field Functions 
    bool hasIsSas() const { return this->isSas_ != nullptr;};
    void deleteIsSas() { this->isSas_ = nullptr;};
    inline int32_t isSas() const { DARABONBA_PTR_GET_DEFAULT(isSas_, 0) };
    inline DescribeVulListPageResponseBodyData& setIsSas(int32_t isSas) { DARABONBA_PTR_SET_VALUE(isSas_, isSas) };


    // otherId Field Functions 
    bool hasOtherId() const { return this->otherId_ != nullptr;};
    void deleteOtherId() { this->otherId_ = nullptr;};
    inline string otherId() const { DARABONBA_PTR_GET_DEFAULT(otherId_, "") };
    inline DescribeVulListPageResponseBodyData& setOtherId(string otherId) { DARABONBA_PTR_SET_VALUE(otherId_, otherId) };


    // releaseTime Field Functions 
    bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
    void deleteReleaseTime() { this->releaseTime_ = nullptr;};
    inline int64_t releaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, 0L) };
    inline DescribeVulListPageResponseBodyData& setReleaseTime(int64_t releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeVulListPageResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The common vulnerabilities and exposures (CVE) ID of the vulnerability.
    std::shared_ptr<string> cveId_ = nullptr;
    // The extended field for Server Guard.
    std::shared_ptr<string> extAegis_ = nullptr;
    // The primary key ID of the database.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Indicates whether the vulnerability was detected based on version comparison. Valid values:
    // 
    // *   1: The vulnerability was detected based on version comparison.
    // *   0: The vulnerability was not detected based on version comparison.
    std::shared_ptr<int32_t> isAegis_ = nullptr;
    // Indicates whether the vulnerability was detected based on proof of concept (POC) verification. Valid values:
    // 
    // *   1: The vulnerability was detected based on POC verification.
    // *   0: The vulnerability was not detected based on POC verification.
    std::shared_ptr<int32_t> isSas_ = nullptr;
    // The ID of the vulnerability.
    std::shared_ptr<string> otherId_ = nullptr;
    // The time when the vulnerability was disclosed.
    std::shared_ptr<int64_t> releaseTime_ = nullptr;
    // The name of the vulnerability.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
