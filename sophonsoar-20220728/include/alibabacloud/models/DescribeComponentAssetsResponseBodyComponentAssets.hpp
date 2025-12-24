// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPONENTASSETSRESPONSEBODYCOMPONENTASSETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPONENTASSETSRESPONSEBODYCOMPONENTASSETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeComponentAssetsResponseBodyComponentAssets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComponentAssetsResponseBodyComponentAssets& obj) { 
      DARABONBA_PTR_TO_JSON(AssetUuid, assetUuid_);
      DARABONBA_PTR_TO_JSON(Componentname, componentname_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Params, params_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComponentAssetsResponseBodyComponentAssets& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetUuid, assetUuid_);
      DARABONBA_PTR_FROM_JSON(Componentname, componentname_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
    };
    DescribeComponentAssetsResponseBodyComponentAssets() = default ;
    DescribeComponentAssetsResponseBodyComponentAssets(const DescribeComponentAssetsResponseBodyComponentAssets &) = default ;
    DescribeComponentAssetsResponseBodyComponentAssets(DescribeComponentAssetsResponseBodyComponentAssets &&) = default ;
    DescribeComponentAssetsResponseBodyComponentAssets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComponentAssetsResponseBodyComponentAssets() = default ;
    DescribeComponentAssetsResponseBodyComponentAssets& operator=(const DescribeComponentAssetsResponseBodyComponentAssets &) = default ;
    DescribeComponentAssetsResponseBodyComponentAssets& operator=(DescribeComponentAssetsResponseBodyComponentAssets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetUuid_ == nullptr
        && return this->componentname_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr
        && return this->params_ == nullptr; };
    // assetUuid Field Functions 
    bool hasAssetUuid() const { return this->assetUuid_ != nullptr;};
    void deleteAssetUuid() { this->assetUuid_ = nullptr;};
    inline string assetUuid() const { DARABONBA_PTR_GET_DEFAULT(assetUuid_, "") };
    inline DescribeComponentAssetsResponseBodyComponentAssets& setAssetUuid(string assetUuid) { DARABONBA_PTR_SET_VALUE(assetUuid_, assetUuid) };


    // componentname Field Functions 
    bool hasComponentname() const { return this->componentname_ != nullptr;};
    void deleteComponentname() { this->componentname_ = nullptr;};
    inline string componentname() const { DARABONBA_PTR_GET_DEFAULT(componentname_, "") };
    inline DescribeComponentAssetsResponseBodyComponentAssets& setComponentname(string componentname) { DARABONBA_PTR_SET_VALUE(componentname_, componentname) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeComponentAssetsResponseBodyComponentAssets& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeComponentAssetsResponseBodyComponentAssets& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeComponentAssetsResponseBodyComponentAssets& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeComponentAssetsResponseBodyComponentAssets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline DescribeComponentAssetsResponseBodyComponentAssets& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


  protected:
    // The UUID of the asset.
    std::shared_ptr<string> assetUuid_ = nullptr;
    // The name of the component to which the asset belongs.
    std::shared_ptr<string> componentname_ = nullptr;
    // The time when the asset was created. The time is in the yyyy-MM-ddTHH:mm:ssZ format and is displayed in UTC.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the asset was modified. The time is in the yyyy-MM-ddTHH:mm:ssZ format and is displayed in UTC.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The UUID of the asset.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the asset.
    std::shared_ptr<string> name_ = nullptr;
    // The configurations of the asset in the JSON string format. DescribeComponentAssetForm
    // 
    // >  For more information, see [DescribeComponentAssetForm](~~DescribeComponentAssetForm~~).
    std::shared_ptr<string> params_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
