// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEDGESTATINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEDGESTATINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class DescribeEdgeStatInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEdgeStatInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EdgeDn, edgeDn_);
      DARABONBA_PTR_TO_JSON(EdgePk, edgePk_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEdgeStatInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EdgeDn, edgeDn_);
      DARABONBA_PTR_FROM_JSON(EdgePk, edgePk_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeEdgeStatInfoRequest() = default ;
    DescribeEdgeStatInfoRequest(const DescribeEdgeStatInfoRequest &) = default ;
    DescribeEdgeStatInfoRequest(DescribeEdgeStatInfoRequest &&) = default ;
    DescribeEdgeStatInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEdgeStatInfoRequest() = default ;
    DescribeEdgeStatInfoRequest& operator=(const DescribeEdgeStatInfoRequest &) = default ;
    DescribeEdgeStatInfoRequest& operator=(DescribeEdgeStatInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edgeDn_ == nullptr
        && return this->edgePk_ == nullptr && return this->regionId_ == nullptr; };
    // edgeDn Field Functions 
    bool hasEdgeDn() const { return this->edgeDn_ != nullptr;};
    void deleteEdgeDn() { this->edgeDn_ = nullptr;};
    inline string edgeDn() const { DARABONBA_PTR_GET_DEFAULT(edgeDn_, "") };
    inline DescribeEdgeStatInfoRequest& setEdgeDn(string edgeDn) { DARABONBA_PTR_SET_VALUE(edgeDn_, edgeDn) };


    // edgePk Field Functions 
    bool hasEdgePk() const { return this->edgePk_ != nullptr;};
    void deleteEdgePk() { this->edgePk_ = nullptr;};
    inline string edgePk() const { DARABONBA_PTR_GET_DEFAULT(edgePk_, "") };
    inline DescribeEdgeStatInfoRequest& setEdgePk(string edgePk) { DARABONBA_PTR_SET_VALUE(edgePk_, edgePk) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEdgeStatInfoRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> edgeDn_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> edgePk_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
