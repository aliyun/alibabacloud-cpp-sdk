// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETRESPONSEBODYDATADATASETCONFIGSEARCHSOURCECONFIGSSEARCHSOURCERESPONSECONFIGJQNODES_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETRESPONSEBODYDATADATASETCONFIGSEARCHSOURCECONFIGSSEARCHSOURCERESPONSECONFIGJQNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodesJqNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes& obj) { 
      DARABONBA_PTR_TO_JSON(JqNodes, jqNodes_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(JqNodes, jqNodes_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes() = default ;
    GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes(const GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes &) = default ;
    GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes(GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes &&) = default ;
    GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes() = default ;
    GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes& operator=(const GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes &) = default ;
    GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes& operator=(GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jqNodes_ != nullptr
        && this->key_ != nullptr && this->path_ != nullptr && this->type_ != nullptr; };
    // jqNodes Field Functions 
    bool hasJqNodes() const { return this->jqNodes_ != nullptr;};
    void deleteJqNodes() { this->jqNodes_ = nullptr;};
    inline const vector<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodesJqNodes> & jqNodes() const { DARABONBA_PTR_GET_CONST(jqNodes_, vector<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodesJqNodes>) };
    inline vector<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodesJqNodes> jqNodes() { DARABONBA_PTR_GET(jqNodes_, vector<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodesJqNodes>) };
    inline GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes& setJqNodes(const vector<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodesJqNodes> & jqNodes) { DARABONBA_PTR_SET_VALUE(jqNodes_, jqNodes) };
    inline GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes& setJqNodes(vector<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodesJqNodes> && jqNodes) { DARABONBA_PTR_SET_RVALUE(jqNodes_, jqNodes) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodesJqNodes>> jqNodes_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
