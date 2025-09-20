// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOMODERATIONRESULTRESPONSEBODYMODERATIONRESULTFRAMES_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOMODERATIONRESULTRESPONSEBODYMODERATIONRESULTFRAMES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GetVideoModerationResultResponseBodyModerationResultFrames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoModerationResultResponseBodyModerationResultFrames& obj) { 
      DARABONBA_PTR_TO_JSON(BlockFrames, blockFrames_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoModerationResultResponseBodyModerationResultFrames& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockFrames, blockFrames_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetVideoModerationResultResponseBodyModerationResultFrames() = default ;
    GetVideoModerationResultResponseBodyModerationResultFrames(const GetVideoModerationResultResponseBodyModerationResultFrames &) = default ;
    GetVideoModerationResultResponseBodyModerationResultFrames(GetVideoModerationResultResponseBodyModerationResultFrames &&) = default ;
    GetVideoModerationResultResponseBodyModerationResultFrames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoModerationResultResponseBodyModerationResultFrames() = default ;
    GetVideoModerationResultResponseBodyModerationResultFrames& operator=(const GetVideoModerationResultResponseBodyModerationResultFrames &) = default ;
    GetVideoModerationResultResponseBodyModerationResultFrames& operator=(GetVideoModerationResultResponseBodyModerationResultFrames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blockFrames_ != nullptr
        && this->totalCount_ != nullptr; };
    // blockFrames Field Functions 
    bool hasBlockFrames() const { return this->blockFrames_ != nullptr;};
    void deleteBlockFrames() { this->blockFrames_ = nullptr;};
    inline const vector<Models::GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames> & blockFrames() const { DARABONBA_PTR_GET_CONST(blockFrames_, vector<Models::GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames>) };
    inline vector<Models::GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames> blockFrames() { DARABONBA_PTR_GET(blockFrames_, vector<Models::GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames>) };
    inline GetVideoModerationResultResponseBodyModerationResultFrames& setBlockFrames(const vector<Models::GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames> & blockFrames) { DARABONBA_PTR_SET_VALUE(blockFrames_, blockFrames) };
    inline GetVideoModerationResultResponseBodyModerationResultFrames& setBlockFrames(vector<Models::GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames> && blockFrames) { DARABONBA_PTR_SET_RVALUE(blockFrames_, blockFrames) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetVideoModerationResultResponseBodyModerationResultFrames& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::GetVideoModerationResultResponseBodyModerationResultFramesBlockFrames>> blockFrames_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
