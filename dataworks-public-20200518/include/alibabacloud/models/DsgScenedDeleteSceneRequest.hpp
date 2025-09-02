// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGSCENEDDELETESCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGSCENEDDELETESCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgScenedDeleteSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgScenedDeleteSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
    };
    friend void from_json(const Darabonba::Json& j, DsgScenedDeleteSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
    };
    DsgScenedDeleteSceneRequest() = default ;
    DsgScenedDeleteSceneRequest(const DsgScenedDeleteSceneRequest &) = default ;
    DsgScenedDeleteSceneRequest(DsgScenedDeleteSceneRequest &&) = default ;
    DsgScenedDeleteSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgScenedDeleteSceneRequest() = default ;
    DsgScenedDeleteSceneRequest& operator=(const DsgScenedDeleteSceneRequest &) = default ;
    DsgScenedDeleteSceneRequest& operator=(DsgScenedDeleteSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ids_ != nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<int32_t> & ids() const { DARABONBA_PTR_GET_CONST(ids_, vector<int32_t>) };
    inline vector<int32_t> ids() { DARABONBA_PTR_GET(ids_, vector<int32_t>) };
    inline DsgScenedDeleteSceneRequest& setIds(const vector<int32_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline DsgScenedDeleteSceneRequest& setIds(vector<int32_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


  protected:
    // The IDs of level-2 data masking scenarios.
    // 
    // This parameter is required.
    std::shared_ptr<vector<int32_t>> ids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
