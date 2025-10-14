// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEINFORESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCEENSREGIONIDSEXTENDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEINFORESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCEENSREGIONIDSEXTENDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtendsEnsRegionId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
    };
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends() = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends(const DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends &) = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends(DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends &&) = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends() = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends& operator=(const DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends &) = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends& operator=(DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ensRegionId_ == nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline const vector<Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtendsEnsRegionId> & ensRegionId() const { DARABONBA_PTR_GET_CONST(ensRegionId_, vector<Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtendsEnsRegionId>) };
    inline vector<Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtendsEnsRegionId> ensRegionId() { DARABONBA_PTR_GET(ensRegionId_, vector<Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtendsEnsRegionId>) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends& setEnsRegionId(const vector<Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtendsEnsRegionId> & ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends& setEnsRegionId(vector<Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtendsEnsRegionId> && ensRegionId) { DARABONBA_PTR_SET_RVALUE(ensRegionId_, ensRegionId) };


  protected:
    std::shared_ptr<vector<Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtendsEnsRegionId>> ensRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
