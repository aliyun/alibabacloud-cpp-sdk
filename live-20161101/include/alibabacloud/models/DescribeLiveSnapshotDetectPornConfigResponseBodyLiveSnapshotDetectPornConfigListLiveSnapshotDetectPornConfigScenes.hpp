// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESNAPSHOTDETECTPORNCONFIGRESPONSEBODYLIVESNAPSHOTDETECTPORNCONFIGLISTLIVESNAPSHOTDETECTPORNCONFIGSCENES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESNAPSHOTDETECTPORNCONFIGRESPONSEBODYLIVESNAPSHOTDETECTPORNCONFIGLISTLIVESNAPSHOTDETECTPORNCONFIGSCENES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfigScenes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfigScenes& obj) { 
      DARABONBA_PTR_TO_JSON(scene, scene_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfigScenes& obj) { 
      DARABONBA_PTR_FROM_JSON(scene, scene_);
    };
    DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfigScenes() = default ;
    DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfigScenes(const DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfigScenes &) = default ;
    DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfigScenes(DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfigScenes &&) = default ;
    DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfigScenes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfigScenes() = default ;
    DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfigScenes& operator=(const DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfigScenes &) = default ;
    DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfigScenes& operator=(DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfigScenes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scene_ == nullptr; };
    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline const vector<string> & scene() const { DARABONBA_PTR_GET_CONST(scene_, vector<string>) };
    inline vector<string> scene() { DARABONBA_PTR_GET(scene_, vector<string>) };
    inline DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfigScenes& setScene(const vector<string> & scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };
    inline DescribeLiveSnapshotDetectPornConfigResponseBodyLiveSnapshotDetectPornConfigListLiveSnapshotDetectPornConfigScenes& setScene(vector<string> && scene) { DARABONBA_PTR_SET_RVALUE(scene_, scene) };


  protected:
    std::shared_ptr<vector<string>> scene_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
