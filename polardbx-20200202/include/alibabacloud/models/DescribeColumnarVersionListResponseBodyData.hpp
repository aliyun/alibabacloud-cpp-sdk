// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLUMNARVERSIONLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLUMNARVERSIONLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeColumnarVersionListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColumnarVersionListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(VersionList, versionList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColumnarVersionListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(VersionList, versionList_);
    };
    DescribeColumnarVersionListResponseBodyData() = default ;
    DescribeColumnarVersionListResponseBodyData(const DescribeColumnarVersionListResponseBodyData &) = default ;
    DescribeColumnarVersionListResponseBodyData(DescribeColumnarVersionListResponseBodyData &&) = default ;
    DescribeColumnarVersionListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColumnarVersionListResponseBodyData() = default ;
    DescribeColumnarVersionListResponseBodyData& operator=(const DescribeColumnarVersionListResponseBodyData &) = default ;
    DescribeColumnarVersionListResponseBodyData& operator=(DescribeColumnarVersionListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->versionList_ == nullptr; };
    // versionList Field Functions 
    bool hasVersionList() const { return this->versionList_ != nullptr;};
    void deleteVersionList() { this->versionList_ = nullptr;};
    inline const vector<string> & versionList() const { DARABONBA_PTR_GET_CONST(versionList_, vector<string>) };
    inline vector<string> versionList() { DARABONBA_PTR_GET(versionList_, vector<string>) };
    inline DescribeColumnarVersionListResponseBodyData& setVersionList(const vector<string> & versionList) { DARABONBA_PTR_SET_VALUE(versionList_, versionList) };
    inline DescribeColumnarVersionListResponseBodyData& setVersionList(vector<string> && versionList) { DARABONBA_PTR_SET_RVALUE(versionList_, versionList) };


  protected:
    std::shared_ptr<vector<string>> versionList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
