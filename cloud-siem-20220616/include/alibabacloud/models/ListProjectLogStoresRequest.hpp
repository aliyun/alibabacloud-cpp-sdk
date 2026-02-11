// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTLOGSTORESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTLOGSTORESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListProjectLogStoresRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectLogStoresRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SourceLogCode, sourceLogCode_);
      DARABONBA_PTR_TO_JSON(SourceProdCode, sourceProdCode_);
      DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectLogStoresRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SourceLogCode, sourceLogCode_);
      DARABONBA_PTR_FROM_JSON(SourceProdCode, sourceProdCode_);
      DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
    };
    ListProjectLogStoresRequest() = default ;
    ListProjectLogStoresRequest(const ListProjectLogStoresRequest &) = default ;
    ListProjectLogStoresRequest(ListProjectLogStoresRequest &&) = default ;
    ListProjectLogStoresRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectLogStoresRequest() = default ;
    ListProjectLogStoresRequest& operator=(const ListProjectLogStoresRequest &) = default ;
    ListProjectLogStoresRequest& operator=(ListProjectLogStoresRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->sourceLogCode_ == nullptr && this->sourceProdCode_ == nullptr && this->subUserId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListProjectLogStoresRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sourceLogCode Field Functions 
    bool hasSourceLogCode() const { return this->sourceLogCode_ != nullptr;};
    void deleteSourceLogCode() { this->sourceLogCode_ = nullptr;};
    inline string getSourceLogCode() const { DARABONBA_PTR_GET_DEFAULT(sourceLogCode_, "") };
    inline ListProjectLogStoresRequest& setSourceLogCode(string sourceLogCode) { DARABONBA_PTR_SET_VALUE(sourceLogCode_, sourceLogCode) };


    // sourceProdCode Field Functions 
    bool hasSourceProdCode() const { return this->sourceProdCode_ != nullptr;};
    void deleteSourceProdCode() { this->sourceProdCode_ = nullptr;};
    inline string getSourceProdCode() const { DARABONBA_PTR_GET_DEFAULT(sourceProdCode_, "") };
    inline ListProjectLogStoresRequest& setSourceProdCode(string sourceProdCode) { DARABONBA_PTR_SET_VALUE(sourceProdCode_, sourceProdCode) };


    // subUserId Field Functions 
    bool hasSubUserId() const { return this->subUserId_ != nullptr;};
    void deleteSubUserId() { this->subUserId_ = nullptr;};
    inline int64_t getSubUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
    inline ListProjectLogStoresRequest& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


  protected:
    // The region in which the data management center of the threat analysis feature resides. Specify this parameter based on the regions in which your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions in China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    shared_ptr<string> regionId_ {};
    // The log code.
    // 
    // This parameter is required.
    shared_ptr<string> sourceLogCode_ {};
    // The code of the cloud service.
    // 
    // This parameter is required.
    shared_ptr<string> sourceProdCode_ {};
    // The ID of the Alibaba Cloud account.
    // 
    // This parameter is required.
    shared_ptr<int64_t> subUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
