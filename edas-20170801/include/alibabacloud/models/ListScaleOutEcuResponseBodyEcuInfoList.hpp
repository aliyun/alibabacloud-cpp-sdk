// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCALEOUTECURESPONSEBODYECUINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCALEOUTECURESPONSEBODYECUINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListScaleOutEcuResponseBodyEcuInfoListEcuInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListScaleOutEcuResponseBodyEcuInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScaleOutEcuResponseBodyEcuInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(EcuInfo, ecuInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListScaleOutEcuResponseBodyEcuInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(EcuInfo, ecuInfo_);
    };
    ListScaleOutEcuResponseBodyEcuInfoList() = default ;
    ListScaleOutEcuResponseBodyEcuInfoList(const ListScaleOutEcuResponseBodyEcuInfoList &) = default ;
    ListScaleOutEcuResponseBodyEcuInfoList(ListScaleOutEcuResponseBodyEcuInfoList &&) = default ;
    ListScaleOutEcuResponseBodyEcuInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScaleOutEcuResponseBodyEcuInfoList() = default ;
    ListScaleOutEcuResponseBodyEcuInfoList& operator=(const ListScaleOutEcuResponseBodyEcuInfoList &) = default ;
    ListScaleOutEcuResponseBodyEcuInfoList& operator=(ListScaleOutEcuResponseBodyEcuInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecuInfo_ == nullptr; };
    // ecuInfo Field Functions 
    bool hasEcuInfo() const { return this->ecuInfo_ != nullptr;};
    void deleteEcuInfo() { this->ecuInfo_ = nullptr;};
    inline const vector<Models::ListScaleOutEcuResponseBodyEcuInfoListEcuInfo> & ecuInfo() const { DARABONBA_PTR_GET_CONST(ecuInfo_, vector<Models::ListScaleOutEcuResponseBodyEcuInfoListEcuInfo>) };
    inline vector<Models::ListScaleOutEcuResponseBodyEcuInfoListEcuInfo> ecuInfo() { DARABONBA_PTR_GET(ecuInfo_, vector<Models::ListScaleOutEcuResponseBodyEcuInfoListEcuInfo>) };
    inline ListScaleOutEcuResponseBodyEcuInfoList& setEcuInfo(const vector<Models::ListScaleOutEcuResponseBodyEcuInfoListEcuInfo> & ecuInfo) { DARABONBA_PTR_SET_VALUE(ecuInfo_, ecuInfo) };
    inline ListScaleOutEcuResponseBodyEcuInfoList& setEcuInfo(vector<Models::ListScaleOutEcuResponseBodyEcuInfoListEcuInfo> && ecuInfo) { DARABONBA_PTR_SET_RVALUE(ecuInfo_, ecuInfo) };


  protected:
    std::shared_ptr<vector<Models::ListScaleOutEcuResponseBodyEcuInfoListEcuInfo>> ecuInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
