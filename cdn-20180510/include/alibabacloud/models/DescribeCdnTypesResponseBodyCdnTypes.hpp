// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNTYPESRESPONSEBODYCDNTYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNTYPESRESPONSEBODYCDNTYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnTypesResponseBodyCdnTypesCdnType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnTypesResponseBodyCdnTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnTypesResponseBodyCdnTypes& obj) { 
      DARABONBA_PTR_TO_JSON(CdnType, cdnType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnTypesResponseBodyCdnTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(CdnType, cdnType_);
    };
    DescribeCdnTypesResponseBodyCdnTypes() = default ;
    DescribeCdnTypesResponseBodyCdnTypes(const DescribeCdnTypesResponseBodyCdnTypes &) = default ;
    DescribeCdnTypesResponseBodyCdnTypes(DescribeCdnTypesResponseBodyCdnTypes &&) = default ;
    DescribeCdnTypesResponseBodyCdnTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnTypesResponseBodyCdnTypes() = default ;
    DescribeCdnTypesResponseBodyCdnTypes& operator=(const DescribeCdnTypesResponseBodyCdnTypes &) = default ;
    DescribeCdnTypesResponseBodyCdnTypes& operator=(DescribeCdnTypesResponseBodyCdnTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cdnType_ != nullptr; };
    // cdnType Field Functions 
    bool hasCdnType() const { return this->cdnType_ != nullptr;};
    void deleteCdnType() { this->cdnType_ = nullptr;};
    inline const vector<Models::DescribeCdnTypesResponseBodyCdnTypesCdnType> & cdnType() const { DARABONBA_PTR_GET_CONST(cdnType_, vector<Models::DescribeCdnTypesResponseBodyCdnTypesCdnType>) };
    inline vector<Models::DescribeCdnTypesResponseBodyCdnTypesCdnType> cdnType() { DARABONBA_PTR_GET(cdnType_, vector<Models::DescribeCdnTypesResponseBodyCdnTypesCdnType>) };
    inline DescribeCdnTypesResponseBodyCdnTypes& setCdnType(const vector<Models::DescribeCdnTypesResponseBodyCdnTypesCdnType> & cdnType) { DARABONBA_PTR_SET_VALUE(cdnType_, cdnType) };
    inline DescribeCdnTypesResponseBodyCdnTypes& setCdnType(vector<Models::DescribeCdnTypesResponseBodyCdnTypesCdnType> && cdnType) { DARABONBA_PTR_SET_RVALUE(cdnType_, cdnType) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnTypesResponseBodyCdnTypesCdnType>> cdnType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
