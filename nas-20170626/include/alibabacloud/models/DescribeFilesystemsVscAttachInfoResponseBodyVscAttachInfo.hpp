// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSVSCATTACHINFORESPONSEBODYVSCATTACHINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSVSCATTACHINFORESPONSEBODYVSCATTACHINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo& obj) { 
      DARABONBA_PTR_TO_JSON(VscAttachInfo, vscAttachInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(VscAttachInfo, vscAttachInfo_);
    };
    DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo() = default ;
    DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo(const DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo &) = default ;
    DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo(DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo &&) = default ;
    DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo() = default ;
    DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo& operator=(const DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo &) = default ;
    DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo& operator=(DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vscAttachInfo_ != nullptr; };
    // vscAttachInfo Field Functions 
    bool hasVscAttachInfo() const { return this->vscAttachInfo_ != nullptr;};
    void deleteVscAttachInfo() { this->vscAttachInfo_ = nullptr;};
    inline const vector<Models::DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo> & vscAttachInfo() const { DARABONBA_PTR_GET_CONST(vscAttachInfo_, vector<Models::DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo>) };
    inline vector<Models::DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo> vscAttachInfo() { DARABONBA_PTR_GET(vscAttachInfo_, vector<Models::DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo>) };
    inline DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo& setVscAttachInfo(const vector<Models::DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo> & vscAttachInfo) { DARABONBA_PTR_SET_VALUE(vscAttachInfo_, vscAttachInfo) };
    inline DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo& setVscAttachInfo(vector<Models::DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo> && vscAttachInfo) { DARABONBA_PTR_SET_RVALUE(vscAttachInfo_, vscAttachInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfoVscAttachInfo>> vscAttachInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
