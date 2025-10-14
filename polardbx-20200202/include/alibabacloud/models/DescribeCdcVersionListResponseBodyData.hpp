// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDCVERSIONLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDCVERSIONLISTRESPONSEBODYDATA_HPP_
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
  class DescribeCdcVersionListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdcVersionListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(VersionList, versionList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdcVersionListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(VersionList, versionList_);
    };
    DescribeCdcVersionListResponseBodyData() = default ;
    DescribeCdcVersionListResponseBodyData(const DescribeCdcVersionListResponseBodyData &) = default ;
    DescribeCdcVersionListResponseBodyData(DescribeCdcVersionListResponseBodyData &&) = default ;
    DescribeCdcVersionListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdcVersionListResponseBodyData() = default ;
    DescribeCdcVersionListResponseBodyData& operator=(const DescribeCdcVersionListResponseBodyData &) = default ;
    DescribeCdcVersionListResponseBodyData& operator=(DescribeCdcVersionListResponseBodyData &&) = default ;
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
    inline DescribeCdcVersionListResponseBodyData& setVersionList(const vector<string> & versionList) { DARABONBA_PTR_SET_VALUE(versionList_, versionList) };
    inline DescribeCdcVersionListResponseBodyData& setVersionList(vector<string> && versionList) { DARABONBA_PTR_SET_RVALUE(versionList_, versionList) };


  protected:
    std::shared_ptr<vector<string>> versionList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
