// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEMODERATIONRESULTRESPONSEBODYMODERATIONRESULTFRAMES_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEMODERATIONRESULTRESPONSEBODYMODERATIONRESULTFRAMES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetImageModerationResultResponseBodyModerationResultFramesBlockFrames.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GetImageModerationResultResponseBodyModerationResultFrames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageModerationResultResponseBodyModerationResultFrames& obj) { 
      DARABONBA_PTR_TO_JSON(BlockFrames, blockFrames_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageModerationResultResponseBodyModerationResultFrames& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockFrames, blockFrames_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetImageModerationResultResponseBodyModerationResultFrames() = default ;
    GetImageModerationResultResponseBodyModerationResultFrames(const GetImageModerationResultResponseBodyModerationResultFrames &) = default ;
    GetImageModerationResultResponseBodyModerationResultFrames(GetImageModerationResultResponseBodyModerationResultFrames &&) = default ;
    GetImageModerationResultResponseBodyModerationResultFrames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageModerationResultResponseBodyModerationResultFrames() = default ;
    GetImageModerationResultResponseBodyModerationResultFrames& operator=(const GetImageModerationResultResponseBodyModerationResultFrames &) = default ;
    GetImageModerationResultResponseBodyModerationResultFrames& operator=(GetImageModerationResultResponseBodyModerationResultFrames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blockFrames_ != nullptr
        && this->totalCount_ != nullptr; };
    // blockFrames Field Functions 
    bool hasBlockFrames() const { return this->blockFrames_ != nullptr;};
    void deleteBlockFrames() { this->blockFrames_ = nullptr;};
    inline const vector<Models::GetImageModerationResultResponseBodyModerationResultFramesBlockFrames> & blockFrames() const { DARABONBA_PTR_GET_CONST(blockFrames_, vector<Models::GetImageModerationResultResponseBodyModerationResultFramesBlockFrames>) };
    inline vector<Models::GetImageModerationResultResponseBodyModerationResultFramesBlockFrames> blockFrames() { DARABONBA_PTR_GET(blockFrames_, vector<Models::GetImageModerationResultResponseBodyModerationResultFramesBlockFrames>) };
    inline GetImageModerationResultResponseBodyModerationResultFrames& setBlockFrames(const vector<Models::GetImageModerationResultResponseBodyModerationResultFramesBlockFrames> & blockFrames) { DARABONBA_PTR_SET_VALUE(blockFrames_, blockFrames) };
    inline GetImageModerationResultResponseBodyModerationResultFrames& setBlockFrames(vector<Models::GetImageModerationResultResponseBodyModerationResultFramesBlockFrames> && blockFrames) { DARABONBA_PTR_SET_RVALUE(blockFrames_, blockFrames) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetImageModerationResultResponseBodyModerationResultFrames& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The violated frames.
    std::shared_ptr<vector<Models::GetImageModerationResultResponseBodyModerationResultFramesBlockFrames>> blockFrames_ = nullptr;
    // The total number of detected frames.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
