// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPONENTASSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPONENTASSETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeComponentAssetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComponentAssetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentAssets, componentAssets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComponentAssetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentAssets, componentAssets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeComponentAssetsResponseBody() = default ;
    DescribeComponentAssetsResponseBody(const DescribeComponentAssetsResponseBody &) = default ;
    DescribeComponentAssetsResponseBody(DescribeComponentAssetsResponseBody &&) = default ;
    DescribeComponentAssetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComponentAssetsResponseBody() = default ;
    DescribeComponentAssetsResponseBody& operator=(const DescribeComponentAssetsResponseBody &) = default ;
    DescribeComponentAssetsResponseBody& operator=(DescribeComponentAssetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ComponentAssets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ComponentAssets& obj) { 
        DARABONBA_PTR_TO_JSON(AssetUuid, assetUuid_);
        DARABONBA_PTR_TO_JSON(Componentname, componentname_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Params, params_);
      };
      friend void from_json(const Darabonba::Json& j, ComponentAssets& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetUuid, assetUuid_);
        DARABONBA_PTR_FROM_JSON(Componentname, componentname_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Params, params_);
      };
      ComponentAssets() = default ;
      ComponentAssets(const ComponentAssets &) = default ;
      ComponentAssets(ComponentAssets &&) = default ;
      ComponentAssets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ComponentAssets() = default ;
      ComponentAssets& operator=(const ComponentAssets &) = default ;
      ComponentAssets& operator=(ComponentAssets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetUuid_ == nullptr
        && this->componentname_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->params_ == nullptr; };
      // assetUuid Field Functions 
      bool hasAssetUuid() const { return this->assetUuid_ != nullptr;};
      void deleteAssetUuid() { this->assetUuid_ = nullptr;};
      inline string getAssetUuid() const { DARABONBA_PTR_GET_DEFAULT(assetUuid_, "") };
      inline ComponentAssets& setAssetUuid(string assetUuid) { DARABONBA_PTR_SET_VALUE(assetUuid_, assetUuid) };


      // componentname Field Functions 
      bool hasComponentname() const { return this->componentname_ != nullptr;};
      void deleteComponentname() { this->componentname_ = nullptr;};
      inline string getComponentname() const { DARABONBA_PTR_GET_DEFAULT(componentname_, "") };
      inline ComponentAssets& setComponentname(string componentname) { DARABONBA_PTR_SET_VALUE(componentname_, componentname) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline ComponentAssets& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline ComponentAssets& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ComponentAssets& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ComponentAssets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // params Field Functions 
      bool hasParams() const { return this->params_ != nullptr;};
      void deleteParams() { this->params_ = nullptr;};
      inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
      inline ComponentAssets& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    protected:
      // The UUID of the asset.
      shared_ptr<string> assetUuid_ {};
      // The name of the component to which the asset belongs.
      shared_ptr<string> componentname_ {};
      // The time when the asset was created. The time is in the yyyy-MM-ddTHH:mm:ssZ format and is displayed in UTC.
      shared_ptr<string> gmtCreate_ {};
      // The time when the asset was modified. The time is in the yyyy-MM-ddTHH:mm:ssZ format and is displayed in UTC.
      shared_ptr<string> gmtModified_ {};
      // The UUID of the asset.
      shared_ptr<int64_t> id_ {};
      // The name of the asset.
      shared_ptr<string> name_ {};
      // The configurations of the asset in the JSON string format. DescribeComponentAssetForm
      // 
      // >  For more information, see [DescribeComponentAssetForm](~~DescribeComponentAssetForm~~).
      shared_ptr<string> params_ {};
    };

    virtual bool empty() const override { return this->componentAssets_ == nullptr
        && this->requestId_ == nullptr; };
    // componentAssets Field Functions 
    bool hasComponentAssets() const { return this->componentAssets_ != nullptr;};
    void deleteComponentAssets() { this->componentAssets_ = nullptr;};
    inline const vector<DescribeComponentAssetsResponseBody::ComponentAssets> & getComponentAssets() const { DARABONBA_PTR_GET_CONST(componentAssets_, vector<DescribeComponentAssetsResponseBody::ComponentAssets>) };
    inline vector<DescribeComponentAssetsResponseBody::ComponentAssets> getComponentAssets() { DARABONBA_PTR_GET(componentAssets_, vector<DescribeComponentAssetsResponseBody::ComponentAssets>) };
    inline DescribeComponentAssetsResponseBody& setComponentAssets(const vector<DescribeComponentAssetsResponseBody::ComponentAssets> & componentAssets) { DARABONBA_PTR_SET_VALUE(componentAssets_, componentAssets) };
    inline DescribeComponentAssetsResponseBody& setComponentAssets(vector<DescribeComponentAssetsResponseBody::ComponentAssets> && componentAssets) { DARABONBA_PTR_SET_RVALUE(componentAssets_, componentAssets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeComponentAssetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the assets.
    shared_ptr<vector<DescribeComponentAssetsResponseBody::ComponentAssets>> componentAssets_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
