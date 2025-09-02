// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGQUERYDEFAULTTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGQUERYDEFAULTTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgQueryDefaultTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgQueryDefaultTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, DsgQueryDefaultTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    DsgQueryDefaultTemplatesRequest() = default ;
    DsgQueryDefaultTemplatesRequest(const DsgQueryDefaultTemplatesRequest &) = default ;
    DsgQueryDefaultTemplatesRequest(DsgQueryDefaultTemplatesRequest &&) = default ;
    DsgQueryDefaultTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgQueryDefaultTemplatesRequest() = default ;
    DsgQueryDefaultTemplatesRequest& operator=(const DsgQueryDefaultTemplatesRequest &) = default ;
    DsgQueryDefaultTemplatesRequest& operator=(DsgQueryDefaultTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sceneId_ != nullptr; };
    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int32_t sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0) };
    inline DsgQueryDefaultTemplatesRequest& setSceneId(int32_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // The ID of the level-2 data masking scenario. You can call the [DsgSceneQuerySceneListByName](https://help.aliyun.com/document_detail/2786322.html) operation to query the list of IDs.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
