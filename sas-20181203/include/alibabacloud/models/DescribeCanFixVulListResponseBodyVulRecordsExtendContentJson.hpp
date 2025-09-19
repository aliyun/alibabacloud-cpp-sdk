// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECANFIXVULLISTRESPONSEBODYVULRECORDSEXTENDCONTENTJSON_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECANFIXVULLISTRESPONSEBODYVULRECORDSEXTENDCONTENTJSON_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCanFixVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson& obj) { 
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(OsRelease, osRelease_);
      DARABONBA_PTR_TO_JSON(RpmEntityList, rpmEntityList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson& obj) { 
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(OsRelease, osRelease_);
      DARABONBA_PTR_FROM_JSON(RpmEntityList, rpmEntityList_);
    };
    DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson() = default ;
    DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson(const DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson &) = default ;
    DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson(DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson &&) = default ;
    DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson() = default ;
    DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson& operator=(const DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson &) = default ;
    DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson& operator=(DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->os_ != nullptr
        && this->osRelease_ != nullptr && this->rpmEntityList_ != nullptr; };
    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // osRelease Field Functions 
    bool hasOsRelease() const { return this->osRelease_ != nullptr;};
    void deleteOsRelease() { this->osRelease_ = nullptr;};
    inline string osRelease() const { DARABONBA_PTR_GET_DEFAULT(osRelease_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson& setOsRelease(string osRelease) { DARABONBA_PTR_SET_VALUE(osRelease_, osRelease) };


    // rpmEntityList Field Functions 
    bool hasRpmEntityList() const { return this->rpmEntityList_ != nullptr;};
    void deleteRpmEntityList() { this->rpmEntityList_ = nullptr;};
    inline const vector<Models::DescribeCanFixVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList> & rpmEntityList() const { DARABONBA_PTR_GET_CONST(rpmEntityList_, vector<Models::DescribeCanFixVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList>) };
    inline vector<Models::DescribeCanFixVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList> rpmEntityList() { DARABONBA_PTR_GET(rpmEntityList_, vector<Models::DescribeCanFixVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList>) };
    inline DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson& setRpmEntityList(const vector<Models::DescribeCanFixVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList> & rpmEntityList) { DARABONBA_PTR_SET_VALUE(rpmEntityList_, rpmEntityList) };
    inline DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson& setRpmEntityList(vector<Models::DescribeCanFixVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList> && rpmEntityList) { DARABONBA_PTR_SET_RVALUE(rpmEntityList_, rpmEntityList) };


  protected:
    // The name of the operating system.
    std::shared_ptr<string> os_ = nullptr;
    // The version of the operating system in the image.
    std::shared_ptr<string> osRelease_ = nullptr;
    // The RPM packages.
    std::shared_ptr<vector<Models::DescribeCanFixVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList>> rpmEntityList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
