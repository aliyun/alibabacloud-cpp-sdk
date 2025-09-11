// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSFILESYSTEMSUPPORTEDFEATURES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSFILESYSTEMSUPPORTEDFEATURES_HPP_
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
  class DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(SupportedFeature, supportedFeature_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportedFeature, supportedFeature_);
    };
    DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures() = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures(const DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures(DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures &&) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures() = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures& operator=(const DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures& operator=(DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportedFeature_ != nullptr; };
    // supportedFeature Field Functions 
    bool hasSupportedFeature() const { return this->supportedFeature_ != nullptr;};
    void deleteSupportedFeature() { this->supportedFeature_ = nullptr;};
    inline const vector<string> & supportedFeature() const { DARABONBA_PTR_GET_CONST(supportedFeature_, vector<string>) };
    inline vector<string> supportedFeature() { DARABONBA_PTR_GET(supportedFeature_, vector<string>) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures& setSupportedFeature(const vector<string> & supportedFeature) { DARABONBA_PTR_SET_VALUE(supportedFeature_, supportedFeature) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures& setSupportedFeature(vector<string> && supportedFeature) { DARABONBA_PTR_SET_RVALUE(supportedFeature_, supportedFeature) };


  protected:
    std::shared_ptr<vector<string>> supportedFeature_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
