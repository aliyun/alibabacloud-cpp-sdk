// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class DescribeAssetGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAssetGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetGroupList, assetGroupList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAssetGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetGroupList, assetGroupList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeAssetGroupResponseBody() = default ;
    DescribeAssetGroupResponseBody(const DescribeAssetGroupResponseBody &) = default ;
    DescribeAssetGroupResponseBody(DescribeAssetGroupResponseBody &&) = default ;
    DescribeAssetGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAssetGroupResponseBody() = default ;
    DescribeAssetGroupResponseBody& operator=(const DescribeAssetGroupResponseBody &) = default ;
    DescribeAssetGroupResponseBody& operator=(DescribeAssetGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AssetGroupList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssetGroupList& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, AssetGroupList& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      AssetGroupList() = default ;
      AssetGroupList(const AssetGroupList &) = default ;
      AssetGroupList(AssetGroupList &&) = default ;
      AssetGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssetGroupList() = default ;
      AssetGroupList& operator=(const AssetGroupList &) = default ;
      AssetGroupList& operator=(AssetGroupList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->region_ == nullptr && this->type_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline AssetGroupList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline AssetGroupList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AssetGroupList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the asset.
      shared_ptr<string> name_ {};
      // The region to which the asset belongs.
      shared_ptr<string> region_ {};
      // The type of the asset.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->assetGroupList_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // assetGroupList Field Functions 
    bool hasAssetGroupList() const { return this->assetGroupList_ != nullptr;};
    void deleteAssetGroupList() { this->assetGroupList_ = nullptr;};
    inline const vector<DescribeAssetGroupResponseBody::AssetGroupList> & getAssetGroupList() const { DARABONBA_PTR_GET_CONST(assetGroupList_, vector<DescribeAssetGroupResponseBody::AssetGroupList>) };
    inline vector<DescribeAssetGroupResponseBody::AssetGroupList> getAssetGroupList() { DARABONBA_PTR_GET(assetGroupList_, vector<DescribeAssetGroupResponseBody::AssetGroupList>) };
    inline DescribeAssetGroupResponseBody& setAssetGroupList(const vector<DescribeAssetGroupResponseBody::AssetGroupList> & assetGroupList) { DARABONBA_PTR_SET_VALUE(assetGroupList_, assetGroupList) };
    inline DescribeAssetGroupResponseBody& setAssetGroupList(vector<DescribeAssetGroupResponseBody::AssetGroupList> && assetGroupList) { DARABONBA_PTR_SET_RVALUE(assetGroupList_, assetGroupList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAssetGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeAssetGroupResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The information about the asset.
    shared_ptr<vector<DescribeAssetGroupResponseBody::AssetGroupList>> assetGroupList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
