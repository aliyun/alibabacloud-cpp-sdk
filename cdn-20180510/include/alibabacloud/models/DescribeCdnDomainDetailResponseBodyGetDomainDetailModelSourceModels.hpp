// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINDETAILRESPONSEBODYGETDOMAINDETAILMODELSOURCEMODELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINDETAILRESPONSEBODYGETDOMAINDETAILMODELSOURCEMODELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModelsSourceModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels& obj) { 
      DARABONBA_PTR_TO_JSON(SourceModel, sourceModel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceModel, sourceModel_);
    };
    DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels() = default ;
    DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels(const DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels &) = default ;
    DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels(DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels &&) = default ;
    DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels() = default ;
    DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels& operator=(const DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels &) = default ;
    DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels& operator=(DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceModel_ != nullptr; };
    // sourceModel Field Functions 
    bool hasSourceModel() const { return this->sourceModel_ != nullptr;};
    void deleteSourceModel() { this->sourceModel_ = nullptr;};
    inline const vector<Models::DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModelsSourceModel> & sourceModel() const { DARABONBA_PTR_GET_CONST(sourceModel_, vector<Models::DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModelsSourceModel>) };
    inline vector<Models::DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModelsSourceModel> sourceModel() { DARABONBA_PTR_GET(sourceModel_, vector<Models::DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModelsSourceModel>) };
    inline DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels& setSourceModel(const vector<Models::DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModelsSourceModel> & sourceModel) { DARABONBA_PTR_SET_VALUE(sourceModel_, sourceModel) };
    inline DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels& setSourceModel(vector<Models::DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModelsSourceModel> && sourceModel) { DARABONBA_PTR_SET_RVALUE(sourceModel_, sourceModel) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModelsSourceModel>> sourceModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
