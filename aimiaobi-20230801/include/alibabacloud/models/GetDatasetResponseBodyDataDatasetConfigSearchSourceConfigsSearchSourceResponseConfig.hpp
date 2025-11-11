// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETRESPONSEBODYDATADATASETCONFIGSEARCHSOURCECONFIGSSEARCHSOURCERESPONSECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETRESPONSEBODYDATADATASETCONFIGSEARCHSOURCECONFIGSSEARCHSOURCERESPONSECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig& obj) { 
      DARABONBA_PTR_TO_JSON(JqNodes, jqNodes_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(JqNodes, jqNodes_);
    };
    GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig() = default ;
    GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig(const GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig &) = default ;
    GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig(GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig &&) = default ;
    GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig() = default ;
    GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig& operator=(const GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig &) = default ;
    GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig& operator=(GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jqNodes_ == nullptr; };
    // jqNodes Field Functions 
    bool hasJqNodes() const { return this->jqNodes_ != nullptr;};
    void deleteJqNodes() { this->jqNodes_ = nullptr;};
    inline const vector<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes> & jqNodes() const { DARABONBA_PTR_GET_CONST(jqNodes_, vector<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes>) };
    inline vector<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes> jqNodes() { DARABONBA_PTR_GET(jqNodes_, vector<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes>) };
    inline GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig& setJqNodes(const vector<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes> & jqNodes) { DARABONBA_PTR_SET_VALUE(jqNodes_, jqNodes) };
    inline GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfig& setJqNodes(vector<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes> && jqNodes) { DARABONBA_PTR_SET_RVALUE(jqNodes_, jqNodes) };


  protected:
    std::shared_ptr<vector<Models::GetDatasetResponseBodyDataDatasetConfigSearchSourceConfigsSearchSourceResponseConfigJqNodes>> jqNodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
