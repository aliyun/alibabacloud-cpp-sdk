// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMIZATIONCONFIGLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMIZATIONCONFIGLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetCustomizationConfigListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomizationConfigListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ModelCustomizationDataSetPo, modelCustomizationDataSetPo_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomizationConfigListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelCustomizationDataSetPo, modelCustomizationDataSetPo_);
    };
    GetCustomizationConfigListResponseBodyData() = default ;
    GetCustomizationConfigListResponseBodyData(const GetCustomizationConfigListResponseBodyData &) = default ;
    GetCustomizationConfigListResponseBodyData(GetCustomizationConfigListResponseBodyData &&) = default ;
    GetCustomizationConfigListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomizationConfigListResponseBodyData() = default ;
    GetCustomizationConfigListResponseBodyData& operator=(const GetCustomizationConfigListResponseBodyData &) = default ;
    GetCustomizationConfigListResponseBodyData& operator=(GetCustomizationConfigListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelCustomizationDataSetPo_ == nullptr; };
    // modelCustomizationDataSetPo Field Functions 
    bool hasModelCustomizationDataSetPo() const { return this->modelCustomizationDataSetPo_ != nullptr;};
    void deleteModelCustomizationDataSetPo() { this->modelCustomizationDataSetPo_ = nullptr;};
    inline const vector<Models::GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo> & modelCustomizationDataSetPo() const { DARABONBA_PTR_GET_CONST(modelCustomizationDataSetPo_, vector<Models::GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo>) };
    inline vector<Models::GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo> modelCustomizationDataSetPo() { DARABONBA_PTR_GET(modelCustomizationDataSetPo_, vector<Models::GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo>) };
    inline GetCustomizationConfigListResponseBodyData& setModelCustomizationDataSetPo(const vector<Models::GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo> & modelCustomizationDataSetPo) { DARABONBA_PTR_SET_VALUE(modelCustomizationDataSetPo_, modelCustomizationDataSetPo) };
    inline GetCustomizationConfigListResponseBodyData& setModelCustomizationDataSetPo(vector<Models::GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo> && modelCustomizationDataSetPo) { DARABONBA_PTR_SET_RVALUE(modelCustomizationDataSetPo_, modelCustomizationDataSetPo) };


  protected:
    std::shared_ptr<vector<Models::GetCustomizationConfigListResponseBodyDataModelCustomizationDataSetPo>> modelCustomizationDataSetPo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
