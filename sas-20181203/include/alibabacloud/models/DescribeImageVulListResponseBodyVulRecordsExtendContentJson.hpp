// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEVULLISTRESPONSEBODYVULRECORDSEXTENDCONTENTJSON_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEVULLISTRESPONSEBODYVULRECORDSEXTENDCONTENTJSON_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageVulListResponseBodyVulRecordsExtendContentJson : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageVulListResponseBodyVulRecordsExtendContentJson& obj) { 
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(OsRelease, osRelease_);
      DARABONBA_PTR_TO_JSON(RpmEntityList, rpmEntityList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageVulListResponseBodyVulRecordsExtendContentJson& obj) { 
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(OsRelease, osRelease_);
      DARABONBA_PTR_FROM_JSON(RpmEntityList, rpmEntityList_);
    };
    DescribeImageVulListResponseBodyVulRecordsExtendContentJson() = default ;
    DescribeImageVulListResponseBodyVulRecordsExtendContentJson(const DescribeImageVulListResponseBodyVulRecordsExtendContentJson &) = default ;
    DescribeImageVulListResponseBodyVulRecordsExtendContentJson(DescribeImageVulListResponseBodyVulRecordsExtendContentJson &&) = default ;
    DescribeImageVulListResponseBodyVulRecordsExtendContentJson(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageVulListResponseBodyVulRecordsExtendContentJson() = default ;
    DescribeImageVulListResponseBodyVulRecordsExtendContentJson& operator=(const DescribeImageVulListResponseBodyVulRecordsExtendContentJson &) = default ;
    DescribeImageVulListResponseBodyVulRecordsExtendContentJson& operator=(DescribeImageVulListResponseBodyVulRecordsExtendContentJson &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->os_ == nullptr
        && return this->osRelease_ == nullptr && return this->rpmEntityList_ == nullptr; };
    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeImageVulListResponseBodyVulRecordsExtendContentJson& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // osRelease Field Functions 
    bool hasOsRelease() const { return this->osRelease_ != nullptr;};
    void deleteOsRelease() { this->osRelease_ = nullptr;};
    inline string osRelease() const { DARABONBA_PTR_GET_DEFAULT(osRelease_, "") };
    inline DescribeImageVulListResponseBodyVulRecordsExtendContentJson& setOsRelease(string osRelease) { DARABONBA_PTR_SET_VALUE(osRelease_, osRelease) };


    // rpmEntityList Field Functions 
    bool hasRpmEntityList() const { return this->rpmEntityList_ != nullptr;};
    void deleteRpmEntityList() { this->rpmEntityList_ = nullptr;};
    inline const vector<Models::DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList> & rpmEntityList() const { DARABONBA_PTR_GET_CONST(rpmEntityList_, vector<Models::DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList>) };
    inline vector<Models::DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList> rpmEntityList() { DARABONBA_PTR_GET(rpmEntityList_, vector<Models::DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList>) };
    inline DescribeImageVulListResponseBodyVulRecordsExtendContentJson& setRpmEntityList(const vector<Models::DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList> & rpmEntityList) { DARABONBA_PTR_SET_VALUE(rpmEntityList_, rpmEntityList) };
    inline DescribeImageVulListResponseBodyVulRecordsExtendContentJson& setRpmEntityList(vector<Models::DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList> && rpmEntityList) { DARABONBA_PTR_SET_RVALUE(rpmEntityList_, rpmEntityList) };


  protected:
    // The name of the operating system.
    std::shared_ptr<string> os_ = nullptr;
    // The version of the operating system in the image.
    std::shared_ptr<string> osRelease_ = nullptr;
    // The details of the package of the software that has the vulnerability.
    std::shared_ptr<vector<Models::DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList>> rpmEntityList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
