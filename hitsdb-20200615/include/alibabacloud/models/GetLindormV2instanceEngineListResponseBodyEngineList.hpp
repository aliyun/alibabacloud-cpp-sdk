// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCEENGINELISTRESPONSEBODYENGINELIST_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCEENGINELISTRESPONSEBODYENGINELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormV2InstanceEngineListResponseBodyEngineList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormV2InstanceEngineListResponseBodyEngineList& obj) { 
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(NetInfoList, netInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormV2InstanceEngineListResponseBodyEngineList& obj) { 
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(NetInfoList, netInfoList_);
    };
    GetLindormV2InstanceEngineListResponseBodyEngineList() = default ;
    GetLindormV2InstanceEngineListResponseBodyEngineList(const GetLindormV2InstanceEngineListResponseBodyEngineList &) = default ;
    GetLindormV2InstanceEngineListResponseBodyEngineList(GetLindormV2InstanceEngineListResponseBodyEngineList &&) = default ;
    GetLindormV2InstanceEngineListResponseBodyEngineList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormV2InstanceEngineListResponseBodyEngineList() = default ;
    GetLindormV2InstanceEngineListResponseBodyEngineList& operator=(const GetLindormV2InstanceEngineListResponseBodyEngineList &) = default ;
    GetLindormV2InstanceEngineListResponseBodyEngineList& operator=(GetLindormV2InstanceEngineListResponseBodyEngineList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->engineType_ != nullptr
        && this->netInfoList_ != nullptr; };
    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline GetLindormV2InstanceEngineListResponseBodyEngineList& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // netInfoList Field Functions 
    bool hasNetInfoList() const { return this->netInfoList_ != nullptr;};
    void deleteNetInfoList() { this->netInfoList_ = nullptr;};
    inline const vector<Models::GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList> & netInfoList() const { DARABONBA_PTR_GET_CONST(netInfoList_, vector<Models::GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList>) };
    inline vector<Models::GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList> netInfoList() { DARABONBA_PTR_GET(netInfoList_, vector<Models::GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList>) };
    inline GetLindormV2InstanceEngineListResponseBodyEngineList& setNetInfoList(const vector<Models::GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList> & netInfoList) { DARABONBA_PTR_SET_VALUE(netInfoList_, netInfoList) };
    inline GetLindormV2InstanceEngineListResponseBodyEngineList& setNetInfoList(vector<Models::GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList> && netInfoList) { DARABONBA_PTR_SET_RVALUE(netInfoList_, netInfoList) };


  protected:
    std::shared_ptr<string> engineType_ = nullptr;
    std::shared_ptr<vector<Models::GetLindormV2InstanceEngineListResponseBodyEngineListNetInfoList>> netInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
