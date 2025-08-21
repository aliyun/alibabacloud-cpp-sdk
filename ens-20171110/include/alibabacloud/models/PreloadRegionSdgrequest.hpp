// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRELOADREGIONSDGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PRELOADREGIONSDGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class PreloadRegionSDGRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreloadRegionSDGRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationRegionIds, destinationRegionIds_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_TO_JSON(RedundantNum, redundantNum_);
      DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
    };
    friend void from_json(const Darabonba::Json& j, PreloadRegionSDGRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationRegionIds, destinationRegionIds_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_FROM_JSON(RedundantNum, redundantNum_);
      DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
    };
    PreloadRegionSDGRequest() = default ;
    PreloadRegionSDGRequest(const PreloadRegionSDGRequest &) = default ;
    PreloadRegionSDGRequest(PreloadRegionSDGRequest &&) = default ;
    PreloadRegionSDGRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreloadRegionSDGRequest() = default ;
    PreloadRegionSDGRequest& operator=(const PreloadRegionSDGRequest &) = default ;
    PreloadRegionSDGRequest& operator=(PreloadRegionSDGRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinationRegionIds_ != nullptr
        && this->diskType_ != nullptr && this->namespaces_ != nullptr && this->redundantNum_ != nullptr && this->SDGId_ != nullptr; };
    // destinationRegionIds Field Functions 
    bool hasDestinationRegionIds() const { return this->destinationRegionIds_ != nullptr;};
    void deleteDestinationRegionIds() { this->destinationRegionIds_ = nullptr;};
    inline const vector<string> & destinationRegionIds() const { DARABONBA_PTR_GET_CONST(destinationRegionIds_, vector<string>) };
    inline vector<string> destinationRegionIds() { DARABONBA_PTR_GET(destinationRegionIds_, vector<string>) };
    inline PreloadRegionSDGRequest& setDestinationRegionIds(const vector<string> & destinationRegionIds) { DARABONBA_PTR_SET_VALUE(destinationRegionIds_, destinationRegionIds) };
    inline PreloadRegionSDGRequest& setDestinationRegionIds(vector<string> && destinationRegionIds) { DARABONBA_PTR_SET_RVALUE(destinationRegionIds_, destinationRegionIds) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline PreloadRegionSDGRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // namespaces Field Functions 
    bool hasNamespaces() const { return this->namespaces_ != nullptr;};
    void deleteNamespaces() { this->namespaces_ = nullptr;};
    inline const vector<string> & namespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<string>) };
    inline vector<string> namespaces() { DARABONBA_PTR_GET(namespaces_, vector<string>) };
    inline PreloadRegionSDGRequest& setNamespaces(const vector<string> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
    inline PreloadRegionSDGRequest& setNamespaces(vector<string> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


    // redundantNum Field Functions 
    bool hasRedundantNum() const { return this->redundantNum_ != nullptr;};
    void deleteRedundantNum() { this->redundantNum_ = nullptr;};
    inline int32_t redundantNum() const { DARABONBA_PTR_GET_DEFAULT(redundantNum_, 0) };
    inline PreloadRegionSDGRequest& setRedundantNum(int32_t redundantNum) { DARABONBA_PTR_SET_VALUE(redundantNum_, redundantNum) };


    // SDGId Field Functions 
    bool hasSDGId() const { return this->SDGId_ != nullptr;};
    void deleteSDGId() { this->SDGId_ = nullptr;};
    inline string SDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
    inline PreloadRegionSDGRequest& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


  protected:
    // The IDs of the destination nodes.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> destinationRegionIds_ = nullptr;
    std::shared_ptr<string> diskType_ = nullptr;
    // An array that consists of queried namespaces.
    std::shared_ptr<vector<string>> namespaces_ = nullptr;
    // The number of redundant replicas to support rapid deployment.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> redundantNum_ = nullptr;
    // The ID of the SDG for which data is preloaded.
    // 
    // This parameter is required.
    std::shared_ptr<string> SDGId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
