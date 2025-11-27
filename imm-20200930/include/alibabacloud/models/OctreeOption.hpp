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
        && return this->libraryName_ == nullptr && return this->octreeResolution_ == nullptr && return this->pointResolution_ == nullptr; };
    // doVoxelGridDownDownSampling Field Functions 
    bool hasDoVoxelGridDownDownSampling() const { return this->doVoxelGridDownDownSampling_ != nullptr;};
    void deleteDoVoxelGridDownDownSampling() { this->doVoxelGridDownDownSampling_ = nullptr;};
    inline bool doVoxelGridDownDownSampling() const { DARABONBA_PTR_GET_DEFAULT(doVoxelGridDownDownSampling_, false) };
    inline OctreeOption& setDoVoxelGridDownDownSampling(bool doVoxelGridDownDownSampling) { DARABONBA_PTR_SET_VALUE(doVoxelGridDownDownSampling_, doVoxelGridDownDownSampling) };


    // libraryName Field Functions 
    bool hasLibraryName() const { return this->libraryName_ != nullptr;};
    void deleteLibraryName() { this->libraryName_ = nullptr;};
    inline string libraryName() const { DARABONBA_PTR_GET_DEFAULT(libraryName_, "") };
    inline OctreeOption& setLibraryName(string libraryName) { DARABONBA_PTR_SET_VALUE(libraryName_, libraryName) };


    // octreeResolution Field Functions 
    bool hasOctreeResolution() const { return this->octreeResolution_ != nullptr;};
    void deleteOctreeResolution() { this->octreeResolution_ = nullptr;};
    inline double octreeResolution() const { DARABONBA_PTR_GET_DEFAULT(octreeResolution_, 0.0) };
    inline OctreeOption& setOctreeResolution(double octreeResolution) { DARABONBA_PTR_SET_VALUE(octreeResolution_, octreeResolution) };


    // pointResolution Field Functions 
    bool hasPointResolution() const { return this->pointResolution_ != nullptr;};
    void deletePointResolution() { this->pointResolution_ = nullptr;};
    inline double pointResolution() const { DARABONBA_PTR_GET_DEFAULT(pointResolution_, 0.0) };
    inline OctreeOption& setPointResolution(double pointResolution) { DARABONBA_PTR_SET_VALUE(pointResolution_, pointResolution) };


  protected:
    std::shared_ptr<bool> doVoxelGridDownDownSampling_ = nullptr;
    std::shared_ptr<string> libraryName_ = nullptr;
    std::shared_ptr<double> octreeResolution_ = nullptr;
    std::shared_ptr<double> pointResolution_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
