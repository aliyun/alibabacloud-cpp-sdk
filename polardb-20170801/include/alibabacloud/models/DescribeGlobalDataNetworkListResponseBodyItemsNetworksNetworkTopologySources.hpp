// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATANETWORKLISTRESPONSEBODYITEMSNETWORKSNETWORKTOPOLOGYSOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATANETWORKLISTRESPONSEBODYITEMSNETWORKSNETWORKTOPOLOGYSOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources& obj) { 
      DARABONBA_PTR_TO_JSON(SourceFileSystemPath, sourceFileSystemPath_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceRegion, sourceRegion_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceFileSystemPath, sourceFileSystemPath_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceRegion, sourceRegion_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources() = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources(const DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources &) = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources(DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources &&) = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources() = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources& operator=(const DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources &) = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources& operator=(DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceFileSystemPath_ != nullptr
        && this->sourceId_ != nullptr && this->sourceRegion_ != nullptr && this->sourceType_ != nullptr; };
    // sourceFileSystemPath Field Functions 
    bool hasSourceFileSystemPath() const { return this->sourceFileSystemPath_ != nullptr;};
    void deleteSourceFileSystemPath() { this->sourceFileSystemPath_ = nullptr;};
    inline string sourceFileSystemPath() const { DARABONBA_PTR_GET_DEFAULT(sourceFileSystemPath_, "") };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources& setSourceFileSystemPath(string sourceFileSystemPath) { DARABONBA_PTR_SET_VALUE(sourceFileSystemPath_, sourceFileSystemPath) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceRegion Field Functions 
    bool hasSourceRegion() const { return this->sourceRegion_ != nullptr;};
    void deleteSourceRegion() { this->sourceRegion_ = nullptr;};
    inline string sourceRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceRegion_, "") };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources& setSourceRegion(string sourceRegion) { DARABONBA_PTR_SET_VALUE(sourceRegion_, sourceRegion) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworksNetworkTopologySources& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    std::shared_ptr<string> sourceFileSystemPath_ = nullptr;
    std::shared_ptr<string> sourceId_ = nullptr;
    std::shared_ptr<string> sourceRegion_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
