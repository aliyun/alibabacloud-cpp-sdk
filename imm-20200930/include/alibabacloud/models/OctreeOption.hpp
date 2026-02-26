// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OCTREEOPTION_HPP_
#define ALIBABACLOUD_MODELS_OCTREEOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class OctreeOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OctreeOption& obj) { 
      DARABONBA_PTR_TO_JSON(DoVoxelGridDownDownSampling, doVoxelGridDownDownSampling_);
      DARABONBA_PTR_TO_JSON(LibraryName, libraryName_);
      DARABONBA_PTR_TO_JSON(OctreeResolution, octreeResolution_);
      DARABONBA_PTR_TO_JSON(PointResolution, pointResolution_);
    };
    friend void from_json(const Darabonba::Json& j, OctreeOption& obj) { 
      DARABONBA_PTR_FROM_JSON(DoVoxelGridDownDownSampling, doVoxelGridDownDownSampling_);
      DARABONBA_PTR_FROM_JSON(LibraryName, libraryName_);
      DARABONBA_PTR_FROM_JSON(OctreeResolution, octreeResolution_);
      DARABONBA_PTR_FROM_JSON(PointResolution, pointResolution_);
    };
    OctreeOption() = default ;
    OctreeOption(const OctreeOption &) = default ;
    OctreeOption(OctreeOption &&) = default ;
    OctreeOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OctreeOption() = default ;
    OctreeOption& operator=(const OctreeOption &) = default ;
    OctreeOption& operator=(OctreeOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->doVoxelGridDownDownSampling_ == nullptr
        && this->libraryName_ == nullptr && this->octreeResolution_ == nullptr && this->pointResolution_ == nullptr; };
    // doVoxelGridDownDownSampling Field Functions 
    bool hasDoVoxelGridDownDownSampling() const { return this->doVoxelGridDownDownSampling_ != nullptr;};
    void deleteDoVoxelGridDownDownSampling() { this->doVoxelGridDownDownSampling_ = nullptr;};
    inline bool getDoVoxelGridDownDownSampling() const { DARABONBA_PTR_GET_DEFAULT(doVoxelGridDownDownSampling_, false) };
    inline OctreeOption& setDoVoxelGridDownDownSampling(bool doVoxelGridDownDownSampling) { DARABONBA_PTR_SET_VALUE(doVoxelGridDownDownSampling_, doVoxelGridDownDownSampling) };


    // libraryName Field Functions 
    bool hasLibraryName() const { return this->libraryName_ != nullptr;};
    void deleteLibraryName() { this->libraryName_ = nullptr;};
    inline string getLibraryName() const { DARABONBA_PTR_GET_DEFAULT(libraryName_, "") };
    inline OctreeOption& setLibraryName(string libraryName) { DARABONBA_PTR_SET_VALUE(libraryName_, libraryName) };


    // octreeResolution Field Functions 
    bool hasOctreeResolution() const { return this->octreeResolution_ != nullptr;};
    void deleteOctreeResolution() { this->octreeResolution_ = nullptr;};
    inline double getOctreeResolution() const { DARABONBA_PTR_GET_DEFAULT(octreeResolution_, 0.0) };
    inline OctreeOption& setOctreeResolution(double octreeResolution) { DARABONBA_PTR_SET_VALUE(octreeResolution_, octreeResolution) };


    // pointResolution Field Functions 
    bool hasPointResolution() const { return this->pointResolution_ != nullptr;};
    void deletePointResolution() { this->pointResolution_ = nullptr;};
    inline double getPointResolution() const { DARABONBA_PTR_GET_DEFAULT(pointResolution_, 0.0) };
    inline OctreeOption& setPointResolution(double pointResolution) { DARABONBA_PTR_SET_VALUE(pointResolution_, pointResolution) };


  protected:
    // Specifies whether to downsample the point cloud file. Valid values:
    // 
    // *   true: The point cloud file is downsampled, and the coordinates of the points in a voxel are replaced with the coordinates of the center point of the voxel. The average color of all points in the voxel is used as the color of the voxel. In this case, the PointResolution parameter does not take effect.
    // *   false: Specific coordinates and colors in a voxel are encoded by calculating the offsets from each point to the lower-left corner of the voxel. The offsets are divided by the PointResolution value to obtain the integer coordinates. The residual of the color for each point relative to the average color of all points in the voxel is encoded.
    shared_ptr<bool> doVoxelGridDownDownSampling_ {};
    // The library name. Set the value to pcl. Default value: pcl.
    shared_ptr<string> libraryName_ {};
    // The minimum block size when an octree is partitioned. The minimum block size indicates the edge length of a voxel. Default value: 0.01.
    shared_ptr<double> octreeResolution_ {};
    // The point cloud resolution. This parameter determines the precision of the point coordinates during encoding. Default value: 0.01.
    shared_ptr<double> pointResolution_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
