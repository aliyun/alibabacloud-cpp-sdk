// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONLOARESPONSEBODYPHYSICALCONNECTIONLOATYPEPMINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONLOARESPONSEBODYPHYSICALCONNECTIONLOATYPEPMINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PMInfo, PMInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PMInfo, PMInfo_);
    };
    DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo() = default ;
    DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo(const DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo &) = default ;
    DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo(DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo &&) = default ;
    DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo() = default ;
    DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo& operator=(const DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo &) = default ;
    DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo& operator=(DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->PMInfo_ == nullptr; };
    // PMInfo Field Functions 
    bool hasPMInfo() const { return this->PMInfo_ != nullptr;};
    void deletePMInfo() { this->PMInfo_ = nullptr;};
    inline const vector<Models::DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo> & PMInfo() const { DARABONBA_PTR_GET_CONST(PMInfo_, vector<Models::DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo>) };
    inline vector<Models::DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo> PMInfo() { DARABONBA_PTR_GET(PMInfo_, vector<Models::DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo>) };
    inline DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo& setPMInfo(const vector<Models::DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo> & PMInfo) { DARABONBA_PTR_SET_VALUE(PMInfo_, PMInfo) };
    inline DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo& setPMInfo(vector<Models::DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo> && PMInfo) { DARABONBA_PTR_SET_RVALUE(PMInfo_, PMInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo>> PMInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
