// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESUBSCENESEQREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESUBSCENESEQREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class UpdateSubSceneSeqRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSubSceneSeqRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SortSubSceneIds, sortSubSceneIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSubSceneSeqRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SortSubSceneIds, sortSubSceneIds_);
    };
    UpdateSubSceneSeqRequest() = default ;
    UpdateSubSceneSeqRequest(const UpdateSubSceneSeqRequest &) = default ;
    UpdateSubSceneSeqRequest(UpdateSubSceneSeqRequest &&) = default ;
    UpdateSubSceneSeqRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSubSceneSeqRequest() = default ;
    UpdateSubSceneSeqRequest& operator=(const UpdateSubSceneSeqRequest &) = default ;
    UpdateSubSceneSeqRequest& operator=(UpdateSubSceneSeqRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sceneId_ == nullptr
        && return this->sortSubSceneIds_ == nullptr; };
    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline UpdateSubSceneSeqRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sortSubSceneIds Field Functions 
    bool hasSortSubSceneIds() const { return this->sortSubSceneIds_ != nullptr;};
    void deleteSortSubSceneIds() { this->sortSubSceneIds_ = nullptr;};
    inline const vector<string> & sortSubSceneIds() const { DARABONBA_PTR_GET_CONST(sortSubSceneIds_, vector<string>) };
    inline vector<string> sortSubSceneIds() { DARABONBA_PTR_GET(sortSubSceneIds_, vector<string>) };
    inline UpdateSubSceneSeqRequest& setSortSubSceneIds(const vector<string> & sortSubSceneIds) { DARABONBA_PTR_SET_VALUE(sortSubSceneIds_, sortSubSceneIds) };
    inline UpdateSubSceneSeqRequest& setSortSubSceneIds(vector<string> && sortSubSceneIds) { DARABONBA_PTR_SET_RVALUE(sortSubSceneIds_, sortSubSceneIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> sortSubSceneIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
