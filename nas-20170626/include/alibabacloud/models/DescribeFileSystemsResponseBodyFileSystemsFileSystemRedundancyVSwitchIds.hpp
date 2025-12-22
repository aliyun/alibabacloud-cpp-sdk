// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSFILESYSTEMREDUNDANCYVSWITCHIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSFILESYSTEMREDUNDANCYVSWITCHIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFileSystemsResponseBodyFileSystemsFileSystemRedundancyVSwitchIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemsResponseBodyFileSystemsFileSystemRedundancyVSwitchIds& obj) { 
      DARABONBA_PTR_TO_JSON(RedundancyVSwitchId, redundancyVSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemsResponseBodyFileSystemsFileSystemRedundancyVSwitchIds& obj) { 
      DARABONBA_PTR_FROM_JSON(RedundancyVSwitchId, redundancyVSwitchId_);
    };
    DescribeFileSystemsResponseBodyFileSystemsFileSystemRedundancyVSwitchIds() = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemRedundancyVSwitchIds(const DescribeFileSystemsResponseBodyFileSystemsFileSystemRedundancyVSwitchIds &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemRedundancyVSwitchIds(DescribeFileSystemsResponseBodyFileSystemsFileSystemRedundancyVSwitchIds &&) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemRedundancyVSwitchIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemRedundancyVSwitchIds() = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemRedundancyVSwitchIds& operator=(const DescribeFileSystemsResponseBodyFileSystemsFileSystemRedundancyVSwitchIds &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemRedundancyVSwitchIds& operator=(DescribeFileSystemsResponseBodyFileSystemsFileSystemRedundancyVSwitchIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->redundancyVSwitchId_ == nullptr; };
    // redundancyVSwitchId Field Functions 
    bool hasRedundancyVSwitchId() const { return this->redundancyVSwitchId_ != nullptr;};
    void deleteRedundancyVSwitchId() { this->redundancyVSwitchId_ = nullptr;};
    inline const vector<string> & redundancyVSwitchId() const { DARABONBA_PTR_GET_CONST(redundancyVSwitchId_, vector<string>) };
    inline vector<string> redundancyVSwitchId() { DARABONBA_PTR_GET(redundancyVSwitchId_, vector<string>) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemRedundancyVSwitchIds& setRedundancyVSwitchId(const vector<string> & redundancyVSwitchId) { DARABONBA_PTR_SET_VALUE(redundancyVSwitchId_, redundancyVSwitchId) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemRedundancyVSwitchIds& setRedundancyVSwitchId(vector<string> && redundancyVSwitchId) { DARABONBA_PTR_SET_RVALUE(redundancyVSwitchId_, redundancyVSwitchId) };


  protected:
    std::shared_ptr<vector<string>> redundancyVSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
